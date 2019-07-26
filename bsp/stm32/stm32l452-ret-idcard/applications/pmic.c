#include "pmic.h"

#define SY7636_I2C_BUS_NAME          "i2c2"  
#define SY7636_ADDR                  0x62    //0x62 
#define SY7636_OP_MODE				       0x00
#define SY7636_VCOM_ADJUST1			     0x01
#define SY7636_VCOM_ADJUST2			     0x02
#define SY7636_VLDO_ADJUST           0x03

#define SY7636_POWERON_DELAY         0x06
#define SY7636_FAULT_FLAG            0x07
#define SY7636_THERMISTOR            0x08

static struct rt_i2c_bus_device *i2c_bus = RT_NULL;    
static rt_bool_t initialized = RT_FALSE;                

/**
  * @brief  I2C device write command
  * @note   This function should be called after "rt_device_find"
  * @retval rt_err_t status
  */
static rt_err_t write_reg(struct rt_i2c_bus_device *bus, rt_uint8_t reg, rt_uint8_t *data)
{
    rt_uint8_t buf[3];
    struct rt_i2c_msg msgs;

    buf[0] = reg; //cmd
    buf[1] = data[0];
    buf[2] = data[1];

    msgs.addr = SY7636_ADDR;
    msgs.flags = RT_I2C_WR;
    msgs.buf = buf;
    msgs.len = 3;


    if (rt_i2c_transfer(bus, &msgs, 1) == 1)
    {
        return RT_EOK;
    }
    else
    {
        return -RT_ERROR;
    }
}

/**
  * @brief  I2C device read command
  * @note   This function should be called after "rt_device_find"
  * @retval rt_err_t status
  */
static rt_err_t read_regs(struct rt_i2c_bus_device *bus, rt_uint8_t len, rt_uint8_t *buf)
{
    struct rt_i2c_msg msgs;

    msgs.addr = SY7636_ADDR;
    msgs.flags = RT_I2C_RD;
    msgs.buf = buf;
    msgs.len = len;

  
    if (rt_i2c_transfer(bus, &msgs, 1) == 1)
    {
        return RT_EOK;
    }
    else
    {
        return -RT_ERROR;
    }
}

/**
  * @brief  read sy7636 thermistor to adjust TCON command
  * @note   This function should be called after "rt_device_find"
  * @retval thermistor value
  */
static void read_thermistor_val(rt_uint8_t *val)
{
    write_reg(i2c_bus, SY7636_THERMISTOR, 0);    
    rt_thread_mdelay(100);
    read_regs(i2c_bus, 1, val);         	     
}


/**
  * @brief  Init the specific I2c device throught "name"
  * @note   first,init the sy7636 device to make the Voltage On.
  * @retval none
  */
static void sy7636_init(const char *name)
{
  	rt_err_t res = RT_EOK;
    rt_uint8_t temp[2] = {0, 0};
		
    i2c_bus = (struct rt_i2c_bus_device *)rt_device_find(name);

    if (i2c_bus == RT_NULL)
    {
        rt_kprintf("can't find %s device!\n", name);
    }
    else
    {
			  //s1:Operation Mode Control 
				temp[0] = 0xC0;
        write_reg(i2c_bus, SY7636_OP_MODE, temp);
        rt_thread_mdelay(100);
			
			  //s2:VCOM Adjustment Control 1 
				temp[0] = 0x7D;
        write_reg(i2c_bus, SY7636_VCOM_ADJUST1, temp);
        rt_thread_mdelay(100);
			
				//s3:VCOM Adjustment Control 2
				temp[0] = 0x14;
        write_reg(i2c_bus, SY7636_VCOM_ADJUST2, temp);
        rt_thread_mdelay(100);
			
				//s4:VLDO ADJUST
				temp[0] = 0x66;
        write_reg(i2c_bus, SY7636_VLDO_ADJUST, temp);
        rt_thread_mdelay(100);
			
				//s5:SY7636_POWERON_DELAY
				temp[0] = 0xAA;
        write_reg(i2c_bus, SY7636_POWERON_DELAY, temp);
        rt_thread_mdelay(100);
			
				//s6:SY7636_FAULT_FLAG
				temp[0] = 0x0;
        write_reg(i2c_bus, SY7636_FAULT_FLAG, temp);
        rt_thread_mdelay(100);
				
							
				initialized = RT_TRUE;
    }
}


/**
  * @brief  init the sy7636 and read thermistor value every time
  * @note   
  * @retval none
  */
rt_uint8_t pmic_sample(int argc)
{
	  rt_uint8_t temperature[6];
    char name[RT_NAME_MAX];
    rt_strncpy(name, SY7636_I2C_BUS_NAME, RT_NAME_MAX);

    if (!initialized)
    {       
        sy7636_init(name);
    }
    if (initialized)
    {    
        read_thermistor_val(temperature);
        rt_kprintf("read sy7636a sensor temperature: %d \n", (int)temperature);
    }
    else
    {
        rt_kprintf("initialize sensor failed!\n");
    }
		
		return temperature[0];
}