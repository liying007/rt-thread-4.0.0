#include "lvgl/lvgl.h"

#if USE_LV_FONT_SIMFANG != 0	/*Can be enabled in lv_conf.h*/




static const lv_font_glyph_dsc_t glyph_dsc[] = 
{
    {.w_px = 16,	.glyph_index = 0},/*(啊)*/
    {.w_px = 16,	.glyph_index = 168},/*(阿)*/
    {.w_px = 16,	.glyph_index = 336},/*(埃)*/
    {.w_px = 16,	.glyph_index = 504},/*(挨)*/
    {.w_px = 16,	.glyph_index = 672},/*(哎)*/
    {.w_px = 16,	.glyph_index = 840},/*(唉)*/
    {.w_px = 16,	.glyph_index = 1008},/*(哀)*/
    {.w_px = 16,	.glyph_index = 1176},/*(皑)*/
    {.w_px = 16,	.glyph_index = 1344},/*(癌)*/
    {.w_px = 16,	.glyph_index = 1512},/*(蔼)*/
    {.w_px = 16,	.glyph_index = 1680},/*(矮)*/
    {.w_px = 16,	.glyph_index = 1848},/*(艾)*/
    {.w_px = 16,	.glyph_index = 2016},/*(碍)*/
    {.w_px = 16,	.glyph_index = 2184},/*(爱)*/
    {.w_px = 16,	.glyph_index = 2352},/*(隘)*/
    {.w_px = 16,	.glyph_index = 2520},/*(鞍)*/
    {.w_px = 16,	.glyph_index = 2688},/*(氨)*/
    {.w_px = 16,	.glyph_index = 2856},/*(安)*/
    {.w_px = 16,	.glyph_index = 3024},/*(俺)*/
    {.w_px = 16,	.glyph_index = 3192},/*(按)*/
    {.w_px = 16,	.glyph_index = 3360},/*(暗)*/
    {.w_px = 16,	.glyph_index = 3528},/*(岸)*/
    {.w_px = 16,	.glyph_index = 3696},/*(胺)*/
    {.w_px = 16,	.glyph_index = 3864},/*(案)*/
    {.w_px = 16,	.glyph_index = 4032},/*(肮)*/
    {.w_px = 16,	.glyph_index = 4200},/*(昂)*/
    {.w_px = 16,	.glyph_index = 4368},/*(盎)*/
    {.w_px = 16,	.glyph_index = 4536},/*(凹)*/
    {.w_px = 16,	.glyph_index = 4704},/*(敖)*/
    {.w_px = 16,	.glyph_index = 4872},/*(熬)*/
    {.w_px = 16,	.glyph_index = 5040},/*(翱)*/
    {.w_px = 16,	.glyph_index = 5208},/*(袄)*/
    {.w_px = 16,	.glyph_index = 5376},/*(傲)*/
    {.w_px = 16,	.glyph_index = 5544},/*(奥)*/
    {.w_px = 16,	.glyph_index = 5712},/*(懊)*/
    {.w_px = 16,	.glyph_index = 5880},/*(澳)*/
    {.w_px = 16,	.glyph_index = 6048},/*(芭)*/
    {.w_px = 16,	.glyph_index = 6216},/*(捌)*/
    {.w_px = 16,	.glyph_index = 6384},/*(扒)*/
    {.w_px = 16,	.glyph_index = 6552},/*(叭)*/
    {.w_px = 16,	.glyph_index = 6720},/*(吧)*/
    {.w_px = 16,	.glyph_index = 6888},/*(笆)*/
    {.w_px = 16,	.glyph_index = 7056},/*(八)*/
    {.w_px = 16,	.glyph_index = 7224},/*(疤)*/
    {.w_px = 16,	.glyph_index = 7392},/*(巴)*/
    {.w_px = 16,	.glyph_index = 7560},/*(拔)*/
    {.w_px = 16,	.glyph_index = 7728},/*(跋)*/
    {.w_px = 16,	.glyph_index = 7896},/*(靶)*/
    {.w_px = 16,	.glyph_index = 8064},/*(把)*/
    {.w_px = 16,	.glyph_index = 8232},/*(耙)*/
    {.w_px = 16,	.glyph_index = 8400},/*(坝)*/
    {.w_px = 16,	.glyph_index = 8568},/*(霸)*/
    {.w_px = 16,	.glyph_index = 8736},/*(罢)*/
    {.w_px = 16,	.glyph_index = 8904},/*(爸)*/
    {.w_px = 16,	.glyph_index = 9072},/*(白)*/
    {.w_px = 16,	.glyph_index = 9240},/*(柏)*/
    {.w_px = 16,	.glyph_index = 9408},/*(百)*/
    {.w_px = 16,	.glyph_index = 9576},/*(摆)*/
    {.w_px = 16,	.glyph_index = 9744},/*(佰)*/
    {.w_px = 16,	.glyph_index = 9912},/*(败)*/
    {.w_px = 16,	.glyph_index = 10080},/*(拜)*/
    {.w_px = 16,	.glyph_index = 10248},/*(稗)*/
    {.w_px = 16,	.glyph_index = 10416},/*(斑)*/
    {.w_px = 16,	.glyph_index = 10584},/*(班)*/
    {.w_px = 16,	.glyph_index = 10752},/*(搬)*/
    {.w_px = 16,	.glyph_index = 10920},/*(扳)*/
    {.w_px = 16,	.glyph_index = 11088},/*(般)*/
    {.w_px = 16,	.glyph_index = 11256},/*(颁)*/
    {.w_px = 16,	.glyph_index = 11424},/*(板)*/
    {.w_px = 16,	.glyph_index = 11592},/*(版)*/
    {.w_px = 16,	.glyph_index = 11760},/*(扮)*/
    {.w_px = 16,	.glyph_index = 11928},/*(拌)*/
    {.w_px = 16,	.glyph_index = 12096},/*(伴)*/
    {.w_px = 16,	.glyph_index = 12264},/*(瓣)*/
    {.w_px = 16,	.glyph_index = 12432},/*(半)*/
    {.w_px = 16,	.glyph_index = 12600},/*(办)*/
    {.w_px = 16,	.glyph_index = 12768},/*(绊)*/
    {.w_px = 16,	.glyph_index = 12936},/*(邦)*/
    {.w_px = 16,	.glyph_index = 13104},/*(帮)*/
    {.w_px = 16,	.glyph_index = 13272},/*(梆)*/
    {.w_px = 16,	.glyph_index = 13440},/*(榜)*/
    {.w_px = 16,	.glyph_index = 13608},/*(膀)*/
    {.w_px = 16,	.glyph_index = 13776},/*(绑)*/
    {.w_px = 16,	.glyph_index = 13944},/*(棒)*/
    {.w_px = 16,	.glyph_index = 14112},/*(磅)*/
    {.w_px = 16,	.glyph_index = 14280},/*(蚌)*/
    {.w_px = 16,	.glyph_index = 14448},/*(镑)*/
    {.w_px = 16,	.glyph_index = 14616},/*(傍)*/
    {.w_px = 16,	.glyph_index = 14784},/*(谤)*/
    {.w_px = 16,	.glyph_index = 14952},/*(苞)*/
    {.w_px = 16,	.glyph_index = 15120},/*(胞)*/
    {.w_px = 16,	.glyph_index = 15288},/*(包)*/
    {.w_px = 16,	.glyph_index = 15456},/*(褒)*/
    {.w_px = 16,	.glyph_index = 15624},/*(剥)*/
    {.w_px = 16,	.glyph_index = 15792},/*(薄)*/
    {.w_px = 16,	.glyph_index = 15960},/*(雹)*/
    {.w_px = 16,	.glyph_index = 16128},/*(保)*/
    {.w_px = 16,	.glyph_index = 16296},/*(堡)*/
    {.w_px = 16,	.glyph_index = 16464},/*(饱)*/
    {.w_px = 16,	.glyph_index = 16632},/*(宝)*/
    {.w_px = 16,	.glyph_index = 16800},/*(抱)*/
    {.w_px = 16,	.glyph_index = 16968},/*(报)*/
    {.w_px = 16,	.glyph_index = 17136},/*(暴)*/
    {.w_px = 16,	.glyph_index = 17304},/*(豹)*/
    {.w_px = 16,	.glyph_index = 17472},/*(鲍)*/
    {.w_px = 16,	.glyph_index = 17640},/*(爆)*/
    {.w_px = 16,	.glyph_index = 17808},/*(杯)*/
    {.w_px = 16,	.glyph_index = 17976},/*(碑)*/
    {.w_px = 16,	.glyph_index = 18144},/*(悲)*/
    {.w_px = 16,	.glyph_index = 18312},/*(卑)*/
    {.w_px = 16,	.glyph_index = 18480},/*(北)*/
    {.w_px = 16,	.glyph_index = 18648},/*(辈)*/
    {.w_px = 16,	.glyph_index = 18816},/*(背)*/
    {.w_px = 16,	.glyph_index = 18984},/*(贝)*/
    {.w_px = 16,	.glyph_index = 19152},/*(钡)*/
    {.w_px = 16,	.glyph_index = 19320},/*(倍)*/
    {.w_px = 16,	.glyph_index = 19488},/*(狈)*/
    {.w_px = 16,	.glyph_index = 19656},/*(备)*/
    {.w_px = 16,	.glyph_index = 19824},/*(惫)*/
    {.w_px = 16,	.glyph_index = 19992},/*(焙)*/
    {.w_px = 16,	.glyph_index = 20160},/*(被)*/
    {.w_px = 16,	.glyph_index = 20328},/*(奔)*/
    {.w_px = 16,	.glyph_index = 20496},/*(苯)*/
    {.w_px = 16,	.glyph_index = 20664},/*(本)*/
    {.w_px = 16,	.glyph_index = 20832},/*(笨)*/
    {.w_px = 16,	.glyph_index = 21000},/*(崩)*/
    {.w_px = 16,	.glyph_index = 21168},/*(绷)*/
    {.w_px = 16,	.glyph_index = 21336},/*(甭)*/
    {.w_px = 16,	.glyph_index = 21504},/*(泵)*/
    {.w_px = 16,	.glyph_index = 21672},/*(蹦)*/
    {.w_px = 16,	.glyph_index = 21840},/*(迸)*/
    {.w_px = 16,	.glyph_index = 22008},/*(逼)*/
    {.w_px = 16,	.glyph_index = 22176},/*(鼻)*/
    {.w_px = 16,	.glyph_index = 22344},/*(比)*/
    {.w_px = 16,	.glyph_index = 22512},/*(鄙)*/
    {.w_px = 16,	.glyph_index = 22680},/*(笔)*/
    {.w_px = 16,	.glyph_index = 22848},/*(彼)*/
    {.w_px = 16,	.glyph_index = 23016},/*(碧)*/
    {.w_px = 16,	.glyph_index = 23184},/*(蓖)*/
    {.w_px = 16,	.glyph_index = 23352},/*(蔽)*/
    {.w_px = 16,	.glyph_index = 23520},/*(毕)*/
    {.w_px = 16,	.glyph_index = 23688},/*(毙)*/
    {.w_px = 16,	.glyph_index = 23856},/*(毖)*/
    {.w_px = 16,	.glyph_index = 24024},/*(币)*/
    {.w_px = 16,	.glyph_index = 24192},/*(庇)*/
    {.w_px = 16,	.glyph_index = 24360},/*(痹)*/
    {.w_px = 16,	.glyph_index = 24528},/*(闭)*/
    {.w_px = 16,	.glyph_index = 24696},/*(敝)*/
    {.w_px = 16,	.glyph_index = 24864},/*(弊)*/
    {.w_px = 16,	.glyph_index = 25032},/*(必)*/
    {.w_px = 16,	.glyph_index = 25200},/*(辟)*/
    {.w_px = 16,	.glyph_index = 25368},/*(壁)*/
    {.w_px = 16,	.glyph_index = 25536},/*(臂)*/
    {.w_px = 16,	.glyph_index = 25704},/*(避)*/
    {.w_px = 16,	.glyph_index = 25872},/*(陛)*/
    {.w_px = 16,	.glyph_index = 26040},/*(鞭)*/
    {.w_px = 16,	.glyph_index = 26208},/*(边)*/
    {.w_px = 16,	.glyph_index = 26376},/*(编)*/
    {.w_px = 16,	.glyph_index = 26544},/*(贬)*/
    {.w_px = 16,	.glyph_index = 26712},/*(扁)*/
    {.w_px = 16,	.glyph_index = 26880},/*(便)*/
    {.w_px = 16,	.glyph_index = 27048},/*(变)*/
    {.w_px = 16,	.glyph_index = 27216},/*(卞)*/
    {.w_px = 16,	.glyph_index = 27384},/*(辨)*/
    {.w_px = 16,	.glyph_index = 27552},/*(辩)*/
    {.w_px = 16,	.glyph_index = 27720},/*(辫)*/
    {.w_px = 16,	.glyph_index = 27888},/*(遍)*/
    {.w_px = 16,	.glyph_index = 28056},/*(标)*/
    {.w_px = 16,	.glyph_index = 28224},/*(彪)*/
    {.w_px = 16,	.glyph_index = 28392},/*(膘)*/
    {.w_px = 16,	.glyph_index = 28560},/*(表)*/
    {.w_px = 16,	.glyph_index = 28728},/*(鳖)*/
    {.w_px = 16,	.glyph_index = 28896},/*(憋)*/
    {.w_px = 16,	.glyph_index = 29064},/*(别)*/
    {.w_px = 16,	.glyph_index = 29232},/*(瘪)*/
    {.w_px = 16,	.glyph_index = 29400},/*(彬)*/
    {.w_px = 16,	.glyph_index = 29568},/*(斌)*/
    {.w_px = 16,	.glyph_index = 29736},/*(濒)*/
    {.w_px = 16,	.glyph_index = 29904},/*(滨)*/
    {.w_px = 16,	.glyph_index = 30072},/*(宾)*/
    {.w_px = 16,	.glyph_index = 30240},/*(摈)*/
    {.w_px = 16,	.glyph_index = 30408},/*(兵)*/
    {.w_px = 16,	.glyph_index = 30576},/*(冰)*/
    {.w_px = 16,	.glyph_index = 30744},/*(柄)*/
    {.w_px = 16,	.glyph_index = 30912},/*(丙)*/
    {.w_px = 16,	.glyph_index = 31080},/*(秉)*/
    {.w_px = 16,	.glyph_index = 31248},/*(饼)*/
    {.w_px = 16,	.glyph_index = 31416},/*(炳)*/
    {.w_px = 16,	.glyph_index = 31584},/*(病)*/
    {.w_px = 16,	.glyph_index = 31752},/*(并)*/
    {.w_px = 16,	.glyph_index = 31920},/*(玻)*/
    {.w_px = 16,	.glyph_index = 32088},/*(菠)*/
    {.w_px = 16,	.glyph_index = 32256},/*(播)*/
    {.w_px = 16,	.glyph_index = 32424},/*(拨)*/
    {.w_px = 16,	.glyph_index = 32592},/*(钵)*/
    {.w_px = 16,	.glyph_index = 32760},/*(波)*/
    {.w_px = 16,	.glyph_index = 32928},/*(博)*/
    {.w_px = 16,	.glyph_index = 33096},/*(勃)*/
    {.w_px = 16,	.glyph_index = 33264},/*(搏)*/
    {.w_px = 16,	.glyph_index = 33432},/*(铂)*/
    {.w_px = 16,	.glyph_index = 33600},/*(箔)*/
    {.w_px = 16,	.glyph_index = 33768},/*(伯)*/
    {.w_px = 16,	.glyph_index = 33936},/*(帛)*/
    {.w_px = 16,	.glyph_index = 34104},/*(舶)*/
    {.w_px = 16,	.glyph_index = 34272},/*(脖)*/
    {.w_px = 16,	.glyph_index = 34440},/*(膊)*/
    {.w_px = 16,	.glyph_index = 34608},/*(渤)*/
    {.w_px = 16,	.glyph_index = 34776},/*(泊)*/
    {.w_px = 16,	.glyph_index = 34944},/*(驳)*/
    {.w_px = 16,	.glyph_index = 35112},/*(捕)*/
    {.w_px = 16,	.glyph_index = 35280},/*(卜)*/
    {.w_px = 16,	.glyph_index = 35448},/*(哺)*/
    {.w_px = 16,	.glyph_index = 35616},/*(补)*/
    {.w_px = 16,	.glyph_index = 35784},/*(埠)*/
    {.w_px = 16,	.glyph_index = 35952},/*(不)*/
    {.w_px = 16,	.glyph_index = 36120},/*(布)*/
    {.w_px = 16,	.glyph_index = 36288},/*(步)*/
    {.w_px = 16,	.glyph_index = 36456},/*(簿)*/
    {.w_px = 16,	.glyph_index = 36624},/*(部)*/
    {.w_px = 16,	.glyph_index = 36792},/*(怖)*/
    {.w_px = 16,	.glyph_index = 36960},/*(擦)*/
    {.w_px = 16,	.glyph_index = 37128},/*(猜)*/
    {.w_px = 16,	.glyph_index = 37296},/*(裁)*/
    {.w_px = 16,	.glyph_index = 37464},/*(材)*/
    {.w_px = 16,	.glyph_index = 37632},/*(才)*/
    {.w_px = 16,	.glyph_index = 37800},/*(财)*/
    {.w_px = 16,	.glyph_index = 37968},/*(睬)*/
    {.w_px = 16,	.glyph_index = 38136},/*(踩)*/
    {.w_px = 16,	.glyph_index = 38304},/*(采)*/
    {.w_px = 16,	.glyph_index = 38472},/*(彩)*/
    {.w_px = 16,	.glyph_index = 38640},/*(菜)*/
    {.w_px = 16,	.glyph_index = 38808},/*(蔡)*/
    {.w_px = 16,	.glyph_index = 38976},/*(餐)*/
    {.w_px = 16,	.glyph_index = 39144},/*(参)*/
    {.w_px = 16,	.glyph_index = 39312},/*(蚕)*/
    {.w_px = 16,	.glyph_index = 39480},/*(残)*/
    {.w_px = 16,	.glyph_index = 39648},/*(惭)*/
    {.w_px = 16,	.glyph_index = 39816},/*(惨)*/
    {.w_px = 16,	.glyph_index = 39984},/*(灿)*/
    {.w_px = 16,	.glyph_index = 40152},/*(苍)*/
    {.w_px = 16,	.glyph_index = 40320},/*(舱)*/
    {.w_px = 16,	.glyph_index = 40488},/*(仓)*/
    {.w_px = 16,	.glyph_index = 40656},/*(沧)*/
    {.w_px = 16,	.glyph_index = 40824},/*(藏)*/
    {.w_px = 16,	.glyph_index = 40992},/*(操)*/
    {.w_px = 16,	.glyph_index = 41160},/*(糙)*/
    {.w_px = 16,	.glyph_index = 41328},/*(槽)*/
    {.w_px = 16,	.glyph_index = 41496},/*(曹)*/
    {.w_px = 16,	.glyph_index = 41664},/*(草)*/
    {.w_px = 16,	.glyph_index = 41832},/*(厕)*/
    {.w_px = 16,	.glyph_index = 42000},/*(策)*/
    {.w_px = 16,	.glyph_index = 42168},/*(侧)*/
    {.w_px = 16,	.glyph_index = 42336},/*(册)*/
    {.w_px = 16,	.glyph_index = 42504},/*(测)*/
    {.w_px = 16,	.glyph_index = 42672},/*(层)*/
    {.w_px = 16,	.glyph_index = 42840},/*(蹭)*/
    {.w_px = 16,	.glyph_index = 43008},/*(插)*/
    {.w_px = 16,	.glyph_index = 43176},/*(叉)*/
    {.w_px = 16,	.glyph_index = 43344},/*(茬)*/
    {.w_px = 16,	.glyph_index = 43512},/*(茶)*/
    {.w_px = 16,	.glyph_index = 43680},/*(查)*/
    {.w_px = 16,	.glyph_index = 43848},/*(碴)*/
    {.w_px = 16,	.glyph_index = 44016},/*(搽)*/
    {.w_px = 16,	.glyph_index = 44184},/*(察)*/
    {.w_px = 16,	.glyph_index = 44352},/*(岔)*/
    {.w_px = 16,	.glyph_index = 44520},/*(差)*/
    {.w_px = 16,	.glyph_index = 44688},/*(诧)*/
    {.w_px = 16,	.glyph_index = 44856},/*(拆)*/
    {.w_px = 16,	.glyph_index = 45024},/*(柴)*/
    {.w_px = 16,	.glyph_index = 45192},/*(豺)*/
    {.w_px = 16,	.glyph_index = 45360},/*(搀)*/
    {.w_px = 16,	.glyph_index = 45528},/*(掺)*/
    {.w_px = 16,	.glyph_index = 45696},/*(蝉)*/
    {.w_px = 16,	.glyph_index = 45864},/*(馋)*/
    {.w_px = 16,	.glyph_index = 46032},/*(谗)*/
    {.w_px = 16,	.glyph_index = 46200},/*(缠)*/
    {.w_px = 16,	.glyph_index = 46368},/*(铲)*/
    {.w_px = 16,	.glyph_index = 46536},/*(产)*/
    {.w_px = 16,	.glyph_index = 46704},/*(阐)*/
    {.w_px = 16,	.glyph_index = 46872},/*(颤)*/
    {.w_px = 16,	.glyph_index = 47040},/*(昌)*/
    {.w_px = 16,	.glyph_index = 47208},/*(猖)*/
    {.w_px = 16,	.glyph_index = 47376},/*(场)*/
    {.w_px = 16,	.glyph_index = 47544},/*(尝)*/
    {.w_px = 16,	.glyph_index = 47712},/*(常)*/
    {.w_px = 16,	.glyph_index = 47880},/*(长)*/
    {.w_px = 16,	.glyph_index = 48048},/*(偿)*/
    {.w_px = 16,	.glyph_index = 48216},/*(肠)*/
    {.w_px = 16,	.glyph_index = 48384},/*(厂)*/
    {.w_px = 16,	.glyph_index = 48552},/*(敞)*/
    {.w_px = 16,	.glyph_index = 48720},/*(畅)*/
    {.w_px = 16,	.glyph_index = 48888},/*(唱)*/
    {.w_px = 16,	.glyph_index = 49056},/*(倡)*/
    {.w_px = 16,	.glyph_index = 49224},/*(超)*/
    {.w_px = 16,	.glyph_index = 49392},/*(抄)*/
    {.w_px = 16,	.glyph_index = 49560},/*(钞)*/
    {.w_px = 16,	.glyph_index = 49728},/*(朝)*/
    {.w_px = 16,	.glyph_index = 49896},/*(嘲)*/
    {.w_px = 16,	.glyph_index = 50064},/*(潮)*/
    {.w_px = 16,	.glyph_index = 50232},/*(巢)*/
    {.w_px = 16,	.glyph_index = 50400},/*(吵)*/
    {.w_px = 16,	.glyph_index = 50568},/*(炒)*/
    {.w_px = 16,	.glyph_index = 50736},/*(车)*/
    {.w_px = 16,	.glyph_index = 50904},/*(扯)*/
    {.w_px = 16,	.glyph_index = 51072},/*(撤)*/
    {.w_px = 16,	.glyph_index = 51240},/*(掣)*/
    {.w_px = 16,	.glyph_index = 51408},/*(彻)*/
    {.w_px = 16,	.glyph_index = 51576},/*(澈)*/
    {.w_px = 16,	.glyph_index = 51744},/*(郴)*/
    {.w_px = 16,	.glyph_index = 51912},/*(臣)*/
    {.w_px = 16,	.glyph_index = 52080},/*(辰)*/
    {.w_px = 16,	.glyph_index = 52248},/*(尘)*/
    {.w_px = 16,	.glyph_index = 52416},/*(晨)*/
    {.w_px = 16,	.glyph_index = 52584},/*(忱)*/
    {.w_px = 16,	.glyph_index = 52752},/*(沉)*/
    {.w_px = 16,	.glyph_index = 52920},/*(陈)*/
    {.w_px = 16,	.glyph_index = 53088},/*(趁)*/
    {.w_px = 16,	.glyph_index = 53256},/*(衬)*/
    {.w_px = 16,	.glyph_index = 53424},/*(撑)*/
    {.w_px = 16,	.glyph_index = 53592},/*(称)*/
    {.w_px = 16,	.glyph_index = 53760},/*(城)*/
    {.w_px = 16,	.glyph_index = 53928},/*(橙)*/
    {.w_px = 16,	.glyph_index = 54096},/*(成)*/
    {.w_px = 16,	.glyph_index = 54264},/*(呈)*/
    {.w_px = 16,	.glyph_index = 54432},/*(乘)*/
    {.w_px = 16,	.glyph_index = 54600},/*(程)*/
    {.w_px = 16,	.glyph_index = 54768},/*(惩)*/
    {.w_px = 16,	.glyph_index = 54936},/*(澄)*/
    {.w_px = 16,	.glyph_index = 55104},/*(诚)*/
    {.w_px = 16,	.glyph_index = 55272},/*(承)*/
    {.w_px = 16,	.glyph_index = 55440},/*(逞)*/
    {.w_px = 16,	.glyph_index = 55608},/*(骋)*/
    {.w_px = 16,	.glyph_index = 55776},/*(秤)*/
    {.w_px = 16,	.glyph_index = 55944},/*(吃)*/
    {.w_px = 16,	.glyph_index = 56112},/*(痴)*/
    {.w_px = 16,	.glyph_index = 56280},/*(持)*/
    {.w_px = 16,	.glyph_index = 56448},/*(匙)*/
    {.w_px = 16,	.glyph_index = 56616},/*(池)*/
    {.w_px = 16,	.glyph_index = 56784},/*(迟)*/
    {.w_px = 16,	.glyph_index = 56952},/*(弛)*/
    {.w_px = 16,	.glyph_index = 57120},/*(驰)*/
    {.w_px = 16,	.glyph_index = 57288},/*(耻)*/
    {.w_px = 16,	.glyph_index = 57456},/*(齿)*/
    {.w_px = 16,	.glyph_index = 57624},/*(侈)*/
    {.w_px = 16,	.glyph_index = 57792},/*(尺)*/
    {.w_px = 16,	.glyph_index = 57960},/*(赤)*/
    {.w_px = 16,	.glyph_index = 58128},/*(翅)*/
    {.w_px = 16,	.glyph_index = 58296},/*(斥)*/
    {.w_px = 16,	.glyph_index = 58464},/*(炽)*/
    {.w_px = 16,	.glyph_index = 58632},/*(充)*/
    {.w_px = 16,	.glyph_index = 58800},/*(冲)*/
    {.w_px = 16,	.glyph_index = 58968},/*(虫)*/
    {.w_px = 16,	.glyph_index = 59136},/*(崇)*/
    {.w_px = 16,	.glyph_index = 59304},/*(宠)*/
    {.w_px = 16,	.glyph_index = 59472},/*(抽)*/
    {.w_px = 16,	.glyph_index = 59640},/*(酬)*/
    {.w_px = 16,	.glyph_index = 59808},/*(畴)*/
    {.w_px = 16,	.glyph_index = 59976},/*(踌)*/
    {.w_px = 16,	.glyph_index = 60144},/*(稠)*/
    {.w_px = 16,	.glyph_index = 60312},/*(愁)*/
    {.w_px = 16,	.glyph_index = 60480},/*(筹)*/
    {.w_px = 16,	.glyph_index = 60648},/*(仇)*/
    {.w_px = 16,	.glyph_index = 60816},/*(绸)*/
    {.w_px = 16,	.glyph_index = 60984},/*(瞅)*/
    {.w_px = 16,	.glyph_index = 61152},/*(丑)*/
    {.w_px = 16,	.glyph_index = 61320},/*(臭)*/
    {.w_px = 16,	.glyph_index = 61488},/*(初)*/
    {.w_px = 16,	.glyph_index = 61656},/*(出)*/
    {.w_px = 16,	.glyph_index = 61824},/*(橱)*/
    {.w_px = 16,	.glyph_index = 61992},/*(厨)*/
    {.w_px = 16,	.glyph_index = 62160},/*(躇)*/
    {.w_px = 16,	.glyph_index = 62328},/*(锄)*/
    {.w_px = 16,	.glyph_index = 62496},/*(雏)*/
    {.w_px = 16,	.glyph_index = 62664},/*(滁)*/
    {.w_px = 16,	.glyph_index = 62832},/*(除)*/
    {.w_px = 16,	.glyph_index = 63000},/*(楚)*/
    {.w_px = 16,	.glyph_index = 63168},/*(础)*/
    {.w_px = 16,	.glyph_index = 63336},/*(储)*/
    {.w_px = 16,	.glyph_index = 63504},/*(矗)*/
    {.w_px = 16,	.glyph_index = 63672},/*(搐)*/
    {.w_px = 16,	.glyph_index = 63840},/*(触)*/
    {.w_px = 16,	.glyph_index = 64008},/*(处)*/
    {.w_px = 16,	.glyph_index = 64176},/*(揣)*/
    {.w_px = 16,	.glyph_index = 64344},/*(川)*/
    {.w_px = 16,	.glyph_index = 64512},/*(穿)*/
    {.w_px = 16,	.glyph_index = 64680},/*(椽)*/
    {.w_px = 16,	.glyph_index = 64848},/*(传)*/
    {.w_px = 16,	.glyph_index = 65016},/*(船)*/
    {.w_px = 16,	.glyph_index = 65184},/*(喘)*/
    {.w_px = 16,	.glyph_index = 65352},/*(串)*/
    {.w_px = 16,	.glyph_index = 65520},/*(疮)*/
    {.w_px = 16,	.glyph_index = 65688},/*(窗)*/
    {.w_px = 16,	.glyph_index = 65856},/*(幢)*/
    {.w_px = 16,	.glyph_index = 66024},/*(床)*/
    {.w_px = 16,	.glyph_index = 66192},/*(闯)*/
    {.w_px = 16,	.glyph_index = 66360},/*(创)*/
    {.w_px = 16,	.glyph_index = 66528},/*(吹)*/
    {.w_px = 16,	.glyph_index = 66696},/*(炊)*/
    {.w_px = 16,	.glyph_index = 66864},/*(捶)*/
    {.w_px = 16,	.glyph_index = 67032},/*(锤)*/
    {.w_px = 16,	.glyph_index = 67200},/*(垂)*/
    {.w_px = 16,	.glyph_index = 67368},/*(春)*/
    {.w_px = 16,	.glyph_index = 67536},/*(椿)*/
    {.w_px = 16,	.glyph_index = 67704},/*(醇)*/
    {.w_px = 16,	.glyph_index = 67872},/*(唇)*/
    {.w_px = 16,	.glyph_index = 68040},/*(淳)*/
    {.w_px = 16,	.glyph_index = 68208},/*(纯)*/
    {.w_px = 16,	.glyph_index = 68376},/*(蠢)*/
    {.w_px = 16,	.glyph_index = 68544},/*(戳)*/
    {.w_px = 16,	.glyph_index = 68712},/*(绰)*/
    {.w_px = 16,	.glyph_index = 68880},/*(疵)*/
    {.w_px = 16,	.glyph_index = 69048},/*(茨)*/
    {.w_px = 16,	.glyph_index = 69216},/*(磁)*/
    {.w_px = 16,	.glyph_index = 69384},/*(雌)*/
    {.w_px = 16,	.glyph_index = 69552},/*(辞)*/
    {.w_px = 16,	.glyph_index = 69720},/*(慈)*/
    {.w_px = 16,	.glyph_index = 69888},/*(瓷)*/
    {.w_px = 16,	.glyph_index = 70056},/*(词)*/
    {.w_px = 16,	.glyph_index = 70224},/*(此)*/
    {.w_px = 16,	.glyph_index = 70392},/*(刺)*/
    {.w_px = 16,	.glyph_index = 70560},/*(赐)*/
    {.w_px = 16,	.glyph_index = 70728},/*(次)*/
    {.w_px = 16,	.glyph_index = 70896},/*(聪)*/
    {.w_px = 16,	.glyph_index = 71064},/*(葱)*/
    {.w_px = 16,	.glyph_index = 71232},/*(囱)*/
    {.w_px = 16,	.glyph_index = 71400},/*(匆)*/
    {.w_px = 16,	.glyph_index = 71568},/*(从)*/
    {.w_px = 16,	.glyph_index = 71736},/*(丛)*/
    {.w_px = 16,	.glyph_index = 71904},/*(凑)*/
    {.w_px = 16,	.glyph_index = 72072},/*(粗)*/
    {.w_px = 16,	.glyph_index = 72240},/*(醋)*/
    {.w_px = 16,	.glyph_index = 72408},/*(簇)*/
    {.w_px = 16,	.glyph_index = 72576},/*(促)*/
    {.w_px = 16,	.glyph_index = 72744},/*(蹿)*/
    {.w_px = 16,	.glyph_index = 72912},/*(篡)*/
    {.w_px = 16,	.glyph_index = 73080},/*(窜)*/
    {.w_px = 16,	.glyph_index = 73248},/*(摧)*/
    {.w_px = 16,	.glyph_index = 73416},/*(崔)*/
    {.w_px = 16,	.glyph_index = 73584},/*(催)*/
    {.w_px = 16,	.glyph_index = 73752},/*(脆)*/
    {.w_px = 16,	.glyph_index = 73920},/*(瘁)*/
    {.w_px = 16,	.glyph_index = 74088},/*(粹)*/
    {.w_px = 16,	.glyph_index = 74256},/*(淬)*/
    {.w_px = 16,	.glyph_index = 74424},/*(翠)*/
    {.w_px = 16,	.glyph_index = 74592},/*(村)*/
    {.w_px = 16,	.glyph_index = 74760},/*(存)*/
    {.w_px = 16,	.glyph_index = 74928},/*(寸)*/
    {.w_px = 16,	.glyph_index = 75096},/*(磋)*/
    {.w_px = 16,	.glyph_index = 75264},/*(撮)*/
    {.w_px = 16,	.glyph_index = 75432},/*(搓)*/
    {.w_px = 16,	.glyph_index = 75600},/*(措)*/
    {.w_px = 16,	.glyph_index = 75768},/*(挫)*/
    {.w_px = 16,	.glyph_index = 75936},/*(错)*/
    {.w_px = 16,	.glyph_index = 76104},/*(搭)*/
    {.w_px = 16,	.glyph_index = 76272},/*(达)*/
    {.w_px = 16,	.glyph_index = 76440},/*(答)*/
    {.w_px = 16,	.glyph_index = 76608},/*(瘩)*/
    {.w_px = 16,	.glyph_index = 76776},/*(打)*/
    {.w_px = 16,	.glyph_index = 76944},/*(大)*/
    {.w_px = 16,	.glyph_index = 77112},/*(呆)*/
    {.w_px = 16,	.glyph_index = 77280},/*(歹)*/
    {.w_px = 16,	.glyph_index = 77448},/*(傣)*/
    {.w_px = 16,	.glyph_index = 77616},/*(戴)*/
    {.w_px = 16,	.glyph_index = 77784},/*(带)*/
    {.w_px = 16,	.glyph_index = 77952},/*(殆)*/
    {.w_px = 16,	.glyph_index = 78120},/*(代)*/
    {.w_px = 16,	.glyph_index = 78288},/*(贷)*/
    {.w_px = 16,	.glyph_index = 78456},/*(袋)*/
    {.w_px = 16,	.glyph_index = 78624},/*(待)*/
    {.w_px = 16,	.glyph_index = 78792},/*(逮)*/
    {.w_px = 16,	.glyph_index = 78960},/*(怠)*/
    {.w_px = 16,	.glyph_index = 79128},/*(耽)*/
    {.w_px = 16,	.glyph_index = 79296},/*(担)*/
    {.w_px = 16,	.glyph_index = 79464},/*(丹)*/
    {.w_px = 16,	.glyph_index = 79632},/*(单)*/
    {.w_px = 16,	.glyph_index = 79800},/*(郸)*/
    {.w_px = 16,	.glyph_index = 79968},/*(掸)*/
    {.w_px = 16,	.glyph_index = 80136},/*(胆)*/
    {.w_px = 16,	.glyph_index = 80304},/*(旦)*/
    {.w_px = 16,	.glyph_index = 80472},/*(氮)*/
    {.w_px = 16,	.glyph_index = 80640},/*(但)*/
    {.w_px = 16,	.glyph_index = 80808},/*(惮)*/
    {.w_px = 16,	.glyph_index = 80976},/*(淡)*/
    {.w_px = 16,	.glyph_index = 81144},/*(诞)*/
    {.w_px = 16,	.glyph_index = 81312},/*(弹)*/
    {.w_px = 16,	.glyph_index = 81480},/*(蛋)*/
    {.w_px = 16,	.glyph_index = 81648},/*(当)*/
    {.w_px = 16,	.glyph_index = 81816},/*(挡)*/
    {.w_px = 16,	.glyph_index = 81984},/*(党)*/
    {.w_px = 16,	.glyph_index = 82152},/*(荡)*/
    {.w_px = 16,	.glyph_index = 82320},/*(档)*/
    {.w_px = 16,	.glyph_index = 82488},/*(刀)*/
    {.w_px = 16,	.glyph_index = 82656},/*(捣)*/
    {.w_px = 16,	.glyph_index = 82824},/*(蹈)*/
    {.w_px = 16,	.glyph_index = 82992},/*(倒)*/
    {.w_px = 16,	.glyph_index = 83160},/*(岛)*/
    {.w_px = 16,	.glyph_index = 83328},/*(祷)*/
    {.w_px = 16,	.glyph_index = 83496},/*(导)*/
    {.w_px = 16,	.glyph_index = 83664},/*(到)*/
    {.w_px = 16,	.glyph_index = 83832},/*(稻)*/
    {.w_px = 16,	.glyph_index = 84000},/*(悼)*/
    {.w_px = 16,	.glyph_index = 84168},/*(道)*/
    {.w_px = 16,	.glyph_index = 84336},/*(盗)*/
    {.w_px = 16,	.glyph_index = 84504},/*(德)*/
    {.w_px = 16,	.glyph_index = 84672},/*(得)*/
    {.w_px = 16,	.glyph_index = 84840},/*(的)*/
    {.w_px = 16,	.glyph_index = 85008},/*(蹬)*/
    {.w_px = 16,	.glyph_index = 85176},/*(灯)*/
    {.w_px = 16,	.glyph_index = 85344},/*(登)*/
    {.w_px = 16,	.glyph_index = 85512},/*(等)*/
    {.w_px = 16,	.glyph_index = 85680},/*(瞪)*/
    {.w_px = 16,	.glyph_index = 85848},/*(凳)*/
    {.w_px = 16,	.glyph_index = 86016},/*(邓)*/
    {.w_px = 16,	.glyph_index = 86184},/*(堤)*/
    {.w_px = 16,	.glyph_index = 86352},/*(低)*/
    {.w_px = 16,	.glyph_index = 86520},/*(滴)*/
    {.w_px = 16,	.glyph_index = 86688},/*(迪)*/
    {.w_px = 16,	.glyph_index = 86856},/*(敌)*/
    {.w_px = 16,	.glyph_index = 87024},/*(笛)*/
    {.w_px = 16,	.glyph_index = 87192},/*(狄)*/
    {.w_px = 16,	.glyph_index = 87360},/*(涤)*/
    {.w_px = 16,	.glyph_index = 87528},/*(翟)*/
    {.w_px = 16,	.glyph_index = 87696},/*(嫡)*/
    {.w_px = 16,	.glyph_index = 87864},/*(抵)*/
    {.w_px = 16,	.glyph_index = 88032},/*(底)*/
    {.w_px = 16,	.glyph_index = 88200},/*(地)*/
    {.w_px = 16,	.glyph_index = 88368},/*(蒂)*/
    {.w_px = 16,	.glyph_index = 88536},/*(第)*/
    {.w_px = 16,	.glyph_index = 88704},/*(帝)*/
    {.w_px = 16,	.glyph_index = 88872},/*(弟)*/
    {.w_px = 16,	.glyph_index = 89040},/*(递)*/
    {.w_px = 16,	.glyph_index = 89208},/*(缔)*/
    {.w_px = 16,	.glyph_index = 89376},/*(颠)*/
    {.w_px = 16,	.glyph_index = 89544},/*(掂)*/
    {.w_px = 16,	.glyph_index = 89712},/*(滇)*/
    {.w_px = 16,	.glyph_index = 89880},/*(碘)*/
    {.w_px = 16,	.glyph_index = 90048},/*(点)*/
    {.w_px = 16,	.glyph_index = 90216},/*(典)*/
    {.w_px = 16,	.glyph_index = 90384},/*(靛)*/
    {.w_px = 16,	.glyph_index = 90552},/*(垫)*/
    {.w_px = 16,	.glyph_index = 90720},/*(电)*/
    {.w_px = 16,	.glyph_index = 90888},/*(佃)*/
    {.w_px = 16,	.glyph_index = 91056},/*(甸)*/
    {.w_px = 16,	.glyph_index = 91224},/*(店)*/
    {.w_px = 16,	.glyph_index = 91392},/*(惦)*/
    {.w_px = 16,	.glyph_index = 91560},/*(奠)*/
    {.w_px = 16,	.glyph_index = 91728},/*(淀)*/
    {.w_px = 16,	.glyph_index = 91896},/*(殿)*/
    {.w_px = 16,	.glyph_index = 92064},/*(碉)*/
    {.w_px = 16,	.glyph_index = 92232},/*(叼)*/
    {.w_px = 16,	.glyph_index = 92400},/*(雕)*/
    {.w_px = 16,	.glyph_index = 92568},/*(凋)*/
    {.w_px = 16,	.glyph_index = 92736},/*(刁)*/
    {.w_px = 16,	.glyph_index = 92904},/*(掉)*/
    {.w_px = 16,	.glyph_index = 93072},/*(吊)*/
    {.w_px = 16,	.glyph_index = 93240},/*(钓)*/
    {.w_px = 16,	.glyph_index = 93408},/*(调)*/
    {.w_px = 16,	.glyph_index = 93576},/*(跌)*/
    {.w_px = 16,	.glyph_index = 93744},/*(爹)*/
    {.w_px = 16,	.glyph_index = 93912},/*(碟)*/
    {.w_px = 16,	.glyph_index = 94080},/*(蝶)*/
    {.w_px = 16,	.glyph_index = 94248},/*(迭)*/
    {.w_px = 16,	.glyph_index = 94416},/*(谍)*/
    {.w_px = 16,	.glyph_index = 94584},/*(叠)*/
    {.w_px = 16,	.glyph_index = 94752},/*(丁)*/
    {.w_px = 16,	.glyph_index = 94920},/*(盯)*/
    {.w_px = 16,	.glyph_index = 95088},/*(叮)*/
    {.w_px = 16,	.glyph_index = 95256},/*(钉)*/
    {.w_px = 16,	.glyph_index = 95424},/*(顶)*/
    {.w_px = 16,	.glyph_index = 95592},/*(鼎)*/
    {.w_px = 16,	.glyph_index = 95760},/*(锭)*/
    {.w_px = 16,	.glyph_index = 95928},/*(定)*/
    {.w_px = 16,	.glyph_index = 96096},/*(订)*/
    {.w_px = 16,	.glyph_index = 96264},/*(丢)*/
    {.w_px = 16,	.glyph_index = 96432},/*(东)*/
    {.w_px = 16,	.glyph_index = 96600},/*(冬)*/
    {.w_px = 16,	.glyph_index = 96768},/*(董)*/
    {.w_px = 16,	.glyph_index = 96936},/*(懂)*/
    {.w_px = 16,	.glyph_index = 97104},/*(动)*/
    {.w_px = 16,	.glyph_index = 97272},/*(栋)*/
    {.w_px = 16,	.glyph_index = 97440},/*(侗)*/
    {.w_px = 16,	.glyph_index = 97608},/*(恫)*/
    {.w_px = 16,	.glyph_index = 97776},/*(冻)*/
    {.w_px = 16,	.glyph_index = 97944},/*(洞)*/
    {.w_px = 16,	.glyph_index = 98112},/*(兜)*/
    {.w_px = 16,	.glyph_index = 98280},/*(抖)*/
    {.w_px = 16,	.glyph_index = 98448},/*(斗)*/
    {.w_px = 16,	.glyph_index = 98616},/*(陡)*/
    {.w_px = 16,	.glyph_index = 98784},/*(豆)*/
    {.w_px = 16,	.glyph_index = 98952},/*(逗)*/
    {.w_px = 16,	.glyph_index = 99120},/*(痘)*/
    {.w_px = 16,	.glyph_index = 99288},/*(都)*/
    {.w_px = 16,	.glyph_index = 99456},/*(督)*/
    {.w_px = 16,	.glyph_index = 99624},/*(毒)*/
    {.w_px = 16,	.glyph_index = 99792},/*(犊)*/
    {.w_px = 16,	.glyph_index = 99960},/*(独)*/
    {.w_px = 16,	.glyph_index = 100128},/*(读)*/
    {.w_px = 16,	.glyph_index = 100296},/*(堵)*/
    {.w_px = 16,	.glyph_index = 100464},/*(睹)*/
    {.w_px = 16,	.glyph_index = 100632},/*(赌)*/
    {.w_px = 16,	.glyph_index = 100800},/*(杜)*/
    {.w_px = 16,	.glyph_index = 100968},/*(镀)*/
    {.w_px = 16,	.glyph_index = 101136},/*(肚)*/
    {.w_px = 16,	.glyph_index = 101304},/*(度)*/
    {.w_px = 16,	.glyph_index = 101472},/*(渡)*/
    {.w_px = 16,	.glyph_index = 101640},/*(妒)*/
    {.w_px = 16,	.glyph_index = 101808},/*(端)*/
    {.w_px = 16,	.glyph_index = 101976},/*(短)*/
    {.w_px = 16,	.glyph_index = 102144},/*(锻)*/
    {.w_px = 16,	.glyph_index = 102312},/*(段)*/
    {.w_px = 16,	.glyph_index = 102480},/*(断)*/
    {.w_px = 16,	.glyph_index = 102648},/*(缎)*/
    {.w_px = 16,	.glyph_index = 102816},/*(堆)*/
    {.w_px = 16,	.glyph_index = 102984},/*(兑)*/
    {.w_px = 16,	.glyph_index = 103152},/*(队)*/
    {.w_px = 16,	.glyph_index = 103320},/*(对)*/
    {.w_px = 16,	.glyph_index = 103488},/*(墩)*/
    {.w_px = 16,	.glyph_index = 103656},/*(吨)*/
    {.w_px = 16,	.glyph_index = 103824},/*(蹲)*/
    {.w_px = 16,	.glyph_index = 103992},/*(敦)*/
    {.w_px = 16,	.glyph_index = 104160},/*(顿)*/
    {.w_px = 16,	.glyph_index = 104328},/*(囤)*/
    {.w_px = 16,	.glyph_index = 104496},/*(钝)*/
    {.w_px = 16,	.glyph_index = 104664},/*(盾)*/
    {.w_px = 16,	.glyph_index = 104832},/*(遁)*/
    {.w_px = 16,	.glyph_index = 105000},/*(掇)*/
    {.w_px = 16,	.glyph_index = 105168},/*(哆)*/
    {.w_px = 16,	.glyph_index = 105336},/*(多)*/
    {.w_px = 16,	.glyph_index = 105504},/*(夺)*/
    {.w_px = 16,	.glyph_index = 105672},/*(垛)*/
    {.w_px = 16,	.glyph_index = 105840},/*(躲)*/
    {.w_px = 16,	.glyph_index = 106008},/*(朵)*/
    {.w_px = 16,	.glyph_index = 106176},/*(跺)*/
    {.w_px = 16,	.glyph_index = 106344},/*(舵)*/
    {.w_px = 16,	.glyph_index = 106512},/*(剁)*/
    {.w_px = 16,	.glyph_index = 106680},/*(惰)*/
    {.w_px = 16,	.glyph_index = 106848},/*(堕)*/
    {.w_px = 16,	.glyph_index = 107016},/*(蛾)*/
    {.w_px = 16,	.glyph_index = 107184},/*(峨)*/
    {.w_px = 16,	.glyph_index = 107352},/*(鹅)*/
    {.w_px = 16,	.glyph_index = 107520},/*(俄)*/
    {.w_px = 16,	.glyph_index = 107688},/*(额)*/
    {.w_px = 16,	.glyph_index = 107856},/*(讹)*/
    {.w_px = 16,	.glyph_index = 108024},/*(娥)*/
    {.w_px = 16,	.glyph_index = 108192},/*(恶)*/
    {.w_px = 16,	.glyph_index = 108360},/*(厄)*/
    {.w_px = 16,	.glyph_index = 108528},/*(扼)*/
    {.w_px = 16,	.glyph_index = 108696},/*(遏)*/
    {.w_px = 16,	.glyph_index = 108864},/*(鄂)*/
    {.w_px = 16,	.glyph_index = 109032},/*(饿)*/
    {.w_px = 16,	.glyph_index = 109200},/*(恩)*/
    {.w_px = 16,	.glyph_index = 109368},/*(而)*/
    {.w_px = 16,	.glyph_index = 109536},/*(儿)*/
    {.w_px = 16,	.glyph_index = 109704},/*(耳)*/
    {.w_px = 16,	.glyph_index = 109872},/*(尔)*/
    {.w_px = 16,	.glyph_index = 110040},/*(饵)*/
    {.w_px = 16,	.glyph_index = 110208},/*(洱)*/
    {.w_px = 16,	.glyph_index = 110376},/*(二)*/
    {.w_px = 16,	.glyph_index = 110544},/*(贰)*/
    {.w_px = 16,	.glyph_index = 110712},/*(发)*/
    {.w_px = 16,	.glyph_index = 110880},/*(罚)*/
    {.w_px = 16,	.glyph_index = 111048},/*(筏)*/
    {.w_px = 16,	.glyph_index = 111216},/*(伐)*/
    {.w_px = 16,	.glyph_index = 111384},/*(乏)*/
    {.w_px = 16,	.glyph_index = 111552},/*(阀)*/
    {.w_px = 16,	.glyph_index = 111720},/*(法)*/
    {.w_px = 16,	.glyph_index = 111888},/*(珐)*/
    {.w_px = 16,	.glyph_index = 112056},/*(藩)*/
    {.w_px = 16,	.glyph_index = 112224},/*(帆)*/
    {.w_px = 16,	.glyph_index = 112392},/*(番)*/
    {.w_px = 16,	.glyph_index = 112560},/*(翻)*/
    {.w_px = 16,	.glyph_index = 112728},/*(樊)*/
    {.w_px = 16,	.glyph_index = 112896},/*(矾)*/
    {.w_px = 16,	.glyph_index = 113064},/*(钒)*/
    {.w_px = 16,	.glyph_index = 113232},/*(繁)*/
    {.w_px = 16,	.glyph_index = 113400},/*(凡)*/
    {.w_px = 16,	.glyph_index = 113568},/*(烦)*/
    {.w_px = 16,	.glyph_index = 113736},/*(反)*/
    {.w_px = 16,	.glyph_index = 113904},/*(返)*/
    {.w_px = 16,	.glyph_index = 114072},/*(范)*/
    {.w_px = 16,	.glyph_index = 114240},/*(贩)*/
    {.w_px = 16,	.glyph_index = 114408},/*(犯)*/
    {.w_px = 16,	.glyph_index = 114576},/*(饭)*/
    {.w_px = 16,	.glyph_index = 114744},/*(泛)*/
    {.w_px = 16,	.glyph_index = 114912},/*(坊)*/
    {.w_px = 16,	.glyph_index = 115080},/*(芳)*/
    {.w_px = 16,	.glyph_index = 115248},/*(方)*/
    {.w_px = 16,	.glyph_index = 115416},/*(肪)*/
    {.w_px = 16,	.glyph_index = 115584},/*(房)*/
    {.w_px = 16,	.glyph_index = 115752},/*(防)*/
    {.w_px = 16,	.glyph_index = 115920},/*(妨)*/
    {.w_px = 16,	.glyph_index = 116088},/*(仿)*/
    {.w_px = 16,	.glyph_index = 116256},/*(访)*/
    {.w_px = 16,	.glyph_index = 116424},/*(纺)*/
    {.w_px = 16,	.glyph_index = 116592},/*(放)*/
    {.w_px = 16,	.glyph_index = 116760},/*(菲)*/
    {.w_px = 16,	.glyph_index = 116928},/*(非)*/
    {.w_px = 16,	.glyph_index = 117096},/*(啡)*/
    {.w_px = 16,	.glyph_index = 117264},/*(飞)*/
    {.w_px = 16,	.glyph_index = 117432},/*(肥)*/
    {.w_px = 16,	.glyph_index = 117600},/*(匪)*/
    {.w_px = 16,	.glyph_index = 117768},/*(诽)*/
    {.w_px = 16,	.glyph_index = 117936},/*(吠)*/
    {.w_px = 16,	.glyph_index = 118104},/*(肺)*/
    {.w_px = 16,	.glyph_index = 118272},/*(废)*/
    {.w_px = 16,	.glyph_index = 118440},/*(沸)*/
    {.w_px = 16,	.glyph_index = 118608},/*(费)*/
    {.w_px = 16,	.glyph_index = 118776},/*(芬)*/
    {.w_px = 16,	.glyph_index = 118944},/*(酚)*/
    {.w_px = 16,	.glyph_index = 119112},/*(吩)*/
    {.w_px = 16,	.glyph_index = 119280},/*(氛)*/
    {.w_px = 16,	.glyph_index = 119448},/*(分)*/
    {.w_px = 16,	.glyph_index = 119616},/*(纷)*/
    {.w_px = 16,	.glyph_index = 119784},/*(坟)*/
    {.w_px = 16,	.glyph_index = 119952},/*(焚)*/
    {.w_px = 16,	.glyph_index = 120120},/*(汾)*/
    {.w_px = 16,	.glyph_index = 120288},/*(粉)*/
    {.w_px = 16,	.glyph_index = 120456},/*(奋)*/
    {.w_px = 16,	.glyph_index = 120624},/*(份)*/
    {.w_px = 16,	.glyph_index = 120792},/*(忿)*/
    {.w_px = 16,	.glyph_index = 120960},/*(愤)*/
    {.w_px = 16,	.glyph_index = 121128},/*(粪)*/
    {.w_px = 16,	.glyph_index = 121296},/*(丰)*/
    {.w_px = 16,	.glyph_index = 121464},/*(封)*/
    {.w_px = 16,	.glyph_index = 121632},/*(枫)*/
    {.w_px = 16,	.glyph_index = 121800},/*(蜂)*/
    {.w_px = 16,	.glyph_index = 121968},/*(峰)*/
    {.w_px = 16,	.glyph_index = 122136},/*(锋)*/
    {.w_px = 16,	.glyph_index = 122304},/*(风)*/
    {.w_px = 16,	.glyph_index = 122472},/*(疯)*/
    {.w_px = 16,	.glyph_index = 122640},/*(烽)*/
    {.w_px = 16,	.glyph_index = 122808},/*(逢)*/
    {.w_px = 16,	.glyph_index = 122976},/*(冯)*/
    {.w_px = 16,	.glyph_index = 123144},/*(缝)*/
    {.w_px = 16,	.glyph_index = 123312},/*(讽)*/
    {.w_px = 16,	.glyph_index = 123480},/*(奉)*/
    {.w_px = 16,	.glyph_index = 123648},/*(凤)*/
    {.w_px = 16,	.glyph_index = 123816},/*(佛)*/
    {.w_px = 16,	.glyph_index = 123984},/*(否)*/
    {.w_px = 16,	.glyph_index = 124152},/*(夫)*/
    {.w_px = 16,	.glyph_index = 124320},/*(敷)*/
    {.w_px = 16,	.glyph_index = 124488},/*(肤)*/
    {.w_px = 16,	.glyph_index = 124656},/*(孵)*/
    {.w_px = 16,	.glyph_index = 124824},/*(扶)*/
    {.w_px = 16,	.glyph_index = 124992},/*(拂)*/
    {.w_px = 16,	.glyph_index = 125160},/*(辐)*/
    {.w_px = 16,	.glyph_index = 125328},/*(幅)*/
    {.w_px = 16,	.glyph_index = 125496},/*(氟)*/
    {.w_px = 16,	.glyph_index = 125664},/*(符)*/
    {.w_px = 16,	.glyph_index = 125832},/*(伏)*/
    {.w_px = 16,	.glyph_index = 126000},/*(俘)*/
    {.w_px = 16,	.glyph_index = 126168},/*(服)*/
    {.w_px = 16,	.glyph_index = 126336},/*(浮)*/
    {.w_px = 16,	.glyph_index = 126504},/*(涪)*/
    {.w_px = 16,	.glyph_index = 126672},/*(福)*/
    {.w_px = 16,	.glyph_index = 126840},/*(袱)*/
    {.w_px = 16,	.glyph_index = 127008},/*(弗)*/
    {.w_px = 16,	.glyph_index = 127176},/*(甫)*/
    {.w_px = 16,	.glyph_index = 127344},/*(抚)*/
    {.w_px = 16,	.glyph_index = 127512},/*(辅)*/
    {.w_px = 16,	.glyph_index = 127680},/*(俯)*/
    {.w_px = 16,	.glyph_index = 127848},/*(釜)*/
    {.w_px = 16,	.glyph_index = 128016},/*(斧)*/
    {.w_px = 16,	.glyph_index = 128184},/*(脯)*/
    {.w_px = 16,	.glyph_index = 128352},/*(腑)*/
    {.w_px = 16,	.glyph_index = 128520},/*(府)*/
    {.w_px = 16,	.glyph_index = 128688},/*(腐)*/
    {.w_px = 16,	.glyph_index = 128856},/*(赴)*/
    {.w_px = 16,	.glyph_index = 129024},/*(副)*/
    {.w_px = 16,	.glyph_index = 129192},/*(覆)*/
    {.w_px = 16,	.glyph_index = 129360},/*(赋)*/
    {.w_px = 16,	.glyph_index = 129528},/*(复)*/
    {.w_px = 16,	.glyph_index = 129696},/*(傅)*/
    {.w_px = 16,	.glyph_index = 129864},/*(付)*/
    {.w_px = 16,	.glyph_index = 130032},/*(阜)*/
    {.w_px = 16,	.glyph_index = 130200},/*(父)*/
    {.w_px = 16,	.glyph_index = 130368},/*(腹)*/
    {.w_px = 16,	.glyph_index = 130536},/*(负)*/
    {.w_px = 16,	.glyph_index = 130704},/*(富)*/
    {.w_px = 16,	.glyph_index = 130872},/*(讣)*/
    {.w_px = 16,	.glyph_index = 131040},/*(附)*/
    {.w_px = 16,	.glyph_index = 131208},/*(妇)*/
    {.w_px = 16,	.glyph_index = 131376},/*(缚)*/
    {.w_px = 16,	.glyph_index = 131544},/*(咐)*/
    {.w_px = 16,	.glyph_index = 131712},/*(噶)*/
    {.w_px = 16,	.glyph_index = 131880},/*(嘎)*/
    {.w_px = 16,	.glyph_index = 132048},/*(该)*/
    {.w_px = 16,	.glyph_index = 132216},/*(改)*/
    {.w_px = 16,	.glyph_index = 132384},/*(概)*/
    {.w_px = 16,	.glyph_index = 132552},/*(钙)*/
    {.w_px = 16,	.glyph_index = 132720},/*(盖)*/
    {.w_px = 16,	.glyph_index = 132888},/*(溉)*/
    {.w_px = 16,	.glyph_index = 133056},/*(干)*/
    {.w_px = 16,	.glyph_index = 133224},/*(甘)*/
    {.w_px = 16,	.glyph_index = 133392},/*(杆)*/
    {.w_px = 16,	.glyph_index = 133560},/*(柑)*/
    {.w_px = 16,	.glyph_index = 133728},/*(竿)*/
    {.w_px = 16,	.glyph_index = 133896},/*(肝)*/
    {.w_px = 16,	.glyph_index = 134064},/*(赶)*/
    {.w_px = 16,	.glyph_index = 134232},/*(感)*/
    {.w_px = 16,	.glyph_index = 134400},/*(秆)*/
    {.w_px = 16,	.glyph_index = 134568},/*(敢)*/
    {.w_px = 16,	.glyph_index = 134736},/*(赣)*/
    {.w_px = 16,	.glyph_index = 134904},/*(冈)*/
    {.w_px = 16,	.glyph_index = 135072},/*(刚)*/
    {.w_px = 16,	.glyph_index = 135240},/*(钢)*/
    {.w_px = 16,	.glyph_index = 135408},/*(缸)*/
    {.w_px = 16,	.glyph_index = 135576},/*(肛)*/
    {.w_px = 16,	.glyph_index = 135744},/*(纲)*/
    {.w_px = 16,	.glyph_index = 135912},/*(岗)*/
    {.w_px = 16,	.glyph_index = 136080},/*(港)*/
    {.w_px = 16,	.glyph_index = 136248},/*(杠)*/
    {.w_px = 16,	.glyph_index = 136416},/*(篙)*/
    {.w_px = 16,	.glyph_index = 136584},/*(皋)*/
    {.w_px = 16,	.glyph_index = 136752},/*(高)*/
    {.w_px = 16,	.glyph_index = 136920},/*(膏)*/
    {.w_px = 16,	.glyph_index = 137088},/*(羔)*/
    {.w_px = 16,	.glyph_index = 137256},/*(糕)*/
    {.w_px = 16,	.glyph_index = 137424},/*(搞)*/
    {.w_px = 16,	.glyph_index = 137592},/*(镐)*/
    {.w_px = 16,	.glyph_index = 137760},/*(稿)*/
    {.w_px = 16,	.glyph_index = 137928},/*(告)*/
    {.w_px = 16,	.glyph_index = 138096},/*(哥)*/
    {.w_px = 16,	.glyph_index = 138264},/*(歌)*/
    {.w_px = 16,	.glyph_index = 138432},/*(搁)*/
    {.w_px = 16,	.glyph_index = 138600},/*(戈)*/
    {.w_px = 16,	.glyph_index = 138768},/*(鸽)*/
    {.w_px = 16,	.glyph_index = 138936},/*(胳)*/
    {.w_px = 16,	.glyph_index = 139104},/*(疙)*/
    {.w_px = 16,	.glyph_index = 139272},/*(割)*/
    {.w_px = 16,	.glyph_index = 139440},/*(革)*/
    {.w_px = 16,	.glyph_index = 139608},/*(葛)*/
    {.w_px = 16,	.glyph_index = 139776},/*(格)*/
    {.w_px = 16,	.glyph_index = 139944},/*(蛤)*/
    {.w_px = 16,	.glyph_index = 140112},/*(阁)*/
    {.w_px = 16,	.glyph_index = 140280},/*(隔)*/
    {.w_px = 16,	.glyph_index = 140448},/*(铬)*/
    {.w_px = 16,	.glyph_index = 140616},/*(个)*/
    {.w_px = 16,	.glyph_index = 140784},/*(各)*/
    {.w_px = 16,	.glyph_index = 140952},/*(给)*/
    {.w_px = 16,	.glyph_index = 141120},/*(根)*/
    {.w_px = 16,	.glyph_index = 141288},/*(跟)*/
    {.w_px = 16,	.glyph_index = 141456},/*(耕)*/
    {.w_px = 16,	.glyph_index = 141624},/*(更)*/
    {.w_px = 16,	.glyph_index = 141792},/*(庚)*/
    {.w_px = 16,	.glyph_index = 141960},/*(羹)*/
    {.w_px = 16,	.glyph_index = 142128},/*(埂)*/
    {.w_px = 16,	.glyph_index = 142296},/*(耿)*/
    {.w_px = 16,	.glyph_index = 142464},/*(梗)*/
    {.w_px = 16,	.glyph_index = 142632},/*(工)*/
    {.w_px = 16,	.glyph_index = 142800},/*(攻)*/
    {.w_px = 16,	.glyph_index = 142968},/*(功)*/
    {.w_px = 16,	.glyph_index = 143136},/*(恭)*/
    {.w_px = 16,	.glyph_index = 143304},/*(龚)*/
    {.w_px = 16,	.glyph_index = 143472},/*(供)*/
    {.w_px = 16,	.glyph_index = 143640},/*(躬)*/
    {.w_px = 16,	.glyph_index = 143808},/*(公)*/
    {.w_px = 16,	.glyph_index = 143976},/*(宫)*/
    {.w_px = 16,	.glyph_index = 144144},/*(弓)*/
    {.w_px = 16,	.glyph_index = 144312},/*(巩)*/
    {.w_px = 16,	.glyph_index = 144480},/*(汞)*/
    {.w_px = 16,	.glyph_index = 144648},/*(拱)*/
    {.w_px = 16,	.glyph_index = 144816},/*(贡)*/
    {.w_px = 16,	.glyph_index = 144984},/*(共)*/
    {.w_px = 16,	.glyph_index = 145152},/*(钩)*/
    {.w_px = 16,	.glyph_index = 145320},/*(勾)*/
    {.w_px = 16,	.glyph_index = 145488},/*(沟)*/
    {.w_px = 16,	.glyph_index = 145656},/*(苟)*/
    {.w_px = 16,	.glyph_index = 145824},/*(狗)*/
    {.w_px = 16,	.glyph_index = 145992},/*(垢)*/
    {.w_px = 16,	.glyph_index = 146160},/*(构)*/
    {.w_px = 16,	.glyph_index = 146328},/*(购)*/
    {.w_px = 16,	.glyph_index = 146496},/*(够)*/
    {.w_px = 16,	.glyph_index = 146664},/*(辜)*/
    {.w_px = 16,	.glyph_index = 146832},/*(菇)*/
    {.w_px = 16,	.glyph_index = 147000},/*(咕)*/
    {.w_px = 16,	.glyph_index = 147168},/*(箍)*/
    {.w_px = 16,	.glyph_index = 147336},/*(估)*/
    {.w_px = 16,	.glyph_index = 147504},/*(沽)*/
    {.w_px = 16,	.glyph_index = 147672},/*(孤)*/
    {.w_px = 16,	.glyph_index = 147840},/*(姑)*/
    {.w_px = 16,	.glyph_index = 148008},/*(鼓)*/
    {.w_px = 16,	.glyph_index = 148176},/*(古)*/
    {.w_px = 16,	.glyph_index = 148344},/*(蛊)*/
    {.w_px = 16,	.glyph_index = 148512},/*(骨)*/
    {.w_px = 16,	.glyph_index = 148680},/*(谷)*/
    {.w_px = 16,	.glyph_index = 148848},/*(股)*/
    {.w_px = 16,	.glyph_index = 149016},/*(故)*/
    {.w_px = 16,	.glyph_index = 149184},/*(顾)*/
    {.w_px = 16,	.glyph_index = 149352},/*(固)*/
    {.w_px = 16,	.glyph_index = 149520},/*(雇)*/
    {.w_px = 16,	.glyph_index = 149688},/*(刮)*/
    {.w_px = 16,	.glyph_index = 149856},/*(瓜)*/
    {.w_px = 16,	.glyph_index = 150024},/*(剐)*/
    {.w_px = 16,	.glyph_index = 150192},/*(寡)*/
    {.w_px = 16,	.glyph_index = 150360},/*(挂)*/
    {.w_px = 16,	.glyph_index = 150528},/*(褂)*/
    {.w_px = 16,	.glyph_index = 150696},/*(乖)*/
    {.w_px = 16,	.glyph_index = 150864},/*(拐)*/
    {.w_px = 16,	.glyph_index = 151032},/*(怪)*/
    {.w_px = 16,	.glyph_index = 151200},/*(棺)*/
    {.w_px = 16,	.glyph_index = 151368},/*(关)*/
    {.w_px = 16,	.glyph_index = 151536},/*(官)*/
    {.w_px = 16,	.glyph_index = 151704},/*(冠)*/
    {.w_px = 16,	.glyph_index = 151872},/*(观)*/
    {.w_px = 16,	.glyph_index = 152040},/*(管)*/
    {.w_px = 16,	.glyph_index = 152208},/*(馆)*/
    {.w_px = 16,	.glyph_index = 152376},/*(罐)*/
    {.w_px = 16,	.glyph_index = 152544},/*(惯)*/
    {.w_px = 16,	.glyph_index = 152712},/*(灌)*/
    {.w_px = 16,	.glyph_index = 152880},/*(贯)*/
    {.w_px = 16,	.glyph_index = 153048},/*(光)*/
    {.w_px = 16,	.glyph_index = 153216},/*(广)*/
    {.w_px = 16,	.glyph_index = 153384},/*(逛)*/
    {.w_px = 16,	.glyph_index = 153552},/*(瑰)*/
    {.w_px = 16,	.glyph_index = 153720},/*(规)*/
    {.w_px = 16,	.glyph_index = 153888},/*(圭)*/
    {.w_px = 16,	.glyph_index = 154056},/*(硅)*/
    {.w_px = 16,	.glyph_index = 154224},/*(归)*/
    {.w_px = 16,	.glyph_index = 154392},/*(龟)*/
    {.w_px = 16,	.glyph_index = 154560},/*(闺)*/
    {.w_px = 16,	.glyph_index = 154728},/*(轨)*/
    {.w_px = 16,	.glyph_index = 154896},/*(鬼)*/
    {.w_px = 16,	.glyph_index = 155064},/*(诡)*/
    {.w_px = 16,	.glyph_index = 155232},/*(癸)*/
    {.w_px = 16,	.glyph_index = 155400},/*(桂)*/
    {.w_px = 16,	.glyph_index = 155568},/*(柜)*/
    {.w_px = 16,	.glyph_index = 155736},/*(跪)*/
    {.w_px = 16,	.glyph_index = 155904},/*(贵)*/
    {.w_px = 16,	.glyph_index = 156072},/*(刽)*/
    {.w_px = 16,	.glyph_index = 156240},/*(辊)*/
    {.w_px = 16,	.glyph_index = 156408},/*(滚)*/
    {.w_px = 16,	.glyph_index = 156576},/*(棍)*/
    {.w_px = 16,	.glyph_index = 156744},/*(锅)*/
    {.w_px = 16,	.glyph_index = 156912},/*(郭)*/
    {.w_px = 16,	.glyph_index = 157080},/*(国)*/
    {.w_px = 16,	.glyph_index = 157248},/*(果)*/
    {.w_px = 16,	.glyph_index = 157416},/*(裹)*/
    {.w_px = 16,	.glyph_index = 157584},/*(过)*/
    {.w_px = 16,	.glyph_index = 157752},/*(哈)*/
    {.w_px = 16,	.glyph_index = 157920},/*(骸)*/
    {.w_px = 16,	.glyph_index = 158088},/*(孩)*/
    {.w_px = 16,	.glyph_index = 158256},/*(海)*/
    {.w_px = 16,	.glyph_index = 158424},/*(氦)*/
    {.w_px = 16,	.glyph_index = 158592},/*(亥)*/
    {.w_px = 16,	.glyph_index = 158760},/*(害)*/
    {.w_px = 16,	.glyph_index = 158928},/*(骇)*/
    {.w_px = 16,	.glyph_index = 159096},/*(酣)*/
    {.w_px = 16,	.glyph_index = 159264},/*(憨)*/
    {.w_px = 16,	.glyph_index = 159432},/*(邯)*/
    {.w_px = 16,	.glyph_index = 159600},/*(韩)*/
    {.w_px = 16,	.glyph_index = 159768},/*(含)*/
    {.w_px = 16,	.glyph_index = 159936},/*(涵)*/
    {.w_px = 16,	.glyph_index = 160104},/*(寒)*/
    {.w_px = 16,	.glyph_index = 160272},/*(函)*/
    {.w_px = 16,	.glyph_index = 160440},/*(喊)*/
    {.w_px = 16,	.glyph_index = 160608},/*(罕)*/
    {.w_px = 16,	.glyph_index = 160776},/*(翰)*/
    {.w_px = 16,	.glyph_index = 160944},/*(撼)*/
    {.w_px = 16,	.glyph_index = 161112},/*(捍)*/
    {.w_px = 16,	.glyph_index = 161280},/*(旱)*/
    {.w_px = 16,	.glyph_index = 161448},/*(憾)*/
    {.w_px = 16,	.glyph_index = 161616},/*(悍)*/
    {.w_px = 16,	.glyph_index = 161784},/*(焊)*/
    {.w_px = 16,	.glyph_index = 161952},/*(汗)*/
    {.w_px = 16,	.glyph_index = 162120},/*(汉)*/
    {.w_px = 16,	.glyph_index = 162288},/*(夯)*/
    {.w_px = 16,	.glyph_index = 162456},/*(杭)*/
    {.w_px = 16,	.glyph_index = 162624},/*(航)*/
    {.w_px = 16,	.glyph_index = 162792},/*(壕)*/
    {.w_px = 16,	.glyph_index = 162960},/*(嚎)*/
    {.w_px = 16,	.glyph_index = 163128},/*(豪)*/
    {.w_px = 16,	.glyph_index = 163296},/*(毫)*/
    {.w_px = 16,	.glyph_index = 163464},/*(郝)*/
    {.w_px = 16,	.glyph_index = 163632},/*(好)*/
    {.w_px = 16,	.glyph_index = 163800},/*(耗)*/
    {.w_px = 16,	.glyph_index = 163968},/*(号)*/
    {.w_px = 16,	.glyph_index = 164136},/*(浩)*/
    {.w_px = 16,	.glyph_index = 164304},/*(呵)*/
    {.w_px = 16,	.glyph_index = 164472},/*(喝)*/
    {.w_px = 16,	.glyph_index = 164640},/*(荷)*/
    {.w_px = 16,	.glyph_index = 164808},/*(菏)*/
    {.w_px = 16,	.glyph_index = 164976},/*(核)*/
    {.w_px = 16,	.glyph_index = 165144},/*(禾)*/
    {.w_px = 16,	.glyph_index = 165312},/*(和)*/
    {.w_px = 16,	.glyph_index = 165480},/*(何)*/
    {.w_px = 16,	.glyph_index = 165648},/*(合)*/
    {.w_px = 16,	.glyph_index = 165816},/*(盒)*/
    {.w_px = 16,	.glyph_index = 165984},/*(貉)*/
    {.w_px = 16,	.glyph_index = 166152},/*(阂)*/
    {.w_px = 16,	.glyph_index = 166320},/*(河)*/
    {.w_px = 16,	.glyph_index = 166488},/*(涸)*/
    {.w_px = 16,	.glyph_index = 166656},/*(赫)*/
    {.w_px = 16,	.glyph_index = 166824},/*(褐)*/
    {.w_px = 16,	.glyph_index = 166992},/*(鹤)*/
    {.w_px = 16,	.glyph_index = 167160},/*(贺)*/
    {.w_px = 16,	.glyph_index = 167328},/*(嘿)*/
    {.w_px = 16,	.glyph_index = 167496},/*(黑)*/
    {.w_px = 16,	.glyph_index = 167664},/*(痕)*/
    {.w_px = 16,	.glyph_index = 167832},/*(很)*/
    {.w_px = 16,	.glyph_index = 168000},/*(狠)*/
    {.w_px = 16,	.glyph_index = 168168},/*(恨)*/
    {.w_px = 16,	.glyph_index = 168336},/*(哼)*/
    {.w_px = 16,	.glyph_index = 168504},/*(亨)*/
    {.w_px = 16,	.glyph_index = 168672},/*(横)*/
    {.w_px = 16,	.glyph_index = 168840},/*(衡)*/
    {.w_px = 16,	.glyph_index = 169008},/*(恒)*/
    {.w_px = 16,	.glyph_index = 169176},/*(轰)*/
    {.w_px = 16,	.glyph_index = 169344},/*(哄)*/
    {.w_px = 16,	.glyph_index = 169512},/*(烘)*/
    {.w_px = 16,	.glyph_index = 169680},/*(虹)*/
    {.w_px = 16,	.glyph_index = 169848},/*(鸿)*/
    {.w_px = 16,	.glyph_index = 170016},/*(洪)*/
    {.w_px = 16,	.glyph_index = 170184},/*(宏)*/
    {.w_px = 16,	.glyph_index = 170352},/*(弘)*/
    {.w_px = 16,	.glyph_index = 170520},/*(红)*/
    {.w_px = 16,	.glyph_index = 170688},/*(喉)*/
    {.w_px = 16,	.glyph_index = 170856},/*(侯)*/
    {.w_px = 16,	.glyph_index = 171024},/*(猴)*/
    {.w_px = 16,	.glyph_index = 171192},/*(吼)*/
    {.w_px = 16,	.glyph_index = 171360},/*(厚)*/
    {.w_px = 16,	.glyph_index = 171528},/*(候)*/
    {.w_px = 16,	.glyph_index = 171696},/*(后)*/
    {.w_px = 16,	.glyph_index = 171864},/*(呼)*/
    {.w_px = 16,	.glyph_index = 172032},/*(乎)*/
    {.w_px = 16,	.glyph_index = 172200},/*(忽)*/
    {.w_px = 16,	.glyph_index = 172368},/*(瑚)*/
    {.w_px = 16,	.glyph_index = 172536},/*(壶)*/
    {.w_px = 16,	.glyph_index = 172704},/*(葫)*/
    {.w_px = 16,	.glyph_index = 172872},/*(胡)*/
    {.w_px = 16,	.glyph_index = 173040},/*(蝴)*/
    {.w_px = 16,	.glyph_index = 173208},/*(狐)*/
    {.w_px = 16,	.glyph_index = 173376},/*(糊)*/
    {.w_px = 16,	.glyph_index = 173544},/*(湖)*/
    {.w_px = 16,	.glyph_index = 173712},/*(弧)*/
    {.w_px = 16,	.glyph_index = 173880},/*(虎)*/
    {.w_px = 16,	.glyph_index = 174048},/*(唬)*/
    {.w_px = 16,	.glyph_index = 174216},/*(护)*/
    {.w_px = 16,	.glyph_index = 174384},/*(互)*/
    {.w_px = 16,	.glyph_index = 174552},/*(沪)*/
    {.w_px = 16,	.glyph_index = 174720},/*(户)*/
    {.w_px = 16,	.glyph_index = 174888},/*(花)*/
    {.w_px = 16,	.glyph_index = 175056},/*(哗)*/
    {.w_px = 16,	.glyph_index = 175224},/*(华)*/
    {.w_px = 16,	.glyph_index = 175392},/*(猾)*/
    {.w_px = 16,	.glyph_index = 175560},/*(滑)*/
    {.w_px = 16,	.glyph_index = 175728},/*(画)*/
    {.w_px = 16,	.glyph_index = 175896},/*(划)*/
    {.w_px = 16,	.glyph_index = 176064},/*(化)*/
    {.w_px = 16,	.glyph_index = 176232},/*(话)*/
    {.w_px = 16,	.glyph_index = 176400},/*(槐)*/
    {.w_px = 16,	.glyph_index = 176568},/*(徊)*/
    {.w_px = 16,	.glyph_index = 176736},/*(怀)*/
    {.w_px = 16,	.glyph_index = 176904},/*(淮)*/
    {.w_px = 16,	.glyph_index = 177072},/*(坏)*/
    {.w_px = 16,	.glyph_index = 177240},/*(欢)*/
    {.w_px = 16,	.glyph_index = 177408},/*(环)*/
    {.w_px = 16,	.glyph_index = 177576},/*(桓)*/
    {.w_px = 16,	.glyph_index = 177744},/*(还)*/
    {.w_px = 16,	.glyph_index = 177912},/*(缓)*/
    {.w_px = 16,	.glyph_index = 178080},/*(换)*/
    {.w_px = 16,	.glyph_index = 178248},/*(患)*/
    {.w_px = 16,	.glyph_index = 178416},/*(唤)*/
    {.w_px = 16,	.glyph_index = 178584},/*(痪)*/
    {.w_px = 16,	.glyph_index = 178752},/*(豢)*/
    {.w_px = 16,	.glyph_index = 178920},/*(焕)*/
    {.w_px = 16,	.glyph_index = 179088},/*(涣)*/
    {.w_px = 16,	.glyph_index = 179256},/*(宦)*/
    {.w_px = 16,	.glyph_index = 179424},/*(幻)*/
    {.w_px = 16,	.glyph_index = 179592},/*(荒)*/
    {.w_px = 16,	.glyph_index = 179760},/*(慌)*/
    {.w_px = 16,	.glyph_index = 179928},/*(黄)*/
    {.w_px = 16,	.glyph_index = 180096},/*(磺)*/
    {.w_px = 16,	.glyph_index = 180264},/*(蝗)*/
    {.w_px = 16,	.glyph_index = 180432},/*(簧)*/
    {.w_px = 16,	.glyph_index = 180600},/*(皇)*/
    {.w_px = 16,	.glyph_index = 180768},/*(凰)*/
    {.w_px = 16,	.glyph_index = 180936},/*(惶)*/
    {.w_px = 16,	.glyph_index = 181104},/*(煌)*/
    {.w_px = 16,	.glyph_index = 181272},/*(晃)*/
    {.w_px = 16,	.glyph_index = 181440},/*(幌)*/
    {.w_px = 16,	.glyph_index = 181608},/*(恍)*/
    {.w_px = 16,	.glyph_index = 181776},/*(谎)*/
    {.w_px = 16,	.glyph_index = 181944},/*(灰)*/
    {.w_px = 16,	.glyph_index = 182112},/*(挥)*/
    {.w_px = 16,	.glyph_index = 182280},/*(辉)*/
    {.w_px = 16,	.glyph_index = 182448},/*(徽)*/
    {.w_px = 16,	.glyph_index = 182616},/*(恢)*/
    {.w_px = 16,	.glyph_index = 182784},/*(蛔)*/
    {.w_px = 16,	.glyph_index = 182952},/*(回)*/
    {.w_px = 16,	.glyph_index = 183120},/*(毁)*/
    {.w_px = 16,	.glyph_index = 183288},/*(悔)*/
    {.w_px = 16,	.glyph_index = 183456},/*(慧)*/
    {.w_px = 16,	.glyph_index = 183624},/*(卉)*/
    {.w_px = 16,	.glyph_index = 183792},/*(惠)*/
    {.w_px = 16,	.glyph_index = 183960},/*(晦)*/
    {.w_px = 16,	.glyph_index = 184128},/*(贿)*/
    {.w_px = 16,	.glyph_index = 184296},/*(秽)*/
    {.w_px = 16,	.glyph_index = 184464},/*(会)*/
    {.w_px = 16,	.glyph_index = 184632},/*(烩)*/
    {.w_px = 16,	.glyph_index = 184800},/*(汇)*/
    {.w_px = 16,	.glyph_index = 184968},/*(讳)*/
    {.w_px = 16,	.glyph_index = 185136},/*(诲)*/
    {.w_px = 16,	.glyph_index = 185304},/*(绘)*/
    {.w_px = 16,	.glyph_index = 185472},/*(荤)*/
    {.w_px = 16,	.glyph_index = 185640},/*(昏)*/
    {.w_px = 16,	.glyph_index = 185808},/*(婚)*/
    {.w_px = 16,	.glyph_index = 185976},/*(魂)*/
    {.w_px = 16,	.glyph_index = 186144},/*(浑)*/
    {.w_px = 16,	.glyph_index = 186312},/*(混)*/
    {.w_px = 16,	.glyph_index = 186480},/*(豁)*/
    {.w_px = 16,	.glyph_index = 186648},/*(活)*/
    {.w_px = 16,	.glyph_index = 186816},/*(伙)*/
    {.w_px = 16,	.glyph_index = 186984},/*(火)*/
    {.w_px = 16,	.glyph_index = 187152},/*(获)*/
    {.w_px = 16,	.glyph_index = 187320},/*(或)*/
    {.w_px = 16,	.glyph_index = 187488},/*(惑)*/
    {.w_px = 16,	.glyph_index = 187656},/*(霍)*/
    {.w_px = 16,	.glyph_index = 187824},/*(货)*/
    {.w_px = 16,	.glyph_index = 187992},/*(祸)*/
    {.w_px = 16,	.glyph_index = 188160},/*(击)*/
    {.w_px = 16,	.glyph_index = 188328},/*(圾)*/
    {.w_px = 16,	.glyph_index = 188496},/*(基)*/
    {.w_px = 16,	.glyph_index = 188664},/*(机)*/
    {.w_px = 16,	.glyph_index = 188832},/*(畸)*/
    {.w_px = 16,	.glyph_index = 189000},/*(稽)*/
    {.w_px = 16,	.glyph_index = 189168},/*(积)*/
    {.w_px = 16,	.glyph_index = 189336},/*(箕)*/
    {.w_px = 16,	.glyph_index = 189504},/*(肌)*/
    {.w_px = 16,	.glyph_index = 189672},/*(饥)*/
    {.w_px = 16,	.glyph_index = 189840},/*(迹)*/
    {.w_px = 16,	.glyph_index = 190008},/*(激)*/
    {.w_px = 16,	.glyph_index = 190176},/*(讥)*/
    {.w_px = 16,	.glyph_index = 190344},/*(鸡)*/
    {.w_px = 16,	.glyph_index = 190512},/*(姬)*/
    {.w_px = 16,	.glyph_index = 190680},/*(绩)*/
    {.w_px = 16,	.glyph_index = 190848},/*(缉)*/
    {.w_px = 16,	.glyph_index = 191016},/*(吉)*/
    {.w_px = 16,	.glyph_index = 191184},/*(极)*/
    {.w_px = 16,	.glyph_index = 191352},/*(棘)*/
    {.w_px = 16,	.glyph_index = 191520},/*(辑)*/
    {.w_px = 16,	.glyph_index = 191688},/*(籍)*/
    {.w_px = 16,	.glyph_index = 191856},/*(集)*/
    {.w_px = 16,	.glyph_index = 192024},/*(及)*/
    {.w_px = 16,	.glyph_index = 192192},/*(急)*/
    {.w_px = 16,	.glyph_index = 192360},/*(疾)*/
    {.w_px = 16,	.glyph_index = 192528},/*(汲)*/
    {.w_px = 16,	.glyph_index = 192696},/*(即)*/
    {.w_px = 16,	.glyph_index = 192864},/*(嫉)*/
    {.w_px = 16,	.glyph_index = 193032},/*(级)*/
    {.w_px = 16,	.glyph_index = 193200},/*(挤)*/
    {.w_px = 16,	.glyph_index = 193368},/*(几)*/
    {.w_px = 16,	.glyph_index = 193536},/*(脊)*/
    {.w_px = 16,	.glyph_index = 193704},/*(己)*/
    {.w_px = 16,	.glyph_index = 193872},/*(蓟)*/
    {.w_px = 16,	.glyph_index = 194040},/*(技)*/
    {.w_px = 16,	.glyph_index = 194208},/*(冀)*/
    {.w_px = 16,	.glyph_index = 194376},/*(季)*/
    {.w_px = 16,	.glyph_index = 194544},/*(伎)*/
    {.w_px = 16,	.glyph_index = 194712},/*(祭)*/
    {.w_px = 16,	.glyph_index = 194880},/*(剂)*/
    {.w_px = 16,	.glyph_index = 195048},/*(悸)*/
    {.w_px = 16,	.glyph_index = 195216},/*(济)*/
    {.w_px = 16,	.glyph_index = 195384},/*(寄)*/
    {.w_px = 16,	.glyph_index = 195552},/*(寂)*/
    {.w_px = 16,	.glyph_index = 195720},/*(计)*/
    {.w_px = 16,	.glyph_index = 195888},/*(记)*/
    {.w_px = 16,	.glyph_index = 196056},/*(既)*/
    {.w_px = 16,	.glyph_index = 196224},/*(忌)*/
    {.w_px = 16,	.glyph_index = 196392},/*(际)*/
    {.w_px = 16,	.glyph_index = 196560},/*(妓)*/
    {.w_px = 16,	.glyph_index = 196728},/*(继)*/
    {.w_px = 16,	.glyph_index = 196896},/*(纪)*/
    {.w_px = 16,	.glyph_index = 197064},/*(嘉)*/
    {.w_px = 16,	.glyph_index = 197232},/*(枷)*/
    {.w_px = 16,	.glyph_index = 197400},/*(夹)*/
    {.w_px = 16,	.glyph_index = 197568},/*(佳)*/
    {.w_px = 16,	.glyph_index = 197736},/*(家)*/
    {.w_px = 16,	.glyph_index = 197904},/*(加)*/
    {.w_px = 16,	.glyph_index = 198072},/*(荚)*/
    {.w_px = 16,	.glyph_index = 198240},/*(颊)*/
    {.w_px = 16,	.glyph_index = 198408},/*(贾)*/
    {.w_px = 16,	.glyph_index = 198576},/*(甲)*/
    {.w_px = 16,	.glyph_index = 198744},/*(钾)*/
    {.w_px = 16,	.glyph_index = 198912},/*(假)*/
    {.w_px = 16,	.glyph_index = 199080},/*(稼)*/
    {.w_px = 16,	.glyph_index = 199248},/*(价)*/
    {.w_px = 16,	.glyph_index = 199416},/*(架)*/
    {.w_px = 16,	.glyph_index = 199584},/*(驾)*/
    {.w_px = 16,	.glyph_index = 199752},/*(嫁)*/
    {.w_px = 16,	.glyph_index = 199920},/*(歼)*/
    {.w_px = 16,	.glyph_index = 200088},/*(监)*/
    {.w_px = 16,	.glyph_index = 200256},/*(坚)*/
    {.w_px = 16,	.glyph_index = 200424},/*(尖)*/
    {.w_px = 16,	.glyph_index = 200592},/*(笺)*/
    {.w_px = 16,	.glyph_index = 200760},/*(间)*/
    {.w_px = 16,	.glyph_index = 200928},/*(煎)*/
    {.w_px = 16,	.glyph_index = 201096},/*(兼)*/
    {.w_px = 16,	.glyph_index = 201264},/*(肩)*/
    {.w_px = 16,	.glyph_index = 201432},/*(艰)*/
    {.w_px = 16,	.glyph_index = 201600},/*(奸)*/
    {.w_px = 16,	.glyph_index = 201768},/*(缄)*/
    {.w_px = 16,	.glyph_index = 201936},/*(茧)*/
    {.w_px = 16,	.glyph_index = 202104},/*(检)*/
    {.w_px = 16,	.glyph_index = 202272},/*(柬)*/
    {.w_px = 16,	.glyph_index = 202440},/*(碱)*/
    {.w_px = 16,	.glyph_index = 202608},/*(硷)*/
    {.w_px = 16,	.glyph_index = 202776},/*(拣)*/
    {.w_px = 16,	.glyph_index = 202944},/*(捡)*/
    {.w_px = 16,	.glyph_index = 203112},/*(简)*/
    {.w_px = 16,	.glyph_index = 203280},/*(俭)*/
    {.w_px = 16,	.glyph_index = 203448},/*(剪)*/
    {.w_px = 16,	.glyph_index = 203616},/*(减)*/
    {.w_px = 16,	.glyph_index = 203784},/*(荐)*/
    {.w_px = 16,	.glyph_index = 203952},/*(槛)*/
    {.w_px = 16,	.glyph_index = 204120},/*(鉴)*/
    {.w_px = 16,	.glyph_index = 204288},/*(践)*/
    {.w_px = 16,	.glyph_index = 204456},/*(贱)*/
    {.w_px = 16,	.glyph_index = 204624},/*(见)*/
    {.w_px = 16,	.glyph_index = 204792},/*(键)*/
    {.w_px = 16,	.glyph_index = 204960},/*(箭)*/
    {.w_px = 16,	.glyph_index = 205128},/*(件)*/
    {.w_px = 16,	.glyph_index = 205296},/*(健)*/
    {.w_px = 16,	.glyph_index = 205464},/*(舰)*/
    {.w_px = 16,	.glyph_index = 205632},/*(剑)*/
    {.w_px = 16,	.glyph_index = 205800},/*(饯)*/
    {.w_px = 16,	.glyph_index = 205968},/*(渐)*/
    {.w_px = 16,	.glyph_index = 206136},/*(溅)*/
    {.w_px = 16,	.glyph_index = 206304},/*(涧)*/
    {.w_px = 16,	.glyph_index = 206472},/*(建)*/
    {.w_px = 16,	.glyph_index = 206640},/*(僵)*/
    {.w_px = 16,	.glyph_index = 206808},/*(姜)*/
    {.w_px = 16,	.glyph_index = 206976},/*(将)*/
    {.w_px = 16,	.glyph_index = 207144},/*(浆)*/
    {.w_px = 16,	.glyph_index = 207312},/*(江)*/
    {.w_px = 16,	.glyph_index = 207480},/*(疆)*/
    {.w_px = 16,	.glyph_index = 207648},/*(蒋)*/
    {.w_px = 16,	.glyph_index = 207816},/*(桨)*/
    {.w_px = 16,	.glyph_index = 207984},/*(奖)*/
    {.w_px = 16,	.glyph_index = 208152},/*(讲)*/
    {.w_px = 16,	.glyph_index = 208320},/*(匠)*/
    {.w_px = 16,	.glyph_index = 208488},/*(酱)*/
    {.w_px = 16,	.glyph_index = 208656},/*(降)*/
    {.w_px = 16,	.glyph_index = 208824},/*(蕉)*/
    {.w_px = 16,	.glyph_index = 208992},/*(椒)*/
    {.w_px = 16,	.glyph_index = 209160},/*(礁)*/
    {.w_px = 16,	.glyph_index = 209328},/*(焦)*/
    {.w_px = 16,	.glyph_index = 209496},/*(胶)*/
    {.w_px = 16,	.glyph_index = 209664},/*(交)*/
    {.w_px = 16,	.glyph_index = 209832},/*(郊)*/
    {.w_px = 16,	.glyph_index = 210000},/*(浇)*/
    {.w_px = 16,	.glyph_index = 210168},/*(骄)*/
    {.w_px = 16,	.glyph_index = 210336},/*(娇)*/
    {.w_px = 16,	.glyph_index = 210504},/*(嚼)*/
    {.w_px = 16,	.glyph_index = 210672},/*(搅)*/
    {.w_px = 16,	.glyph_index = 210840},/*(铰)*/
    {.w_px = 16,	.glyph_index = 211008},/*(矫)*/
    {.w_px = 16,	.glyph_index = 211176},/*(侥)*/
    {.w_px = 16,	.glyph_index = 211344},/*(脚)*/
    {.w_px = 16,	.glyph_index = 211512},/*(狡)*/
    {.w_px = 16,	.glyph_index = 211680},/*(角)*/
    {.w_px = 16,	.glyph_index = 211848},/*(饺)*/
    {.w_px = 16,	.glyph_index = 212016},/*(缴)*/
    {.w_px = 16,	.glyph_index = 212184},/*(绞)*/
    {.w_px = 16,	.glyph_index = 212352},/*(剿)*/
    {.w_px = 16,	.glyph_index = 212520},/*(教)*/
    {.w_px = 16,	.glyph_index = 212688},/*(酵)*/
    {.w_px = 16,	.glyph_index = 212856},/*(轿)*/
    {.w_px = 16,	.glyph_index = 213024},/*(较)*/
    {.w_px = 16,	.glyph_index = 213192},/*(叫)*/
    {.w_px = 16,	.glyph_index = 213360},/*(窖)*/
    {.w_px = 16,	.glyph_index = 213528},/*(揭)*/
    {.w_px = 16,	.glyph_index = 213696},/*(接)*/
    {.w_px = 16,	.glyph_index = 213864},/*(皆)*/
    {.w_px = 16,	.glyph_index = 214032},/*(秸)*/
    {.w_px = 16,	.glyph_index = 214200},/*(街)*/
    {.w_px = 16,	.glyph_index = 214368},/*(阶)*/
    {.w_px = 16,	.glyph_index = 214536},/*(截)*/
    {.w_px = 16,	.glyph_index = 214704},/*(劫)*/
    {.w_px = 16,	.glyph_index = 214872},/*(节)*/
    {.w_px = 16,	.glyph_index = 215040},/*(桔)*/
    {.w_px = 16,	.glyph_index = 215208},/*(杰)*/
    {.w_px = 16,	.glyph_index = 215376},/*(捷)*/
    {.w_px = 16,	.glyph_index = 215544},/*(睫)*/
    {.w_px = 16,	.glyph_index = 215712},/*(竭)*/
    {.w_px = 16,	.glyph_index = 215880},/*(洁)*/
    {.w_px = 16,	.glyph_index = 216048},/*(结)*/
    {.w_px = 16,	.glyph_index = 216216},/*(解)*/
    {.w_px = 16,	.glyph_index = 216384},/*(姐)*/
    {.w_px = 16,	.glyph_index = 216552},/*(戒)*/
    {.w_px = 16,	.glyph_index = 216720},/*(藉)*/
    {.w_px = 16,	.glyph_index = 216888},/*(芥)*/
    {.w_px = 16,	.glyph_index = 217056},/*(界)*/
    {.w_px = 16,	.glyph_index = 217224},/*(借)*/
    {.w_px = 16,	.glyph_index = 217392},/*(介)*/
    {.w_px = 16,	.glyph_index = 217560},/*(疥)*/
    {.w_px = 16,	.glyph_index = 217728},/*(诫)*/
    {.w_px = 16,	.glyph_index = 217896},/*(届)*/
    {.w_px = 16,	.glyph_index = 218064},/*(巾)*/
    {.w_px = 16,	.glyph_index = 218232},/*(筋)*/
    {.w_px = 16,	.glyph_index = 218400},/*(斤)*/
    {.w_px = 16,	.glyph_index = 218568},/*(金)*/
    {.w_px = 16,	.glyph_index = 218736},/*(今)*/
    {.w_px = 16,	.glyph_index = 218904},/*(津)*/
    {.w_px = 16,	.glyph_index = 219072},/*(襟)*/
    {.w_px = 16,	.glyph_index = 219240},/*(紧)*/
    {.w_px = 16,	.glyph_index = 219408},/*(锦)*/
    {.w_px = 16,	.glyph_index = 219576},/*(仅)*/
    {.w_px = 16,	.glyph_index = 219744},/*(谨)*/
    {.w_px = 16,	.glyph_index = 219912},/*(进)*/
    {.w_px = 16,	.glyph_index = 220080},/*(靳)*/
    {.w_px = 16,	.glyph_index = 220248},/*(晋)*/
    {.w_px = 16,	.glyph_index = 220416},/*(禁)*/
    {.w_px = 16,	.glyph_index = 220584},/*(近)*/
    {.w_px = 16,	.glyph_index = 220752},/*(烬)*/
    {.w_px = 16,	.glyph_index = 220920},/*(浸)*/
    {.w_px = 16,	.glyph_index = 221088},/*(尽)*/
    {.w_px = 16,	.glyph_index = 221256},/*(劲)*/
    {.w_px = 16,	.glyph_index = 221424},/*(荆)*/
    {.w_px = 16,	.glyph_index = 221592},/*(兢)*/
    {.w_px = 16,	.glyph_index = 221760},/*(茎)*/
    {.w_px = 16,	.glyph_index = 221928},/*(睛)*/
    {.w_px = 16,	.glyph_index = 222096},/*(晶)*/
    {.w_px = 16,	.glyph_index = 222264},/*(鲸)*/
    {.w_px = 16,	.glyph_index = 222432},/*(京)*/
    {.w_px = 16,	.glyph_index = 222600},/*(惊)*/
    {.w_px = 16,	.glyph_index = 222768},/*(精)*/
    {.w_px = 16,	.glyph_index = 222936},/*(粳)*/
    {.w_px = 16,	.glyph_index = 223104},/*(经)*/
    {.w_px = 16,	.glyph_index = 223272},/*(井)*/
    {.w_px = 16,	.glyph_index = 223440},/*(警)*/
    {.w_px = 16,	.glyph_index = 223608},/*(景)*/
    {.w_px = 16,	.glyph_index = 223776},/*(颈)*/
    {.w_px = 16,	.glyph_index = 223944},/*(静)*/
    {.w_px = 16,	.glyph_index = 224112},/*(境)*/
    {.w_px = 16,	.glyph_index = 224280},/*(敬)*/
    {.w_px = 16,	.glyph_index = 224448},/*(镜)*/
    {.w_px = 16,	.glyph_index = 224616},/*(径)*/
    {.w_px = 16,	.glyph_index = 224784},/*(痉)*/
    {.w_px = 16,	.glyph_index = 224952},/*(靖)*/
    {.w_px = 16,	.glyph_index = 225120},/*(竟)*/
    {.w_px = 16,	.glyph_index = 225288},/*(竞)*/
    {.w_px = 16,	.glyph_index = 225456},/*(净)*/
    {.w_px = 16,	.glyph_index = 225624},/*(炯)*/
    {.w_px = 16,	.glyph_index = 225792},/*(窘)*/
    {.w_px = 16,	.glyph_index = 225960},/*(揪)*/
    {.w_px = 16,	.glyph_index = 226128},/*(究)*/
    {.w_px = 16,	.glyph_index = 226296},/*(纠)*/
    {.w_px = 16,	.glyph_index = 226464},/*(玖)*/
    {.w_px = 16,	.glyph_index = 226632},/*(韭)*/
    {.w_px = 16,	.glyph_index = 226800},/*(久)*/
    {.w_px = 16,	.glyph_index = 226968},/*(灸)*/
    {.w_px = 16,	.glyph_index = 227136},/*(九)*/
    {.w_px = 16,	.glyph_index = 227304},/*(酒)*/
    {.w_px = 16,	.glyph_index = 227472},/*(厩)*/
    {.w_px = 16,	.glyph_index = 227640},/*(救)*/
    {.w_px = 16,	.glyph_index = 227808},/*(旧)*/
    {.w_px = 16,	.glyph_index = 227976},/*(臼)*/
    {.w_px = 16,	.glyph_index = 228144},/*(舅)*/
    {.w_px = 16,	.glyph_index = 228312},/*(咎)*/
    {.w_px = 16,	.glyph_index = 228480},/*(就)*/
    {.w_px = 16,	.glyph_index = 228648},/*(疚)*/
    {.w_px = 16,	.glyph_index = 228816},/*(鞠)*/
    {.w_px = 16,	.glyph_index = 228984},/*(拘)*/
    {.w_px = 16,	.glyph_index = 229152},/*(狙)*/
    {.w_px = 16,	.glyph_index = 229320},/*(疽)*/
    {.w_px = 16,	.glyph_index = 229488},/*(居)*/
    {.w_px = 16,	.glyph_index = 229656},/*(驹)*/
    {.w_px = 16,	.glyph_index = 229824},/*(菊)*/
    {.w_px = 16,	.glyph_index = 229992},/*(局)*/
    {.w_px = 16,	.glyph_index = 230160},/*(咀)*/
    {.w_px = 16,	.glyph_index = 230328},/*(矩)*/
    {.w_px = 16,	.glyph_index = 230496},/*(举)*/
    {.w_px = 16,	.glyph_index = 230664},/*(沮)*/
    {.w_px = 16,	.glyph_index = 230832},/*(聚)*/
    {.w_px = 16,	.glyph_index = 231000},/*(拒)*/
    {.w_px = 16,	.glyph_index = 231168},/*(据)*/
    {.w_px = 16,	.glyph_index = 231336},/*(巨)*/
    {.w_px = 16,	.glyph_index = 231504},/*(具)*/
    {.w_px = 16,	.glyph_index = 231672},/*(距)*/
    {.w_px = 16,	.glyph_index = 231840},/*(踞)*/
    {.w_px = 16,	.glyph_index = 232008},/*(锯)*/
    {.w_px = 16,	.glyph_index = 232176},/*(俱)*/
    {.w_px = 16,	.glyph_index = 232344},/*(句)*/
    {.w_px = 16,	.glyph_index = 232512},/*(惧)*/
    {.w_px = 16,	.glyph_index = 232680},/*(炬)*/
    {.w_px = 16,	.glyph_index = 232848},/*(剧)*/
    {.w_px = 16,	.glyph_index = 233016},/*(捐)*/
    {.w_px = 16,	.glyph_index = 233184},/*(鹃)*/
    {.w_px = 16,	.glyph_index = 233352},/*(娟)*/
    {.w_px = 16,	.glyph_index = 233520},/*(倦)*/
    {.w_px = 16,	.glyph_index = 233688},/*(眷)*/
    {.w_px = 16,	.glyph_index = 233856},/*(卷)*/
    {.w_px = 16,	.glyph_index = 234024},/*(绢)*/
    {.w_px = 16,	.glyph_index = 234192},/*(撅)*/
    {.w_px = 16,	.glyph_index = 234360},/*(攫)*/
    {.w_px = 16,	.glyph_index = 234528},/*(抉)*/
    {.w_px = 16,	.glyph_index = 234696},/*(掘)*/
    {.w_px = 16,	.glyph_index = 234864},/*(倔)*/
    {.w_px = 16,	.glyph_index = 235032},/*(爵)*/
    {.w_px = 16,	.glyph_index = 235200},/*(觉)*/
    {.w_px = 16,	.glyph_index = 235368},/*(决)*/
    {.w_px = 16,	.glyph_index = 235536},/*(诀)*/
    {.w_px = 16,	.glyph_index = 235704},/*(绝)*/
    {.w_px = 16,	.glyph_index = 235872},/*(均)*/
    {.w_px = 16,	.glyph_index = 236040},/*(菌)*/
    {.w_px = 16,	.glyph_index = 236208},/*(钧)*/
    {.w_px = 16,	.glyph_index = 236376},/*(军)*/
    {.w_px = 16,	.glyph_index = 236544},/*(君)*/
    {.w_px = 16,	.glyph_index = 236712},/*(峻)*/
    {.w_px = 16,	.glyph_index = 236880},/*(俊)*/
    {.w_px = 16,	.glyph_index = 237048},/*(竣)*/
    {.w_px = 16,	.glyph_index = 237216},/*(浚)*/
    {.w_px = 16,	.glyph_index = 237384},/*(郡)*/
    {.w_px = 16,	.glyph_index = 237552},/*(骏)*/
    {.w_px = 16,	.glyph_index = 237720},/*(喀)*/
    {.w_px = 16,	.glyph_index = 237888},/*(咖)*/
    {.w_px = 16,	.glyph_index = 238056},/*(卡)*/
    {.w_px = 16,	.glyph_index = 238224},/*(咯)*/
    {.w_px = 16,	.glyph_index = 238392},/*(开)*/
    {.w_px = 16,	.glyph_index = 238560},/*(揩)*/
    {.w_px = 16,	.glyph_index = 238728},/*(楷)*/
    {.w_px = 16,	.glyph_index = 238896},/*(凯)*/
    {.w_px = 16,	.glyph_index = 239064},/*(慨)*/
    {.w_px = 16,	.glyph_index = 239232},/*(刊)*/
    {.w_px = 16,	.glyph_index = 239400},/*(堪)*/
    {.w_px = 16,	.glyph_index = 239568},/*(勘)*/
    {.w_px = 16,	.glyph_index = 239736},/*(坎)*/
    {.w_px = 16,	.glyph_index = 239904},/*(砍)*/
    {.w_px = 16,	.glyph_index = 240072},/*(看)*/
    {.w_px = 16,	.glyph_index = 240240},/*(康)*/
    {.w_px = 16,	.glyph_index = 240408},/*(慷)*/
    {.w_px = 16,	.glyph_index = 240576},/*(糠)*/
    {.w_px = 16,	.glyph_index = 240744},/*(扛)*/
    {.w_px = 16,	.glyph_index = 240912},/*(抗)*/
    {.w_px = 16,	.glyph_index = 241080},/*(亢)*/
    {.w_px = 16,	.glyph_index = 241248},/*(炕)*/
    {.w_px = 16,	.glyph_index = 241416},/*(考)*/
    {.w_px = 16,	.glyph_index = 241584},/*(拷)*/
    {.w_px = 16,	.glyph_index = 241752},/*(烤)*/
    {.w_px = 16,	.glyph_index = 241920},/*(靠)*/
    {.w_px = 16,	.glyph_index = 242088},/*(坷)*/
    {.w_px = 16,	.glyph_index = 242256},/*(苛)*/
    {.w_px = 16,	.glyph_index = 242424},/*(柯)*/
    {.w_px = 16,	.glyph_index = 242592},/*(棵)*/
    {.w_px = 16,	.glyph_index = 242760},/*(磕)*/
    {.w_px = 16,	.glyph_index = 242928},/*(颗)*/
    {.w_px = 16,	.glyph_index = 243096},/*(科)*/
    {.w_px = 16,	.glyph_index = 243264},/*(壳)*/
    {.w_px = 16,	.glyph_index = 243432},/*(咳)*/
    {.w_px = 16,	.glyph_index = 243600},/*(可)*/
    {.w_px = 16,	.glyph_index = 243768},/*(渴)*/
    {.w_px = 16,	.glyph_index = 243936},/*(克)*/
    {.w_px = 16,	.glyph_index = 244104},/*(刻)*/
    {.w_px = 16,	.glyph_index = 244272},/*(客)*/
    {.w_px = 16,	.glyph_index = 244440},/*(课)*/
    {.w_px = 16,	.glyph_index = 244608},/*(肯)*/
    {.w_px = 16,	.glyph_index = 244776},/*(啃)*/
    {.w_px = 16,	.glyph_index = 244944},/*(垦)*/
    {.w_px = 16,	.glyph_index = 245112},/*(恳)*/
    {.w_px = 16,	.glyph_index = 245280},/*(坑)*/
    {.w_px = 16,	.glyph_index = 245448},/*(吭)*/
    {.w_px = 16,	.glyph_index = 245616},/*(空)*/
    {.w_px = 16,	.glyph_index = 245784},/*(恐)*/
    {.w_px = 16,	.glyph_index = 245952},/*(孔)*/
    {.w_px = 16,	.glyph_index = 246120},/*(控)*/
    {.w_px = 16,	.glyph_index = 246288},/*(抠)*/
    {.w_px = 16,	.glyph_index = 246456},/*(口)*/
    {.w_px = 16,	.glyph_index = 246624},/*(扣)*/
    {.w_px = 16,	.glyph_index = 246792},/*(寇)*/
    {.w_px = 16,	.glyph_index = 246960},/*(枯)*/
    {.w_px = 16,	.glyph_index = 247128},/*(哭)*/
    {.w_px = 16,	.glyph_index = 247296},/*(窟)*/
    {.w_px = 16,	.glyph_index = 247464},/*(苦)*/
    {.w_px = 16,	.glyph_index = 247632},/*(酷)*/
    {.w_px = 16,	.glyph_index = 247800},/*(库)*/
    {.w_px = 16,	.glyph_index = 247968},/*(裤)*/
    {.w_px = 16,	.glyph_index = 248136},/*(夸)*/
    {.w_px = 16,	.glyph_index = 248304},/*(垮)*/
    {.w_px = 16,	.glyph_index = 248472},/*(挎)*/
    {.w_px = 16,	.glyph_index = 248640},/*(跨)*/
    {.w_px = 16,	.glyph_index = 248808},/*(胯)*/
    {.w_px = 16,	.glyph_index = 248976},/*(块)*/
    {.w_px = 16,	.glyph_index = 249144},/*(筷)*/
    {.w_px = 16,	.glyph_index = 249312},/*(侩)*/
    {.w_px = 16,	.glyph_index = 249480},/*(快)*/
    {.w_px = 16,	.glyph_index = 249648},/*(宽)*/
    {.w_px = 16,	.glyph_index = 249816},/*(款)*/
    {.w_px = 16,	.glyph_index = 249984},/*(匡)*/
    {.w_px = 16,	.glyph_index = 250152},/*(筐)*/
    {.w_px = 16,	.glyph_index = 250320},/*(狂)*/
    {.w_px = 16,	.glyph_index = 250488},/*(框)*/
    {.w_px = 16,	.glyph_index = 250656},/*(矿)*/
    {.w_px = 16,	.glyph_index = 250824},/*(眶)*/
    {.w_px = 16,	.glyph_index = 250992},/*(旷)*/
    {.w_px = 16,	.glyph_index = 251160},/*(况)*/
    {.w_px = 16,	.glyph_index = 251328},/*(亏)*/
    {.w_px = 16,	.glyph_index = 251496},/*(盔)*/
    {.w_px = 16,	.glyph_index = 251664},/*(岿)*/
    {.w_px = 16,	.glyph_index = 251832},/*(窥)*/
    {.w_px = 16,	.glyph_index = 252000},/*(葵)*/
    {.w_px = 16,	.glyph_index = 252168},/*(奎)*/
    {.w_px = 16,	.glyph_index = 252336},/*(魁)*/
    {.w_px = 16,	.glyph_index = 252504},/*(傀)*/
    {.w_px = 16,	.glyph_index = 252672},/*(馈)*/
    {.w_px = 16,	.glyph_index = 252840},/*(愧)*/
    {.w_px = 16,	.glyph_index = 253008},/*(溃)*/
    {.w_px = 16,	.glyph_index = 253176},/*(坤)*/
    {.w_px = 16,	.glyph_index = 253344},/*(昆)*/
    {.w_px = 16,	.glyph_index = 253512},/*(捆)*/
    {.w_px = 16,	.glyph_index = 253680},/*(困)*/
    {.w_px = 16,	.glyph_index = 253848},/*(括)*/
    {.w_px = 16,	.glyph_index = 254016},/*(扩)*/
    {.w_px = 16,	.glyph_index = 254184},/*(廓)*/
    {.w_px = 16,	.glyph_index = 254352},/*(阔)*/
    {.w_px = 16,	.glyph_index = 254520},/*(垃)*/
    {.w_px = 16,	.glyph_index = 254688},/*(拉)*/
    {.w_px = 16,	.glyph_index = 254856},/*(喇)*/
    {.w_px = 16,	.glyph_index = 255024},/*(蜡)*/
    {.w_px = 16,	.glyph_index = 255192},/*(腊)*/
    {.w_px = 16,	.glyph_index = 255360},/*(辣)*/
    {.w_px = 16,	.glyph_index = 255528},/*(啦)*/
    {.w_px = 16,	.glyph_index = 255696},/*(莱)*/
    {.w_px = 16,	.glyph_index = 255864},/*(来)*/
    {.w_px = 16,	.glyph_index = 256032},/*(赖)*/
    {.w_px = 16,	.glyph_index = 256200},/*(蓝)*/
    {.w_px = 16,	.glyph_index = 256368},/*(婪)*/
    {.w_px = 16,	.glyph_index = 256536},/*(栏)*/
    {.w_px = 16,	.glyph_index = 256704},/*(拦)*/
    {.w_px = 16,	.glyph_index = 256872},/*(篮)*/
    {.w_px = 16,	.glyph_index = 257040},/*(阑)*/
    {.w_px = 16,	.glyph_index = 257208},/*(兰)*/
    {.w_px = 16,	.glyph_index = 257376},/*(澜)*/
    {.w_px = 16,	.glyph_index = 257544},/*(谰)*/
    {.w_px = 16,	.glyph_index = 257712},/*(揽)*/
    {.w_px = 16,	.glyph_index = 257880},/*(览)*/
    {.w_px = 16,	.glyph_index = 258048},/*(懒)*/
    {.w_px = 16,	.glyph_index = 258216},/*(缆)*/
    {.w_px = 16,	.glyph_index = 258384},/*(烂)*/
    {.w_px = 16,	.glyph_index = 258552},/*(滥)*/
    {.w_px = 16,	.glyph_index = 258720},/*(琅)*/
    {.w_px = 16,	.glyph_index = 258888},/*(榔)*/
    {.w_px = 16,	.glyph_index = 259056},/*(狼)*/
    {.w_px = 16,	.glyph_index = 259224},/*(廊)*/
    {.w_px = 16,	.glyph_index = 259392},/*(郎)*/
    {.w_px = 16,	.glyph_index = 259560},/*(朗)*/
    {.w_px = 16,	.glyph_index = 259728},/*(浪)*/
    {.w_px = 16,	.glyph_index = 259896},/*(捞)*/
    {.w_px = 16,	.glyph_index = 260064},/*(劳)*/
    {.w_px = 16,	.glyph_index = 260232},/*(牢)*/
    {.w_px = 16,	.glyph_index = 260400},/*(老)*/
    {.w_px = 16,	.glyph_index = 260568},/*(佬)*/
    {.w_px = 16,	.glyph_index = 260736},/*(姥)*/
    {.w_px = 16,	.glyph_index = 260904},/*(酪)*/
    {.w_px = 16,	.glyph_index = 261072},/*(烙)*/
    {.w_px = 16,	.glyph_index = 261240},/*(涝)*/
    {.w_px = 16,	.glyph_index = 261408},/*(勒)*/
    {.w_px = 16,	.glyph_index = 261576},/*(乐)*/
    {.w_px = 16,	.glyph_index = 261744},/*(雷)*/
    {.w_px = 16,	.glyph_index = 261912},/*(镭)*/
    {.w_px = 16,	.glyph_index = 262080},/*(蕾)*/
    {.w_px = 16,	.glyph_index = 262248},/*(磊)*/
    {.w_px = 16,	.glyph_index = 262416},/*(累)*/
    {.w_px = 16,	.glyph_index = 262584},/*(儡)*/
    {.w_px = 16,	.glyph_index = 262752},/*(垒)*/
    {.w_px = 16,	.glyph_index = 262920},/*(擂)*/
    {.w_px = 16,	.glyph_index = 263088},/*(肋)*/
    {.w_px = 16,	.glyph_index = 263256},/*(类)*/
    {.w_px = 16,	.glyph_index = 263424},/*(泪)*/
    {.w_px = 16,	.glyph_index = 263592},/*(棱)*/
    {.w_px = 16,	.glyph_index = 263760},/*(楞)*/
    {.w_px = 16,	.glyph_index = 263928},/*(冷)*/
    {.w_px = 16,	.glyph_index = 264096},/*(厘)*/
    {.w_px = 16,	.glyph_index = 264264},/*(梨)*/
    {.w_px = 16,	.glyph_index = 264432},/*(犁)*/
    {.w_px = 16,	.glyph_index = 264600},/*(黎)*/
    {.w_px = 16,	.glyph_index = 264768},/*(篱)*/
    {.w_px = 16,	.glyph_index = 264936},/*(狸)*/
    {.w_px = 16,	.glyph_index = 265104},/*(离)*/
    {.w_px = 16,	.glyph_index = 265272},/*(漓)*/
    {.w_px = 16,	.glyph_index = 265440},/*(理)*/
    {.w_px = 16,	.glyph_index = 265608},/*(李)*/
    {.w_px = 16,	.glyph_index = 265776},/*(里)*/
    {.w_px = 16,	.glyph_index = 265944},/*(鲤)*/
    {.w_px = 16,	.glyph_index = 266112},/*(礼)*/
    {.w_px = 16,	.glyph_index = 266280},/*(莉)*/
    {.w_px = 16,	.glyph_index = 266448},/*(荔)*/
    {.w_px = 16,	.glyph_index = 266616},/*(吏)*/
    {.w_px = 16,	.glyph_index = 266784},/*(栗)*/
    {.w_px = 16,	.glyph_index = 266952},/*(丽)*/
    {.w_px = 16,	.glyph_index = 267120},/*(厉)*/
    {.w_px = 16,	.glyph_index = 267288},/*(励)*/
    {.w_px = 16,	.glyph_index = 267456},/*(砾)*/
    {.w_px = 16,	.glyph_index = 267624},/*(历)*/
    {.w_px = 16,	.glyph_index = 267792},/*(利)*/
    {.w_px = 16,	.glyph_index = 267960},/*(傈)*/
    {.w_px = 16,	.glyph_index = 268128},/*(例)*/
    {.w_px = 16,	.glyph_index = 268296},/*(俐)*/
    {.w_px = 16,	.glyph_index = 268464},/*(痢)*/
    {.w_px = 16,	.glyph_index = 268632},/*(立)*/
    {.w_px = 16,	.glyph_index = 268800},/*(粒)*/
    {.w_px = 16,	.glyph_index = 268968},/*(沥)*/
    {.w_px = 16,	.glyph_index = 269136},/*(隶)*/
    {.w_px = 16,	.glyph_index = 269304},/*(力)*/
    {.w_px = 16,	.glyph_index = 269472},/*(璃)*/
    {.w_px = 16,	.glyph_index = 269640},/*(哩)*/
    {.w_px = 16,	.glyph_index = 269808},/*(俩)*/
    {.w_px = 16,	.glyph_index = 269976},/*(联)*/
    {.w_px = 16,	.glyph_index = 270144},/*(莲)*/
    {.w_px = 16,	.glyph_index = 270312},/*(连)*/
    {.w_px = 16,	.glyph_index = 270480},/*(镰)*/
    {.w_px = 16,	.glyph_index = 270648},/*(廉)*/
    {.w_px = 16,	.glyph_index = 270816},/*(怜)*/
    {.w_px = 16,	.glyph_index = 270984},/*(涟)*/
    {.w_px = 16,	.glyph_index = 271152},/*(帘)*/
    {.w_px = 16,	.glyph_index = 271320},/*(敛)*/
    {.w_px = 16,	.glyph_index = 271488},/*(脸)*/
    {.w_px = 16,	.glyph_index = 271656},/*(链)*/
    {.w_px = 16,	.glyph_index = 271824},/*(恋)*/
    {.w_px = 16,	.glyph_index = 271992},/*(炼)*/
    {.w_px = 16,	.glyph_index = 272160},/*(练)*/
    {.w_px = 16,	.glyph_index = 272328},/*(粮)*/
    {.w_px = 16,	.glyph_index = 272496},/*(凉)*/
    {.w_px = 16,	.glyph_index = 272664},/*(梁)*/
    {.w_px = 16,	.glyph_index = 272832},/*(粱)*/
    {.w_px = 16,	.glyph_index = 273000},/*(良)*/
    {.w_px = 16,	.glyph_index = 273168},/*(两)*/
    {.w_px = 16,	.glyph_index = 273336},/*(辆)*/
    {.w_px = 16,	.glyph_index = 273504},/*(量)*/
    {.w_px = 16,	.glyph_index = 273672},/*(晾)*/
    {.w_px = 16,	.glyph_index = 273840},/*(亮)*/
    {.w_px = 16,	.glyph_index = 274008},/*(谅)*/
    {.w_px = 16,	.glyph_index = 274176},/*(撩)*/
    {.w_px = 16,	.glyph_index = 274344},/*(聊)*/
    {.w_px = 16,	.glyph_index = 274512},/*(僚)*/
    {.w_px = 16,	.glyph_index = 274680},/*(疗)*/
    {.w_px = 16,	.glyph_index = 274848},/*(燎)*/
    {.w_px = 16,	.glyph_index = 275016},/*(寥)*/
    {.w_px = 16,	.glyph_index = 275184},/*(辽)*/
    {.w_px = 16,	.glyph_index = 275352},/*(潦)*/
    {.w_px = 16,	.glyph_index = 275520},/*(了)*/
    {.w_px = 16,	.glyph_index = 275688},/*(撂)*/
    {.w_px = 16,	.glyph_index = 275856},/*(镣)*/
    {.w_px = 16,	.glyph_index = 276024},/*(廖)*/
    {.w_px = 16,	.glyph_index = 276192},/*(料)*/
    {.w_px = 16,	.glyph_index = 276360},/*(列)*/
    {.w_px = 16,	.glyph_index = 276528},/*(裂)*/
    {.w_px = 16,	.glyph_index = 276696},/*(烈)*/
    {.w_px = 16,	.glyph_index = 276864},/*(劣)*/
    {.w_px = 16,	.glyph_index = 277032},/*(猎)*/
    {.w_px = 16,	.glyph_index = 277200},/*(琳)*/
    {.w_px = 16,	.glyph_index = 277368},/*(林)*/
    {.w_px = 16,	.glyph_index = 277536},/*(磷)*/
    {.w_px = 16,	.glyph_index = 277704},/*(霖)*/
    {.w_px = 16,	.glyph_index = 277872},/*(临)*/
    {.w_px = 16,	.glyph_index = 278040},/*(邻)*/
    {.w_px = 16,	.glyph_index = 278208},/*(鳞)*/
    {.w_px = 16,	.glyph_index = 278376},/*(淋)*/
    {.w_px = 16,	.glyph_index = 278544},/*(凛)*/
    {.w_px = 16,	.glyph_index = 278712},/*(赁)*/
    {.w_px = 16,	.glyph_index = 278880},/*(吝)*/
    {.w_px = 16,	.glyph_index = 279048},/*(拎)*/
    {.w_px = 16,	.glyph_index = 279216},/*(玲)*/
    {.w_px = 16,	.glyph_index = 279384},/*(菱)*/
    {.w_px = 16,	.glyph_index = 279552},/*(零)*/
    {.w_px = 16,	.glyph_index = 279720},/*(龄)*/
    {.w_px = 16,	.glyph_index = 279888},/*(铃)*/
    {.w_px = 16,	.glyph_index = 280056},/*(伶)*/
    {.w_px = 16,	.glyph_index = 280224},/*(羚)*/
    {.w_px = 16,	.glyph_index = 280392},/*(凌)*/
    {.w_px = 16,	.glyph_index = 280560},/*(灵)*/
    {.w_px = 16,	.glyph_index = 280728},/*(陵)*/
    {.w_px = 16,	.glyph_index = 280896},/*(岭)*/
    {.w_px = 16,	.glyph_index = 281064},/*(领)*/
    {.w_px = 16,	.glyph_index = 281232},/*(另)*/
    {.w_px = 16,	.glyph_index = 281400},/*(令)*/
    {.w_px = 16,	.glyph_index = 281568},/*(溜)*/
    {.w_px = 16,	.glyph_index = 281736},/*(琉)*/
    {.w_px = 16,	.glyph_index = 281904},/*(榴)*/
    {.w_px = 16,	.glyph_index = 282072},/*(硫)*/
    {.w_px = 16,	.glyph_index = 282240},/*(馏)*/
    {.w_px = 16,	.glyph_index = 282408},/*(留)*/
    {.w_px = 16,	.glyph_index = 282576},/*(刘)*/
    {.w_px = 16,	.glyph_index = 282744},/*(瘤)*/
    {.w_px = 16,	.glyph_index = 282912},/*(流)*/
    {.w_px = 16,	.glyph_index = 283080},/*(柳)*/
    {.w_px = 16,	.glyph_index = 283248},/*(六)*/
    {.w_px = 16,	.glyph_index = 283416},/*(龙)*/
    {.w_px = 16,	.glyph_index = 283584},/*(聋)*/
    {.w_px = 16,	.glyph_index = 283752},/*(咙)*/
    {.w_px = 16,	.glyph_index = 283920},/*(笼)*/
    {.w_px = 16,	.glyph_index = 284088},/*(窿)*/
    {.w_px = 16,	.glyph_index = 284256},/*(隆)*/
    {.w_px = 16,	.glyph_index = 284424},/*(垄)*/
    {.w_px = 16,	.glyph_index = 284592},/*(拢)*/
    {.w_px = 16,	.glyph_index = 284760},/*(陇)*/
    {.w_px = 16,	.glyph_index = 284928},/*(楼)*/
    {.w_px = 16,	.glyph_index = 285096},/*(娄)*/
    {.w_px = 16,	.glyph_index = 285264},/*(搂)*/
    {.w_px = 16,	.glyph_index = 285432},/*(篓)*/
    {.w_px = 16,	.glyph_index = 285600},/*(漏)*/
    {.w_px = 16,	.glyph_index = 285768},/*(陋)*/
    {.w_px = 16,	.glyph_index = 285936},/*(芦)*/
    {.w_px = 16,	.glyph_index = 286104},/*(卢)*/
    {.w_px = 16,	.glyph_index = 286272},/*(颅)*/
    {.w_px = 16,	.glyph_index = 286440},/*(庐)*/
    {.w_px = 16,	.glyph_index = 286608},/*(炉)*/
    {.w_px = 16,	.glyph_index = 286776},/*(掳)*/
    {.w_px = 16,	.glyph_index = 286944},/*(卤)*/
    {.w_px = 16,	.glyph_index = 287112},/*(虏)*/
    {.w_px = 16,	.glyph_index = 287280},/*(鲁)*/
    {.w_px = 16,	.glyph_index = 287448},/*(麓)*/
    {.w_px = 16,	.glyph_index = 287616},/*(碌)*/
    {.w_px = 16,	.glyph_index = 287784},/*(露)*/
    {.w_px = 16,	.glyph_index = 287952},/*(路)*/
    {.w_px = 16,	.glyph_index = 288120},/*(赂)*/
    {.w_px = 16,	.glyph_index = 288288},/*(鹿)*/
    {.w_px = 16,	.glyph_index = 288456},/*(潞)*/
    {.w_px = 16,	.glyph_index = 288624},/*(禄)*/
    {.w_px = 16,	.glyph_index = 288792},/*(录)*/
    {.w_px = 16,	.glyph_index = 288960},/*(陆)*/
    {.w_px = 16,	.glyph_index = 289128},/*(戮)*/
    {.w_px = 16,	.glyph_index = 289296},/*(驴)*/
    {.w_px = 16,	.glyph_index = 289464},/*(吕)*/
    {.w_px = 16,	.glyph_index = 289632},/*(铝)*/
    {.w_px = 16,	.glyph_index = 289800},/*(侣)*/
    {.w_px = 16,	.glyph_index = 289968},/*(旅)*/
    {.w_px = 16,	.glyph_index = 290136},/*(履)*/
    {.w_px = 16,	.glyph_index = 290304},/*(屡)*/
    {.w_px = 16,	.glyph_index = 290472},/*(缕)*/
    {.w_px = 16,	.glyph_index = 290640},/*(虑)*/
    {.w_px = 16,	.glyph_index = 290808},/*(氯)*/
    {.w_px = 16,	.glyph_index = 290976},/*(律)*/
    {.w_px = 16,	.glyph_index = 291144},/*(率)*/
    {.w_px = 16,	.glyph_index = 291312},/*(滤)*/
    {.w_px = 16,	.glyph_index = 291480},/*(绿)*/
    {.w_px = 16,	.glyph_index = 291648},/*(峦)*/
    {.w_px = 16,	.glyph_index = 291816},/*(挛)*/
    {.w_px = 16,	.glyph_index = 291984},/*(孪)*/
    {.w_px = 16,	.glyph_index = 292152},/*(滦)*/
    {.w_px = 16,	.glyph_index = 292320},/*(卵)*/
    {.w_px = 16,	.glyph_index = 292488},/*(乱)*/
    {.w_px = 16,	.glyph_index = 292656},/*(掠)*/
    {.w_px = 16,	.glyph_index = 292824},/*(略)*/
    {.w_px = 16,	.glyph_index = 292992},/*(抡)*/
    {.w_px = 16,	.glyph_index = 293160},/*(轮)*/
    {.w_px = 16,	.glyph_index = 293328},/*(伦)*/
    {.w_px = 16,	.glyph_index = 293496},/*(仑)*/
    {.w_px = 16,	.glyph_index = 293664},/*(沦)*/
    {.w_px = 16,	.glyph_index = 293832},/*(纶)*/
    {.w_px = 16,	.glyph_index = 294000},/*(论)*/
    {.w_px = 16,	.glyph_index = 294168},/*(萝)*/
    {.w_px = 16,	.glyph_index = 294336},/*(螺)*/
    {.w_px = 16,	.glyph_index = 294504},/*(罗)*/
    {.w_px = 16,	.glyph_index = 294672},/*(逻)*/
    {.w_px = 16,	.glyph_index = 294840},/*(锣)*/
    {.w_px = 16,	.glyph_index = 295008},/*(箩)*/
    {.w_px = 16,	.glyph_index = 295176},/*(骡)*/
    {.w_px = 16,	.glyph_index = 295344},/*(裸)*/
    {.w_px = 16,	.glyph_index = 295512},/*(落)*/
    {.w_px = 16,	.glyph_index = 295680},/*(洛)*/
    {.w_px = 16,	.glyph_index = 295848},/*(骆)*/
    {.w_px = 16,	.glyph_index = 296016},/*(络)*/
    {.w_px = 16,	.glyph_index = 296184},/*(妈)*/
    {.w_px = 16,	.glyph_index = 296352},/*(麻)*/
    {.w_px = 16,	.glyph_index = 296520},/*(玛)*/
    {.w_px = 16,	.glyph_index = 296688},/*(码)*/
    {.w_px = 16,	.glyph_index = 296856},/*(蚂)*/
    {.w_px = 16,	.glyph_index = 297024},/*(马)*/
    {.w_px = 16,	.glyph_index = 297192},/*(骂)*/
    {.w_px = 16,	.glyph_index = 297360},/*(嘛)*/
    {.w_px = 16,	.glyph_index = 297528},/*(吗)*/
    {.w_px = 16,	.glyph_index = 297696},/*(埋)*/
    {.w_px = 16,	.glyph_index = 297864},/*(买)*/
    {.w_px = 16,	.glyph_index = 298032},/*(麦)*/
    {.w_px = 16,	.glyph_index = 298200},/*(卖)*/
    {.w_px = 16,	.glyph_index = 298368},/*(迈)*/
    {.w_px = 16,	.glyph_index = 298536},/*(脉)*/
    {.w_px = 16,	.glyph_index = 298704},/*(瞒)*/
    {.w_px = 16,	.glyph_index = 298872},/*(馒)*/
    {.w_px = 16,	.glyph_index = 299040},/*(蛮)*/
    {.w_px = 16,	.glyph_index = 299208},/*(满)*/
    {.w_px = 16,	.glyph_index = 299376},/*(蔓)*/
    {.w_px = 16,	.glyph_index = 299544},/*(曼)*/
    {.w_px = 16,	.glyph_index = 299712},/*(慢)*/
    {.w_px = 16,	.glyph_index = 299880},/*(漫)*/
    {.w_px = 16,	.glyph_index = 300048},/*(谩)*/
    {.w_px = 16,	.glyph_index = 300216},/*(芒)*/
    {.w_px = 16,	.glyph_index = 300384},/*(茫)*/
    {.w_px = 16,	.glyph_index = 300552},/*(盲)*/
    {.w_px = 16,	.glyph_index = 300720},/*(氓)*/
    {.w_px = 16,	.glyph_index = 300888},/*(忙)*/
    {.w_px = 16,	.glyph_index = 301056},/*(莽)*/
    {.w_px = 16,	.glyph_index = 301224},/*(猫)*/
    {.w_px = 16,	.glyph_index = 301392},/*(茅)*/
    {.w_px = 16,	.glyph_index = 301560},/*(锚)*/
    {.w_px = 16,	.glyph_index = 301728},/*(毛)*/
    {.w_px = 16,	.glyph_index = 301896},/*(矛)*/
    {.w_px = 16,	.glyph_index = 302064},/*(铆)*/
    {.w_px = 16,	.glyph_index = 302232},/*(卯)*/
    {.w_px = 16,	.glyph_index = 302400},/*(茂)*/
    {.w_px = 16,	.glyph_index = 302568},/*(冒)*/
    {.w_px = 16,	.glyph_index = 302736},/*(帽)*/
    {.w_px = 16,	.glyph_index = 302904},/*(貌)*/
    {.w_px = 16,	.glyph_index = 303072},/*(贸)*/
    {.w_px = 16,	.glyph_index = 303240},/*(么)*/
    {.w_px = 16,	.glyph_index = 303408},/*(玫)*/
    {.w_px = 16,	.glyph_index = 303576},/*(枚)*/
    {.w_px = 16,	.glyph_index = 303744},/*(梅)*/
    {.w_px = 16,	.glyph_index = 303912},/*(酶)*/
    {.w_px = 16,	.glyph_index = 304080},/*(霉)*/
    {.w_px = 16,	.glyph_index = 304248},/*(煤)*/
    {.w_px = 16,	.glyph_index = 304416},/*(没)*/
    {.w_px = 16,	.glyph_index = 304584},/*(眉)*/
    {.w_px = 16,	.glyph_index = 304752},/*(媒)*/
    {.w_px = 16,	.glyph_index = 304920},/*(镁)*/
    {.w_px = 16,	.glyph_index = 305088},/*(每)*/
    {.w_px = 16,	.glyph_index = 305256},/*(美)*/
    {.w_px = 16,	.glyph_index = 305424},/*(昧)*/
    {.w_px = 16,	.glyph_index = 305592},/*(寐)*/
    {.w_px = 16,	.glyph_index = 305760},/*(妹)*/
    {.w_px = 16,	.glyph_index = 305928},/*(媚)*/
    {.w_px = 16,	.glyph_index = 306096},/*(门)*/
    {.w_px = 16,	.glyph_index = 306264},/*(闷)*/
    {.w_px = 16,	.glyph_index = 306432},/*(们)*/
    {.w_px = 16,	.glyph_index = 306600},/*(萌)*/
    {.w_px = 16,	.glyph_index = 306768},/*(蒙)*/
    {.w_px = 16,	.glyph_index = 306936},/*(檬)*/
    {.w_px = 16,	.glyph_index = 307104},/*(盟)*/
    {.w_px = 16,	.glyph_index = 307272},/*(锰)*/
    {.w_px = 16,	.glyph_index = 307440},/*(猛)*/
    {.w_px = 16,	.glyph_index = 307608},/*(梦)*/
    {.w_px = 16,	.glyph_index = 307776},/*(孟)*/
    {.w_px = 16,	.glyph_index = 307944},/*(眯)*/
    {.w_px = 16,	.glyph_index = 308112},/*(醚)*/
    {.w_px = 16,	.glyph_index = 308280},/*(靡)*/
    {.w_px = 16,	.glyph_index = 308448},/*(糜)*/
    {.w_px = 16,	.glyph_index = 308616},/*(迷)*/
    {.w_px = 16,	.glyph_index = 308784},/*(谜)*/
    {.w_px = 16,	.glyph_index = 308952},/*(弥)*/
    {.w_px = 16,	.glyph_index = 309120},/*(米)*/
    {.w_px = 16,	.glyph_index = 309288},/*(秘)*/
    {.w_px = 16,	.glyph_index = 309456},/*(觅)*/
    {.w_px = 16,	.glyph_index = 309624},/*(泌)*/
    {.w_px = 16,	.glyph_index = 309792},/*(蜜)*/
    {.w_px = 16,	.glyph_index = 309960},/*(密)*/
    {.w_px = 16,	.glyph_index = 310128},/*(幂)*/
    {.w_px = 16,	.glyph_index = 310296},/*(棉)*/
    {.w_px = 16,	.glyph_index = 310464},/*(眠)*/
    {.w_px = 16,	.glyph_index = 310632},/*(绵)*/
    {.w_px = 16,	.glyph_index = 310800},/*(冕)*/
    {.w_px = 16,	.glyph_index = 310968},/*(免)*/
    {.w_px = 16,	.glyph_index = 311136},/*(勉)*/
    {.w_px = 16,	.glyph_index = 311304},/*(娩)*/
    {.w_px = 16,	.glyph_index = 311472},/*(缅)*/
    {.w_px = 16,	.glyph_index = 311640},/*(面)*/
    {.w_px = 16,	.glyph_index = 311808},/*(苗)*/
    {.w_px = 16,	.glyph_index = 311976},/*(描)*/
    {.w_px = 16,	.glyph_index = 312144},/*(瞄)*/
    {.w_px = 16,	.glyph_index = 312312},/*(藐)*/
    {.w_px = 16,	.glyph_index = 312480},/*(秒)*/
    {.w_px = 16,	.glyph_index = 312648},/*(渺)*/
    {.w_px = 16,	.glyph_index = 312816},/*(庙)*/
    {.w_px = 16,	.glyph_index = 312984},/*(妙)*/
    {.w_px = 16,	.glyph_index = 313152},/*(蔑)*/
    {.w_px = 16,	.glyph_index = 313320},/*(灭)*/
    {.w_px = 16,	.glyph_index = 313488},/*(民)*/
    {.w_px = 16,	.glyph_index = 313656},/*(抿)*/
    {.w_px = 16,	.glyph_index = 313824},/*(皿)*/
    {.w_px = 16,	.glyph_index = 313992},/*(敏)*/
    {.w_px = 16,	.glyph_index = 314160},/*(悯)*/
    {.w_px = 16,	.glyph_index = 314328},/*(闽)*/
    {.w_px = 16,	.glyph_index = 314496},/*(明)*/
    {.w_px = 16,	.glyph_index = 314664},/*(螟)*/
    {.w_px = 16,	.glyph_index = 314832},/*(鸣)*/
    {.w_px = 16,	.glyph_index = 315000},/*(铭)*/
    {.w_px = 16,	.glyph_index = 315168},/*(名)*/
    {.w_px = 16,	.glyph_index = 315336},/*(命)*/
    {.w_px = 16,	.glyph_index = 315504},/*(谬)*/
    {.w_px = 16,	.glyph_index = 315672},/*(摸)*/
    {.w_px = 16,	.glyph_index = 315840},/*(摹)*/
    {.w_px = 16,	.glyph_index = 316008},/*(蘑)*/
    {.w_px = 16,	.glyph_index = 316176},/*(模)*/
    {.w_px = 16,	.glyph_index = 316344},/*(膜)*/
    {.w_px = 16,	.glyph_index = 316512},/*(磨)*/
    {.w_px = 16,	.glyph_index = 316680},/*(摩)*/
    {.w_px = 16,	.glyph_index = 316848},/*(魔)*/
    {.w_px = 16,	.glyph_index = 317016},/*(抹)*/
    {.w_px = 16,	.glyph_index = 317184},/*(末)*/
    {.w_px = 16,	.glyph_index = 317352},/*(莫)*/
    {.w_px = 16,	.glyph_index = 317520},/*(墨)*/
    {.w_px = 16,	.glyph_index = 317688},/*(默)*/
    {.w_px = 16,	.glyph_index = 317856},/*(沫)*/
    {.w_px = 16,	.glyph_index = 318024},/*(漠)*/
    {.w_px = 16,	.glyph_index = 318192},/*(寞)*/
    {.w_px = 16,	.glyph_index = 318360},/*(陌)*/
    {.w_px = 16,	.glyph_index = 318528},/*(谋)*/
    {.w_px = 16,	.glyph_index = 318696},/*(牟)*/
    {.w_px = 16,	.glyph_index = 318864},/*(某)*/
    {.w_px = 16,	.glyph_index = 319032},/*(拇)*/
    {.w_px = 16,	.glyph_index = 319200},/*(牡)*/
    {.w_px = 16,	.glyph_index = 319368},/*(亩)*/
    {.w_px = 16,	.glyph_index = 319536},/*(姆)*/
    {.w_px = 16,	.glyph_index = 319704},/*(母)*/
    {.w_px = 16,	.glyph_index = 319872},/*(墓)*/
    {.w_px = 16,	.glyph_index = 320040},/*(暮)*/
    {.w_px = 16,	.glyph_index = 320208},/*(幕)*/
    {.w_px = 16,	.glyph_index = 320376},/*(募)*/
    {.w_px = 16,	.glyph_index = 320544},/*(慕)*/
    {.w_px = 16,	.glyph_index = 320712},/*(木)*/
    {.w_px = 16,	.glyph_index = 320880},/*(目)*/
    {.w_px = 16,	.glyph_index = 321048},/*(睦)*/
    {.w_px = 16,	.glyph_index = 321216},/*(牧)*/
    {.w_px = 16,	.glyph_index = 321384},/*(穆)*/
    {.w_px = 16,	.glyph_index = 321552},/*(拿)*/
    {.w_px = 16,	.glyph_index = 321720},/*(哪)*/
    {.w_px = 16,	.glyph_index = 321888},/*(呐)*/
    {.w_px = 16,	.glyph_index = 322056},/*(钠)*/
    {.w_px = 16,	.glyph_index = 322224},/*(那)*/
    {.w_px = 16,	.glyph_index = 322392},/*(娜)*/
    {.w_px = 16,	.glyph_index = 322560},/*(纳)*/
    {.w_px = 16,	.glyph_index = 322728},/*(氖)*/
    {.w_px = 16,	.glyph_index = 322896},/*(乃)*/
    {.w_px = 16,	.glyph_index = 323064},/*(奶)*/
    {.w_px = 16,	.glyph_index = 323232},/*(耐)*/
    {.w_px = 16,	.glyph_index = 323400},/*(奈)*/
    {.w_px = 16,	.glyph_index = 323568},/*(南)*/
    {.w_px = 16,	.glyph_index = 323736},/*(男)*/
    {.w_px = 16,	.glyph_index = 323904},/*(难)*/
    {.w_px = 16,	.glyph_index = 324072},/*(囊)*/
    {.w_px = 16,	.glyph_index = 324240},/*(挠)*/
    {.w_px = 16,	.glyph_index = 324408},/*(脑)*/
    {.w_px = 16,	.glyph_index = 324576},/*(恼)*/
    {.w_px = 16,	.glyph_index = 324744},/*(闹)*/
    {.w_px = 16,	.glyph_index = 324912},/*(淖)*/
    {.w_px = 16,	.glyph_index = 325080},/*(呢)*/
    {.w_px = 16,	.glyph_index = 325248},/*(馁)*/
    {.w_px = 16,	.glyph_index = 325416},/*(内)*/
    {.w_px = 16,	.glyph_index = 325584},/*(嫩)*/
    {.w_px = 16,	.glyph_index = 325752},/*(能)*/
    {.w_px = 16,	.glyph_index = 325920},/*(妮)*/
    {.w_px = 16,	.glyph_index = 326088},/*(霓)*/
    {.w_px = 16,	.glyph_index = 326256},/*(倪)*/
    {.w_px = 16,	.glyph_index = 326424},/*(泥)*/
    {.w_px = 16,	.glyph_index = 326592},/*(尼)*/
    {.w_px = 16,	.glyph_index = 326760},/*(拟)*/
    {.w_px = 16,	.glyph_index = 326928},/*(你)*/
    {.w_px = 16,	.glyph_index = 327096},/*(匿)*/
    {.w_px = 16,	.glyph_index = 327264},/*(腻)*/
    {.w_px = 16,	.glyph_index = 327432},/*(逆)*/
    {.w_px = 16,	.glyph_index = 327600},/*(溺)*/
    {.w_px = 16,	.glyph_index = 327768},/*(蔫)*/
    {.w_px = 16,	.glyph_index = 327936},/*(拈)*/
    {.w_px = 16,	.glyph_index = 328104},/*(年)*/
    {.w_px = 16,	.glyph_index = 328272},/*(碾)*/
    {.w_px = 16,	.glyph_index = 328440},/*(撵)*/
    {.w_px = 16,	.glyph_index = 328608},/*(捻)*/
    {.w_px = 16,	.glyph_index = 328776},/*(念)*/
    {.w_px = 16,	.glyph_index = 328944},/*(娘)*/
    {.w_px = 16,	.glyph_index = 329112},/*(酿)*/
    {.w_px = 16,	.glyph_index = 329280},/*(鸟)*/
    {.w_px = 16,	.glyph_index = 329448},/*(尿)*/
    {.w_px = 16,	.glyph_index = 329616},/*(捏)*/
    {.w_px = 16,	.glyph_index = 329784},/*(聂)*/
    {.w_px = 16,	.glyph_index = 329952},/*(孽)*/
    {.w_px = 16,	.glyph_index = 330120},/*(啮)*/
    {.w_px = 16,	.glyph_index = 330288},/*(镊)*/
    {.w_px = 16,	.glyph_index = 330456},/*(镍)*/
    {.w_px = 16,	.glyph_index = 330624},/*(涅)*/
    {.w_px = 16,	.glyph_index = 330792},/*(您)*/
    {.w_px = 16,	.glyph_index = 330960},/*(柠)*/
    {.w_px = 16,	.glyph_index = 331128},/*(狞)*/
    {.w_px = 16,	.glyph_index = 331296},/*(凝)*/
    {.w_px = 16,	.glyph_index = 331464},/*(宁)*/
    {.w_px = 16,	.glyph_index = 331632},/*(拧)*/
    {.w_px = 16,	.glyph_index = 331800},/*(泞)*/
    {.w_px = 16,	.glyph_index = 331968},/*(牛)*/
    {.w_px = 16,	.glyph_index = 332136},/*(扭)*/
    {.w_px = 16,	.glyph_index = 332304},/*(钮)*/
    {.w_px = 16,	.glyph_index = 332472},/*(纽)*/
    {.w_px = 16,	.glyph_index = 332640},/*(脓)*/
    {.w_px = 16,	.glyph_index = 332808},/*(浓)*/
    {.w_px = 16,	.glyph_index = 332976},/*(农)*/
    {.w_px = 16,	.glyph_index = 333144},/*(弄)*/
    {.w_px = 16,	.glyph_index = 333312},/*(奴)*/
    {.w_px = 16,	.glyph_index = 333480},/*(努)*/
    {.w_px = 16,	.glyph_index = 333648},/*(怒)*/
    {.w_px = 16,	.glyph_index = 333816},/*(女)*/
    {.w_px = 16,	.glyph_index = 333984},/*(暖)*/
    {.w_px = 16,	.glyph_index = 334152},/*(虐)*/
    {.w_px = 16,	.glyph_index = 334320},/*(疟)*/
    {.w_px = 16,	.glyph_index = 334488},/*(挪)*/
    {.w_px = 16,	.glyph_index = 334656},/*(懦)*/
    {.w_px = 16,	.glyph_index = 334824},/*(糯)*/
    {.w_px = 16,	.glyph_index = 334992},/*(诺)*/
    {.w_px = 16,	.glyph_index = 335160},/*(哦)*/
    {.w_px = 16,	.glyph_index = 335328},/*(欧)*/
    {.w_px = 16,	.glyph_index = 335496},/*(鸥)*/
    {.w_px = 16,	.glyph_index = 335664},/*(殴)*/
    {.w_px = 16,	.glyph_index = 335832},/*(藕)*/
    {.w_px = 16,	.glyph_index = 336000},/*(呕)*/
    {.w_px = 16,	.glyph_index = 336168},/*(偶)*/
    {.w_px = 16,	.glyph_index = 336336},/*(沤)*/
    {.w_px = 16,	.glyph_index = 336504},/*(啪)*/
    {.w_px = 16,	.glyph_index = 336672},/*(趴)*/
    {.w_px = 16,	.glyph_index = 336840},/*(爬)*/
    {.w_px = 16,	.glyph_index = 337008},/*(帕)*/
    {.w_px = 16,	.glyph_index = 337176},/*(怕)*/
    {.w_px = 16,	.glyph_index = 337344},/*(琶)*/
    {.w_px = 16,	.glyph_index = 337512},/*(拍)*/
    {.w_px = 16,	.glyph_index = 337680},/*(排)*/
    {.w_px = 16,	.glyph_index = 337848},/*(牌)*/
    {.w_px = 16,	.glyph_index = 338016},/*(徘)*/
    {.w_px = 16,	.glyph_index = 338184},/*(湃)*/
    {.w_px = 16,	.glyph_index = 338352},/*(派)*/
    {.w_px = 16,	.glyph_index = 338520},/*(攀)*/
    {.w_px = 16,	.glyph_index = 338688},/*(潘)*/
    {.w_px = 16,	.glyph_index = 338856},/*(盘)*/
    {.w_px = 16,	.glyph_index = 339024},/*(磐)*/
    {.w_px = 16,	.glyph_index = 339192},/*(盼)*/
    {.w_px = 16,	.glyph_index = 339360},/*(畔)*/
    {.w_px = 16,	.glyph_index = 339528},/*(判)*/
    {.w_px = 16,	.glyph_index = 339696},/*(叛)*/
    {.w_px = 16,	.glyph_index = 339864},/*(乓)*/
    {.w_px = 16,	.glyph_index = 340032},/*(庞)*/
    {.w_px = 16,	.glyph_index = 340200},/*(旁)*/
    {.w_px = 16,	.glyph_index = 340368},/*(耪)*/
    {.w_px = 16,	.glyph_index = 340536},/*(胖)*/
    {.w_px = 16,	.glyph_index = 340704},/*(抛)*/
    {.w_px = 16,	.glyph_index = 340872},/*(咆)*/
    {.w_px = 16,	.glyph_index = 341040},/*(刨)*/
    {.w_px = 16,	.glyph_index = 341208},/*(炮)*/
    {.w_px = 16,	.glyph_index = 341376},/*(袍)*/
    {.w_px = 16,	.glyph_index = 341544},/*(跑)*/
    {.w_px = 16,	.glyph_index = 341712},/*(泡)*/
    {.w_px = 16,	.glyph_index = 341880},/*(呸)*/
    {.w_px = 16,	.glyph_index = 342048},/*(胚)*/
    {.w_px = 16,	.glyph_index = 342216},/*(培)*/
    {.w_px = 16,	.glyph_index = 342384},/*(裴)*/
    {.w_px = 16,	.glyph_index = 342552},/*(赔)*/
    {.w_px = 16,	.glyph_index = 342720},/*(陪)*/
    {.w_px = 16,	.glyph_index = 342888},/*(配)*/
    {.w_px = 16,	.glyph_index = 343056},/*(佩)*/
    {.w_px = 16,	.glyph_index = 343224},/*(沛)*/
    {.w_px = 16,	.glyph_index = 343392},/*(喷)*/
    {.w_px = 16,	.glyph_index = 343560},/*(盆)*/
    {.w_px = 16,	.glyph_index = 343728},/*(砰)*/
    {.w_px = 16,	.glyph_index = 343896},/*(抨)*/
    {.w_px = 16,	.glyph_index = 344064},/*(烹)*/
    {.w_px = 16,	.glyph_index = 344232},/*(澎)*/
    {.w_px = 16,	.glyph_index = 344400},/*(彭)*/
    {.w_px = 16,	.glyph_index = 344568},/*(蓬)*/
    {.w_px = 16,	.glyph_index = 344736},/*(棚)*/
    {.w_px = 16,	.glyph_index = 344904},/*(硼)*/
    {.w_px = 16,	.glyph_index = 345072},/*(篷)*/
    {.w_px = 16,	.glyph_index = 345240},/*(膨)*/
    {.w_px = 16,	.glyph_index = 345408},/*(朋)*/
    {.w_px = 16,	.glyph_index = 345576},/*(鹏)*/
    {.w_px = 16,	.glyph_index = 345744},/*(捧)*/
    {.w_px = 16,	.glyph_index = 345912},/*(碰)*/
    {.w_px = 16,	.glyph_index = 346080},/*(坯)*/
    {.w_px = 16,	.glyph_index = 346248},/*(砒)*/
    {.w_px = 16,	.glyph_index = 346416},/*(霹)*/
    {.w_px = 16,	.glyph_index = 346584},/*(批)*/
    {.w_px = 16,	.glyph_index = 346752},/*(披)*/
    {.w_px = 16,	.glyph_index = 346920},/*(劈)*/
    {.w_px = 16,	.glyph_index = 347088},/*(琵)*/
    {.w_px = 16,	.glyph_index = 347256},/*(毗)*/
    {.w_px = 16,	.glyph_index = 347424},/*(啤)*/
    {.w_px = 16,	.glyph_index = 347592},/*(脾)*/
    {.w_px = 16,	.glyph_index = 347760},/*(疲)*/
    {.w_px = 16,	.glyph_index = 347928},/*(皮)*/
    {.w_px = 16,	.glyph_index = 348096},/*(匹)*/
    {.w_px = 16,	.glyph_index = 348264},/*(痞)*/
    {.w_px = 16,	.glyph_index = 348432},/*(僻)*/
    {.w_px = 16,	.glyph_index = 348600},/*(屁)*/
    {.w_px = 16,	.glyph_index = 348768},/*(譬)*/
    {.w_px = 16,	.glyph_index = 348936},/*(篇)*/
    {.w_px = 16,	.glyph_index = 349104},/*(偏)*/
    {.w_px = 16,	.glyph_index = 349272},/*(片)*/
    {.w_px = 16,	.glyph_index = 349440},/*(骗)*/
    {.w_px = 16,	.glyph_index = 349608},/*(飘)*/
    {.w_px = 16,	.glyph_index = 349776},/*(漂)*/
    {.w_px = 16,	.glyph_index = 349944},/*(瓢)*/
    {.w_px = 16,	.glyph_index = 350112},/*(票)*/
    {.w_px = 16,	.glyph_index = 350280},/*(撇)*/
    {.w_px = 16,	.glyph_index = 350448},/*(瞥)*/
    {.w_px = 16,	.glyph_index = 350616},/*(拼)*/
    {.w_px = 16,	.glyph_index = 350784},/*(频)*/
    {.w_px = 16,	.glyph_index = 350952},/*(贫)*/
    {.w_px = 16,	.glyph_index = 351120},/*(品)*/
    {.w_px = 16,	.glyph_index = 351288},/*(聘)*/
    {.w_px = 16,	.glyph_index = 351456},/*(乒)*/
    {.w_px = 16,	.glyph_index = 351624},/*(坪)*/
    {.w_px = 16,	.glyph_index = 351792},/*(苹)*/
    {.w_px = 16,	.glyph_index = 351960},/*(萍)*/
    {.w_px = 16,	.glyph_index = 352128},/*(平)*/
    {.w_px = 16,	.glyph_index = 352296},/*(凭)*/
    {.w_px = 16,	.glyph_index = 352464},/*(瓶)*/
    {.w_px = 16,	.glyph_index = 352632},/*(评)*/
    {.w_px = 16,	.glyph_index = 352800},/*(屏)*/
    {.w_px = 16,	.glyph_index = 352968},/*(坡)*/
    {.w_px = 16,	.glyph_index = 353136},/*(泼)*/
    {.w_px = 16,	.glyph_index = 353304},/*(颇)*/
    {.w_px = 16,	.glyph_index = 353472},/*(婆)*/
    {.w_px = 16,	.glyph_index = 353640},/*(破)*/
    {.w_px = 16,	.glyph_index = 353808},/*(魄)*/
    {.w_px = 16,	.glyph_index = 353976},/*(迫)*/
    {.w_px = 16,	.glyph_index = 354144},/*(粕)*/
    {.w_px = 16,	.glyph_index = 354312},/*(剖)*/
    {.w_px = 16,	.glyph_index = 354480},/*(扑)*/
    {.w_px = 16,	.glyph_index = 354648},/*(铺)*/
    {.w_px = 16,	.glyph_index = 354816},/*(仆)*/
    {.w_px = 16,	.glyph_index = 354984},/*(莆)*/
    {.w_px = 16,	.glyph_index = 355152},/*(葡)*/
    {.w_px = 16,	.glyph_index = 355320},/*(菩)*/
    {.w_px = 16,	.glyph_index = 355488},/*(蒲)*/
    {.w_px = 16,	.glyph_index = 355656},/*(埔)*/
    {.w_px = 16,	.glyph_index = 355824},/*(朴)*/
    {.w_px = 16,	.glyph_index = 355992},/*(圃)*/
    {.w_px = 16,	.glyph_index = 356160},/*(普)*/
    {.w_px = 16,	.glyph_index = 356328},/*(浦)*/
    {.w_px = 16,	.glyph_index = 356496},/*(谱)*/
    {.w_px = 16,	.glyph_index = 356664},/*(曝)*/
    {.w_px = 16,	.glyph_index = 356832},/*(瀑)*/
    {.w_px = 16,	.glyph_index = 357000},/*(期)*/
    {.w_px = 16,	.glyph_index = 357168},/*(欺)*/
    {.w_px = 16,	.glyph_index = 357336},/*(栖)*/
    {.w_px = 16,	.glyph_index = 357504},/*(戚)*/
    {.w_px = 16,	.glyph_index = 357672},/*(妻)*/
    {.w_px = 16,	.glyph_index = 357840},/*(七)*/
    {.w_px = 16,	.glyph_index = 358008},/*(凄)*/
    {.w_px = 16,	.glyph_index = 358176},/*(漆)*/
    {.w_px = 16,	.glyph_index = 358344},/*(柒)*/
    {.w_px = 16,	.glyph_index = 358512},/*(沏)*/
    {.w_px = 16,	.glyph_index = 358680},/*(其)*/
    {.w_px = 16,	.glyph_index = 358848},/*(棋)*/
    {.w_px = 16,	.glyph_index = 359016},/*(奇)*/
    {.w_px = 16,	.glyph_index = 359184},/*(歧)*/
    {.w_px = 16,	.glyph_index = 359352},/*(畦)*/
    {.w_px = 16,	.glyph_index = 359520},/*(崎)*/
    {.w_px = 16,	.glyph_index = 359688},/*(脐)*/
    {.w_px = 16,	.glyph_index = 359856},/*(齐)*/
    {.w_px = 16,	.glyph_index = 360024},/*(旗)*/
    {.w_px = 16,	.glyph_index = 360192},/*(祈)*/
    {.w_px = 16,	.glyph_index = 360360},/*(祁)*/
    {.w_px = 16,	.glyph_index = 360528},/*(骑)*/
    {.w_px = 16,	.glyph_index = 360696},/*(起)*/
    {.w_px = 16,	.glyph_index = 360864},/*(岂)*/
    {.w_px = 16,	.glyph_index = 361032},/*(乞)*/
    {.w_px = 16,	.glyph_index = 361200},/*(企)*/
    {.w_px = 16,	.glyph_index = 361368},/*(启)*/
    {.w_px = 16,	.glyph_index = 361536},/*(契)*/
    {.w_px = 16,	.glyph_index = 361704},/*(砌)*/
    {.w_px = 16,	.glyph_index = 361872},/*(器)*/
    {.w_px = 16,	.glyph_index = 362040},/*(气)*/
    {.w_px = 16,	.glyph_index = 362208},/*(迄)*/
    {.w_px = 16,	.glyph_index = 362376},/*(弃)*/
    {.w_px = 16,	.glyph_index = 362544},/*(汽)*/
    {.w_px = 16,	.glyph_index = 362712},/*(泣)*/
    {.w_px = 16,	.glyph_index = 362880},/*(讫)*/
    {.w_px = 16,	.glyph_index = 363048},/*(掐)*/
    {.w_px = 16,	.glyph_index = 363216},/*(恰)*/
    {.w_px = 16,	.glyph_index = 363384},/*(洽)*/
    {.w_px = 16,	.glyph_index = 363552},/*(牵)*/
    {.w_px = 16,	.glyph_index = 363720},/*(扦)*/
    {.w_px = 16,	.glyph_index = 363888},/*(钎)*/
    {.w_px = 16,	.glyph_index = 364056},/*(铅)*/
    {.w_px = 16,	.glyph_index = 364224},/*(千)*/
    {.w_px = 16,	.glyph_index = 364392},/*(迁)*/
    {.w_px = 16,	.glyph_index = 364560},/*(签)*/
    {.w_px = 16,	.glyph_index = 364728},/*(仟)*/
    {.w_px = 16,	.glyph_index = 364896},/*(谦)*/
    {.w_px = 16,	.glyph_index = 365064},/*(乾)*/
    {.w_px = 16,	.glyph_index = 365232},/*(黔)*/
    {.w_px = 16,	.glyph_index = 365400},/*(钱)*/
    {.w_px = 16,	.glyph_index = 365568},/*(钳)*/
    {.w_px = 16,	.glyph_index = 365736},/*(前)*/
    {.w_px = 16,	.glyph_index = 365904},/*(潜)*/
    {.w_px = 16,	.glyph_index = 366072},/*(遣)*/
    {.w_px = 16,	.glyph_index = 366240},/*(浅)*/
    {.w_px = 16,	.glyph_index = 366408},/*(谴)*/
    {.w_px = 16,	.glyph_index = 366576},/*(堑)*/
    {.w_px = 16,	.glyph_index = 366744},/*(嵌)*/
    {.w_px = 16,	.glyph_index = 366912},/*(欠)*/
    {.w_px = 16,	.glyph_index = 367080},/*(歉)*/
    {.w_px = 16,	.glyph_index = 367248},/*(枪)*/
    {.w_px = 16,	.glyph_index = 367416},/*(呛)*/
    {.w_px = 16,	.glyph_index = 367584},/*(腔)*/
    {.w_px = 16,	.glyph_index = 367752},/*(羌)*/
    {.w_px = 16,	.glyph_index = 367920},/*(墙)*/
    {.w_px = 16,	.glyph_index = 368088},/*(蔷)*/
    {.w_px = 16,	.glyph_index = 368256},/*(强)*/
    {.w_px = 16,	.glyph_index = 368424},/*(抢)*/
    {.w_px = 16,	.glyph_index = 368592},/*(橇)*/
    {.w_px = 16,	.glyph_index = 368760},/*(锹)*/
    {.w_px = 16,	.glyph_index = 368928},/*(敲)*/
    {.w_px = 16,	.glyph_index = 369096},/*(悄)*/
    {.w_px = 16,	.glyph_index = 369264},/*(桥)*/
    {.w_px = 16,	.glyph_index = 369432},/*(瞧)*/
    {.w_px = 16,	.glyph_index = 369600},/*(乔)*/
    {.w_px = 16,	.glyph_index = 369768},/*(侨)*/
    {.w_px = 16,	.glyph_index = 369936},/*(巧)*/
    {.w_px = 16,	.glyph_index = 370104},/*(鞘)*/
    {.w_px = 16,	.glyph_index = 370272},/*(撬)*/
    {.w_px = 16,	.glyph_index = 370440},/*(翘)*/
    {.w_px = 16,	.glyph_index = 370608},/*(峭)*/
    {.w_px = 16,	.glyph_index = 370776},/*(俏)*/
    {.w_px = 16,	.glyph_index = 370944},/*(窍)*/
    {.w_px = 16,	.glyph_index = 371112},/*(切)*/
    {.w_px = 16,	.glyph_index = 371280},/*(茄)*/
    {.w_px = 16,	.glyph_index = 371448},/*(且)*/
    {.w_px = 16,	.glyph_index = 371616},/*(怯)*/
    {.w_px = 16,	.glyph_index = 371784},/*(窃)*/
    {.w_px = 16,	.glyph_index = 371952},/*(钦)*/
    {.w_px = 16,	.glyph_index = 372120},/*(侵)*/
    {.w_px = 16,	.glyph_index = 372288},/*(亲)*/
    {.w_px = 16,	.glyph_index = 372456},/*(秦)*/
    {.w_px = 16,	.glyph_index = 372624},/*(琴)*/
    {.w_px = 16,	.glyph_index = 372792},/*(勤)*/
    {.w_px = 16,	.glyph_index = 372960},/*(芹)*/
    {.w_px = 16,	.glyph_index = 373128},/*(擒)*/
    {.w_px = 16,	.glyph_index = 373296},/*(禽)*/
    {.w_px = 16,	.glyph_index = 373464},/*(寝)*/
    {.w_px = 16,	.glyph_index = 373632},/*(沁)*/
    {.w_px = 16,	.glyph_index = 373800},/*(青)*/
    {.w_px = 16,	.glyph_index = 373968},/*(轻)*/
    {.w_px = 16,	.glyph_index = 374136},/*(氢)*/
    {.w_px = 16,	.glyph_index = 374304},/*(倾)*/
    {.w_px = 16,	.glyph_index = 374472},/*(卿)*/
    {.w_px = 16,	.glyph_index = 374640},/*(清)*/
    {.w_px = 16,	.glyph_index = 374808},/*(擎)*/
    {.w_px = 16,	.glyph_index = 374976},/*(晴)*/
    {.w_px = 16,	.glyph_index = 375144},/*(氰)*/
    {.w_px = 16,	.glyph_index = 375312},/*(情)*/
    {.w_px = 16,	.glyph_index = 375480},/*(顷)*/
    {.w_px = 16,	.glyph_index = 375648},/*(请)*/
    {.w_px = 16,	.glyph_index = 375816},/*(庆)*/
    {.w_px = 16,	.glyph_index = 375984},/*(琼)*/
    {.w_px = 16,	.glyph_index = 376152},/*(穷)*/
    {.w_px = 16,	.glyph_index = 376320},/*(秋)*/
    {.w_px = 16,	.glyph_index = 376488},/*(丘)*/
    {.w_px = 16,	.glyph_index = 376656},/*(邱)*/
    {.w_px = 16,	.glyph_index = 376824},/*(球)*/
    {.w_px = 16,	.glyph_index = 376992},/*(求)*/
    {.w_px = 16,	.glyph_index = 377160},/*(囚)*/
    {.w_px = 16,	.glyph_index = 377328},/*(酋)*/
    {.w_px = 16,	.glyph_index = 377496},/*(泅)*/
    {.w_px = 16,	.glyph_index = 377664},/*(趋)*/
    {.w_px = 16,	.glyph_index = 377832},/*(区)*/
    {.w_px = 16,	.glyph_index = 378000},/*(蛆)*/
    {.w_px = 16,	.glyph_index = 378168},/*(曲)*/
    {.w_px = 16,	.glyph_index = 378336},/*(躯)*/
    {.w_px = 16,	.glyph_index = 378504},/*(屈)*/
    {.w_px = 16,	.glyph_index = 378672},/*(驱)*/
    {.w_px = 16,	.glyph_index = 378840},/*(渠)*/
    {.w_px = 16,	.glyph_index = 379008},/*(取)*/
    {.w_px = 16,	.glyph_index = 379176},/*(娶)*/
    {.w_px = 16,	.glyph_index = 379344},/*(龋)*/
    {.w_px = 16,	.glyph_index = 379512},/*(趣)*/
    {.w_px = 16,	.glyph_index = 379680},/*(去)*/
    {.w_px = 16,	.glyph_index = 379848},/*(圈)*/
    {.w_px = 16,	.glyph_index = 380016},/*(颧)*/
    {.w_px = 16,	.glyph_index = 380184},/*(权)*/
    {.w_px = 16,	.glyph_index = 380352},/*(醛)*/
    {.w_px = 16,	.glyph_index = 380520},/*(泉)*/
    {.w_px = 16,	.glyph_index = 380688},/*(全)*/
    {.w_px = 16,	.glyph_index = 380856},/*(痊)*/
    {.w_px = 16,	.glyph_index = 381024},/*(拳)*/
    {.w_px = 16,	.glyph_index = 381192},/*(犬)*/
    {.w_px = 16,	.glyph_index = 381360},/*(券)*/
    {.w_px = 16,	.glyph_index = 381528},/*(劝)*/
    {.w_px = 16,	.glyph_index = 381696},/*(缺)*/
    {.w_px = 16,	.glyph_index = 381864},/*(炔)*/
    {.w_px = 16,	.glyph_index = 382032},/*(瘸)*/
    {.w_px = 16,	.glyph_index = 382200},/*(却)*/
    {.w_px = 16,	.glyph_index = 382368},/*(鹊)*/
    {.w_px = 16,	.glyph_index = 382536},/*(榷)*/
    {.w_px = 16,	.glyph_index = 382704},/*(确)*/
    {.w_px = 16,	.glyph_index = 382872},/*(雀)*/
    {.w_px = 16,	.glyph_index = 383040},/*(裙)*/
    {.w_px = 16,	.glyph_index = 383208},/*(群)*/
    {.w_px = 16,	.glyph_index = 383376},/*(然)*/
    {.w_px = 16,	.glyph_index = 383544},/*(燃)*/
    {.w_px = 16,	.glyph_index = 383712},/*(冉)*/
    {.w_px = 16,	.glyph_index = 383880},/*(染)*/
    {.w_px = 16,	.glyph_index = 384048},/*(瓤)*/
    {.w_px = 16,	.glyph_index = 384216},/*(壤)*/
    {.w_px = 16,	.glyph_index = 384384},/*(攘)*/
    {.w_px = 16,	.glyph_index = 384552},/*(嚷)*/
    {.w_px = 16,	.glyph_index = 384720},/*(让)*/
    {.w_px = 16,	.glyph_index = 384888},/*(饶)*/
    {.w_px = 16,	.glyph_index = 385056},/*(扰)*/
    {.w_px = 16,	.glyph_index = 385224},/*(绕)*/
    {.w_px = 16,	.glyph_index = 385392},/*(惹)*/
    {.w_px = 16,	.glyph_index = 385560},/*(热)*/
    {.w_px = 16,	.glyph_index = 385728},/*(壬)*/
    {.w_px = 16,	.glyph_index = 385896},/*(仁)*/
    {.w_px = 16,	.glyph_index = 386064},/*(人)*/
    {.w_px = 16,	.glyph_index = 386232},/*(忍)*/
    {.w_px = 16,	.glyph_index = 386400},/*(韧)*/
    {.w_px = 16,	.glyph_index = 386568},/*(任)*/
    {.w_px = 16,	.glyph_index = 386736},/*(认)*/
    {.w_px = 16,	.glyph_index = 386904},/*(刃)*/
    {.w_px = 16,	.glyph_index = 387072},/*(妊)*/
    {.w_px = 16,	.glyph_index = 387240},/*(纫)*/
    {.w_px = 16,	.glyph_index = 387408},/*(扔)*/
    {.w_px = 16,	.glyph_index = 387576},/*(仍)*/
    {.w_px = 16,	.glyph_index = 387744},/*(日)*/
    {.w_px = 16,	.glyph_index = 387912},/*(戎)*/
    {.w_px = 16,	.glyph_index = 388080},/*(茸)*/
    {.w_px = 16,	.glyph_index = 388248},/*(蓉)*/
    {.w_px = 16,	.glyph_index = 388416},/*(荣)*/
    {.w_px = 16,	.glyph_index = 388584},/*(融)*/
    {.w_px = 16,	.glyph_index = 388752},/*(熔)*/
    {.w_px = 16,	.glyph_index = 388920},/*(溶)*/
    {.w_px = 16,	.glyph_index = 389088},/*(容)*/
    {.w_px = 16,	.glyph_index = 389256},/*(绒)*/
    {.w_px = 16,	.glyph_index = 389424},/*(冗)*/
    {.w_px = 16,	.glyph_index = 389592},/*(揉)*/
    {.w_px = 16,	.glyph_index = 389760},/*(柔)*/
    {.w_px = 16,	.glyph_index = 389928},/*(肉)*/
    {.w_px = 16,	.glyph_index = 390096},/*(茹)*/
    {.w_px = 16,	.glyph_index = 390264},/*(蠕)*/
    {.w_px = 16,	.glyph_index = 390432},/*(儒)*/
    {.w_px = 16,	.glyph_index = 390600},/*(孺)*/
    {.w_px = 16,	.glyph_index = 390768},/*(如)*/
    {.w_px = 16,	.glyph_index = 390936},/*(辱)*/
    {.w_px = 16,	.glyph_index = 391104},/*(乳)*/
    {.w_px = 16,	.glyph_index = 391272},/*(汝)*/
    {.w_px = 16,	.glyph_index = 391440},/*(入)*/
    {.w_px = 16,	.glyph_index = 391608},/*(褥)*/
    {.w_px = 16,	.glyph_index = 391776},/*(软)*/
    {.w_px = 16,	.glyph_index = 391944},/*(阮)*/
    {.w_px = 16,	.glyph_index = 392112},/*(蕊)*/
    {.w_px = 16,	.glyph_index = 392280},/*(瑞)*/
    {.w_px = 16,	.glyph_index = 392448},/*(锐)*/
    {.w_px = 16,	.glyph_index = 392616},/*(闰)*/
    {.w_px = 16,	.glyph_index = 392784},/*(润)*/
    {.w_px = 16,	.glyph_index = 392952},/*(若)*/
    {.w_px = 16,	.glyph_index = 393120},/*(弱)*/
    {.w_px = 16,	.glyph_index = 393288},/*(撒)*/
    {.w_px = 16,	.glyph_index = 393456},/*(洒)*/
    {.w_px = 16,	.glyph_index = 393624},/*(萨)*/
    {.w_px = 16,	.glyph_index = 393792},/*(腮)*/
    {.w_px = 16,	.glyph_index = 393960},/*(鳃)*/
    {.w_px = 16,	.glyph_index = 394128},/*(塞)*/
    {.w_px = 16,	.glyph_index = 394296},/*(赛)*/
    {.w_px = 16,	.glyph_index = 394464},/*(三)*/
    {.w_px = 16,	.glyph_index = 394632},/*(叁)*/
    {.w_px = 16,	.glyph_index = 394800},/*(伞)*/
    {.w_px = 16,	.glyph_index = 394968},/*(散)*/
    {.w_px = 16,	.glyph_index = 395136},/*(桑)*/
    {.w_px = 16,	.glyph_index = 395304},/*(嗓)*/
    {.w_px = 16,	.glyph_index = 395472},/*(丧)*/
    {.w_px = 16,	.glyph_index = 395640},/*(搔)*/
    {.w_px = 16,	.glyph_index = 395808},/*(骚)*/
    {.w_px = 16,	.glyph_index = 395976},/*(扫)*/
    {.w_px = 16,	.glyph_index = 396144},/*(嫂)*/
    {.w_px = 16,	.glyph_index = 396312},/*(瑟)*/
    {.w_px = 16,	.glyph_index = 396480},/*(色)*/
    {.w_px = 16,	.glyph_index = 396648},/*(涩)*/
    {.w_px = 16,	.glyph_index = 396816},/*(森)*/
    {.w_px = 16,	.glyph_index = 396984},/*(僧)*/
    {.w_px = 16,	.glyph_index = 397152},/*(莎)*/
    {.w_px = 16,	.glyph_index = 397320},/*(砂)*/
    {.w_px = 16,	.glyph_index = 397488},/*(杀)*/
    {.w_px = 16,	.glyph_index = 397656},/*(刹)*/
    {.w_px = 16,	.glyph_index = 397824},/*(沙)*/
    {.w_px = 16,	.glyph_index = 397992},/*(纱)*/
    {.w_px = 16,	.glyph_index = 398160},/*(傻)*/
    {.w_px = 16,	.glyph_index = 398328},/*(啥)*/
    {.w_px = 16,	.glyph_index = 398496},/*(煞)*/
    {.w_px = 16,	.glyph_index = 398664},/*(筛)*/
    {.w_px = 16,	.glyph_index = 398832},/*(晒)*/
    {.w_px = 16,	.glyph_index = 399000},/*(珊)*/
    {.w_px = 16,	.glyph_index = 399168},/*(苫)*/
    {.w_px = 16,	.glyph_index = 399336},/*(杉)*/
    {.w_px = 16,	.glyph_index = 399504},/*(山)*/
    {.w_px = 16,	.glyph_index = 399672},/*(删)*/
    {.w_px = 16,	.glyph_index = 399840},/*(煽)*/
    {.w_px = 16,	.glyph_index = 400008},/*(衫)*/
    {.w_px = 16,	.glyph_index = 400176},/*(闪)*/
    {.w_px = 16,	.glyph_index = 400344},/*(陕)*/
    {.w_px = 16,	.glyph_index = 400512},/*(擅)*/
    {.w_px = 16,	.glyph_index = 400680},/*(赡)*/
    {.w_px = 16,	.glyph_index = 400848},/*(膳)*/
    {.w_px = 16,	.glyph_index = 401016},/*(善)*/
    {.w_px = 16,	.glyph_index = 401184},/*(汕)*/
    {.w_px = 16,	.glyph_index = 401352},/*(扇)*/
    {.w_px = 16,	.glyph_index = 401520},/*(缮)*/
    {.w_px = 16,	.glyph_index = 401688},/*(墒)*/
    {.w_px = 16,	.glyph_index = 401856},/*(伤)*/
    {.w_px = 16,	.glyph_index = 402024},/*(商)*/
    {.w_px = 16,	.glyph_index = 402192},/*(赏)*/
    {.w_px = 16,	.glyph_index = 402360},/*(晌)*/
    {.w_px = 16,	.glyph_index = 402528},/*(上)*/
    {.w_px = 16,	.glyph_index = 402696},/*(尚)*/
    {.w_px = 16,	.glyph_index = 402864},/*(裳)*/
    {.w_px = 16,	.glyph_index = 403032},/*(梢)*/
    {.w_px = 16,	.glyph_index = 403200},/*(捎)*/
    {.w_px = 16,	.glyph_index = 403368},/*(稍)*/
    {.w_px = 16,	.glyph_index = 403536},/*(烧)*/
    {.w_px = 16,	.glyph_index = 403704},/*(芍)*/
    {.w_px = 16,	.glyph_index = 403872},/*(勺)*/
    {.w_px = 16,	.glyph_index = 404040},/*(韶)*/
    {.w_px = 16,	.glyph_index = 404208},/*(少)*/
    {.w_px = 16,	.glyph_index = 404376},/*(哨)*/
    {.w_px = 16,	.glyph_index = 404544},/*(邵)*/
    {.w_px = 16,	.glyph_index = 404712},/*(绍)*/
    {.w_px = 16,	.glyph_index = 404880},/*(奢)*/
    {.w_px = 16,	.glyph_index = 405048},/*(赊)*/
    {.w_px = 16,	.glyph_index = 405216},/*(蛇)*/
    {.w_px = 16,	.glyph_index = 405384},/*(舌)*/
    {.w_px = 16,	.glyph_index = 405552},/*(舍)*/
    {.w_px = 16,	.glyph_index = 405720},/*(赦)*/
    {.w_px = 16,	.glyph_index = 405888},/*(摄)*/
    {.w_px = 16,	.glyph_index = 406056},/*(射)*/
    {.w_px = 16,	.glyph_index = 406224},/*(慑)*/
    {.w_px = 16,	.glyph_index = 406392},/*(涉)*/
    {.w_px = 16,	.glyph_index = 406560},/*(社)*/
    {.w_px = 16,	.glyph_index = 406728},/*(设)*/
    {.w_px = 16,	.glyph_index = 406896},/*(砷)*/
    {.w_px = 16,	.glyph_index = 407064},/*(申)*/
    {.w_px = 16,	.glyph_index = 407232},/*(呻)*/
    {.w_px = 16,	.glyph_index = 407400},/*(伸)*/
    {.w_px = 16,	.glyph_index = 407568},/*(身)*/
    {.w_px = 16,	.glyph_index = 407736},/*(深)*/
    {.w_px = 16,	.glyph_index = 407904},/*(娠)*/
    {.w_px = 16,	.glyph_index = 408072},/*(绅)*/
    {.w_px = 16,	.glyph_index = 408240},/*(神)*/
    {.w_px = 16,	.glyph_index = 408408},/*(沈)*/
    {.w_px = 16,	.glyph_index = 408576},/*(审)*/
    {.w_px = 16,	.glyph_index = 408744},/*(婶)*/
    {.w_px = 16,	.glyph_index = 408912},/*(甚)*/
    {.w_px = 16,	.glyph_index = 409080},/*(肾)*/
    {.w_px = 16,	.glyph_index = 409248},/*(慎)*/
    {.w_px = 16,	.glyph_index = 409416},/*(渗)*/
    {.w_px = 16,	.glyph_index = 409584},/*(声)*/
    {.w_px = 16,	.glyph_index = 409752},/*(生)*/
    {.w_px = 16,	.glyph_index = 409920},/*(甥)*/
    {.w_px = 16,	.glyph_index = 410088},/*(牲)*/
    {.w_px = 16,	.glyph_index = 410256},/*(升)*/
    {.w_px = 16,	.glyph_index = 410424},/*(绳)*/
    {.w_px = 16,	.glyph_index = 410592},/*(省)*/
    {.w_px = 16,	.glyph_index = 410760},/*(盛)*/
    {.w_px = 16,	.glyph_index = 410928},/*(剩)*/
    {.w_px = 16,	.glyph_index = 411096},/*(胜)*/
    {.w_px = 16,	.glyph_index = 411264},/*(圣)*/
    {.w_px = 16,	.glyph_index = 411432},/*(师)*/
    {.w_px = 16,	.glyph_index = 411600},/*(失)*/
    {.w_px = 16,	.glyph_index = 411768},/*(狮)*/
    {.w_px = 16,	.glyph_index = 411936},/*(施)*/
    {.w_px = 16,	.glyph_index = 412104},/*(湿)*/
    {.w_px = 16,	.glyph_index = 412272},/*(诗)*/
    {.w_px = 16,	.glyph_index = 412440},/*(尸)*/
    {.w_px = 16,	.glyph_index = 412608},/*(虱)*/
    {.w_px = 16,	.glyph_index = 412776},/*(十)*/
    {.w_px = 16,	.glyph_index = 412944},/*(石)*/
    {.w_px = 16,	.glyph_index = 413112},/*(拾)*/
    {.w_px = 16,	.glyph_index = 413280},/*(时)*/
    {.w_px = 16,	.glyph_index = 413448},/*(什)*/
    {.w_px = 16,	.glyph_index = 413616},/*(食)*/
    {.w_px = 16,	.glyph_index = 413784},/*(蚀)*/
    {.w_px = 16,	.glyph_index = 413952},/*(实)*/
    {.w_px = 16,	.glyph_index = 414120},/*(识)*/
    {.w_px = 16,	.glyph_index = 414288},/*(史)*/
    {.w_px = 16,	.glyph_index = 414456},/*(矢)*/
    {.w_px = 16,	.glyph_index = 414624},/*(使)*/
    {.w_px = 16,	.glyph_index = 414792},/*(屎)*/
    {.w_px = 16,	.glyph_index = 414960},/*(驶)*/
    {.w_px = 16,	.glyph_index = 415128},/*(始)*/
    {.w_px = 16,	.glyph_index = 415296},/*(式)*/
    {.w_px = 16,	.glyph_index = 415464},/*(示)*/
    {.w_px = 16,	.glyph_index = 415632},/*(士)*/
    {.w_px = 16,	.glyph_index = 415800},/*(世)*/
    {.w_px = 16,	.glyph_index = 415968},/*(柿)*/
    {.w_px = 16,	.glyph_index = 416136},/*(事)*/
    {.w_px = 16,	.glyph_index = 416304},/*(拭)*/
    {.w_px = 16,	.glyph_index = 416472},/*(誓)*/
    {.w_px = 16,	.glyph_index = 416640},/*(逝)*/
    {.w_px = 16,	.glyph_index = 416808},/*(势)*/
    {.w_px = 16,	.glyph_index = 416976},/*(是)*/
    {.w_px = 16,	.glyph_index = 417144},/*(嗜)*/
    {.w_px = 16,	.glyph_index = 417312},/*(噬)*/
    {.w_px = 16,	.glyph_index = 417480},/*(适)*/
    {.w_px = 16,	.glyph_index = 417648},/*(仕)*/
    {.w_px = 16,	.glyph_index = 417816},/*(侍)*/
    {.w_px = 16,	.glyph_index = 417984},/*(释)*/
    {.w_px = 16,	.glyph_index = 418152},/*(饰)*/
    {.w_px = 16,	.glyph_index = 418320},/*(氏)*/
    {.w_px = 16,	.glyph_index = 418488},/*(市)*/
    {.w_px = 16,	.glyph_index = 418656},/*(恃)*/
    {.w_px = 16,	.glyph_index = 418824},/*(室)*/
    {.w_px = 16,	.glyph_index = 418992},/*(视)*/
    {.w_px = 16,	.glyph_index = 419160},/*(试)*/
    {.w_px = 16,	.glyph_index = 419328},/*(收)*/
    {.w_px = 16,	.glyph_index = 419496},/*(手)*/
    {.w_px = 16,	.glyph_index = 419664},/*(首)*/
    {.w_px = 16,	.glyph_index = 419832},/*(守)*/
    {.w_px = 16,	.glyph_index = 420000},/*(寿)*/
    {.w_px = 16,	.glyph_index = 420168},/*(授)*/
    {.w_px = 16,	.glyph_index = 420336},/*(售)*/
    {.w_px = 16,	.glyph_index = 420504},/*(受)*/
    {.w_px = 16,	.glyph_index = 420672},/*(瘦)*/
    {.w_px = 16,	.glyph_index = 420840},/*(兽)*/
    {.w_px = 16,	.glyph_index = 421008},/*(蔬)*/
    {.w_px = 16,	.glyph_index = 421176},/*(枢)*/
    {.w_px = 16,	.glyph_index = 421344},/*(梳)*/
    {.w_px = 16,	.glyph_index = 421512},/*(殊)*/
    {.w_px = 16,	.glyph_index = 421680},/*(抒)*/
    {.w_px = 16,	.glyph_index = 421848},/*(输)*/
    {.w_px = 16,	.glyph_index = 422016},/*(叔)*/
    {.w_px = 16,	.glyph_index = 422184},/*(舒)*/
    {.w_px = 16,	.glyph_index = 422352},/*(淑)*/
    {.w_px = 16,	.glyph_index = 422520},/*(疏)*/
    {.w_px = 16,	.glyph_index = 422688},/*(书)*/
    {.w_px = 16,	.glyph_index = 422856},/*(赎)*/
    {.w_px = 16,	.glyph_index = 423024},/*(孰)*/
    {.w_px = 16,	.glyph_index = 423192},/*(熟)*/
    {.w_px = 16,	.glyph_index = 423360},/*(薯)*/
    {.w_px = 16,	.glyph_index = 423528},/*(暑)*/
    {.w_px = 16,	.glyph_index = 423696},/*(曙)*/
    {.w_px = 16,	.glyph_index = 423864},/*(署)*/
    {.w_px = 16,	.glyph_index = 424032},/*(蜀)*/
    {.w_px = 16,	.glyph_index = 424200},/*(黍)*/
    {.w_px = 16,	.glyph_index = 424368},/*(鼠)*/
    {.w_px = 16,	.glyph_index = 424536},/*(属)*/
    {.w_px = 16,	.glyph_index = 424704},/*(术)*/
    {.w_px = 16,	.glyph_index = 424872},/*(述)*/
    {.w_px = 16,	.glyph_index = 425040},/*(树)*/
    {.w_px = 16,	.glyph_index = 425208},/*(束)*/
    {.w_px = 16,	.glyph_index = 425376},/*(戍)*/
    {.w_px = 16,	.glyph_index = 425544},/*(竖)*/
    {.w_px = 16,	.glyph_index = 425712},/*(墅)*/
    {.w_px = 16,	.glyph_index = 425880},/*(庶)*/
    {.w_px = 16,	.glyph_index = 426048},/*(数)*/
    {.w_px = 16,	.glyph_index = 426216},/*(漱)*/
    {.w_px = 16,	.glyph_index = 426384},/*(恕)*/
    {.w_px = 16,	.glyph_index = 426552},/*(刷)*/
    {.w_px = 16,	.glyph_index = 426720},/*(耍)*/
    {.w_px = 16,	.glyph_index = 426888},/*(摔)*/
    {.w_px = 16,	.glyph_index = 427056},/*(衰)*/
    {.w_px = 16,	.glyph_index = 427224},/*(甩)*/
    {.w_px = 16,	.glyph_index = 427392},/*(帅)*/
    {.w_px = 16,	.glyph_index = 427560},/*(栓)*/
    {.w_px = 16,	.glyph_index = 427728},/*(拴)*/
    {.w_px = 16,	.glyph_index = 427896},/*(霜)*/
    {.w_px = 16,	.glyph_index = 428064},/*(双)*/
    {.w_px = 16,	.glyph_index = 428232},/*(爽)*/
    {.w_px = 16,	.glyph_index = 428400},/*(谁)*/
    {.w_px = 16,	.glyph_index = 428568},/*(水)*/
    {.w_px = 16,	.glyph_index = 428736},/*(睡)*/
    {.w_px = 16,	.glyph_index = 428904},/*(税)*/
    {.w_px = 16,	.glyph_index = 429072},/*(吮)*/
    {.w_px = 16,	.glyph_index = 429240},/*(瞬)*/
    {.w_px = 16,	.glyph_index = 429408},/*(顺)*/
    {.w_px = 16,	.glyph_index = 429576},/*(舜)*/
    {.w_px = 16,	.glyph_index = 429744},/*(说)*/
    {.w_px = 16,	.glyph_index = 429912},/*(硕)*/
    {.w_px = 16,	.glyph_index = 430080},/*(朔)*/
    {.w_px = 16,	.glyph_index = 430248},/*(烁)*/
    {.w_px = 16,	.glyph_index = 430416},/*(斯)*/
    {.w_px = 16,	.glyph_index = 430584},/*(撕)*/
    {.w_px = 16,	.glyph_index = 430752},/*(嘶)*/
    {.w_px = 16,	.glyph_index = 430920},/*(思)*/
    {.w_px = 16,	.glyph_index = 431088},/*(私)*/
    {.w_px = 16,	.glyph_index = 431256},/*(司)*/
    {.w_px = 16,	.glyph_index = 431424},/*(丝)*/
    {.w_px = 16,	.glyph_index = 431592},/*(死)*/
    {.w_px = 16,	.glyph_index = 431760},/*(肆)*/
    {.w_px = 16,	.glyph_index = 431928},/*(寺)*/
    {.w_px = 16,	.glyph_index = 432096},/*(嗣)*/
    {.w_px = 16,	.glyph_index = 432264},/*(四)*/
    {.w_px = 16,	.glyph_index = 432432},/*(伺)*/
    {.w_px = 16,	.glyph_index = 432600},/*(似)*/
    {.w_px = 16,	.glyph_index = 432768},/*(饲)*/
    {.w_px = 16,	.glyph_index = 432936},/*(巳)*/
    {.w_px = 16,	.glyph_index = 433104},/*(松)*/
    {.w_px = 16,	.glyph_index = 433272},/*(耸)*/
    {.w_px = 16,	.glyph_index = 433440},/*(怂)*/
    {.w_px = 16,	.glyph_index = 433608},/*(颂)*/
    {.w_px = 16,	.glyph_index = 433776},/*(送)*/
    {.w_px = 16,	.glyph_index = 433944},/*(宋)*/
    {.w_px = 16,	.glyph_index = 434112},/*(讼)*/
    {.w_px = 16,	.glyph_index = 434280},/*(诵)*/
    {.w_px = 16,	.glyph_index = 434448},/*(搜)*/
    {.w_px = 16,	.glyph_index = 434616},/*(艘)*/
    {.w_px = 16,	.glyph_index = 434784},/*(擞)*/
    {.w_px = 16,	.glyph_index = 434952},/*(嗽)*/
    {.w_px = 16,	.glyph_index = 435120},/*(苏)*/
    {.w_px = 16,	.glyph_index = 435288},/*(酥)*/
    {.w_px = 16,	.glyph_index = 435456},/*(俗)*/
    {.w_px = 16,	.glyph_index = 435624},/*(素)*/
    {.w_px = 16,	.glyph_index = 435792},/*(速)*/
    {.w_px = 16,	.glyph_index = 435960},/*(粟)*/
    {.w_px = 16,	.glyph_index = 436128},/*(僳)*/
    {.w_px = 16,	.glyph_index = 436296},/*(塑)*/
    {.w_px = 16,	.glyph_index = 436464},/*(溯)*/
    {.w_px = 16,	.glyph_index = 436632},/*(宿)*/
    {.w_px = 16,	.glyph_index = 436800},/*(诉)*/
    {.w_px = 16,	.glyph_index = 436968},/*(肃)*/
    {.w_px = 16,	.glyph_index = 437136},/*(酸)*/
    {.w_px = 16,	.glyph_index = 437304},/*(蒜)*/
    {.w_px = 16,	.glyph_index = 437472},/*(算)*/
    {.w_px = 16,	.glyph_index = 437640},/*(虽)*/
    {.w_px = 16,	.glyph_index = 437808},/*(隋)*/
    {.w_px = 16,	.glyph_index = 437976},/*(随)*/
    {.w_px = 16,	.glyph_index = 438144},/*(绥)*/
    {.w_px = 16,	.glyph_index = 438312},/*(髓)*/
    {.w_px = 16,	.glyph_index = 438480},/*(碎)*/
    {.w_px = 16,	.glyph_index = 438648},/*(岁)*/
    {.w_px = 16,	.glyph_index = 438816},/*(穗)*/
    {.w_px = 16,	.glyph_index = 438984},/*(遂)*/
    {.w_px = 16,	.glyph_index = 439152},/*(隧)*/
    {.w_px = 16,	.glyph_index = 439320},/*(祟)*/
    {.w_px = 16,	.glyph_index = 439488},/*(孙)*/
    {.w_px = 16,	.glyph_index = 439656},/*(损)*/
    {.w_px = 16,	.glyph_index = 439824},/*(笋)*/
    {.w_px = 16,	.glyph_index = 439992},/*(蓑)*/
    {.w_px = 16,	.glyph_index = 440160},/*(梭)*/
    {.w_px = 16,	.glyph_index = 440328},/*(唆)*/
    {.w_px = 16,	.glyph_index = 440496},/*(缩)*/
    {.w_px = 16,	.glyph_index = 440664},/*(琐)*/
    {.w_px = 16,	.glyph_index = 440832},/*(索)*/
    {.w_px = 16,	.glyph_index = 441000},/*(锁)*/
    {.w_px = 16,	.glyph_index = 441168},/*(所)*/
    {.w_px = 16,	.glyph_index = 441336},/*(塌)*/
    {.w_px = 16,	.glyph_index = 441504},/*(他)*/
    {.w_px = 16,	.glyph_index = 441672},/*(它)*/
    {.w_px = 16,	.glyph_index = 441840},/*(她)*/
    {.w_px = 16,	.glyph_index = 442008},/*(塔)*/
    {.w_px = 16,	.glyph_index = 442176},/*(獭)*/
    {.w_px = 16,	.glyph_index = 442344},/*(挞)*/
    {.w_px = 16,	.glyph_index = 442512},/*(蹋)*/
    {.w_px = 16,	.glyph_index = 442680},/*(踏)*/
    {.w_px = 16,	.glyph_index = 442848},/*(胎)*/
    {.w_px = 16,	.glyph_index = 443016},/*(苔)*/
    {.w_px = 16,	.glyph_index = 443184},/*(抬)*/
    {.w_px = 16,	.glyph_index = 443352},/*(台)*/
    {.w_px = 16,	.glyph_index = 443520},/*(泰)*/
    {.w_px = 16,	.glyph_index = 443688},/*(酞)*/
    {.w_px = 16,	.glyph_index = 443856},/*(太)*/
    {.w_px = 16,	.glyph_index = 444024},/*(态)*/
    {.w_px = 16,	.glyph_index = 444192},/*(汰)*/
    {.w_px = 16,	.glyph_index = 444360},/*(坍)*/
    {.w_px = 16,	.glyph_index = 444528},/*(摊)*/
    {.w_px = 16,	.glyph_index = 444696},/*(贪)*/
    {.w_px = 16,	.glyph_index = 444864},/*(瘫)*/
    {.w_px = 16,	.glyph_index = 445032},/*(滩)*/
    {.w_px = 16,	.glyph_index = 445200},/*(坛)*/
    {.w_px = 16,	.glyph_index = 445368},/*(檀)*/
    {.w_px = 16,	.glyph_index = 445536},/*(痰)*/
    {.w_px = 16,	.glyph_index = 445704},/*(潭)*/
    {.w_px = 16,	.glyph_index = 445872},/*(谭)*/
    {.w_px = 16,	.glyph_index = 446040},/*(谈)*/
    {.w_px = 16,	.glyph_index = 446208},/*(坦)*/
    {.w_px = 16,	.glyph_index = 446376},/*(毯)*/
    {.w_px = 16,	.glyph_index = 446544},/*(袒)*/
    {.w_px = 16,	.glyph_index = 446712},/*(碳)*/
    {.w_px = 16,	.glyph_index = 446880},/*(探)*/
    {.w_px = 16,	.glyph_index = 447048},/*(叹)*/
    {.w_px = 16,	.glyph_index = 447216},/*(炭)*/
    {.w_px = 16,	.glyph_index = 447384},/*(汤)*/
    {.w_px = 16,	.glyph_index = 447552},/*(塘)*/
    {.w_px = 16,	.glyph_index = 447720},/*(搪)*/
    {.w_px = 16,	.glyph_index = 447888},/*(堂)*/
    {.w_px = 16,	.glyph_index = 448056},/*(棠)*/
    {.w_px = 16,	.glyph_index = 448224},/*(膛)*/
    {.w_px = 16,	.glyph_index = 448392},/*(唐)*/
    {.w_px = 16,	.glyph_index = 448560},/*(糖)*/
    {.w_px = 16,	.glyph_index = 448728},/*(倘)*/
    {.w_px = 16,	.glyph_index = 448896},/*(躺)*/
    {.w_px = 16,	.glyph_index = 449064},/*(淌)*/
    {.w_px = 16,	.glyph_index = 449232},/*(趟)*/
    {.w_px = 16,	.glyph_index = 449400},/*(烫)*/
    {.w_px = 16,	.glyph_index = 449568},/*(掏)*/
    {.w_px = 16,	.glyph_index = 449736},/*(涛)*/
    {.w_px = 16,	.glyph_index = 449904},/*(滔)*/
    {.w_px = 16,	.glyph_index = 450072},/*(绦)*/
    {.w_px = 16,	.glyph_index = 450240},/*(萄)*/
    {.w_px = 16,	.glyph_index = 450408},/*(桃)*/
    {.w_px = 16,	.glyph_index = 450576},/*(逃)*/
    {.w_px = 16,	.glyph_index = 450744},/*(淘)*/
    {.w_px = 16,	.glyph_index = 450912},/*(陶)*/
    {.w_px = 16,	.glyph_index = 451080},/*(讨)*/
    {.w_px = 16,	.glyph_index = 451248},/*(套)*/
    {.w_px = 16,	.glyph_index = 451416},/*(特)*/
    {.w_px = 16,	.glyph_index = 451584},/*(藤)*/
    {.w_px = 16,	.glyph_index = 451752},/*(腾)*/
    {.w_px = 16,	.glyph_index = 451920},/*(疼)*/
    {.w_px = 16,	.glyph_index = 452088},/*(誊)*/
    {.w_px = 16,	.glyph_index = 452256},/*(梯)*/
    {.w_px = 16,	.glyph_index = 452424},/*(剔)*/
    {.w_px = 16,	.glyph_index = 452592},/*(踢)*/
    {.w_px = 16,	.glyph_index = 452760},/*(锑)*/
    {.w_px = 16,	.glyph_index = 452928},/*(提)*/
    {.w_px = 16,	.glyph_index = 453096},/*(题)*/
    {.w_px = 16,	.glyph_index = 453264},/*(蹄)*/
    {.w_px = 16,	.glyph_index = 453432},/*(啼)*/
    {.w_px = 16,	.glyph_index = 453600},/*(体)*/
    {.w_px = 16,	.glyph_index = 453768},/*(替)*/
    {.w_px = 16,	.glyph_index = 453936},/*(嚏)*/
    {.w_px = 16,	.glyph_index = 454104},/*(惕)*/
    {.w_px = 16,	.glyph_index = 454272},/*(涕)*/
    {.w_px = 16,	.glyph_index = 454440},/*(剃)*/
    {.w_px = 16,	.glyph_index = 454608},/*(屉)*/
    {.w_px = 16,	.glyph_index = 454776},/*(天)*/
    {.w_px = 16,	.glyph_index = 454944},/*(添)*/
    {.w_px = 16,	.glyph_index = 455112},/*(填)*/
    {.w_px = 16,	.glyph_index = 455280},/*(田)*/
    {.w_px = 16,	.glyph_index = 455448},/*(甜)*/
    {.w_px = 16,	.glyph_index = 455616},/*(恬)*/
    {.w_px = 16,	.glyph_index = 455784},/*(舔)*/
    {.w_px = 16,	.glyph_index = 455952},/*(腆)*/
    {.w_px = 16,	.glyph_index = 456120},/*(挑)*/
    {.w_px = 16,	.glyph_index = 456288},/*(条)*/
    {.w_px = 16,	.glyph_index = 456456},/*(迢)*/
    {.w_px = 16,	.glyph_index = 456624},/*(眺)*/
    {.w_px = 16,	.glyph_index = 456792},/*(跳)*/
    {.w_px = 16,	.glyph_index = 456960},/*(贴)*/
    {.w_px = 16,	.glyph_index = 457128},/*(铁)*/
    {.w_px = 16,	.glyph_index = 457296},/*(帖)*/
    {.w_px = 16,	.glyph_index = 457464},/*(厅)*/
    {.w_px = 16,	.glyph_index = 457632},/*(听)*/
    {.w_px = 16,	.glyph_index = 457800},/*(烃)*/
    {.w_px = 16,	.glyph_index = 457968},/*(汀)*/
    {.w_px = 16,	.glyph_index = 458136},/*(廷)*/
    {.w_px = 16,	.glyph_index = 458304},/*(停)*/
    {.w_px = 16,	.glyph_index = 458472},/*(亭)*/
    {.w_px = 16,	.glyph_index = 458640},/*(庭)*/
    {.w_px = 16,	.glyph_index = 458808},/*(挺)*/
    {.w_px = 16,	.glyph_index = 458976},/*(艇)*/
    {.w_px = 16,	.glyph_index = 459144},/*(通)*/
    {.w_px = 16,	.glyph_index = 459312},/*(桐)*/
    {.w_px = 16,	.glyph_index = 459480},/*(酮)*/
    {.w_px = 16,	.glyph_index = 459648},/*(瞳)*/
    {.w_px = 16,	.glyph_index = 459816},/*(同)*/
    {.w_px = 16,	.glyph_index = 459984},/*(铜)*/
    {.w_px = 16,	.glyph_index = 460152},/*(彤)*/
    {.w_px = 16,	.glyph_index = 460320},/*(童)*/
    {.w_px = 16,	.glyph_index = 460488},/*(桶)*/
    {.w_px = 16,	.glyph_index = 460656},/*(捅)*/
    {.w_px = 16,	.glyph_index = 460824},/*(筒)*/
    {.w_px = 16,	.glyph_index = 460992},/*(统)*/
    {.w_px = 16,	.glyph_index = 461160},/*(痛)*/
    {.w_px = 16,	.glyph_index = 461328},/*(偷)*/
    {.w_px = 16,	.glyph_index = 461496},/*(投)*/
    {.w_px = 16,	.glyph_index = 461664},/*(头)*/
    {.w_px = 16,	.glyph_index = 461832},/*(透)*/
    {.w_px = 16,	.glyph_index = 462000},/*(凸)*/
    {.w_px = 16,	.glyph_index = 462168},/*(秃)*/
    {.w_px = 16,	.glyph_index = 462336},/*(突)*/
    {.w_px = 16,	.glyph_index = 462504},/*(图)*/
    {.w_px = 16,	.glyph_index = 462672},/*(徒)*/
    {.w_px = 16,	.glyph_index = 462840},/*(途)*/
    {.w_px = 16,	.glyph_index = 463008},/*(涂)*/
    {.w_px = 16,	.glyph_index = 463176},/*(屠)*/
    {.w_px = 16,	.glyph_index = 463344},/*(土)*/
    {.w_px = 16,	.glyph_index = 463512},/*(吐)*/
    {.w_px = 16,	.glyph_index = 463680},/*(兔)*/
    {.w_px = 16,	.glyph_index = 463848},/*(湍)*/
    {.w_px = 16,	.glyph_index = 464016},/*(团)*/
    {.w_px = 16,	.glyph_index = 464184},/*(推)*/
    {.w_px = 16,	.glyph_index = 464352},/*(颓)*/
    {.w_px = 16,	.glyph_index = 464520},/*(腿)*/
    {.w_px = 16,	.glyph_index = 464688},/*(蜕)*/
    {.w_px = 16,	.glyph_index = 464856},/*(褪)*/
    {.w_px = 16,	.glyph_index = 465024},/*(退)*/
    {.w_px = 16,	.glyph_index = 465192},/*(吞)*/
    {.w_px = 16,	.glyph_index = 465360},/*(屯)*/
    {.w_px = 16,	.glyph_index = 465528},/*(臀)*/
    {.w_px = 16,	.glyph_index = 465696},/*(拖)*/
    {.w_px = 16,	.glyph_index = 465864},/*(托)*/
    {.w_px = 16,	.glyph_index = 466032},/*(脱)*/
    {.w_px = 16,	.glyph_index = 466200},/*(鸵)*/
    {.w_px = 16,	.glyph_index = 466368},/*(陀)*/
    {.w_px = 16,	.glyph_index = 466536},/*(驮)*/
    {.w_px = 16,	.glyph_index = 466704},/*(驼)*/
    {.w_px = 16,	.glyph_index = 466872},/*(椭)*/
    {.w_px = 16,	.glyph_index = 467040},/*(妥)*/
    {.w_px = 16,	.glyph_index = 467208},/*(拓)*/
    {.w_px = 16,	.glyph_index = 467376},/*(唾)*/
    {.w_px = 16,	.glyph_index = 467544},/*(挖)*/
    {.w_px = 16,	.glyph_index = 467712},/*(哇)*/
    {.w_px = 16,	.glyph_index = 467880},/*(蛙)*/
    {.w_px = 16,	.glyph_index = 468048},/*(洼)*/
    {.w_px = 16,	.glyph_index = 468216},/*(娃)*/
    {.w_px = 16,	.glyph_index = 468384},/*(瓦)*/
    {.w_px = 16,	.glyph_index = 468552},/*(袜)*/
    {.w_px = 16,	.glyph_index = 468720},/*(歪)*/
    {.w_px = 16,	.glyph_index = 468888},/*(外)*/
    {.w_px = 16,	.glyph_index = 469056},/*(豌)*/
    {.w_px = 16,	.glyph_index = 469224},/*(弯)*/
    {.w_px = 16,	.glyph_index = 469392},/*(湾)*/
    {.w_px = 16,	.glyph_index = 469560},/*(玩)*/
    {.w_px = 16,	.glyph_index = 469728},/*(顽)*/
    {.w_px = 16,	.glyph_index = 469896},/*(丸)*/
    {.w_px = 16,	.glyph_index = 470064},/*(烷)*/
    {.w_px = 16,	.glyph_index = 470232},/*(完)*/
    {.w_px = 16,	.glyph_index = 470400},/*(碗)*/
    {.w_px = 16,	.glyph_index = 470568},/*(挽)*/
    {.w_px = 16,	.glyph_index = 470736},/*(晚)*/
    {.w_px = 16,	.glyph_index = 470904},/*(皖)*/
    {.w_px = 16,	.glyph_index = 471072},/*(惋)*/
    {.w_px = 16,	.glyph_index = 471240},/*(宛)*/
    {.w_px = 16,	.glyph_index = 471408},/*(婉)*/
    {.w_px = 16,	.glyph_index = 471576},/*(万)*/
    {.w_px = 16,	.glyph_index = 471744},/*(腕)*/
    {.w_px = 16,	.glyph_index = 471912},/*(汪)*/
    {.w_px = 16,	.glyph_index = 472080},/*(王)*/
    {.w_px = 16,	.glyph_index = 472248},/*(亡)*/
    {.w_px = 16,	.glyph_index = 472416},/*(枉)*/
    {.w_px = 16,	.glyph_index = 472584},/*(网)*/
    {.w_px = 16,	.glyph_index = 472752},/*(往)*/
    {.w_px = 16,	.glyph_index = 472920},/*(旺)*/
    {.w_px = 16,	.glyph_index = 473088},/*(望)*/
    {.w_px = 16,	.glyph_index = 473256},/*(忘)*/
    {.w_px = 16,	.glyph_index = 473424},/*(妄)*/
    {.w_px = 16,	.glyph_index = 473592},/*(威)*/
    {.w_px = 16,	.glyph_index = 473760},/*(巍)*/
    {.w_px = 16,	.glyph_index = 473928},/*(微)*/
    {.w_px = 16,	.glyph_index = 474096},/*(危)*/
    {.w_px = 16,	.glyph_index = 474264},/*(韦)*/
    {.w_px = 16,	.glyph_index = 474432},/*(违)*/
    {.w_px = 16,	.glyph_index = 474600},/*(桅)*/
    {.w_px = 16,	.glyph_index = 474768},/*(围)*/
    {.w_px = 16,	.glyph_index = 474936},/*(唯)*/
    {.w_px = 16,	.glyph_index = 475104},/*(惟)*/
    {.w_px = 16,	.glyph_index = 475272},/*(为)*/
    {.w_px = 16,	.glyph_index = 475440},/*(潍)*/
    {.w_px = 16,	.glyph_index = 475608},/*(维)*/
    {.w_px = 16,	.glyph_index = 475776},/*(苇)*/
    {.w_px = 16,	.glyph_index = 475944},/*(萎)*/
    {.w_px = 16,	.glyph_index = 476112},/*(委)*/
    {.w_px = 16,	.glyph_index = 476280},/*(伟)*/
    {.w_px = 16,	.glyph_index = 476448},/*(伪)*/
    {.w_px = 16,	.glyph_index = 476616},/*(尾)*/
    {.w_px = 16,	.glyph_index = 476784},/*(纬)*/
    {.w_px = 16,	.glyph_index = 476952},/*(未)*/
    {.w_px = 16,	.glyph_index = 477120},/*(蔚)*/
    {.w_px = 16,	.glyph_index = 477288},/*(味)*/
    {.w_px = 16,	.glyph_index = 477456},/*(畏)*/
    {.w_px = 16,	.glyph_index = 477624},/*(胃)*/
    {.w_px = 16,	.glyph_index = 477792},/*(喂)*/
    {.w_px = 16,	.glyph_index = 477960},/*(魏)*/
    {.w_px = 16,	.glyph_index = 478128},/*(位)*/
    {.w_px = 16,	.glyph_index = 478296},/*(渭)*/
    {.w_px = 16,	.glyph_index = 478464},/*(谓)*/
    {.w_px = 16,	.glyph_index = 478632},/*(尉)*/
    {.w_px = 16,	.glyph_index = 478800},/*(慰)*/
    {.w_px = 16,	.glyph_index = 478968},/*(卫)*/
    {.w_px = 16,	.glyph_index = 479136},/*(瘟)*/
    {.w_px = 16,	.glyph_index = 479304},/*(温)*/
    {.w_px = 16,	.glyph_index = 479472},/*(蚊)*/
    {.w_px = 16,	.glyph_index = 479640},/*(文)*/
    {.w_px = 16,	.glyph_index = 479808},/*(闻)*/
    {.w_px = 16,	.glyph_index = 479976},/*(纹)*/
    {.w_px = 16,	.glyph_index = 480144},/*(吻)*/
    {.w_px = 16,	.glyph_index = 480312},/*(稳)*/
    {.w_px = 16,	.glyph_index = 480480},/*(紊)*/
    {.w_px = 16,	.glyph_index = 480648},/*(问)*/
    {.w_px = 16,	.glyph_index = 480816},/*(嗡)*/
    {.w_px = 16,	.glyph_index = 480984},/*(翁)*/
    {.w_px = 16,	.glyph_index = 481152},/*(瓮)*/
    {.w_px = 16,	.glyph_index = 481320},/*(挝)*/
    {.w_px = 16,	.glyph_index = 481488},/*(蜗)*/
    {.w_px = 16,	.glyph_index = 481656},/*(涡)*/
    {.w_px = 16,	.glyph_index = 481824},/*(窝)*/
    {.w_px = 16,	.glyph_index = 481992},/*(我)*/
    {.w_px = 16,	.glyph_index = 482160},/*(斡)*/
    {.w_px = 16,	.glyph_index = 482328},/*(卧)*/
    {.w_px = 16,	.glyph_index = 482496},/*(握)*/
    {.w_px = 16,	.glyph_index = 482664},/*(沃)*/
    {.w_px = 16,	.glyph_index = 482832},/*(巫)*/
    {.w_px = 16,	.glyph_index = 483000},/*(呜)*/
    {.w_px = 16,	.glyph_index = 483168},/*(钨)*/
    {.w_px = 16,	.glyph_index = 483336},/*(乌)*/
    {.w_px = 16,	.glyph_index = 483504},/*(污)*/
    {.w_px = 16,	.glyph_index = 483672},/*(诬)*/
    {.w_px = 16,	.glyph_index = 483840},/*(屋)*/
    {.w_px = 16,	.glyph_index = 484008},/*(无)*/
    {.w_px = 16,	.glyph_index = 484176},/*(芜)*/
    {.w_px = 16,	.glyph_index = 484344},/*(梧)*/
    {.w_px = 16,	.glyph_index = 484512},/*(吾)*/
    {.w_px = 16,	.glyph_index = 484680},/*(吴)*/
    {.w_px = 16,	.glyph_index = 484848},/*(毋)*/
    {.w_px = 16,	.glyph_index = 485016},/*(武)*/
    {.w_px = 16,	.glyph_index = 485184},/*(五)*/
    {.w_px = 16,	.glyph_index = 485352},/*(捂)*/
    {.w_px = 16,	.glyph_index = 485520},/*(午)*/
    {.w_px = 16,	.glyph_index = 485688},/*(舞)*/
    {.w_px = 16,	.glyph_index = 485856},/*(伍)*/
    {.w_px = 16,	.glyph_index = 486024},/*(侮)*/
    {.w_px = 16,	.glyph_index = 486192},/*(坞)*/
    {.w_px = 16,	.glyph_index = 486360},/*(戊)*/
    {.w_px = 16,	.glyph_index = 486528},/*(雾)*/
    {.w_px = 16,	.glyph_index = 486696},/*(晤)*/
    {.w_px = 16,	.glyph_index = 486864},/*(物)*/
    {.w_px = 16,	.glyph_index = 487032},/*(勿)*/
    {.w_px = 16,	.glyph_index = 487200},/*(务)*/
    {.w_px = 16,	.glyph_index = 487368},/*(悟)*/
    {.w_px = 16,	.glyph_index = 487536},/*(误)*/
    {.w_px = 16,	.glyph_index = 487704},/*(昔)*/
    {.w_px = 16,	.glyph_index = 487872},/*(熙)*/
    {.w_px = 16,	.glyph_index = 488040},/*(析)*/
    {.w_px = 16,	.glyph_index = 488208},/*(西)*/
    {.w_px = 16,	.glyph_index = 488376},/*(硒)*/
    {.w_px = 16,	.glyph_index = 488544},/*(矽)*/
    {.w_px = 16,	.glyph_index = 488712},/*(晰)*/
    {.w_px = 16,	.glyph_index = 488880},/*(嘻)*/
    {.w_px = 16,	.glyph_index = 489048},/*(吸)*/
    {.w_px = 16,	.glyph_index = 489216},/*(锡)*/
    {.w_px = 16,	.glyph_index = 489384},/*(牺)*/
    {.w_px = 16,	.glyph_index = 489552},/*(稀)*/
    {.w_px = 16,	.glyph_index = 489720},/*(息)*/
    {.w_px = 16,	.glyph_index = 489888},/*(希)*/
    {.w_px = 16,	.glyph_index = 490056},/*(悉)*/
    {.w_px = 16,	.glyph_index = 490224},/*(膝)*/
    {.w_px = 16,	.glyph_index = 490392},/*(夕)*/
    {.w_px = 16,	.glyph_index = 490560},/*(惜)*/
    {.w_px = 16,	.glyph_index = 490728},/*(熄)*/
    {.w_px = 16,	.glyph_index = 490896},/*(烯)*/
    {.w_px = 16,	.glyph_index = 491064},/*(溪)*/
    {.w_px = 16,	.glyph_index = 491232},/*(汐)*/
    {.w_px = 16,	.glyph_index = 491400},/*(犀)*/
    {.w_px = 16,	.glyph_index = 491568},/*(檄)*/
    {.w_px = 16,	.glyph_index = 491736},/*(袭)*/
    {.w_px = 16,	.glyph_index = 491904},/*(席)*/
    {.w_px = 16,	.glyph_index = 492072},/*(习)*/
    {.w_px = 16,	.glyph_index = 492240},/*(媳)*/
    {.w_px = 16,	.glyph_index = 492408},/*(喜)*/
    {.w_px = 16,	.glyph_index = 492576},/*(铣)*/
    {.w_px = 16,	.glyph_index = 492744},/*(洗)*/
    {.w_px = 16,	.glyph_index = 492912},/*(系)*/
    {.w_px = 16,	.glyph_index = 493080},/*(隙)*/
    {.w_px = 16,	.glyph_index = 493248},/*(戏)*/
    {.w_px = 16,	.glyph_index = 493416},/*(细)*/
    {.w_px = 16,	.glyph_index = 493584},/*(瞎)*/
    {.w_px = 16,	.glyph_index = 493752},/*(虾)*/
    {.w_px = 16,	.glyph_index = 493920},/*(匣)*/
    {.w_px = 16,	.glyph_index = 494088},/*(霞)*/
    {.w_px = 16,	.glyph_index = 494256},/*(辖)*/
    {.w_px = 16,	.glyph_index = 494424},/*(暇)*/
    {.w_px = 16,	.glyph_index = 494592},/*(峡)*/
    {.w_px = 16,	.glyph_index = 494760},/*(侠)*/
    {.w_px = 16,	.glyph_index = 494928},/*(狭)*/
    {.w_px = 16,	.glyph_index = 495096},/*(下)*/
    {.w_px = 16,	.glyph_index = 495264},/*(厦)*/
    {.w_px = 16,	.glyph_index = 495432},/*(夏)*/
    {.w_px = 16,	.glyph_index = 495600},/*(吓)*/
    {.w_px = 16,	.glyph_index = 495768},/*(掀)*/
    {.w_px = 16,	.glyph_index = 495936},/*(锨)*/
    {.w_px = 16,	.glyph_index = 496104},/*(先)*/
    {.w_px = 16,	.glyph_index = 496272},/*(仙)*/
    {.w_px = 16,	.glyph_index = 496440},/*(鲜)*/
    {.w_px = 16,	.glyph_index = 496608},/*(纤)*/
    {.w_px = 16,	.glyph_index = 496776},/*(咸)*/
    {.w_px = 16,	.glyph_index = 496944},/*(贤)*/
    {.w_px = 16,	.glyph_index = 497112},/*(衔)*/
    {.w_px = 16,	.glyph_index = 497280},/*(舷)*/
    {.w_px = 16,	.glyph_index = 497448},/*(闲)*/
    {.w_px = 16,	.glyph_index = 497616},/*(涎)*/
    {.w_px = 16,	.glyph_index = 497784},/*(弦)*/
    {.w_px = 16,	.glyph_index = 497952},/*(嫌)*/
    {.w_px = 16,	.glyph_index = 498120},/*(显)*/
    {.w_px = 16,	.glyph_index = 498288},/*(险)*/
    {.w_px = 16,	.glyph_index = 498456},/*(现)*/
    {.w_px = 16,	.glyph_index = 498624},/*(献)*/
    {.w_px = 16,	.glyph_index = 498792},/*(县)*/
    {.w_px = 16,	.glyph_index = 498960},/*(腺)*/
    {.w_px = 16,	.glyph_index = 499128},/*(馅)*/
    {.w_px = 16,	.glyph_index = 499296},/*(羡)*/
    {.w_px = 16,	.glyph_index = 499464},/*(宪)*/
    {.w_px = 16,	.glyph_index = 499632},/*(陷)*/
    {.w_px = 16,	.glyph_index = 499800},/*(限)*/
    {.w_px = 16,	.glyph_index = 499968},/*(线)*/
    {.w_px = 16,	.glyph_index = 500136},/*(相)*/
    {.w_px = 16,	.glyph_index = 500304},/*(厢)*/
    {.w_px = 16,	.glyph_index = 500472},/*(镶)*/
    {.w_px = 16,	.glyph_index = 500640},/*(香)*/
    {.w_px = 16,	.glyph_index = 500808},/*(箱)*/
    {.w_px = 16,	.glyph_index = 500976},/*(襄)*/
    {.w_px = 16,	.glyph_index = 501144},/*(湘)*/
    {.w_px = 16,	.glyph_index = 501312},/*(乡)*/
    {.w_px = 16,	.glyph_index = 501480},/*(翔)*/
    {.w_px = 16,	.glyph_index = 501648},/*(祥)*/
    {.w_px = 16,	.glyph_index = 501816},/*(详)*/
    {.w_px = 16,	.glyph_index = 501984},/*(想)*/
    {.w_px = 16,	.glyph_index = 502152},/*(响)*/
    {.w_px = 16,	.glyph_index = 502320},/*(享)*/
    {.w_px = 16,	.glyph_index = 502488},/*(项)*/
    {.w_px = 16,	.glyph_index = 502656},/*(巷)*/
    {.w_px = 16,	.glyph_index = 502824},/*(橡)*/
    {.w_px = 16,	.glyph_index = 502992},/*(像)*/
    {.w_px = 16,	.glyph_index = 503160},/*(向)*/
    {.w_px = 16,	.glyph_index = 503328},/*(象)*/
    {.w_px = 16,	.glyph_index = 503496},/*(萧)*/
    {.w_px = 16,	.glyph_index = 503664},/*(硝)*/
    {.w_px = 16,	.glyph_index = 503832},/*(霄)*/
    {.w_px = 16,	.glyph_index = 504000},/*(削)*/
    {.w_px = 16,	.glyph_index = 504168},/*(哮)*/
    {.w_px = 16,	.glyph_index = 504336},/*(嚣)*/
    {.w_px = 16,	.glyph_index = 504504},/*(销)*/
    {.w_px = 16,	.glyph_index = 504672},/*(消)*/
    {.w_px = 16,	.glyph_index = 504840},/*(宵)*/
    {.w_px = 16,	.glyph_index = 505008},/*(淆)*/
    {.w_px = 16,	.glyph_index = 505176},/*(晓)*/
    {.w_px = 16,	.glyph_index = 505344},/*(小)*/
    {.w_px = 16,	.glyph_index = 505512},/*(孝)*/
    {.w_px = 16,	.glyph_index = 505680},/*(校)*/
    {.w_px = 16,	.glyph_index = 505848},/*(肖)*/
    {.w_px = 16,	.glyph_index = 506016},/*(啸)*/
    {.w_px = 16,	.glyph_index = 506184},/*(笑)*/
    {.w_px = 16,	.glyph_index = 506352},/*(效)*/
    {.w_px = 16,	.glyph_index = 506520},/*(楔)*/
    {.w_px = 16,	.glyph_index = 506688},/*(些)*/
    {.w_px = 16,	.glyph_index = 506856},/*(歇)*/
    {.w_px = 16,	.glyph_index = 507024},/*(蝎)*/
    {.w_px = 16,	.glyph_index = 507192},/*(鞋)*/
    {.w_px = 16,	.glyph_index = 507360},/*(协)*/
    {.w_px = 16,	.glyph_index = 507528},/*(挟)*/
    {.w_px = 16,	.glyph_index = 507696},/*(携)*/
    {.w_px = 16,	.glyph_index = 507864},/*(邪)*/
    {.w_px = 16,	.glyph_index = 508032},/*(斜)*/
    {.w_px = 16,	.glyph_index = 508200},/*(胁)*/
    {.w_px = 16,	.glyph_index = 508368},/*(谐)*/
    {.w_px = 16,	.glyph_index = 508536},/*(写)*/
    {.w_px = 16,	.glyph_index = 508704},/*(械)*/
    {.w_px = 16,	.glyph_index = 508872},/*(卸)*/
    {.w_px = 16,	.glyph_index = 509040},/*(蟹)*/
    {.w_px = 16,	.glyph_index = 509208},/*(懈)*/
    {.w_px = 16,	.glyph_index = 509376},/*(泄)*/
    {.w_px = 16,	.glyph_index = 509544},/*(泻)*/
    {.w_px = 16,	.glyph_index = 509712},/*(谢)*/
    {.w_px = 16,	.glyph_index = 509880},/*(屑)*/
    {.w_px = 16,	.glyph_index = 510048},/*(薪)*/
    {.w_px = 16,	.glyph_index = 510216},/*(芯)*/
    {.w_px = 16,	.glyph_index = 510384},/*(锌)*/
    {.w_px = 16,	.glyph_index = 510552},/*(欣)*/
    {.w_px = 16,	.glyph_index = 510720},/*(辛)*/
    {.w_px = 16,	.glyph_index = 510888},/*(新)*/
    {.w_px = 16,	.glyph_index = 511056},/*(忻)*/
    {.w_px = 16,	.glyph_index = 511224},/*(心)*/
    {.w_px = 16,	.glyph_index = 511392},/*(信)*/
    {.w_px = 16,	.glyph_index = 511560},/*(衅)*/
    {.w_px = 16,	.glyph_index = 511728},/*(星)*/
    {.w_px = 16,	.glyph_index = 511896},/*(腥)*/
    {.w_px = 16,	.glyph_index = 512064},/*(猩)*/
    {.w_px = 16,	.glyph_index = 512232},/*(惺)*/
    {.w_px = 16,	.glyph_index = 512400},/*(兴)*/
    {.w_px = 16,	.glyph_index = 512568},/*(刑)*/
    {.w_px = 16,	.glyph_index = 512736},/*(型)*/
    {.w_px = 16,	.glyph_index = 512904},/*(形)*/
    {.w_px = 16,	.glyph_index = 513072},/*(邢)*/
    {.w_px = 16,	.glyph_index = 513240},/*(行)*/
    {.w_px = 16,	.glyph_index = 513408},/*(醒)*/
    {.w_px = 16,	.glyph_index = 513576},/*(幸)*/
    {.w_px = 16,	.glyph_index = 513744},/*(杏)*/
    {.w_px = 16,	.glyph_index = 513912},/*(性)*/
    {.w_px = 16,	.glyph_index = 514080},/*(姓)*/
    {.w_px = 16,	.glyph_index = 514248},/*(兄)*/
    {.w_px = 16,	.glyph_index = 514416},/*(凶)*/
    {.w_px = 16,	.glyph_index = 514584},/*(胸)*/
    {.w_px = 16,	.glyph_index = 514752},/*(匈)*/
    {.w_px = 16,	.glyph_index = 514920},/*(汹)*/
    {.w_px = 16,	.glyph_index = 515088},/*(雄)*/
    {.w_px = 16,	.glyph_index = 515256},/*(熊)*/
    {.w_px = 16,	.glyph_index = 515424},/*(休)*/
    {.w_px = 16,	.glyph_index = 515592},/*(修)*/
    {.w_px = 16,	.glyph_index = 515760},/*(羞)*/
    {.w_px = 16,	.glyph_index = 515928},/*(朽)*/
    {.w_px = 16,	.glyph_index = 516096},/*(嗅)*/
    {.w_px = 16,	.glyph_index = 516264},/*(锈)*/
    {.w_px = 16,	.glyph_index = 516432},/*(秀)*/
    {.w_px = 16,	.glyph_index = 516600},/*(袖)*/
    {.w_px = 16,	.glyph_index = 516768},/*(绣)*/
    {.w_px = 16,	.glyph_index = 516936},/*(墟)*/
    {.w_px = 16,	.glyph_index = 517104},/*(戌)*/
    {.w_px = 16,	.glyph_index = 517272},/*(需)*/
    {.w_px = 16,	.glyph_index = 517440},/*(虚)*/
    {.w_px = 16,	.glyph_index = 517608},/*(嘘)*/
    {.w_px = 16,	.glyph_index = 517776},/*(须)*/
    {.w_px = 16,	.glyph_index = 517944},/*(徐)*/
    {.w_px = 16,	.glyph_index = 518112},/*(许)*/
    {.w_px = 16,	.glyph_index = 518280},/*(蓄)*/
    {.w_px = 16,	.glyph_index = 518448},/*(酗)*/
    {.w_px = 16,	.glyph_index = 518616},/*(叙)*/
    {.w_px = 16,	.glyph_index = 518784},/*(旭)*/
    {.w_px = 16,	.glyph_index = 518952},/*(序)*/
    {.w_px = 16,	.glyph_index = 519120},/*(畜)*/
    {.w_px = 16,	.glyph_index = 519288},/*(恤)*/
    {.w_px = 16,	.glyph_index = 519456},/*(絮)*/
    {.w_px = 16,	.glyph_index = 519624},/*(婿)*/
    {.w_px = 16,	.glyph_index = 519792},/*(绪)*/
    {.w_px = 16,	.glyph_index = 519960},/*(续)*/
    {.w_px = 16,	.glyph_index = 520128},/*(轩)*/
    {.w_px = 16,	.glyph_index = 520296},/*(喧)*/
    {.w_px = 16,	.glyph_index = 520464},/*(宣)*/
    {.w_px = 16,	.glyph_index = 520632},/*(悬)*/
    {.w_px = 16,	.glyph_index = 520800},/*(旋)*/
    {.w_px = 16,	.glyph_index = 520968},/*(玄)*/
    {.w_px = 16,	.glyph_index = 521136},/*(选)*/
    {.w_px = 16,	.glyph_index = 521304},/*(癣)*/
    {.w_px = 16,	.glyph_index = 521472},/*(眩)*/
    {.w_px = 16,	.glyph_index = 521640},/*(绚)*/
    {.w_px = 16,	.glyph_index = 521808},/*(靴)*/
    {.w_px = 16,	.glyph_index = 521976},/*(薛)*/
    {.w_px = 16,	.glyph_index = 522144},/*(学)*/
    {.w_px = 16,	.glyph_index = 522312},/*(穴)*/
    {.w_px = 16,	.glyph_index = 522480},/*(雪)*/
    {.w_px = 16,	.glyph_index = 522648},/*(血)*/
    {.w_px = 16,	.glyph_index = 522816},/*(勋)*/
    {.w_px = 16,	.glyph_index = 522984},/*(熏)*/
    {.w_px = 16,	.glyph_index = 523152},/*(循)*/
    {.w_px = 16,	.glyph_index = 523320},/*(旬)*/
    {.w_px = 16,	.glyph_index = 523488},/*(询)*/
    {.w_px = 16,	.glyph_index = 523656},/*(寻)*/
    {.w_px = 16,	.glyph_index = 523824},/*(驯)*/
    {.w_px = 16,	.glyph_index = 523992},/*(巡)*/
    {.w_px = 16,	.glyph_index = 524160},/*(殉)*/
    {.w_px = 16,	.glyph_index = 524328},/*(汛)*/
    {.w_px = 16,	.glyph_index = 524496},/*(训)*/
    {.w_px = 16,	.glyph_index = 524664},/*(讯)*/
    {.w_px = 16,	.glyph_index = 524832},/*(逊)*/
    {.w_px = 16,	.glyph_index = 525000},/*(迅)*/
    {.w_px = 16,	.glyph_index = 525168},/*(压)*/
    {.w_px = 16,	.glyph_index = 525336},/*(押)*/
    {.w_px = 16,	.glyph_index = 525504},/*(鸦)*/
    {.w_px = 16,	.glyph_index = 525672},/*(鸭)*/
    {.w_px = 16,	.glyph_index = 525840},/*(呀)*/
    {.w_px = 16,	.glyph_index = 526008},/*(丫)*/
    {.w_px = 16,	.glyph_index = 526176},/*(芽)*/
    {.w_px = 16,	.glyph_index = 526344},/*(牙)*/
    {.w_px = 16,	.glyph_index = 526512},/*(蚜)*/
    {.w_px = 16,	.glyph_index = 526680},/*(崖)*/
    {.w_px = 16,	.glyph_index = 526848},/*(衙)*/
    {.w_px = 16,	.glyph_index = 527016},/*(涯)*/
    {.w_px = 16,	.glyph_index = 527184},/*(雅)*/
    {.w_px = 16,	.glyph_index = 527352},/*(哑)*/
    {.w_px = 16,	.glyph_index = 527520},/*(亚)*/
    {.w_px = 16,	.glyph_index = 527688},/*(讶)*/
    {.w_px = 16,	.glyph_index = 527856},/*(焉)*/
    {.w_px = 16,	.glyph_index = 528024},/*(咽)*/
    {.w_px = 16,	.glyph_index = 528192},/*(阉)*/
    {.w_px = 16,	.glyph_index = 528360},/*(烟)*/
    {.w_px = 16,	.glyph_index = 528528},/*(淹)*/
    {.w_px = 16,	.glyph_index = 528696},/*(盐)*/
    {.w_px = 16,	.glyph_index = 528864},/*(严)*/
    {.w_px = 16,	.glyph_index = 529032},/*(研)*/
    {.w_px = 16,	.glyph_index = 529200},/*(蜒)*/
    {.w_px = 16,	.glyph_index = 529368},/*(岩)*/
    {.w_px = 16,	.glyph_index = 529536},/*(延)*/
    {.w_px = 16,	.glyph_index = 529704},/*(言)*/
    {.w_px = 16,	.glyph_index = 529872},/*(颜)*/
    {.w_px = 16,	.glyph_index = 530040},/*(阎)*/
    {.w_px = 16,	.glyph_index = 530208},/*(炎)*/
    {.w_px = 16,	.glyph_index = 530376},/*(沿)*/
    {.w_px = 16,	.glyph_index = 530544},/*(奄)*/
    {.w_px = 16,	.glyph_index = 530712},/*(掩)*/
    {.w_px = 16,	.glyph_index = 530880},/*(眼)*/
    {.w_px = 16,	.glyph_index = 531048},/*(衍)*/
    {.w_px = 16,	.glyph_index = 531216},/*(演)*/
    {.w_px = 16,	.glyph_index = 531384},/*(艳)*/
    {.w_px = 16,	.glyph_index = 531552},/*(堰)*/
    {.w_px = 16,	.glyph_index = 531720},/*(燕)*/
    {.w_px = 16,	.glyph_index = 531888},/*(厌)*/
    {.w_px = 16,	.glyph_index = 532056},/*(砚)*/
    {.w_px = 16,	.glyph_index = 532224},/*(雁)*/
    {.w_px = 16,	.glyph_index = 532392},/*(唁)*/
    {.w_px = 16,	.glyph_index = 532560},/*(彦)*/
    {.w_px = 16,	.glyph_index = 532728},/*(焰)*/
    {.w_px = 16,	.glyph_index = 532896},/*(宴)*/
    {.w_px = 16,	.glyph_index = 533064},/*(谚)*/
    {.w_px = 16,	.glyph_index = 533232},/*(验)*/
    {.w_px = 16,	.glyph_index = 533400},/*(殃)*/
    {.w_px = 16,	.glyph_index = 533568},/*(央)*/
    {.w_px = 16,	.glyph_index = 533736},/*(鸯)*/
    {.w_px = 16,	.glyph_index = 533904},/*(秧)*/
    {.w_px = 16,	.glyph_index = 534072},/*(杨)*/
    {.w_px = 16,	.glyph_index = 534240},/*(扬)*/
    {.w_px = 16,	.glyph_index = 534408},/*(佯)*/
    {.w_px = 16,	.glyph_index = 534576},/*(疡)*/
    {.w_px = 16,	.glyph_index = 534744},/*(羊)*/
    {.w_px = 16,	.glyph_index = 534912},/*(洋)*/
    {.w_px = 16,	.glyph_index = 535080},/*(阳)*/
    {.w_px = 16,	.glyph_index = 535248},/*(氧)*/
    {.w_px = 16,	.glyph_index = 535416},/*(仰)*/
    {.w_px = 16,	.glyph_index = 535584},/*(痒)*/
    {.w_px = 16,	.glyph_index = 535752},/*(养)*/
    {.w_px = 16,	.glyph_index = 535920},/*(样)*/
    {.w_px = 16,	.glyph_index = 536088},/*(漾)*/
    {.w_px = 16,	.glyph_index = 536256},/*(邀)*/
    {.w_px = 16,	.glyph_index = 536424},/*(腰)*/
    {.w_px = 16,	.glyph_index = 536592},/*(妖)*/
    {.w_px = 16,	.glyph_index = 536760},/*(瑶)*/
    {.w_px = 16,	.glyph_index = 536928},/*(摇)*/
    {.w_px = 16,	.glyph_index = 537096},/*(尧)*/
    {.w_px = 16,	.glyph_index = 537264},/*(遥)*/
    {.w_px = 16,	.glyph_index = 537432},/*(窑)*/
    {.w_px = 16,	.glyph_index = 537600},/*(谣)*/
    {.w_px = 16,	.glyph_index = 537768},/*(姚)*/
    {.w_px = 16,	.glyph_index = 537936},/*(咬)*/
    {.w_px = 16,	.glyph_index = 538104},/*(舀)*/
    {.w_px = 16,	.glyph_index = 538272},/*(药)*/
    {.w_px = 16,	.glyph_index = 538440},/*(要)*/
    {.w_px = 16,	.glyph_index = 538608},/*(耀)*/
    {.w_px = 16,	.glyph_index = 538776},/*(椰)*/
    {.w_px = 16,	.glyph_index = 538944},/*(噎)*/
    {.w_px = 16,	.glyph_index = 539112},/*(耶)*/
    {.w_px = 16,	.glyph_index = 539280},/*(爷)*/
    {.w_px = 16,	.glyph_index = 539448},/*(野)*/
    {.w_px = 16,	.glyph_index = 539616},/*(冶)*/
    {.w_px = 16,	.glyph_index = 539784},/*(也)*/
    {.w_px = 16,	.glyph_index = 539952},/*(页)*/
    {.w_px = 16,	.glyph_index = 540120},/*(掖)*/
    {.w_px = 16,	.glyph_index = 540288},/*(业)*/
    {.w_px = 16,	.glyph_index = 540456},/*(叶)*/
    {.w_px = 16,	.glyph_index = 540624},/*(曳)*/
    {.w_px = 16,	.glyph_index = 540792},/*(腋)*/
    {.w_px = 16,	.glyph_index = 540960},/*(夜)*/
    {.w_px = 16,	.glyph_index = 541128},/*(液)*/
    {.w_px = 16,	.glyph_index = 541296},/*(一)*/
    {.w_px = 16,	.glyph_index = 541464},/*(壹)*/
    {.w_px = 16,	.glyph_index = 541632},/*(医)*/
    {.w_px = 16,	.glyph_index = 541800},/*(揖)*/
    {.w_px = 16,	.glyph_index = 541968},/*(铱)*/
    {.w_px = 16,	.glyph_index = 542136},/*(依)*/
    {.w_px = 16,	.glyph_index = 542304},/*(伊)*/
    {.w_px = 16,	.glyph_index = 542472},/*(衣)*/
    {.w_px = 16,	.glyph_index = 542640},/*(颐)*/
    {.w_px = 16,	.glyph_index = 542808},/*(夷)*/
    {.w_px = 16,	.glyph_index = 542976},/*(遗)*/
    {.w_px = 16,	.glyph_index = 543144},/*(移)*/
    {.w_px = 16,	.glyph_index = 543312},/*(仪)*/
    {.w_px = 16,	.glyph_index = 543480},/*(胰)*/
    {.w_px = 16,	.glyph_index = 543648},/*(疑)*/
    {.w_px = 16,	.glyph_index = 543816},/*(沂)*/
    {.w_px = 16,	.glyph_index = 543984},/*(宜)*/
    {.w_px = 16,	.glyph_index = 544152},/*(姨)*/
    {.w_px = 16,	.glyph_index = 544320},/*(彝)*/
    {.w_px = 16,	.glyph_index = 544488},/*(椅)*/
    {.w_px = 16,	.glyph_index = 544656},/*(蚁)*/
    {.w_px = 16,	.glyph_index = 544824},/*(倚)*/
    {.w_px = 16,	.glyph_index = 544992},/*(已)*/
    {.w_px = 16,	.glyph_index = 545160},/*(乙)*/
    {.w_px = 16,	.glyph_index = 545328},/*(矣)*/
    {.w_px = 16,	.glyph_index = 545496},/*(以)*/
    {.w_px = 16,	.glyph_index = 545664},/*(艺)*/
    {.w_px = 16,	.glyph_index = 545832},/*(抑)*/
    {.w_px = 16,	.glyph_index = 546000},/*(易)*/
    {.w_px = 16,	.glyph_index = 546168},/*(邑)*/
    {.w_px = 16,	.glyph_index = 546336},/*(屹)*/
    {.w_px = 16,	.glyph_index = 546504},/*(亿)*/
    {.w_px = 16,	.glyph_index = 546672},/*(役)*/
    {.w_px = 16,	.glyph_index = 546840},/*(臆)*/
    {.w_px = 16,	.glyph_index = 547008},/*(逸)*/
    {.w_px = 16,	.glyph_index = 547176},/*(肄)*/
    {.w_px = 16,	.glyph_index = 547344},/*(疫)*/
    {.w_px = 16,	.glyph_index = 547512},/*(亦)*/
    {.w_px = 16,	.glyph_index = 547680},/*(裔)*/
    {.w_px = 16,	.glyph_index = 547848},/*(意)*/
    {.w_px = 16,	.glyph_index = 548016},/*(毅)*/
    {.w_px = 16,	.glyph_index = 548184},/*(忆)*/
    {.w_px = 16,	.glyph_index = 548352},/*(义)*/
    {.w_px = 16,	.glyph_index = 548520},/*(益)*/
    {.w_px = 16,	.glyph_index = 548688},/*(溢)*/
    {.w_px = 16,	.glyph_index = 548856},/*(诣)*/
    {.w_px = 16,	.glyph_index = 549024},/*(议)*/
    {.w_px = 16,	.glyph_index = 549192},/*(谊)*/
    {.w_px = 16,	.glyph_index = 549360},/*(译)*/
    {.w_px = 16,	.glyph_index = 549528},/*(异)*/
    {.w_px = 16,	.glyph_index = 549696},/*(翼)*/
    {.w_px = 16,	.glyph_index = 549864},/*(翌)*/
    {.w_px = 16,	.glyph_index = 550032},/*(绎)*/
    {.w_px = 16,	.glyph_index = 550200},/*(茵)*/
    {.w_px = 16,	.glyph_index = 550368},/*(荫)*/
    {.w_px = 16,	.glyph_index = 550536},/*(因)*/
    {.w_px = 16,	.glyph_index = 550704},/*(殷)*/
    {.w_px = 16,	.glyph_index = 550872},/*(音)*/
    {.w_px = 16,	.glyph_index = 551040},/*(阴)*/
    {.w_px = 16,	.glyph_index = 551208},/*(姻)*/
    {.w_px = 16,	.glyph_index = 551376},/*(吟)*/
    {.w_px = 16,	.glyph_index = 551544},/*(银)*/
    {.w_px = 16,	.glyph_index = 551712},/*(淫)*/
    {.w_px = 16,	.glyph_index = 551880},/*(寅)*/
    {.w_px = 16,	.glyph_index = 552048},/*(饮)*/
    {.w_px = 16,	.glyph_index = 552216},/*(尹)*/
    {.w_px = 16,	.glyph_index = 552384},/*(引)*/
    {.w_px = 16,	.glyph_index = 552552},/*(隐)*/
    {.w_px = 16,	.glyph_index = 552720},/*(印)*/
    {.w_px = 16,	.glyph_index = 552888},/*(英)*/
    {.w_px = 16,	.glyph_index = 553056},/*(樱)*/
    {.w_px = 16,	.glyph_index = 553224},/*(婴)*/
    {.w_px = 16,	.glyph_index = 553392},/*(鹰)*/
    {.w_px = 16,	.glyph_index = 553560},/*(应)*/
    {.w_px = 16,	.glyph_index = 553728},/*(缨)*/
    {.w_px = 16,	.glyph_index = 553896},/*(莹)*/
    {.w_px = 16,	.glyph_index = 554064},/*(萤)*/
    {.w_px = 16,	.glyph_index = 554232},/*(营)*/
    {.w_px = 16,	.glyph_index = 554400},/*(荧)*/
    {.w_px = 16,	.glyph_index = 554568},/*(蝇)*/
    {.w_px = 16,	.glyph_index = 554736},/*(迎)*/
    {.w_px = 16,	.glyph_index = 554904},/*(赢)*/
    {.w_px = 16,	.glyph_index = 555072},/*(盈)*/
    {.w_px = 16,	.glyph_index = 555240},/*(影)*/
    {.w_px = 16,	.glyph_index = 555408},/*(颖)*/
    {.w_px = 16,	.glyph_index = 555576},/*(硬)*/
    {.w_px = 16,	.glyph_index = 555744},/*(映)*/
    {.w_px = 16,	.glyph_index = 555912},/*(哟)*/
    {.w_px = 16,	.glyph_index = 556080},/*(拥)*/
    {.w_px = 16,	.glyph_index = 556248},/*(佣)*/
    {.w_px = 16,	.glyph_index = 556416},/*(臃)*/
    {.w_px = 16,	.glyph_index = 556584},/*(痈)*/
    {.w_px = 16,	.glyph_index = 556752},/*(庸)*/
    {.w_px = 16,	.glyph_index = 556920},/*(雍)*/
    {.w_px = 16,	.glyph_index = 557088},/*(踊)*/
    {.w_px = 16,	.glyph_index = 557256},/*(蛹)*/
    {.w_px = 16,	.glyph_index = 557424},/*(咏)*/
    {.w_px = 16,	.glyph_index = 557592},/*(泳)*/
    {.w_px = 16,	.glyph_index = 557760},/*(涌)*/
    {.w_px = 16,	.glyph_index = 557928},/*(永)*/
    {.w_px = 16,	.glyph_index = 558096},/*(恿)*/
    {.w_px = 16,	.glyph_index = 558264},/*(勇)*/
    {.w_px = 16,	.glyph_index = 558432},/*(用)*/
    {.w_px = 16,	.glyph_index = 558600},/*(幽)*/
    {.w_px = 16,	.glyph_index = 558768},/*(优)*/
    {.w_px = 16,	.glyph_index = 558936},/*(悠)*/
    {.w_px = 16,	.glyph_index = 559104},/*(忧)*/
    {.w_px = 16,	.glyph_index = 559272},/*(尤)*/
    {.w_px = 16,	.glyph_index = 559440},/*(由)*/
    {.w_px = 16,	.glyph_index = 559608},/*(邮)*/
    {.w_px = 16,	.glyph_index = 559776},/*(铀)*/
    {.w_px = 16,	.glyph_index = 559944},/*(犹)*/
    {.w_px = 16,	.glyph_index = 560112},/*(油)*/
    {.w_px = 16,	.glyph_index = 560280},/*(游)*/
    {.w_px = 16,	.glyph_index = 560448},/*(酉)*/
    {.w_px = 16,	.glyph_index = 560616},/*(有)*/
    {.w_px = 16,	.glyph_index = 560784},/*(友)*/
    {.w_px = 16,	.glyph_index = 560952},/*(右)*/
    {.w_px = 16,	.glyph_index = 561120},/*(佑)*/
    {.w_px = 16,	.glyph_index = 561288},/*(釉)*/
    {.w_px = 16,	.glyph_index = 561456},/*(诱)*/
    {.w_px = 16,	.glyph_index = 561624},/*(又)*/
    {.w_px = 16,	.glyph_index = 561792},/*(幼)*/
    {.w_px = 16,	.glyph_index = 561960},/*(迂)*/
    {.w_px = 16,	.glyph_index = 562128},/*(淤)*/
    {.w_px = 16,	.glyph_index = 562296},/*(于)*/
    {.w_px = 16,	.glyph_index = 562464},/*(盂)*/
    {.w_px = 16,	.glyph_index = 562632},/*(榆)*/
    {.w_px = 16,	.glyph_index = 562800},/*(虞)*/
    {.w_px = 16,	.glyph_index = 562968},/*(愚)*/
    {.w_px = 16,	.glyph_index = 563136},/*(舆)*/
    {.w_px = 16,	.glyph_index = 563304},/*(余)*/
    {.w_px = 16,	.glyph_index = 563472},/*(俞)*/
    {.w_px = 16,	.glyph_index = 563640},/*(逾)*/
    {.w_px = 16,	.glyph_index = 563808},/*(鱼)*/
    {.w_px = 16,	.glyph_index = 563976},/*(愉)*/
    {.w_px = 16,	.glyph_index = 564144},/*(渝)*/
    {.w_px = 16,	.glyph_index = 564312},/*(渔)*/
    {.w_px = 16,	.glyph_index = 564480},/*(隅)*/
    {.w_px = 16,	.glyph_index = 564648},/*(予)*/
    {.w_px = 16,	.glyph_index = 564816},/*(娱)*/
    {.w_px = 16,	.glyph_index = 564984},/*(雨)*/
    {.w_px = 16,	.glyph_index = 565152},/*(与)*/
    {.w_px = 16,	.glyph_index = 565320},/*(屿)*/
    {.w_px = 16,	.glyph_index = 565488},/*(禹)*/
    {.w_px = 16,	.glyph_index = 565656},/*(宇)*/
    {.w_px = 16,	.glyph_index = 565824},/*(语)*/
    {.w_px = 16,	.glyph_index = 565992},/*(羽)*/
    {.w_px = 16,	.glyph_index = 566160},/*(玉)*/
    {.w_px = 16,	.glyph_index = 566328},/*(域)*/
    {.w_px = 16,	.glyph_index = 566496},/*(芋)*/
    {.w_px = 16,	.glyph_index = 566664},/*(郁)*/
    {.w_px = 16,	.glyph_index = 566832},/*(吁)*/
    {.w_px = 16,	.glyph_index = 567000},/*(遇)*/
    {.w_px = 16,	.glyph_index = 567168},/*(喻)*/
    {.w_px = 16,	.glyph_index = 567336},/*(峪)*/
    {.w_px = 16,	.glyph_index = 567504},/*(御)*/
    {.w_px = 16,	.glyph_index = 567672},/*(愈)*/
    {.w_px = 16,	.glyph_index = 567840},/*(欲)*/
    {.w_px = 16,	.glyph_index = 568008},/*(狱)*/
    {.w_px = 16,	.glyph_index = 568176},/*(育)*/
    {.w_px = 16,	.glyph_index = 568344},/*(誉)*/
    {.w_px = 16,	.glyph_index = 568512},/*(浴)*/
    {.w_px = 16,	.glyph_index = 568680},/*(寓)*/
    {.w_px = 16,	.glyph_index = 568848},/*(裕)*/
    {.w_px = 16,	.glyph_index = 569016},/*(预)*/
    {.w_px = 16,	.glyph_index = 569184},/*(豫)*/
    {.w_px = 16,	.glyph_index = 569352},/*(驭)*/
    {.w_px = 16,	.glyph_index = 569520},/*(鸳)*/
    {.w_px = 16,	.glyph_index = 569688},/*(渊)*/
    {.w_px = 16,	.glyph_index = 569856},/*(冤)*/
    {.w_px = 16,	.glyph_index = 570024},/*(元)*/
    {.w_px = 16,	.glyph_index = 570192},/*(垣)*/
    {.w_px = 16,	.glyph_index = 570360},/*(袁)*/
    {.w_px = 16,	.glyph_index = 570528},/*(原)*/
    {.w_px = 16,	.glyph_index = 570696},/*(援)*/
    {.w_px = 16,	.glyph_index = 570864},/*(辕)*/
    {.w_px = 16,	.glyph_index = 571032},/*(园)*/
    {.w_px = 16,	.glyph_index = 571200},/*(员)*/
    {.w_px = 16,	.glyph_index = 571368},/*(圆)*/
    {.w_px = 16,	.glyph_index = 571536},/*(猿)*/
    {.w_px = 16,	.glyph_index = 571704},/*(源)*/
    {.w_px = 16,	.glyph_index = 571872},/*(缘)*/
    {.w_px = 16,	.glyph_index = 572040},/*(远)*/
    {.w_px = 16,	.glyph_index = 572208},/*(苑)*/
    {.w_px = 16,	.glyph_index = 572376},/*(愿)*/
    {.w_px = 16,	.glyph_index = 572544},/*(怨)*/
    {.w_px = 16,	.glyph_index = 572712},/*(院)*/
    {.w_px = 16,	.glyph_index = 572880},/*(曰)*/
    {.w_px = 16,	.glyph_index = 573048},/*(约)*/
    {.w_px = 16,	.glyph_index = 573216},/*(越)*/
    {.w_px = 16,	.glyph_index = 573384},/*(跃)*/
    {.w_px = 16,	.glyph_index = 573552},/*(钥)*/
    {.w_px = 16,	.glyph_index = 573720},/*(岳)*/
    {.w_px = 16,	.glyph_index = 573888},/*(粤)*/
    {.w_px = 16,	.glyph_index = 574056},/*(月)*/
    {.w_px = 16,	.glyph_index = 574224},/*(悦)*/
    {.w_px = 16,	.glyph_index = 574392},/*(阅)*/
    {.w_px = 16,	.glyph_index = 574560},/*(耘)*/
    {.w_px = 16,	.glyph_index = 574728},/*(云)*/
    {.w_px = 16,	.glyph_index = 574896},/*(郧)*/
    {.w_px = 16,	.glyph_index = 575064},/*(匀)*/
    {.w_px = 16,	.glyph_index = 575232},/*(陨)*/
    {.w_px = 16,	.glyph_index = 575400},/*(允)*/
    {.w_px = 16,	.glyph_index = 575568},/*(运)*/
    {.w_px = 16,	.glyph_index = 575736},/*(蕴)*/
    {.w_px = 16,	.glyph_index = 575904},/*(酝)*/
    {.w_px = 16,	.glyph_index = 576072},/*(晕)*/
    {.w_px = 16,	.glyph_index = 576240},/*(韵)*/
    {.w_px = 16,	.glyph_index = 576408},/*(孕)*/
    {.w_px = 16,	.glyph_index = 576576},/*(匝)*/
    {.w_px = 16,	.glyph_index = 576744},/*(砸)*/
    {.w_px = 16,	.glyph_index = 576912},/*(杂)*/
    {.w_px = 16,	.glyph_index = 577080},/*(栽)*/
    {.w_px = 16,	.glyph_index = 577248},/*(哉)*/
    {.w_px = 16,	.glyph_index = 577416},/*(灾)*/
    {.w_px = 16,	.glyph_index = 577584},/*(宰)*/
    {.w_px = 16,	.glyph_index = 577752},/*(载)*/
    {.w_px = 16,	.glyph_index = 577920},/*(再)*/
    {.w_px = 16,	.glyph_index = 578088},/*(在)*/
    {.w_px = 16,	.glyph_index = 578256},/*(咱)*/
    {.w_px = 16,	.glyph_index = 578424},/*(攒)*/
    {.w_px = 16,	.glyph_index = 578592},/*(暂)*/
    {.w_px = 16,	.glyph_index = 578760},/*(赞)*/
    {.w_px = 16,	.glyph_index = 578928},/*(赃)*/
    {.w_px = 16,	.glyph_index = 579096},/*(脏)*/
    {.w_px = 16,	.glyph_index = 579264},/*(葬)*/
    {.w_px = 16,	.glyph_index = 579432},/*(遭)*/
    {.w_px = 16,	.glyph_index = 579600},/*(糟)*/
    {.w_px = 16,	.glyph_index = 579768},/*(凿)*/
    {.w_px = 16,	.glyph_index = 579936},/*(藻)*/
    {.w_px = 16,	.glyph_index = 580104},/*(枣)*/
    {.w_px = 16,	.glyph_index = 580272},/*(早)*/
    {.w_px = 16,	.glyph_index = 580440},/*(澡)*/
    {.w_px = 16,	.glyph_index = 580608},/*(蚤)*/
    {.w_px = 16,	.glyph_index = 580776},/*(躁)*/
    {.w_px = 16,	.glyph_index = 580944},/*(噪)*/
    {.w_px = 16,	.glyph_index = 581112},/*(造)*/
    {.w_px = 16,	.glyph_index = 581280},/*(皂)*/
    {.w_px = 16,	.glyph_index = 581448},/*(灶)*/
    {.w_px = 16,	.glyph_index = 581616},/*(燥)*/
    {.w_px = 16,	.glyph_index = 581784},/*(责)*/
    {.w_px = 16,	.glyph_index = 581952},/*(择)*/
    {.w_px = 16,	.glyph_index = 582120},/*(则)*/
    {.w_px = 16,	.glyph_index = 582288},/*(泽)*/
    {.w_px = 16,	.glyph_index = 582456},/*(贼)*/
    {.w_px = 16,	.glyph_index = 582624},/*(怎)*/
    {.w_px = 16,	.glyph_index = 582792},/*(增)*/
    {.w_px = 16,	.glyph_index = 582960},/*(憎)*/
    {.w_px = 16,	.glyph_index = 583128},/*(曾)*/
    {.w_px = 16,	.glyph_index = 583296},/*(赠)*/
    {.w_px = 16,	.glyph_index = 583464},/*(扎)*/
    {.w_px = 16,	.glyph_index = 583632},/*(喳)*/
    {.w_px = 16,	.glyph_index = 583800},/*(渣)*/
    {.w_px = 16,	.glyph_index = 583968},/*(札)*/
    {.w_px = 16,	.glyph_index = 584136},/*(轧)*/
    {.w_px = 16,	.glyph_index = 584304},/*(铡)*/
    {.w_px = 16,	.glyph_index = 584472},/*(闸)*/
    {.w_px = 16,	.glyph_index = 584640},/*(眨)*/
    {.w_px = 16,	.glyph_index = 584808},/*(栅)*/
    {.w_px = 16,	.glyph_index = 584976},/*(榨)*/
    {.w_px = 16,	.glyph_index = 585144},/*(咋)*/
    {.w_px = 16,	.glyph_index = 585312},/*(乍)*/
    {.w_px = 16,	.glyph_index = 585480},/*(炸)*/
    {.w_px = 16,	.glyph_index = 585648},/*(诈)*/
    {.w_px = 16,	.glyph_index = 585816},/*(摘)*/
    {.w_px = 16,	.glyph_index = 585984},/*(斋)*/
    {.w_px = 16,	.glyph_index = 586152},/*(宅)*/
    {.w_px = 16,	.glyph_index = 586320},/*(窄)*/
    {.w_px = 16,	.glyph_index = 586488},/*(债)*/
    {.w_px = 16,	.glyph_index = 586656},/*(寨)*/
    {.w_px = 16,	.glyph_index = 586824},/*(瞻)*/
    {.w_px = 16,	.glyph_index = 586992},/*(毡)*/
    {.w_px = 16,	.glyph_index = 587160},/*(詹)*/
    {.w_px = 16,	.glyph_index = 587328},/*(粘)*/
    {.w_px = 16,	.glyph_index = 587496},/*(沾)*/
    {.w_px = 16,	.glyph_index = 587664},/*(盏)*/
    {.w_px = 16,	.glyph_index = 587832},/*(斩)*/
    {.w_px = 16,	.glyph_index = 588000},/*(辗)*/
    {.w_px = 16,	.glyph_index = 588168},/*(崭)*/
    {.w_px = 16,	.glyph_index = 588336},/*(展)*/
    {.w_px = 16,	.glyph_index = 588504},/*(蘸)*/
    {.w_px = 16,	.glyph_index = 588672},/*(栈)*/
    {.w_px = 16,	.glyph_index = 588840},/*(占)*/
    {.w_px = 16,	.glyph_index = 589008},/*(战)*/
    {.w_px = 16,	.glyph_index = 589176},/*(站)*/
    {.w_px = 16,	.glyph_index = 589344},/*(湛)*/
    {.w_px = 16,	.glyph_index = 589512},/*(绽)*/
    {.w_px = 16,	.glyph_index = 589680},/*(樟)*/
    {.w_px = 16,	.glyph_index = 589848},/*(章)*/
    {.w_px = 16,	.glyph_index = 590016},/*(彰)*/
    {.w_px = 16,	.glyph_index = 590184},/*(漳)*/
    {.w_px = 16,	.glyph_index = 590352},/*(张)*/
    {.w_px = 16,	.glyph_index = 590520},/*(掌)*/
    {.w_px = 16,	.glyph_index = 590688},/*(涨)*/
    {.w_px = 16,	.glyph_index = 590856},/*(杖)*/
    {.w_px = 16,	.glyph_index = 591024},/*(丈)*/
    {.w_px = 16,	.glyph_index = 591192},/*(帐)*/
    {.w_px = 16,	.glyph_index = 591360},/*(账)*/
    {.w_px = 16,	.glyph_index = 591528},/*(仗)*/
    {.w_px = 16,	.glyph_index = 591696},/*(胀)*/
    {.w_px = 16,	.glyph_index = 591864},/*(瘴)*/
    {.w_px = 16,	.glyph_index = 592032},/*(障)*/
    {.w_px = 16,	.glyph_index = 592200},/*(招)*/
    {.w_px = 16,	.glyph_index = 592368},/*(昭)*/
    {.w_px = 16,	.glyph_index = 592536},/*(找)*/
    {.w_px = 16,	.glyph_index = 592704},/*(沼)*/
    {.w_px = 16,	.glyph_index = 592872},/*(赵)*/
    {.w_px = 16,	.glyph_index = 593040},/*(照)*/
    {.w_px = 16,	.glyph_index = 593208},/*(罩)*/
    {.w_px = 16,	.glyph_index = 593376},/*(兆)*/
    {.w_px = 16,	.glyph_index = 593544},/*(肇)*/
    {.w_px = 16,	.glyph_index = 593712},/*(召)*/
    {.w_px = 16,	.glyph_index = 593880},/*(遮)*/
    {.w_px = 16,	.glyph_index = 594048},/*(折)*/
    {.w_px = 16,	.glyph_index = 594216},/*(哲)*/
    {.w_px = 16,	.glyph_index = 594384},/*(蛰)*/
    {.w_px = 16,	.glyph_index = 594552},/*(辙)*/
    {.w_px = 16,	.glyph_index = 594720},/*(者)*/
    {.w_px = 16,	.glyph_index = 594888},/*(锗)*/
    {.w_px = 16,	.glyph_index = 595056},/*(蔗)*/
    {.w_px = 16,	.glyph_index = 595224},/*(这)*/
    {.w_px = 16,	.glyph_index = 595392},/*(浙)*/
    {.w_px = 16,	.glyph_index = 595560},/*(珍)*/
    {.w_px = 16,	.glyph_index = 595728},/*(斟)*/
    {.w_px = 16,	.glyph_index = 595896},/*(真)*/
    {.w_px = 16,	.glyph_index = 596064},/*(甄)*/
    {.w_px = 16,	.glyph_index = 596232},/*(砧)*/
    {.w_px = 16,	.glyph_index = 596400},/*(臻)*/
    {.w_px = 16,	.glyph_index = 596568},/*(贞)*/
    {.w_px = 16,	.glyph_index = 596736},/*(针)*/
    {.w_px = 16,	.glyph_index = 596904},/*(侦)*/
    {.w_px = 16,	.glyph_index = 597072},/*(枕)*/
    {.w_px = 16,	.glyph_index = 597240},/*(疹)*/
    {.w_px = 16,	.glyph_index = 597408},/*(诊)*/
    {.w_px = 16,	.glyph_index = 597576},/*(震)*/
    {.w_px = 16,	.glyph_index = 597744},/*(振)*/
    {.w_px = 16,	.glyph_index = 597912},/*(镇)*/
    {.w_px = 16,	.glyph_index = 598080},/*(阵)*/
    {.w_px = 16,	.glyph_index = 598248},/*(蒸)*/
    {.w_px = 16,	.glyph_index = 598416},/*(挣)*/
    {.w_px = 16,	.glyph_index = 598584},/*(睁)*/
    {.w_px = 16,	.glyph_index = 598752},/*(征)*/
    {.w_px = 16,	.glyph_index = 598920},/*(狰)*/
    {.w_px = 16,	.glyph_index = 599088},/*(争)*/
    {.w_px = 16,	.glyph_index = 599256},/*(怔)*/
    {.w_px = 16,	.glyph_index = 599424},/*(整)*/
    {.w_px = 16,	.glyph_index = 599592},/*(拯)*/
    {.w_px = 16,	.glyph_index = 599760},/*(正)*/
    {.w_px = 16,	.glyph_index = 599928},/*(政)*/
    {.w_px = 16,	.glyph_index = 600096},/*(帧)*/
    {.w_px = 16,	.glyph_index = 600264},/*(症)*/
    {.w_px = 16,	.glyph_index = 600432},/*(郑)*/
    {.w_px = 16,	.glyph_index = 600600},/*(证)*/
    {.w_px = 16,	.glyph_index = 600768},/*(芝)*/
    {.w_px = 16,	.glyph_index = 600936},/*(枝)*/
    {.w_px = 16,	.glyph_index = 601104},/*(支)*/
    {.w_px = 16,	.glyph_index = 601272},/*(吱)*/
    {.w_px = 16,	.glyph_index = 601440},/*(蜘)*/
    {.w_px = 16,	.glyph_index = 601608},/*(知)*/
    {.w_px = 16,	.glyph_index = 601776},/*(肢)*/
    {.w_px = 16,	.glyph_index = 601944},/*(脂)*/
    {.w_px = 16,	.glyph_index = 602112},/*(汁)*/
    {.w_px = 16,	.glyph_index = 602280},/*(之)*/
    {.w_px = 16,	.glyph_index = 602448},/*(织)*/
    {.w_px = 16,	.glyph_index = 602616},/*(职)*/
    {.w_px = 16,	.glyph_index = 602784},/*(直)*/
    {.w_px = 16,	.glyph_index = 602952},/*(植)*/
    {.w_px = 16,	.glyph_index = 603120},/*(殖)*/
    {.w_px = 16,	.glyph_index = 603288},/*(执)*/
    {.w_px = 16,	.glyph_index = 603456},/*(值)*/
    {.w_px = 16,	.glyph_index = 603624},/*(侄)*/
    {.w_px = 16,	.glyph_index = 603792},/*(址)*/
    {.w_px = 16,	.glyph_index = 603960},/*(指)*/
    {.w_px = 16,	.glyph_index = 604128},/*(止)*/
    {.w_px = 16,	.glyph_index = 604296},/*(趾)*/
    {.w_px = 16,	.glyph_index = 604464},/*(只)*/
    {.w_px = 16,	.glyph_index = 604632},/*(旨)*/
    {.w_px = 16,	.glyph_index = 604800},/*(纸)*/
    {.w_px = 16,	.glyph_index = 604968},/*(志)*/
    {.w_px = 16,	.glyph_index = 605136},/*(挚)*/
    {.w_px = 16,	.glyph_index = 605304},/*(掷)*/
    {.w_px = 16,	.glyph_index = 605472},/*(至)*/
    {.w_px = 16,	.glyph_index = 605640},/*(致)*/
    {.w_px = 16,	.glyph_index = 605808},/*(置)*/
    {.w_px = 16,	.glyph_index = 605976},/*(帜)*/
    {.w_px = 16,	.glyph_index = 606144},/*(峙)*/
    {.w_px = 16,	.glyph_index = 606312},/*(制)*/
    {.w_px = 16,	.glyph_index = 606480},/*(智)*/
    {.w_px = 16,	.glyph_index = 606648},/*(秩)*/
    {.w_px = 16,	.glyph_index = 606816},/*(稚)*/
    {.w_px = 16,	.glyph_index = 606984},/*(质)*/
    {.w_px = 16,	.glyph_index = 607152},/*(炙)*/
    {.w_px = 16,	.glyph_index = 607320},/*(痔)*/
    {.w_px = 16,	.glyph_index = 607488},/*(滞)*/
    {.w_px = 16,	.glyph_index = 607656},/*(治)*/
    {.w_px = 16,	.glyph_index = 607824},/*(窒)*/
    {.w_px = 16,	.glyph_index = 607992},/*(中)*/
    {.w_px = 16,	.glyph_index = 608160},/*(盅)*/
    {.w_px = 16,	.glyph_index = 608328},/*(忠)*/
    {.w_px = 16,	.glyph_index = 608496},/*(钟)*/
    {.w_px = 16,	.glyph_index = 608664},/*(衷)*/
    {.w_px = 16,	.glyph_index = 608832},/*(终)*/
    {.w_px = 16,	.glyph_index = 609000},/*(种)*/
    {.w_px = 16,	.glyph_index = 609168},/*(肿)*/
    {.w_px = 16,	.glyph_index = 609336},/*(重)*/
    {.w_px = 16,	.glyph_index = 609504},/*(仲)*/
    {.w_px = 16,	.glyph_index = 609672},/*(众)*/
    {.w_px = 16,	.glyph_index = 609840},/*(舟)*/
    {.w_px = 16,	.glyph_index = 610008},/*(周)*/
    {.w_px = 16,	.glyph_index = 610176},/*(州)*/
    {.w_px = 16,	.glyph_index = 610344},/*(洲)*/
    {.w_px = 16,	.glyph_index = 610512},/*(诌)*/
    {.w_px = 16,	.glyph_index = 610680},/*(粥)*/
    {.w_px = 16,	.glyph_index = 610848},/*(轴)*/
    {.w_px = 16,	.glyph_index = 611016},/*(肘)*/
    {.w_px = 16,	.glyph_index = 611184},/*(帚)*/
    {.w_px = 16,	.glyph_index = 611352},/*(咒)*/
    {.w_px = 16,	.glyph_index = 611520},/*(皱)*/
    {.w_px = 16,	.glyph_index = 611688},/*(宙)*/
    {.w_px = 16,	.glyph_index = 611856},/*(昼)*/
    {.w_px = 16,	.glyph_index = 612024},/*(骤)*/
    {.w_px = 16,	.glyph_index = 612192},/*(珠)*/
    {.w_px = 16,	.glyph_index = 612360},/*(株)*/
    {.w_px = 16,	.glyph_index = 612528},/*(蛛)*/
    {.w_px = 16,	.glyph_index = 612696},/*(朱)*/
    {.w_px = 16,	.glyph_index = 612864},/*(猪)*/
    {.w_px = 16,	.glyph_index = 613032},/*(诸)*/
    {.w_px = 16,	.glyph_index = 613200},/*(诛)*/
    {.w_px = 16,	.glyph_index = 613368},/*(逐)*/
    {.w_px = 16,	.glyph_index = 613536},/*(竹)*/
    {.w_px = 16,	.glyph_index = 613704},/*(烛)*/
    {.w_px = 16,	.glyph_index = 613872},/*(煮)*/
    {.w_px = 16,	.glyph_index = 614040},/*(拄)*/
    {.w_px = 16,	.glyph_index = 614208},/*(瞩)*/
    {.w_px = 16,	.glyph_index = 614376},/*(嘱)*/
    {.w_px = 16,	.glyph_index = 614544},/*(主)*/
    {.w_px = 16,	.glyph_index = 614712},/*(著)*/
    {.w_px = 16,	.glyph_index = 614880},/*(柱)*/
    {.w_px = 16,	.glyph_index = 615048},/*(助)*/
    {.w_px = 16,	.glyph_index = 615216},/*(蛀)*/
    {.w_px = 16,	.glyph_index = 615384},/*(贮)*/
    {.w_px = 16,	.glyph_index = 615552},/*(铸)*/
    {.w_px = 16,	.glyph_index = 615720},/*(筑)*/
    {.w_px = 16,	.glyph_index = 615888},/*(住)*/
    {.w_px = 16,	.glyph_index = 616056},/*(注)*/
    {.w_px = 16,	.glyph_index = 616224},/*(祝)*/
    {.w_px = 16,	.glyph_index = 616392},/*(驻)*/
    {.w_px = 16,	.glyph_index = 616560},/*(抓)*/
    {.w_px = 16,	.glyph_index = 616728},/*(爪)*/
    {.w_px = 16,	.glyph_index = 616896},/*(拽)*/
    {.w_px = 16,	.glyph_index = 617064},/*(专)*/
    {.w_px = 16,	.glyph_index = 617232},/*(砖)*/
    {.w_px = 16,	.glyph_index = 617400},/*(转)*/
    {.w_px = 16,	.glyph_index = 617568},/*(撰)*/
    {.w_px = 16,	.glyph_index = 617736},/*(赚)*/
    {.w_px = 16,	.glyph_index = 617904},/*(篆)*/
    {.w_px = 16,	.glyph_index = 618072},/*(桩)*/
    {.w_px = 16,	.glyph_index = 618240},/*(庄)*/
    {.w_px = 16,	.glyph_index = 618408},/*(装)*/
    {.w_px = 16,	.glyph_index = 618576},/*(妆)*/
    {.w_px = 16,	.glyph_index = 618744},/*(撞)*/
    {.w_px = 16,	.glyph_index = 618912},/*(壮)*/
    {.w_px = 16,	.glyph_index = 619080},/*(状)*/
    {.w_px = 16,	.glyph_index = 619248},/*(椎)*/
    {.w_px = 16,	.glyph_index = 619416},/*(锥)*/
    {.w_px = 16,	.glyph_index = 619584},/*(追)*/
    {.w_px = 16,	.glyph_index = 619752},/*(赘)*/
    {.w_px = 16,	.glyph_index = 619920},/*(坠)*/
    {.w_px = 16,	.glyph_index = 620088},/*(缀)*/
    {.w_px = 16,	.glyph_index = 620256},/*(谆)*/
    {.w_px = 16,	.glyph_index = 620424},/*(准)*/
    {.w_px = 16,	.glyph_index = 620592},/*(捉)*/
    {.w_px = 16,	.glyph_index = 620760},/*(拙)*/
    {.w_px = 16,	.glyph_index = 620928},/*(卓)*/
    {.w_px = 16,	.glyph_index = 621096},/*(桌)*/
    {.w_px = 16,	.glyph_index = 621264},/*(琢)*/
    {.w_px = 16,	.glyph_index = 621432},/*(茁)*/
    {.w_px = 16,	.glyph_index = 621600},/*(酌)*/
    {.w_px = 16,	.glyph_index = 621768},/*(啄)*/
    {.w_px = 16,	.glyph_index = 621936},/*(着)*/
    {.w_px = 16,	.glyph_index = 622104},/*(灼)*/
    {.w_px = 16,	.glyph_index = 622272},/*(浊)*/
    {.w_px = 16,	.glyph_index = 622440},/*(兹)*/
    {.w_px = 16,	.glyph_index = 622608},/*(咨)*/
    {.w_px = 16,	.glyph_index = 622776},/*(资)*/
    {.w_px = 16,	.glyph_index = 622944},/*(姿)*/
    {.w_px = 16,	.glyph_index = 623112},/*(滋)*/
    {.w_px = 16,	.glyph_index = 623280},/*(淄)*/
    {.w_px = 16,	.glyph_index = 623448},/*(孜)*/
    {.w_px = 16,	.glyph_index = 623616},/*(紫)*/
    {.w_px = 16,	.glyph_index = 623784},/*(仔)*/
    {.w_px = 16,	.glyph_index = 623952},/*(籽)*/
    {.w_px = 16,	.glyph_index = 624120},/*(滓)*/
    {.w_px = 16,	.glyph_index = 624288},/*(子)*/
    {.w_px = 16,	.glyph_index = 624456},/*(自)*/
    {.w_px = 16,	.glyph_index = 624624},/*(渍)*/
    {.w_px = 16,	.glyph_index = 624792},/*(字)*/
    {.w_px = 16,	.glyph_index = 624960},/*(鬃)*/
    {.w_px = 16,	.glyph_index = 625128},/*(棕)*/
    {.w_px = 16,	.glyph_index = 625296},/*(踪)*/
    {.w_px = 16,	.glyph_index = 625464},/*(宗)*/
    {.w_px = 16,	.glyph_index = 625632},/*(综)*/
    {.w_px = 16,	.glyph_index = 625800},/*(总)*/
    {.w_px = 16,	.glyph_index = 625968},/*(纵)*/
    {.w_px = 16,	.glyph_index = 626136},/*(邹)*/
    {.w_px = 16,	.glyph_index = 626304},/*(走)*/
    {.w_px = 16,	.glyph_index = 626472},/*(奏)*/
    {.w_px = 16,	.glyph_index = 626640},/*(揍)*/
    {.w_px = 16,	.glyph_index = 626808},/*(租)*/
    {.w_px = 16,	.glyph_index = 626976},/*(足)*/
    {.w_px = 16,	.glyph_index = 627144},/*(卒)*/
    {.w_px = 16,	.glyph_index = 627312},/*(族)*/
    {.w_px = 16,	.glyph_index = 627480},/*(祖)*/
    {.w_px = 16,	.glyph_index = 627648},/*(诅)*/
    {.w_px = 16,	.glyph_index = 627816},/*(阻)*/
    {.w_px = 16,	.glyph_index = 627984},/*(组)*/
    {.w_px = 16,	.glyph_index = 628152},/*(钻)*/
    {.w_px = 16,	.glyph_index = 628320},/*(纂)*/
    {.w_px = 16,	.glyph_index = 628488},/*(嘴)*/
    {.w_px = 16,	.glyph_index = 628656},/*(醉)*/
    {.w_px = 16,	.glyph_index = 628824},/*(最)*/
    {.w_px = 16,	.glyph_index = 628992},/*(罪)*/
    {.w_px = 16,	.glyph_index = 629160},/*(尊)*/
    {.w_px = 16,	.glyph_index = 629328},/*(遵)*/
    {.w_px = 16,	.glyph_index = 629496},/*(昨)*/
    {.w_px = 16,	.glyph_index = 629664},/*(左)*/
    {.w_px = 16,	.glyph_index = 629832},/*(佐)*/
    {.w_px = 16,	.glyph_index = 630000},/*(柞)*/
    {.w_px = 16,	.glyph_index = 630168},/*(做)*/
    {.w_px = 16,	.glyph_index = 630336},/*(作)*/
    {.w_px = 16,	.glyph_index = 630504},/*(坐)*/
    {.w_px = 16,	.glyph_index = 630672},/*(座)*/
    {.w_px = 16,	.glyph_index = 630840},/*()*/
    {.w_px = 16,	.glyph_index = 631008},/*()*/
    {.w_px = 16,	.glyph_index = 631176},/*()*/
    {.w_px = 16,	.glyph_index = 631344},/*()*/
    {.w_px = 16,	.glyph_index = 631512},/*()*/
    {.w_px = 16,	.glyph_index = 631680},/*(亍)*/
    {.w_px = 16,	.glyph_index = 631848},/*(丌)*/
    {.w_px = 16,	.glyph_index = 632016},/*(兀)*/
    {.w_px = 16,	.glyph_index = 632184},/*(丐)*/
    {.w_px = 16,	.glyph_index = 632352},/*(廿)*/
    {.w_px = 16,	.glyph_index = 632520},/*(卅)*/
    {.w_px = 16,	.glyph_index = 632688},/*(丕)*/
    {.w_px = 16,	.glyph_index = 632856},/*(亘)*/
    {.w_px = 16,	.glyph_index = 633024},/*(丞)*/
    {.w_px = 16,	.glyph_index = 633192},/*(鬲)*/
    {.w_px = 16,	.glyph_index = 633360},/*(孬)*/
    {.w_px = 16,	.glyph_index = 633528},/*(噩)*/
    {.w_px = 16,	.glyph_index = 633696},/*(丨)*/
    {.w_px = 16,	.glyph_index = 633864},/*(禺)*/
    {.w_px = 16,	.glyph_index = 634032},/*(丿)*/
    {.w_px = 16,	.glyph_index = 634200},/*(匕)*/
    {.w_px = 16,	.glyph_index = 634368},/*(乇)*/
    {.w_px = 16,	.glyph_index = 634536},/*(夭)*/
    {.w_px = 16,	.glyph_index = 634704},/*(爻)*/
    {.w_px = 16,	.glyph_index = 634872},/*(卮)*/
    {.w_px = 16,	.glyph_index = 635040},/*(氐)*/
    {.w_px = 16,	.glyph_index = 635208},/*(囟)*/
    {.w_px = 16,	.glyph_index = 635376},/*(胤)*/
    {.w_px = 16,	.glyph_index = 635544},/*(馗)*/
    {.w_px = 16,	.glyph_index = 635712},/*(毓)*/
    {.w_px = 16,	.glyph_index = 635880},/*(睾)*/
    {.w_px = 16,	.glyph_index = 636048},/*(鼗)*/
    {.w_px = 16,	.glyph_index = 636216},/*(丶)*/
    {.w_px = 16,	.glyph_index = 636384},/*(亟)*/
    {.w_px = 16,	.glyph_index = 636552},/*(鼐)*/
    {.w_px = 16,	.glyph_index = 636720},/*(乜)*/
    {.w_px = 16,	.glyph_index = 636888},/*(乩)*/
    {.w_px = 16,	.glyph_index = 637056},/*(亓)*/
    {.w_px = 16,	.glyph_index = 637224},/*(芈)*/
    {.w_px = 16,	.glyph_index = 637392},/*(孛)*/
    {.w_px = 16,	.glyph_index = 637560},/*(啬)*/
    {.w_px = 16,	.glyph_index = 637728},/*(嘏)*/
    {.w_px = 16,	.glyph_index = 637896},/*(仄)*/
    {.w_px = 16,	.glyph_index = 638064},/*(厍)*/
    {.w_px = 16,	.glyph_index = 638232},/*(厝)*/
    {.w_px = 16,	.glyph_index = 638400},/*(厣)*/
    {.w_px = 16,	.glyph_index = 638568},/*(厥)*/
    {.w_px = 16,	.glyph_index = 638736},/*(厮)*/
    {.w_px = 16,	.glyph_index = 638904},/*(靥)*/
    {.w_px = 16,	.glyph_index = 639072},/*(赝)*/
    {.w_px = 16,	.glyph_index = 639240},/*(匚)*/
    {.w_px = 16,	.glyph_index = 639408},/*(叵)*/
    {.w_px = 16,	.glyph_index = 639576},/*(匦)*/
    {.w_px = 16,	.glyph_index = 639744},/*(匮)*/
    {.w_px = 16,	.glyph_index = 639912},/*(匾)*/
    {.w_px = 16,	.glyph_index = 640080},/*(赜)*/
    {.w_px = 16,	.glyph_index = 640248},/*(卦)*/
    {.w_px = 16,	.glyph_index = 640416},/*(卣)*/
    {.w_px = 16,	.glyph_index = 640584},/*(刂)*/
    {.w_px = 16,	.glyph_index = 640752},/*(刈)*/
    {.w_px = 16,	.glyph_index = 640920},/*(刎)*/
    {.w_px = 16,	.glyph_index = 641088},/*(刭)*/
    {.w_px = 16,	.glyph_index = 641256},/*(刳)*/
    {.w_px = 16,	.glyph_index = 641424},/*(刿)*/
    {.w_px = 16,	.glyph_index = 641592},/*(剀)*/
    {.w_px = 16,	.glyph_index = 641760},/*(剌)*/
    {.w_px = 16,	.glyph_index = 641928},/*(剞)*/
    {.w_px = 16,	.glyph_index = 642096},/*(剡)*/
    {.w_px = 16,	.glyph_index = 642264},/*(剜)*/
    {.w_px = 16,	.glyph_index = 642432},/*(蒯)*/
    {.w_px = 16,	.glyph_index = 642600},/*(剽)*/
    {.w_px = 16,	.glyph_index = 642768},/*(劂)*/
    {.w_px = 16,	.glyph_index = 642936},/*(劁)*/
    {.w_px = 16,	.glyph_index = 643104},/*(劐)*/
    {.w_px = 16,	.glyph_index = 643272},/*(劓)*/
    {.w_px = 16,	.glyph_index = 643440},/*(冂)*/
    {.w_px = 16,	.glyph_index = 643608},/*(罔)*/
    {.w_px = 16,	.glyph_index = 643776},/*(亻)*/
    {.w_px = 16,	.glyph_index = 643944},/*(仃)*/
    {.w_px = 16,	.glyph_index = 644112},/*(仉)*/
    {.w_px = 16,	.glyph_index = 644280},/*(仂)*/
    {.w_px = 16,	.glyph_index = 644448},/*(仨)*/
    {.w_px = 16,	.glyph_index = 644616},/*(仡)*/
    {.w_px = 16,	.glyph_index = 644784},/*(仫)*/
    {.w_px = 16,	.glyph_index = 644952},/*(仞)*/
    {.w_px = 16,	.glyph_index = 645120},/*(伛)*/
    {.w_px = 16,	.glyph_index = 645288},/*(仳)*/
    {.w_px = 16,	.glyph_index = 645456},/*(伢)*/
    {.w_px = 16,	.glyph_index = 645624},/*(佤)*/
    {.w_px = 16,	.glyph_index = 645792},/*(仵)*/
    {.w_px = 16,	.glyph_index = 645960},/*(伥)*/
    {.w_px = 16,	.glyph_index = 646128},/*(伧)*/
    {.w_px = 16,	.glyph_index = 646296},/*(伉)*/
    {.w_px = 16,	.glyph_index = 646464},/*(伫)*/
    {.w_px = 16,	.glyph_index = 646632},/*(佞)*/
    {.w_px = 16,	.glyph_index = 646800},/*(佧)*/
    {.w_px = 16,	.glyph_index = 646968},/*(攸)*/
    {.w_px = 16,	.glyph_index = 647136},/*(佚)*/
    {.w_px = 16,	.glyph_index = 647304},/*(佝)*/
    {.w_px = 16,	.glyph_index = 647472},/*(佟)*/
    {.w_px = 16,	.glyph_index = 647640},/*(佗)*/
    {.w_px = 16,	.glyph_index = 647808},/*(伲)*/
    {.w_px = 16,	.glyph_index = 647976},/*(伽)*/
    {.w_px = 16,	.glyph_index = 648144},/*(佶)*/
    {.w_px = 16,	.glyph_index = 648312},/*(佴)*/
    {.w_px = 16,	.glyph_index = 648480},/*(侑)*/
    {.w_px = 16,	.glyph_index = 648648},/*(侉)*/
    {.w_px = 16,	.glyph_index = 648816},/*(侃)*/
    {.w_px = 16,	.glyph_index = 648984},/*(侏)*/
    {.w_px = 16,	.glyph_index = 649152},/*(佾)*/
    {.w_px = 16,	.glyph_index = 649320},/*(佻)*/
    {.w_px = 16,	.glyph_index = 649488},/*(侪)*/
    {.w_px = 16,	.glyph_index = 649656},/*(佼)*/
    {.w_px = 16,	.glyph_index = 649824},/*(侬)*/
    {.w_px = 16,	.glyph_index = 649992},/*(侔)*/
    {.w_px = 16,	.glyph_index = 650160},/*(俦)*/
    {.w_px = 16,	.glyph_index = 650328},/*(俨)*/
    {.w_px = 16,	.glyph_index = 650496},/*(俪)*/
    {.w_px = 16,	.glyph_index = 650664},/*(俅)*/
    {.w_px = 16,	.glyph_index = 650832},/*(俚)*/
    {.w_px = 16,	.glyph_index = 651000},/*(俣)*/
    {.w_px = 16,	.glyph_index = 651168},/*(俜)*/
    {.w_px = 16,	.glyph_index = 651336},/*(俑)*/
    {.w_px = 16,	.glyph_index = 651504},/*(俟)*/
    {.w_px = 16,	.glyph_index = 651672},/*(俸)*/
    {.w_px = 16,	.glyph_index = 651840},/*(倩)*/
    {.w_px = 16,	.glyph_index = 652008},/*(偌)*/
    {.w_px = 16,	.glyph_index = 652176},/*(俳)*/
    {.w_px = 16,	.glyph_index = 652344},/*(倬)*/
    {.w_px = 16,	.glyph_index = 652512},/*(倏)*/
    {.w_px = 16,	.glyph_index = 652680},/*(倮)*/
    {.w_px = 16,	.glyph_index = 652848},/*(倭)*/
    {.w_px = 16,	.glyph_index = 653016},/*(俾)*/
    {.w_px = 16,	.glyph_index = 653184},/*(倜)*/
    {.w_px = 16,	.glyph_index = 653352},/*(倌)*/
    {.w_px = 16,	.glyph_index = 653520},/*(倥)*/
    {.w_px = 16,	.glyph_index = 653688},/*(倨)*/
    {.w_px = 16,	.glyph_index = 653856},/*(偾)*/
    {.w_px = 16,	.glyph_index = 654024},/*(偃)*/
    {.w_px = 16,	.glyph_index = 654192},/*(偕)*/
    {.w_px = 16,	.glyph_index = 654360},/*(偈)*/
    {.w_px = 16,	.glyph_index = 654528},/*(偎)*/
    {.w_px = 16,	.glyph_index = 654696},/*(偬)*/
    {.w_px = 16,	.glyph_index = 654864},/*(偻)*/
    {.w_px = 16,	.glyph_index = 655032},/*(傥)*/
    {.w_px = 16,	.glyph_index = 655200},/*(傧)*/
    {.w_px = 16,	.glyph_index = 655368},/*(傩)*/
    {.w_px = 16,	.glyph_index = 655536},/*(傺)*/
    {.w_px = 16,	.glyph_index = 655704},/*(僖)*/
    {.w_px = 16,	.glyph_index = 655872},/*(儆)*/
    {.w_px = 16,	.glyph_index = 656040},/*(僭)*/
    {.w_px = 16,	.glyph_index = 656208},/*(僬)*/
    {.w_px = 16,	.glyph_index = 656376},/*(僦)*/
    {.w_px = 16,	.glyph_index = 656544},/*(僮)*/
    {.w_px = 16,	.glyph_index = 656712},/*(儇)*/
    {.w_px = 16,	.glyph_index = 656880},/*(儋)*/
    {.w_px = 16,	.glyph_index = 657048},/*(仝)*/
    {.w_px = 16,	.glyph_index = 657216},/*(氽)*/
    {.w_px = 16,	.glyph_index = 657384},/*(佘)*/
    {.w_px = 16,	.glyph_index = 657552},/*(佥)*/
    {.w_px = 16,	.glyph_index = 657720},/*(俎)*/
    {.w_px = 16,	.glyph_index = 657888},/*(龠)*/
    {.w_px = 16,	.glyph_index = 658056},/*(汆)*/
    {.w_px = 16,	.glyph_index = 658224},/*(籴)*/
    {.w_px = 16,	.glyph_index = 658392},/*(兮)*/
    {.w_px = 16,	.glyph_index = 658560},/*(巽)*/
    {.w_px = 16,	.glyph_index = 658728},/*(黉)*/
    {.w_px = 16,	.glyph_index = 658896},/*(馘)*/
    {.w_px = 16,	.glyph_index = 659064},/*(冁)*/
    {.w_px = 16,	.glyph_index = 659232},/*(夔)*/
    {.w_px = 16,	.glyph_index = 659400},/*(勹)*/
    {.w_px = 16,	.glyph_index = 659568},/*(匍)*/
    {.w_px = 16,	.glyph_index = 659736},/*(訇)*/
    {.w_px = 16,	.glyph_index = 659904},/*(匐)*/
    {.w_px = 16,	.glyph_index = 660072},/*(凫)*/
    {.w_px = 16,	.glyph_index = 660240},/*(夙)*/
    {.w_px = 16,	.glyph_index = 660408},/*(兕)*/
    {.w_px = 16,	.glyph_index = 660576},/*(亠)*/
    {.w_px = 16,	.glyph_index = 660744},/*(兖)*/
    {.w_px = 16,	.glyph_index = 660912},/*(亳)*/
    {.w_px = 16,	.glyph_index = 661080},/*(衮)*/
    {.w_px = 16,	.glyph_index = 661248},/*(袤)*/
    {.w_px = 16,	.glyph_index = 661416},/*(亵)*/
    {.w_px = 16,	.glyph_index = 661584},/*(脔)*/
    {.w_px = 16,	.glyph_index = 661752},/*(裒)*/
    {.w_px = 16,	.glyph_index = 661920},/*(禀)*/
    {.w_px = 16,	.glyph_index = 662088},/*(嬴)*/
    {.w_px = 16,	.glyph_index = 662256},/*(蠃)*/
    {.w_px = 16,	.glyph_index = 662424},/*(羸)*/
    {.w_px = 16,	.glyph_index = 662592},/*(冫)*/
    {.w_px = 16,	.glyph_index = 662760},/*(冱)*/
    {.w_px = 16,	.glyph_index = 662928},/*(冽)*/
    {.w_px = 16,	.glyph_index = 663096},/*(冼)*/
    {.w_px = 16,	.glyph_index = 663264},/*(凇)*/
    {.w_px = 16,	.glyph_index = 663432},/*(冖)*/
    {.w_px = 16,	.glyph_index = 663600},/*(冢)*/
    {.w_px = 16,	.glyph_index = 663768},/*(冥)*/
    {.w_px = 16,	.glyph_index = 663936},/*(讠)*/
    {.w_px = 16,	.glyph_index = 664104},/*(讦)*/
    {.w_px = 16,	.glyph_index = 664272},/*(讧)*/
    {.w_px = 16,	.glyph_index = 664440},/*(讪)*/
    {.w_px = 16,	.glyph_index = 664608},/*(讴)*/
    {.w_px = 16,	.glyph_index = 664776},/*(讵)*/
    {.w_px = 16,	.glyph_index = 664944},/*(讷)*/
    {.w_px = 16,	.glyph_index = 665112},/*(诂)*/
    {.w_px = 16,	.glyph_index = 665280},/*(诃)*/
    {.w_px = 16,	.glyph_index = 665448},/*(诋)*/
    {.w_px = 16,	.glyph_index = 665616},/*(诏)*/
    {.w_px = 16,	.glyph_index = 665784},/*(诎)*/
    {.w_px = 16,	.glyph_index = 665952},/*(诒)*/
    {.w_px = 16,	.glyph_index = 666120},/*(诓)*/
    {.w_px = 16,	.glyph_index = 666288},/*(诔)*/
    {.w_px = 16,	.glyph_index = 666456},/*(诖)*/
    {.w_px = 16,	.glyph_index = 666624},/*(诘)*/
    {.w_px = 16,	.glyph_index = 666792},/*(诙)*/
    {.w_px = 16,	.glyph_index = 666960},/*(诜)*/
    {.w_px = 16,	.glyph_index = 667128},/*(诟)*/
    {.w_px = 16,	.glyph_index = 667296},/*(诠)*/
    {.w_px = 16,	.glyph_index = 667464},/*(诤)*/
    {.w_px = 16,	.glyph_index = 667632},/*(诨)*/
    {.w_px = 16,	.glyph_index = 667800},/*(诩)*/
    {.w_px = 16,	.glyph_index = 667968},/*(诮)*/
    {.w_px = 16,	.glyph_index = 668136},/*(诰)*/
    {.w_px = 16,	.glyph_index = 668304},/*(诳)*/
    {.w_px = 16,	.glyph_index = 668472},/*(诶)*/
    {.w_px = 16,	.glyph_index = 668640},/*(诹)*/
    {.w_px = 16,	.glyph_index = 668808},/*(诼)*/
    {.w_px = 16,	.glyph_index = 668976},/*(诿)*/
    {.w_px = 16,	.glyph_index = 669144},/*(谀)*/
    {.w_px = 16,	.glyph_index = 669312},/*(谂)*/
    {.w_px = 16,	.glyph_index = 669480},/*(谄)*/
    {.w_px = 16,	.glyph_index = 669648},/*(谇)*/
    {.w_px = 16,	.glyph_index = 669816},/*(谌)*/
    {.w_px = 16,	.glyph_index = 669984},/*(谏)*/
    {.w_px = 16,	.glyph_index = 670152},/*(谑)*/
    {.w_px = 16,	.glyph_index = 670320},/*(谒)*/
    {.w_px = 16,	.glyph_index = 670488},/*(谔)*/
    {.w_px = 16,	.glyph_index = 670656},/*(谕)*/
    {.w_px = 16,	.glyph_index = 670824},/*(谖)*/
    {.w_px = 16,	.glyph_index = 670992},/*(谙)*/
    {.w_px = 16,	.glyph_index = 671160},/*(谛)*/
    {.w_px = 16,	.glyph_index = 671328},/*(谘)*/
    {.w_px = 16,	.glyph_index = 671496},/*(谝)*/
    {.w_px = 16,	.glyph_index = 671664},/*(谟)*/
    {.w_px = 16,	.glyph_index = 671832},/*(谠)*/
    {.w_px = 16,	.glyph_index = 672000},/*(谡)*/
    {.w_px = 16,	.glyph_index = 672168},/*(谥)*/
    {.w_px = 16,	.glyph_index = 672336},/*(谧)*/
    {.w_px = 16,	.glyph_index = 672504},/*(谪)*/
    {.w_px = 16,	.glyph_index = 672672},/*(谫)*/
    {.w_px = 16,	.glyph_index = 672840},/*(谮)*/
    {.w_px = 16,	.glyph_index = 673008},/*(谯)*/
    {.w_px = 16,	.glyph_index = 673176},/*(谲)*/
    {.w_px = 16,	.glyph_index = 673344},/*(谳)*/
    {.w_px = 16,	.glyph_index = 673512},/*(谵)*/
    {.w_px = 16,	.glyph_index = 673680},/*(谶)*/
    {.w_px = 16,	.glyph_index = 673848},/*(卩)*/
    {.w_px = 16,	.glyph_index = 674016},/*(卺)*/
    {.w_px = 16,	.glyph_index = 674184},/*(阝)*/
    {.w_px = 16,	.glyph_index = 674352},/*(阢)*/
    {.w_px = 16,	.glyph_index = 674520},/*(阡)*/
    {.w_px = 16,	.glyph_index = 674688},/*(阱)*/
    {.w_px = 16,	.glyph_index = 674856},/*(阪)*/
    {.w_px = 16,	.glyph_index = 675024},/*(阽)*/
    {.w_px = 16,	.glyph_index = 675192},/*(阼)*/
    {.w_px = 16,	.glyph_index = 675360},/*(陂)*/
    {.w_px = 16,	.glyph_index = 675528},/*(陉)*/
    {.w_px = 16,	.glyph_index = 675696},/*(陔)*/
    {.w_px = 16,	.glyph_index = 675864},/*(陟)*/
    {.w_px = 16,	.glyph_index = 676032},/*(陧)*/
    {.w_px = 16,	.glyph_index = 676200},/*(陬)*/
    {.w_px = 16,	.glyph_index = 676368},/*(陲)*/
    {.w_px = 16,	.glyph_index = 676536},/*(陴)*/
    {.w_px = 16,	.glyph_index = 676704},/*(隈)*/
    {.w_px = 16,	.glyph_index = 676872},/*(隍)*/
    {.w_px = 16,	.glyph_index = 677040},/*(隗)*/
    {.w_px = 16,	.glyph_index = 677208},/*(隰)*/
    {.w_px = 16,	.glyph_index = 677376},/*(邗)*/
    {.w_px = 16,	.glyph_index = 677544},/*(邛)*/
    {.w_px = 16,	.glyph_index = 677712},/*(邝)*/
    {.w_px = 16,	.glyph_index = 677880},/*(邙)*/
    {.w_px = 16,	.glyph_index = 678048},/*(邬)*/
    {.w_px = 16,	.glyph_index = 678216},/*(邡)*/
    {.w_px = 16,	.glyph_index = 678384},/*(邴)*/
    {.w_px = 16,	.glyph_index = 678552},/*(邳)*/
    {.w_px = 16,	.glyph_index = 678720},/*(邶)*/
    {.w_px = 16,	.glyph_index = 678888},/*(邺)*/
    {.w_px = 16,	.glyph_index = 679056},/*(邸)*/
    {.w_px = 16,	.glyph_index = 679224},/*(邰)*/
    {.w_px = 16,	.glyph_index = 679392},/*(郏)*/
    {.w_px = 16,	.glyph_index = 679560},/*(郅)*/
    {.w_px = 16,	.glyph_index = 679728},/*(邾)*/
    {.w_px = 16,	.glyph_index = 679896},/*(郐)*/
    {.w_px = 16,	.glyph_index = 680064},/*(郄)*/
    {.w_px = 16,	.glyph_index = 680232},/*(郇)*/
    {.w_px = 16,	.glyph_index = 680400},/*(郓)*/
    {.w_px = 16,	.glyph_index = 680568},/*(郦)*/
    {.w_px = 16,	.glyph_index = 680736},/*(郢)*/
    {.w_px = 16,	.glyph_index = 680904},/*(郜)*/
    {.w_px = 16,	.glyph_index = 681072},/*(郗)*/
    {.w_px = 16,	.glyph_index = 681240},/*(郛)*/
    {.w_px = 16,	.glyph_index = 681408},/*(郫)*/
    {.w_px = 16,	.glyph_index = 681576},/*(郯)*/
    {.w_px = 16,	.glyph_index = 681744},/*(郾)*/
    {.w_px = 16,	.glyph_index = 681912},/*(鄄)*/
    {.w_px = 16,	.glyph_index = 682080},/*(鄢)*/
    {.w_px = 16,	.glyph_index = 682248},/*(鄞)*/
    {.w_px = 16,	.glyph_index = 682416},/*(鄣)*/
    {.w_px = 16,	.glyph_index = 682584},/*(鄱)*/
    {.w_px = 16,	.glyph_index = 682752},/*(鄯)*/
    {.w_px = 16,	.glyph_index = 682920},/*(鄹)*/
    {.w_px = 16,	.glyph_index = 683088},/*(酃)*/
    {.w_px = 16,	.glyph_index = 683256},/*(酆)*/
    {.w_px = 16,	.glyph_index = 683424},/*(刍)*/
    {.w_px = 16,	.glyph_index = 683592},/*(奂)*/
    {.w_px = 16,	.glyph_index = 683760},/*(劢)*/
    {.w_px = 16,	.glyph_index = 683928},/*(劬)*/
    {.w_px = 16,	.glyph_index = 684096},/*(劭)*/
    {.w_px = 16,	.glyph_index = 684264},/*(劾)*/
    {.w_px = 16,	.glyph_index = 684432},/*(哿)*/
    {.w_px = 16,	.glyph_index = 684600},/*(勐)*/
    {.w_px = 16,	.glyph_index = 684768},/*(勖)*/
    {.w_px = 16,	.glyph_index = 684936},/*(勰)*/
    {.w_px = 16,	.glyph_index = 685104},/*(叟)*/
    {.w_px = 16,	.glyph_index = 685272},/*(燮)*/
    {.w_px = 16,	.glyph_index = 685440},/*(矍)*/
    {.w_px = 16,	.glyph_index = 685608},/*(廴)*/
    {.w_px = 16,	.glyph_index = 685776},/*(凵)*/
    {.w_px = 16,	.glyph_index = 685944},/*(凼)*/
    {.w_px = 16,	.glyph_index = 686112},/*(鬯)*/
    {.w_px = 16,	.glyph_index = 686280},/*(厶)*/
    {.w_px = 16,	.glyph_index = 686448},/*(弁)*/
    {.w_px = 16,	.glyph_index = 686616},/*(畚)*/
    {.w_px = 16,	.glyph_index = 686784},/*(巯)*/
    {.w_px = 16,	.glyph_index = 686952},/*(坌)*/
    {.w_px = 16,	.glyph_index = 687120},/*(垩)*/
    {.w_px = 16,	.glyph_index = 687288},/*(垡)*/
    {.w_px = 16,	.glyph_index = 687456},/*(塾)*/
    {.w_px = 16,	.glyph_index = 687624},/*(墼)*/
    {.w_px = 16,	.glyph_index = 687792},/*(壅)*/
    {.w_px = 16,	.glyph_index = 687960},/*(壑)*/
    {.w_px = 16,	.glyph_index = 688128},/*(圩)*/
    {.w_px = 16,	.glyph_index = 688296},/*(圬)*/
    {.w_px = 16,	.glyph_index = 688464},/*(圪)*/
    {.w_px = 16,	.glyph_index = 688632},/*(圳)*/
    {.w_px = 16,	.glyph_index = 688800},/*(圹)*/
    {.w_px = 16,	.glyph_index = 688968},/*(圮)*/
    {.w_px = 16,	.glyph_index = 689136},/*(圯)*/
    {.w_px = 16,	.glyph_index = 689304},/*(坜)*/
    {.w_px = 16,	.glyph_index = 689472},/*(圻)*/
    {.w_px = 16,	.glyph_index = 689640},/*(坂)*/
    {.w_px = 16,	.glyph_index = 689808},/*(坩)*/
    {.w_px = 16,	.glyph_index = 689976},/*(垅)*/
    {.w_px = 16,	.glyph_index = 690144},/*(坫)*/
    {.w_px = 16,	.glyph_index = 690312},/*(垆)*/
    {.w_px = 16,	.glyph_index = 690480},/*(坼)*/
    {.w_px = 16,	.glyph_index = 690648},/*(坻)*/
    {.w_px = 16,	.glyph_index = 690816},/*(坨)*/
    {.w_px = 16,	.glyph_index = 690984},/*(坭)*/
    {.w_px = 16,	.glyph_index = 691152},/*(坶)*/
    {.w_px = 16,	.glyph_index = 691320},/*(坳)*/
    {.w_px = 16,	.glyph_index = 691488},/*(垭)*/
    {.w_px = 16,	.glyph_index = 691656},/*(垤)*/
    {.w_px = 16,	.glyph_index = 691824},/*(垌)*/
    {.w_px = 16,	.glyph_index = 691992},/*(垲)*/
    {.w_px = 16,	.glyph_index = 692160},/*(埏)*/
    {.w_px = 16,	.glyph_index = 692328},/*(垧)*/
    {.w_px = 16,	.glyph_index = 692496},/*(垴)*/
    {.w_px = 16,	.glyph_index = 692664},/*(垓)*/
    {.w_px = 16,	.glyph_index = 692832},/*(垠)*/
    {.w_px = 16,	.glyph_index = 693000},/*(埕)*/
    {.w_px = 16,	.glyph_index = 693168},/*(埘)*/
    {.w_px = 16,	.glyph_index = 693336},/*(埚)*/
    {.w_px = 16,	.glyph_index = 693504},/*(埙)*/
    {.w_px = 16,	.glyph_index = 693672},/*(埒)*/
    {.w_px = 16,	.glyph_index = 693840},/*(垸)*/
    {.w_px = 16,	.glyph_index = 694008},/*(埴)*/
    {.w_px = 16,	.glyph_index = 694176},/*(埯)*/
    {.w_px = 16,	.glyph_index = 694344},/*(埸)*/
    {.w_px = 16,	.glyph_index = 694512},/*(埤)*/
    {.w_px = 16,	.glyph_index = 694680},/*(埝)*/
    {.w_px = 16,	.glyph_index = 694848},/*(堋)*/
    {.w_px = 16,	.glyph_index = 695016},/*(堍)*/
    {.w_px = 16,	.glyph_index = 695184},/*(埽)*/
    {.w_px = 16,	.glyph_index = 695352},/*(埭)*/
    {.w_px = 16,	.glyph_index = 695520},/*(堀)*/
    {.w_px = 16,	.glyph_index = 695688},/*(堞)*/
    {.w_px = 16,	.glyph_index = 695856},/*(堙)*/
    {.w_px = 16,	.glyph_index = 696024},/*(塄)*/
    {.w_px = 16,	.glyph_index = 696192},/*(堠)*/
    {.w_px = 16,	.glyph_index = 696360},/*(塥)*/
    {.w_px = 16,	.glyph_index = 696528},/*(塬)*/
    {.w_px = 16,	.glyph_index = 696696},/*(墁)*/
    {.w_px = 16,	.glyph_index = 696864},/*(墉)*/
    {.w_px = 16,	.glyph_index = 697032},/*(墚)*/
    {.w_px = 16,	.glyph_index = 697200},/*(墀)*/
    {.w_px = 16,	.glyph_index = 697368},/*(馨)*/
    {.w_px = 16,	.glyph_index = 697536},/*(鼙)*/
    {.w_px = 16,	.glyph_index = 697704},/*(懿)*/
    {.w_px = 16,	.glyph_index = 697872},/*(艹)*/
    {.w_px = 16,	.glyph_index = 698040},/*(艽)*/
    {.w_px = 16,	.glyph_index = 698208},/*(艿)*/
    {.w_px = 16,	.glyph_index = 698376},/*(芏)*/
    {.w_px = 16,	.glyph_index = 698544},/*(芊)*/
    {.w_px = 16,	.glyph_index = 698712},/*(芨)*/
    {.w_px = 16,	.glyph_index = 698880},/*(芄)*/
    {.w_px = 16,	.glyph_index = 699048},/*(芎)*/
    {.w_px = 16,	.glyph_index = 699216},/*(芑)*/
    {.w_px = 16,	.glyph_index = 699384},/*(芗)*/
    {.w_px = 16,	.glyph_index = 699552},/*(芙)*/
    {.w_px = 16,	.glyph_index = 699720},/*(芫)*/
    {.w_px = 16,	.glyph_index = 699888},/*(芸)*/
    {.w_px = 16,	.glyph_index = 700056},/*(芾)*/
    {.w_px = 16,	.glyph_index = 700224},/*(芰)*/
    {.w_px = 16,	.glyph_index = 700392},/*(苈)*/
    {.w_px = 16,	.glyph_index = 700560},/*(苊)*/
    {.w_px = 16,	.glyph_index = 700728},/*(苣)*/
    {.w_px = 16,	.glyph_index = 700896},/*(芘)*/
    {.w_px = 16,	.glyph_index = 701064},/*(芷)*/
    {.w_px = 16,	.glyph_index = 701232},/*(芮)*/
    {.w_px = 16,	.glyph_index = 701400},/*(苋)*/
    {.w_px = 16,	.glyph_index = 701568},/*(苌)*/
    {.w_px = 16,	.glyph_index = 701736},/*(苁)*/
    {.w_px = 16,	.glyph_index = 701904},/*(芩)*/
    {.w_px = 16,	.glyph_index = 702072},/*(芴)*/
    {.w_px = 16,	.glyph_index = 702240},/*(芡)*/
    {.w_px = 16,	.glyph_index = 702408},/*(芪)*/
    {.w_px = 16,	.glyph_index = 702576},/*(芟)*/
    {.w_px = 16,	.glyph_index = 702744},/*(苄)*/
    {.w_px = 16,	.glyph_index = 702912},/*(苎)*/
    {.w_px = 16,	.glyph_index = 703080},/*(芤)*/
    {.w_px = 16,	.glyph_index = 703248},/*(苡)*/
    {.w_px = 16,	.glyph_index = 703416},/*(茉)*/
    {.w_px = 16,	.glyph_index = 703584},/*(苷)*/
    {.w_px = 16,	.glyph_index = 703752},/*(苤)*/
    {.w_px = 16,	.glyph_index = 703920},/*(茏)*/
    {.w_px = 16,	.glyph_index = 704088},/*(茇)*/
    {.w_px = 16,	.glyph_index = 704256},/*(苜)*/
    {.w_px = 16,	.glyph_index = 704424},/*(苴)*/
    {.w_px = 16,	.glyph_index = 704592},/*(苒)*/
    {.w_px = 16,	.glyph_index = 704760},/*(苘)*/
    {.w_px = 16,	.glyph_index = 704928},/*(茌)*/
    {.w_px = 16,	.glyph_index = 705096},/*(苻)*/
    {.w_px = 16,	.glyph_index = 705264},/*(苓)*/
    {.w_px = 16,	.glyph_index = 705432},/*(茑)*/
    {.w_px = 16,	.glyph_index = 705600},/*(茚)*/
    {.w_px = 16,	.glyph_index = 705768},/*(茆)*/
    {.w_px = 16,	.glyph_index = 705936},/*(茔)*/
    {.w_px = 16,	.glyph_index = 706104},/*(茕)*/
    {.w_px = 16,	.glyph_index = 706272},/*(苠)*/
    {.w_px = 16,	.glyph_index = 706440},/*(苕)*/
    {.w_px = 16,	.glyph_index = 706608},/*(茜)*/
    {.w_px = 16,	.glyph_index = 706776},/*(荑)*/
    {.w_px = 16,	.glyph_index = 706944},/*(荛)*/
    {.w_px = 16,	.glyph_index = 707112},/*(荜)*/
    {.w_px = 16,	.glyph_index = 707280},/*(茈)*/
    {.w_px = 16,	.glyph_index = 707448},/*(莒)*/
    {.w_px = 16,	.glyph_index = 707616},/*(茼)*/
    {.w_px = 16,	.glyph_index = 707784},/*(茴)*/
    {.w_px = 16,	.glyph_index = 707952},/*(茱)*/
    {.w_px = 16,	.glyph_index = 708120},/*(莛)*/
    {.w_px = 16,	.glyph_index = 708288},/*(荞)*/
    {.w_px = 16,	.glyph_index = 708456},/*(茯)*/
    {.w_px = 16,	.glyph_index = 708624},/*(荏)*/
    {.w_px = 16,	.glyph_index = 708792},/*(荇)*/
    {.w_px = 16,	.glyph_index = 708960},/*(荃)*/
    {.w_px = 16,	.glyph_index = 709128},/*(荟)*/
    {.w_px = 16,	.glyph_index = 709296},/*(荀)*/
    {.w_px = 16,	.glyph_index = 709464},/*(茗)*/
    {.w_px = 16,	.glyph_index = 709632},/*(荠)*/
    {.w_px = 16,	.glyph_index = 709800},/*(茭)*/
    {.w_px = 16,	.glyph_index = 709968},/*(茺)*/
    {.w_px = 16,	.glyph_index = 710136},/*(茳)*/
    {.w_px = 16,	.glyph_index = 710304},/*(荦)*/
    {.w_px = 16,	.glyph_index = 710472},/*(荥)*/
    {.w_px = 16,	.glyph_index = 710640},/*(荨)*/
    {.w_px = 16,	.glyph_index = 710808},/*(茛)*/
    {.w_px = 16,	.glyph_index = 710976},/*(荩)*/
    {.w_px = 16,	.glyph_index = 711144},/*(荬)*/
    {.w_px = 16,	.glyph_index = 711312},/*(荪)*/
    {.w_px = 16,	.glyph_index = 711480},/*(荭)*/
    {.w_px = 16,	.glyph_index = 711648},/*(荮)*/
    {.w_px = 16,	.glyph_index = 711816},/*(莰)*/
    {.w_px = 16,	.glyph_index = 711984},/*(荸)*/
    {.w_px = 16,	.glyph_index = 712152},/*(莳)*/
    {.w_px = 16,	.glyph_index = 712320},/*(莴)*/
    {.w_px = 16,	.glyph_index = 712488},/*(莠)*/
    {.w_px = 16,	.glyph_index = 712656},/*(莪)*/
    {.w_px = 16,	.glyph_index = 712824},/*(莓)*/
    {.w_px = 16,	.glyph_index = 712992},/*(莜)*/
    {.w_px = 16,	.glyph_index = 713160},/*(莅)*/
    {.w_px = 16,	.glyph_index = 713328},/*(荼)*/
    {.w_px = 16,	.glyph_index = 713496},/*(莶)*/
    {.w_px = 16,	.glyph_index = 713664},/*(莩)*/
    {.w_px = 16,	.glyph_index = 713832},/*(荽)*/
    {.w_px = 16,	.glyph_index = 714000},/*(莸)*/
    {.w_px = 16,	.glyph_index = 714168},/*(荻)*/
    {.w_px = 16,	.glyph_index = 714336},/*(莘)*/
    {.w_px = 16,	.glyph_index = 714504},/*(莞)*/
    {.w_px = 16,	.glyph_index = 714672},/*(莨)*/
    {.w_px = 16,	.glyph_index = 714840},/*(莺)*/
    {.w_px = 16,	.glyph_index = 715008},/*(莼)*/
    {.w_px = 16,	.glyph_index = 715176},/*(菁)*/
    {.w_px = 16,	.glyph_index = 715344},/*(萁)*/
    {.w_px = 16,	.glyph_index = 715512},/*(菥)*/
    {.w_px = 16,	.glyph_index = 715680},/*(菘)*/
    {.w_px = 16,	.glyph_index = 715848},/*(堇)*/
    {.w_px = 16,	.glyph_index = 716016},/*(萘)*/
    {.w_px = 16,	.glyph_index = 716184},/*(萋)*/
    {.w_px = 16,	.glyph_index = 716352},/*(菝)*/
    {.w_px = 16,	.glyph_index = 716520},/*(菽)*/
    {.w_px = 16,	.glyph_index = 716688},/*(菖)*/
    {.w_px = 16,	.glyph_index = 716856},/*(萜)*/
    {.w_px = 16,	.glyph_index = 717024},/*(萸)*/
    {.w_px = 16,	.glyph_index = 717192},/*(萑)*/
    {.w_px = 16,	.glyph_index = 717360},/*(萆)*/
    {.w_px = 16,	.glyph_index = 717528},/*(菔)*/
    {.w_px = 16,	.glyph_index = 717696},/*(菟)*/
    {.w_px = 16,	.glyph_index = 717864},/*(萏)*/
    {.w_px = 16,	.glyph_index = 718032},/*(萃)*/
    {.w_px = 16,	.glyph_index = 718200},/*(菸)*/
    {.w_px = 16,	.glyph_index = 718368},/*(菹)*/
    {.w_px = 16,	.glyph_index = 718536},/*(菪)*/
    {.w_px = 16,	.glyph_index = 718704},/*(菅)*/
    {.w_px = 16,	.glyph_index = 718872},/*(菀)*/
    {.w_px = 16,	.glyph_index = 719040},/*(萦)*/
    {.w_px = 16,	.glyph_index = 719208},/*(菰)*/
    {.w_px = 16,	.glyph_index = 719376},/*(菡)*/
    {.w_px = 16,	.glyph_index = 719544},/*(葜)*/
    {.w_px = 16,	.glyph_index = 719712},/*(葑)*/
    {.w_px = 16,	.glyph_index = 719880},/*(葚)*/
    {.w_px = 16,	.glyph_index = 720048},/*(葙)*/
    {.w_px = 16,	.glyph_index = 720216},/*(葳)*/
    {.w_px = 16,	.glyph_index = 720384},/*(蒇)*/
    {.w_px = 16,	.glyph_index = 720552},/*(蒈)*/
    {.w_px = 16,	.glyph_index = 720720},/*(葺)*/
    {.w_px = 16,	.glyph_index = 720888},/*(蒉)*/
    {.w_px = 16,	.glyph_index = 721056},/*(葸)*/
    {.w_px = 16,	.glyph_index = 721224},/*(萼)*/
    {.w_px = 16,	.glyph_index = 721392},/*(葆)*/
    {.w_px = 16,	.glyph_index = 721560},/*(葩)*/
    {.w_px = 16,	.glyph_index = 721728},/*(葶)*/
    {.w_px = 16,	.glyph_index = 721896},/*(蒌)*/
    {.w_px = 16,	.glyph_index = 722064},/*(蒎)*/
    {.w_px = 16,	.glyph_index = 722232},/*(萱)*/
    {.w_px = 16,	.glyph_index = 722400},/*(葭)*/
    {.w_px = 16,	.glyph_index = 722568},/*(蓁)*/
    {.w_px = 16,	.glyph_index = 722736},/*(蓍)*/
    {.w_px = 16,	.glyph_index = 722904},/*(蓐)*/
    {.w_px = 16,	.glyph_index = 723072},/*(蓦)*/
    {.w_px = 16,	.glyph_index = 723240},/*(蒽)*/
    {.w_px = 16,	.glyph_index = 723408},/*(蓓)*/
    {.w_px = 16,	.glyph_index = 723576},/*(蓊)*/
    {.w_px = 16,	.glyph_index = 723744},/*(蒿)*/
    {.w_px = 16,	.glyph_index = 723912},/*(蒺)*/
    {.w_px = 16,	.glyph_index = 724080},/*(蓠)*/
    {.w_px = 16,	.glyph_index = 724248},/*(蒡)*/
    {.w_px = 16,	.glyph_index = 724416},/*(蒹)*/
    {.w_px = 16,	.glyph_index = 724584},/*(蒴)*/
    {.w_px = 16,	.glyph_index = 724752},/*(蒗)*/
    {.w_px = 16,	.glyph_index = 724920},/*(蓥)*/
    {.w_px = 16,	.glyph_index = 725088},/*(蓣)*/
    {.w_px = 16,	.glyph_index = 725256},/*(蔌)*/
    {.w_px = 16,	.glyph_index = 725424},/*(甍)*/
    {.w_px = 16,	.glyph_index = 725592},/*(蔸)*/
    {.w_px = 16,	.glyph_index = 725760},/*(蓰)*/
    {.w_px = 16,	.glyph_index = 725928},/*(蔹)*/
    {.w_px = 16,	.glyph_index = 726096},/*(蔟)*/
    {.w_px = 16,	.glyph_index = 726264},/*(蔺)*/
    {.w_px = 16,	.glyph_index = 726432},/*(蕖)*/
    {.w_px = 16,	.glyph_index = 726600},/*(蔻)*/
    {.w_px = 16,	.glyph_index = 726768},/*(蓿)*/
    {.w_px = 16,	.glyph_index = 726936},/*(蓼)*/
    {.w_px = 16,	.glyph_index = 727104},/*(蕙)*/
    {.w_px = 16,	.glyph_index = 727272},/*(蕈)*/
    {.w_px = 16,	.glyph_index = 727440},/*(蕨)*/
    {.w_px = 16,	.glyph_index = 727608},/*(蕤)*/
    {.w_px = 16,	.glyph_index = 727776},/*(蕞)*/
    {.w_px = 16,	.glyph_index = 727944},/*(蕺)*/
    {.w_px = 16,	.glyph_index = 728112},/*(瞢)*/
    {.w_px = 16,	.glyph_index = 728280},/*(蕃)*/
    {.w_px = 16,	.glyph_index = 728448},/*(蕲)*/
    {.w_px = 16,	.glyph_index = 728616},/*(蕻)*/
    {.w_px = 16,	.glyph_index = 728784},/*(薤)*/
    {.w_px = 16,	.glyph_index = 728952},/*(薨)*/
    {.w_px = 16,	.glyph_index = 729120},/*(薇)*/
    {.w_px = 16,	.glyph_index = 729288},/*(薏)*/
    {.w_px = 16,	.glyph_index = 729456},/*(蕹)*/
    {.w_px = 16,	.glyph_index = 729624},/*(薮)*/
    {.w_px = 16,	.glyph_index = 729792},/*(薜)*/
    {.w_px = 16,	.glyph_index = 729960},/*(薅)*/
    {.w_px = 16,	.glyph_index = 730128},/*(薹)*/
    {.w_px = 16,	.glyph_index = 730296},/*(薷)*/
    {.w_px = 16,	.glyph_index = 730464},/*(薰)*/
    {.w_px = 16,	.glyph_index = 730632},/*(藓)*/
    {.w_px = 16,	.glyph_index = 730800},/*(藁)*/
    {.w_px = 16,	.glyph_index = 730968},/*(藜)*/
    {.w_px = 16,	.glyph_index = 731136},/*(藿)*/
    {.w_px = 16,	.glyph_index = 731304},/*(蘧)*/
    {.w_px = 16,	.glyph_index = 731472},/*(蘅)*/
    {.w_px = 16,	.glyph_index = 731640},/*(蘩)*/
    {.w_px = 16,	.glyph_index = 731808},/*(蘖)*/
    {.w_px = 16,	.glyph_index = 731976},/*(蘼)*/
    {.w_px = 16,	.glyph_index = 732144},/*(廾)*/
    {.w_px = 16,	.glyph_index = 732312},/*(弈)*/
    {.w_px = 16,	.glyph_index = 732480},/*(夼)*/
    {.w_px = 16,	.glyph_index = 732648},/*(奁)*/
    {.w_px = 16,	.glyph_index = 732816},/*(耷)*/
    {.w_px = 16,	.glyph_index = 732984},/*(奕)*/
    {.w_px = 16,	.glyph_index = 733152},/*(奚)*/
    {.w_px = 16,	.glyph_index = 733320},/*(奘)*/
    {.w_px = 16,	.glyph_index = 733488},/*(匏)*/
    {.w_px = 16,	.glyph_index = 733656},/*(尢)*/
    {.w_px = 16,	.glyph_index = 733824},/*(尥)*/
    {.w_px = 16,	.glyph_index = 733992},/*(尬)*/
    {.w_px = 16,	.glyph_index = 734160},/*(尴)*/
    {.w_px = 16,	.glyph_index = 734328},/*(扌)*/
    {.w_px = 16,	.glyph_index = 734496},/*(扪)*/
    {.w_px = 16,	.glyph_index = 734664},/*(抟)*/
    {.w_px = 16,	.glyph_index = 734832},/*(抻)*/
    {.w_px = 16,	.glyph_index = 735000},/*(拊)*/
    {.w_px = 16,	.glyph_index = 735168},/*(拚)*/
    {.w_px = 16,	.glyph_index = 735336},/*(拗)*/
    {.w_px = 16,	.glyph_index = 735504},/*(拮)*/
    {.w_px = 16,	.glyph_index = 735672},/*(挢)*/
    {.w_px = 16,	.glyph_index = 735840},/*(拶)*/
    {.w_px = 16,	.glyph_index = 736008},/*(挹)*/
    {.w_px = 16,	.glyph_index = 736176},/*(捋)*/
    {.w_px = 16,	.glyph_index = 736344},/*(捃)*/
    {.w_px = 16,	.glyph_index = 736512},/*(掭)*/
    {.w_px = 16,	.glyph_index = 736680},/*(揶)*/
    {.w_px = 16,	.glyph_index = 736848},/*(捱)*/
    {.w_px = 16,	.glyph_index = 737016},/*(捺)*/
    {.w_px = 16,	.glyph_index = 737184},/*(掎)*/
    {.w_px = 16,	.glyph_index = 737352},/*(掴)*/
    {.w_px = 16,	.glyph_index = 737520},/*(捭)*/
    {.w_px = 16,	.glyph_index = 737688},/*(掬)*/
    {.w_px = 16,	.glyph_index = 737856},/*(掊)*/
    {.w_px = 16,	.glyph_index = 738024},/*(捩)*/
    {.w_px = 16,	.glyph_index = 738192},/*(掮)*/
    {.w_px = 16,	.glyph_index = 738360},/*(掼)*/
    {.w_px = 16,	.glyph_index = 738528},/*(揲)*/
    {.w_px = 16,	.glyph_index = 738696},/*(揸)*/
    {.w_px = 16,	.glyph_index = 738864},/*(揠)*/
    {.w_px = 16,	.glyph_index = 739032},/*(揿)*/
    {.w_px = 16,	.glyph_index = 739200},/*(揄)*/
    {.w_px = 16,	.glyph_index = 739368},/*(揞)*/
    {.w_px = 16,	.glyph_index = 739536},/*(揎)*/
    {.w_px = 16,	.glyph_index = 739704},/*(摒)*/
    {.w_px = 16,	.glyph_index = 739872},/*(揆)*/
    {.w_px = 16,	.glyph_index = 740040},/*(掾)*/
    {.w_px = 16,	.glyph_index = 740208},/*(摅)*/
    {.w_px = 16,	.glyph_index = 740376},/*(摁)*/
    {.w_px = 16,	.glyph_index = 740544},/*(搋)*/
    {.w_px = 16,	.glyph_index = 740712},/*(搛)*/
    {.w_px = 16,	.glyph_index = 740880},/*(搠)*/
    {.w_px = 16,	.glyph_index = 741048},/*(搌)*/
    {.w_px = 16,	.glyph_index = 741216},/*(搦)*/
    {.w_px = 16,	.glyph_index = 741384},/*(搡)*/
    {.w_px = 16,	.glyph_index = 741552},/*(摞)*/
    {.w_px = 16,	.glyph_index = 741720},/*(撄)*/
    {.w_px = 16,	.glyph_index = 741888},/*(摭)*/
    {.w_px = 16,	.glyph_index = 742056},/*(撖)*/
    {.w_px = 16,	.glyph_index = 742224},/*(摺)*/
    {.w_px = 16,	.glyph_index = 742392},/*(撷)*/
    {.w_px = 16,	.glyph_index = 742560},/*(撸)*/
    {.w_px = 16,	.glyph_index = 742728},/*(撙)*/
    {.w_px = 16,	.glyph_index = 742896},/*(撺)*/
    {.w_px = 16,	.glyph_index = 743064},/*(擀)*/
    {.w_px = 16,	.glyph_index = 743232},/*(擐)*/
    {.w_px = 16,	.glyph_index = 743400},/*(擗)*/
    {.w_px = 16,	.glyph_index = 743568},/*(擤)*/
    {.w_px = 16,	.glyph_index = 743736},/*(擢)*/
    {.w_px = 16,	.glyph_index = 743904},/*(攉)*/
    {.w_px = 16,	.glyph_index = 744072},/*(攥)*/
    {.w_px = 16,	.glyph_index = 744240},/*(攮)*/
    {.w_px = 16,	.glyph_index = 744408},/*(弋)*/
    {.w_px = 16,	.glyph_index = 744576},/*(忒)*/
    {.w_px = 16,	.glyph_index = 744744},/*(甙)*/
    {.w_px = 16,	.glyph_index = 744912},/*(弑)*/
    {.w_px = 16,	.glyph_index = 745080},/*(卟)*/
    {.w_px = 16,	.glyph_index = 745248},/*(叱)*/
    {.w_px = 16,	.glyph_index = 745416},/*(叽)*/
    {.w_px = 16,	.glyph_index = 745584},/*(叩)*/
    {.w_px = 16,	.glyph_index = 745752},/*(叨)*/
    {.w_px = 16,	.glyph_index = 745920},/*(叻)*/
    {.w_px = 16,	.glyph_index = 746088},/*(吒)*/
    {.w_px = 16,	.glyph_index = 746256},/*(吖)*/
    {.w_px = 16,	.glyph_index = 746424},/*(吆)*/
    {.w_px = 16,	.glyph_index = 746592},/*(呋)*/
    {.w_px = 16,	.glyph_index = 746760},/*(呒)*/
    {.w_px = 16,	.glyph_index = 746928},/*(呓)*/
    {.w_px = 16,	.glyph_index = 747096},/*(呔)*/
    {.w_px = 16,	.glyph_index = 747264},/*(呖)*/
    {.w_px = 16,	.glyph_index = 747432},/*(呃)*/
    {.w_px = 16,	.glyph_index = 747600},/*(吡)*/
    {.w_px = 16,	.glyph_index = 747768},/*(呗)*/
    {.w_px = 16,	.glyph_index = 747936},/*(呙)*/
    {.w_px = 16,	.glyph_index = 748104},/*(吣)*/
    {.w_px = 16,	.glyph_index = 748272},/*(吲)*/
    {.w_px = 16,	.glyph_index = 748440},/*(咂)*/
    {.w_px = 16,	.glyph_index = 748608},/*(咔)*/
    {.w_px = 16,	.glyph_index = 748776},/*(呷)*/
    {.w_px = 16,	.glyph_index = 748944},/*(呱)*/
    {.w_px = 16,	.glyph_index = 749112},/*(呤)*/
    {.w_px = 16,	.glyph_index = 749280},/*(咚)*/
    {.w_px = 16,	.glyph_index = 749448},/*(咛)*/
    {.w_px = 16,	.glyph_index = 749616},/*(咄)*/
    {.w_px = 16,	.glyph_index = 749784},/*(呶)*/
    {.w_px = 16,	.glyph_index = 749952},/*(呦)*/
    {.w_px = 16,	.glyph_index = 750120},/*(咝)*/
    {.w_px = 16,	.glyph_index = 750288},/*(哐)*/
    {.w_px = 16,	.glyph_index = 750456},/*(咭)*/
    {.w_px = 16,	.glyph_index = 750624},/*(哂)*/
    {.w_px = 16,	.glyph_index = 750792},/*(咴)*/
    {.w_px = 16,	.glyph_index = 750960},/*(哒)*/
    {.w_px = 16,	.glyph_index = 751128},/*(咧)*/
    {.w_px = 16,	.glyph_index = 751296},/*(咦)*/
    {.w_px = 16,	.glyph_index = 751464},/*(哓)*/
    {.w_px = 16,	.glyph_index = 751632},/*(哔)*/
    {.w_px = 16,	.glyph_index = 751800},/*(呲)*/
    {.w_px = 16,	.glyph_index = 751968},/*(咣)*/
    {.w_px = 16,	.glyph_index = 752136},/*(哕)*/
    {.w_px = 16,	.glyph_index = 752304},/*(咻)*/
    {.w_px = 16,	.glyph_index = 752472},/*(咿)*/
    {.w_px = 16,	.glyph_index = 752640},/*(哌)*/
    {.w_px = 16,	.glyph_index = 752808},/*(哙)*/
    {.w_px = 16,	.glyph_index = 752976},/*(哚)*/
    {.w_px = 16,	.glyph_index = 753144},/*(哜)*/
    {.w_px = 16,	.glyph_index = 753312},/*(咩)*/
    {.w_px = 16,	.glyph_index = 753480},/*(咪)*/
    {.w_px = 16,	.glyph_index = 753648},/*(咤)*/
    {.w_px = 16,	.glyph_index = 753816},/*(哝)*/
    {.w_px = 16,	.glyph_index = 753984},/*(哏)*/
    {.w_px = 16,	.glyph_index = 754152},/*(哞)*/
    {.w_px = 16,	.glyph_index = 754320},/*(唛)*/
    {.w_px = 16,	.glyph_index = 754488},/*(哧)*/
    {.w_px = 16,	.glyph_index = 754656},/*(唠)*/
    {.w_px = 16,	.glyph_index = 754824},/*(哽)*/
    {.w_px = 16,	.glyph_index = 754992},/*(唔)*/
    {.w_px = 16,	.glyph_index = 755160},/*(哳)*/
    {.w_px = 16,	.glyph_index = 755328},/*(唢)*/
    {.w_px = 16,	.glyph_index = 755496},/*(唣)*/
    {.w_px = 16,	.glyph_index = 755664},/*(唏)*/
    {.w_px = 16,	.glyph_index = 755832},/*(唑)*/
    {.w_px = 16,	.glyph_index = 756000},/*(唧)*/
    {.w_px = 16,	.glyph_index = 756168},/*(唪)*/
    {.w_px = 16,	.glyph_index = 756336},/*(啧)*/
    {.w_px = 16,	.glyph_index = 756504},/*(喏)*/
    {.w_px = 16,	.glyph_index = 756672},/*(喵)*/
    {.w_px = 16,	.glyph_index = 756840},/*(啉)*/
    {.w_px = 16,	.glyph_index = 757008},/*(啭)*/
    {.w_px = 16,	.glyph_index = 757176},/*(啁)*/
    {.w_px = 16,	.glyph_index = 757344},/*(啕)*/
    {.w_px = 16,	.glyph_index = 757512},/*(唿)*/
    {.w_px = 16,	.glyph_index = 757680},/*(啐)*/
    {.w_px = 16,	.glyph_index = 757848},/*(唼)*/
    {.w_px = 16,	.glyph_index = 758016},/*(唷)*/
    {.w_px = 16,	.glyph_index = 758184},/*(啖)*/
    {.w_px = 16,	.glyph_index = 758352},/*(啵)*/
    {.w_px = 16,	.glyph_index = 758520},/*(啶)*/
    {.w_px = 16,	.glyph_index = 758688},/*(啷)*/
    {.w_px = 16,	.glyph_index = 758856},/*(唳)*/
    {.w_px = 16,	.glyph_index = 759024},/*(唰)*/
    {.w_px = 16,	.glyph_index = 759192},/*(啜)*/
    {.w_px = 16,	.glyph_index = 759360},/*(喋)*/
    {.w_px = 16,	.glyph_index = 759528},/*(嗒)*/
    {.w_px = 16,	.glyph_index = 759696},/*(喃)*/
    {.w_px = 16,	.glyph_index = 759864},/*(喱)*/
    {.w_px = 16,	.glyph_index = 760032},/*(喹)*/
    {.w_px = 16,	.glyph_index = 760200},/*(喈)*/
    {.w_px = 16,	.glyph_index = 760368},/*(喁)*/
    {.w_px = 16,	.glyph_index = 760536},/*(喟)*/
    {.w_px = 16,	.glyph_index = 760704},/*(啾)*/
    {.w_px = 16,	.glyph_index = 760872},/*(嗖)*/
    {.w_px = 16,	.glyph_index = 761040},/*(喑)*/
    {.w_px = 16,	.glyph_index = 761208},/*(啻)*/
    {.w_px = 16,	.glyph_index = 761376},/*(嗟)*/
    {.w_px = 16,	.glyph_index = 761544},/*(喽)*/
    {.w_px = 16,	.glyph_index = 761712},/*(喾)*/
    {.w_px = 16,	.glyph_index = 761880},/*(喔)*/
    {.w_px = 16,	.glyph_index = 762048},/*(喙)*/
    {.w_px = 16,	.glyph_index = 762216},/*(嗪)*/
    {.w_px = 16,	.glyph_index = 762384},/*(嗷)*/
    {.w_px = 16,	.glyph_index = 762552},/*(嗉)*/
    {.w_px = 16,	.glyph_index = 762720},/*(嘟)*/
    {.w_px = 16,	.glyph_index = 762888},/*(嗑)*/
    {.w_px = 16,	.glyph_index = 763056},/*(嗫)*/
    {.w_px = 16,	.glyph_index = 763224},/*(嗬)*/
    {.w_px = 16,	.glyph_index = 763392},/*(嗔)*/
    {.w_px = 16,	.glyph_index = 763560},/*(嗦)*/
    {.w_px = 16,	.glyph_index = 763728},/*(嗝)*/
    {.w_px = 16,	.glyph_index = 763896},/*(嗄)*/
    {.w_px = 16,	.glyph_index = 764064},/*(嗯)*/
    {.w_px = 16,	.glyph_index = 764232},/*(嗥)*/
    {.w_px = 16,	.glyph_index = 764400},/*(嗲)*/
    {.w_px = 16,	.glyph_index = 764568},/*(嗳)*/
    {.w_px = 16,	.glyph_index = 764736},/*(嗌)*/
    {.w_px = 16,	.glyph_index = 764904},/*(嗍)*/
    {.w_px = 16,	.glyph_index = 765072},/*(嗨)*/
    {.w_px = 16,	.glyph_index = 765240},/*(嗵)*/
    {.w_px = 16,	.glyph_index = 765408},/*(嗤)*/
    {.w_px = 16,	.glyph_index = 765576},/*(辔)*/
    {.w_px = 16,	.glyph_index = 765744},/*(嘞)*/
    {.w_px = 16,	.glyph_index = 765912},/*(嘈)*/
    {.w_px = 16,	.glyph_index = 766080},/*(嘌)*/
    {.w_px = 16,	.glyph_index = 766248},/*(嘁)*/
    {.w_px = 16,	.glyph_index = 766416},/*(嘤)*/
    {.w_px = 16,	.glyph_index = 766584},/*(嘣)*/
    {.w_px = 16,	.glyph_index = 766752},/*(嗾)*/
    {.w_px = 16,	.glyph_index = 766920},/*(嘀)*/
    {.w_px = 16,	.glyph_index = 767088},/*(嘧)*/
    {.w_px = 16,	.glyph_index = 767256},/*(嘭)*/
    {.w_px = 16,	.glyph_index = 767424},/*(噘)*/
    {.w_px = 16,	.glyph_index = 767592},/*(嘹)*/
    {.w_px = 16,	.glyph_index = 767760},/*(噗)*/
    {.w_px = 16,	.glyph_index = 767928},/*(嘬)*/
    {.w_px = 16,	.glyph_index = 768096},/*(噍)*/
    {.w_px = 16,	.glyph_index = 768264},/*(噢)*/
    {.w_px = 16,	.glyph_index = 768432},/*(噙)*/
    {.w_px = 16,	.glyph_index = 768600},/*(噜)*/
    {.w_px = 16,	.glyph_index = 768768},/*(噌)*/
    {.w_px = 16,	.glyph_index = 768936},/*(噔)*/
    {.w_px = 16,	.glyph_index = 769104},/*(嚆)*/
    {.w_px = 16,	.glyph_index = 769272},/*(噤)*/
    {.w_px = 16,	.glyph_index = 769440},/*(噱)*/
    {.w_px = 16,	.glyph_index = 769608},/*(噫)*/
    {.w_px = 16,	.glyph_index = 769776},/*(噻)*/
    {.w_px = 16,	.glyph_index = 769944},/*(噼)*/
    {.w_px = 16,	.glyph_index = 770112},/*(嚅)*/
    {.w_px = 16,	.glyph_index = 770280},/*(嚓)*/
    {.w_px = 16,	.glyph_index = 770448},/*(嚯)*/
    {.w_px = 16,	.glyph_index = 770616},/*(囔)*/
    {.w_px = 16,	.glyph_index = 770784},/*(囗)*/
    {.w_px = 16,	.glyph_index = 770952},/*(囝)*/
    {.w_px = 16,	.glyph_index = 771120},/*(囡)*/
    {.w_px = 16,	.glyph_index = 771288},/*(囵)*/
    {.w_px = 16,	.glyph_index = 771456},/*(囫)*/
    {.w_px = 16,	.glyph_index = 771624},/*(囹)*/
    {.w_px = 16,	.glyph_index = 771792},/*(囿)*/
    {.w_px = 16,	.glyph_index = 771960},/*(圄)*/
    {.w_px = 16,	.glyph_index = 772128},/*(圊)*/
    {.w_px = 16,	.glyph_index = 772296},/*(圉)*/
    {.w_px = 16,	.glyph_index = 772464},/*(圜)*/
    {.w_px = 16,	.glyph_index = 772632},/*(帏)*/
    {.w_px = 16,	.glyph_index = 772800},/*(帙)*/
    {.w_px = 16,	.glyph_index = 772968},/*(帔)*/
    {.w_px = 16,	.glyph_index = 773136},/*(帑)*/
    {.w_px = 16,	.glyph_index = 773304},/*(帱)*/
    {.w_px = 16,	.glyph_index = 773472},/*(帻)*/
    {.w_px = 16,	.glyph_index = 773640},/*(帼)*/
    {.w_px = 16,	.glyph_index = 773808},/*(帷)*/
    {.w_px = 16,	.glyph_index = 773976},/*(幄)*/
    {.w_px = 16,	.glyph_index = 774144},/*(幔)*/
    {.w_px = 16,	.glyph_index = 774312},/*(幛)*/
    {.w_px = 16,	.glyph_index = 774480},/*(幞)*/
    {.w_px = 16,	.glyph_index = 774648},/*(幡)*/
    {.w_px = 16,	.glyph_index = 774816},/*(岌)*/
    {.w_px = 16,	.glyph_index = 774984},/*(屺)*/
    {.w_px = 16,	.glyph_index = 775152},/*(岍)*/
    {.w_px = 16,	.glyph_index = 775320},/*(岐)*/
    {.w_px = 16,	.glyph_index = 775488},/*(岖)*/
    {.w_px = 16,	.glyph_index = 775656},/*(岈)*/
    {.w_px = 16,	.glyph_index = 775824},/*(岘)*/
    {.w_px = 16,	.glyph_index = 775992},/*(岙)*/
    {.w_px = 16,	.glyph_index = 776160},/*(岑)*/
    {.w_px = 16,	.glyph_index = 776328},/*(岚)*/
    {.w_px = 16,	.glyph_index = 776496},/*(岜)*/
    {.w_px = 16,	.glyph_index = 776664},/*(岵)*/
    {.w_px = 16,	.glyph_index = 776832},/*(岢)*/
    {.w_px = 16,	.glyph_index = 777000},/*(岽)*/
    {.w_px = 16,	.glyph_index = 777168},/*(岬)*/
    {.w_px = 16,	.glyph_index = 777336},/*(岫)*/
    {.w_px = 16,	.glyph_index = 777504},/*(岱)*/
    {.w_px = 16,	.glyph_index = 777672},/*(岣)*/
    {.w_px = 16,	.glyph_index = 777840},/*(峁)*/
    {.w_px = 16,	.glyph_index = 778008},/*(岷)*/
    {.w_px = 16,	.glyph_index = 778176},/*(峄)*/
    {.w_px = 16,	.glyph_index = 778344},/*(峒)*/
    {.w_px = 16,	.glyph_index = 778512},/*(峤)*/
    {.w_px = 16,	.glyph_index = 778680},/*(峋)*/
    {.w_px = 16,	.glyph_index = 778848},/*(峥)*/
    {.w_px = 16,	.glyph_index = 779016},/*(崂)*/
    {.w_px = 16,	.glyph_index = 779184},/*(崃)*/
    {.w_px = 16,	.glyph_index = 779352},/*(崧)*/
    {.w_px = 16,	.glyph_index = 779520},/*(崦)*/
    {.w_px = 16,	.glyph_index = 779688},/*(崮)*/
    {.w_px = 16,	.glyph_index = 779856},/*(崤)*/
    {.w_px = 16,	.glyph_index = 780024},/*(崞)*/
    {.w_px = 16,	.glyph_index = 780192},/*(崆)*/
    {.w_px = 16,	.glyph_index = 780360},/*(崛)*/
    {.w_px = 16,	.glyph_index = 780528},/*(嵘)*/
    {.w_px = 16,	.glyph_index = 780696},/*(崾)*/
    {.w_px = 16,	.glyph_index = 780864},/*(崴)*/
    {.w_px = 16,	.glyph_index = 781032},/*(崽)*/
    {.w_px = 16,	.glyph_index = 781200},/*(嵬)*/
    {.w_px = 16,	.glyph_index = 781368},/*(嵛)*/
    {.w_px = 16,	.glyph_index = 781536},/*(嵯)*/
    {.w_px = 16,	.glyph_index = 781704},/*(嵝)*/
    {.w_px = 16,	.glyph_index = 781872},/*(嵫)*/
    {.w_px = 16,	.glyph_index = 782040},/*(嵋)*/
    {.w_px = 16,	.glyph_index = 782208},/*(嵊)*/
    {.w_px = 16,	.glyph_index = 782376},/*(嵩)*/
    {.w_px = 16,	.glyph_index = 782544},/*(嵴)*/
    {.w_px = 16,	.glyph_index = 782712},/*(嶂)*/
    {.w_px = 16,	.glyph_index = 782880},/*(嶙)*/
    {.w_px = 16,	.glyph_index = 783048},/*(嶝)*/
    {.w_px = 16,	.glyph_index = 783216},/*(豳)*/
    {.w_px = 16,	.glyph_index = 783384},/*(嶷)*/
    {.w_px = 16,	.glyph_index = 783552},/*(巅)*/
    {.w_px = 16,	.glyph_index = 783720},/*(彳)*/
    {.w_px = 16,	.glyph_index = 783888},/*(彷)*/
    {.w_px = 16,	.glyph_index = 784056},/*(徂)*/
    {.w_px = 16,	.glyph_index = 784224},/*(徇)*/
    {.w_px = 16,	.glyph_index = 784392},/*(徉)*/
    {.w_px = 16,	.glyph_index = 784560},/*(後)*/
    {.w_px = 16,	.glyph_index = 784728},/*(徕)*/
    {.w_px = 16,	.glyph_index = 784896},/*(徙)*/
    {.w_px = 16,	.glyph_index = 785064},/*(徜)*/
    {.w_px = 16,	.glyph_index = 785232},/*(徨)*/
    {.w_px = 16,	.glyph_index = 785400},/*(徭)*/
    {.w_px = 16,	.glyph_index = 785568},/*(徵)*/
    {.w_px = 16,	.glyph_index = 785736},/*(徼)*/
    {.w_px = 16,	.glyph_index = 785904},/*(衢)*/
    {.w_px = 16,	.glyph_index = 786072},/*(彡)*/
    {.w_px = 16,	.glyph_index = 786240},/*(犭)*/
    {.w_px = 16,	.glyph_index = 786408},/*(犰)*/
    {.w_px = 16,	.glyph_index = 786576},/*(犴)*/
    {.w_px = 16,	.glyph_index = 786744},/*(犷)*/
    {.w_px = 16,	.glyph_index = 786912},/*(犸)*/
    {.w_px = 16,	.glyph_index = 787080},/*(狃)*/
    {.w_px = 16,	.glyph_index = 787248},/*(狁)*/
    {.w_px = 16,	.glyph_index = 787416},/*(狎)*/
    {.w_px = 16,	.glyph_index = 787584},/*(狍)*/
    {.w_px = 16,	.glyph_index = 787752},/*(狒)*/
    {.w_px = 16,	.glyph_index = 787920},/*(狨)*/
    {.w_px = 16,	.glyph_index = 788088},/*(狯)*/
    {.w_px = 16,	.glyph_index = 788256},/*(狩)*/
    {.w_px = 16,	.glyph_index = 788424},/*(狲)*/
    {.w_px = 16,	.glyph_index = 788592},/*(狴)*/
    {.w_px = 16,	.glyph_index = 788760},/*(狷)*/
    {.w_px = 16,	.glyph_index = 788928},/*(猁)*/
    {.w_px = 16,	.glyph_index = 789096},/*(狳)*/
    {.w_px = 16,	.glyph_index = 789264},/*(猃)*/
    {.w_px = 16,	.glyph_index = 789432},/*(狺)*/
    {.w_px = 16,	.glyph_index = 789600},/*(狻)*/
    {.w_px = 16,	.glyph_index = 789768},/*(猗)*/
    {.w_px = 16,	.glyph_index = 789936},/*(猓)*/
    {.w_px = 16,	.glyph_index = 790104},/*(猡)*/
    {.w_px = 16,	.glyph_index = 790272},/*(猊)*/
    {.w_px = 16,	.glyph_index = 790440},/*(猞)*/
    {.w_px = 16,	.glyph_index = 790608},/*(猝)*/
    {.w_px = 16,	.glyph_index = 790776},/*(猕)*/
    {.w_px = 16,	.glyph_index = 790944},/*(猢)*/
    {.w_px = 16,	.glyph_index = 791112},/*(猹)*/
    {.w_px = 16,	.glyph_index = 791280},/*(猥)*/
    {.w_px = 16,	.glyph_index = 791448},/*(猬)*/
    {.w_px = 16,	.glyph_index = 791616},/*(猸)*/
    {.w_px = 16,	.glyph_index = 791784},/*(猱)*/
    {.w_px = 16,	.glyph_index = 791952},/*(獐)*/
    {.w_px = 16,	.glyph_index = 792120},/*(獍)*/
    {.w_px = 16,	.glyph_index = 792288},/*(獗)*/
    {.w_px = 16,	.glyph_index = 792456},/*(獠)*/
    {.w_px = 16,	.glyph_index = 792624},/*(獬)*/
    {.w_px = 16,	.glyph_index = 792792},/*(獯)*/
    {.w_px = 16,	.glyph_index = 792960},/*(獾)*/
    {.w_px = 16,	.glyph_index = 793128},/*(舛)*/
    {.w_px = 16,	.glyph_index = 793296},/*(夥)*/
    {.w_px = 16,	.glyph_index = 793464},/*(飧)*/
    {.w_px = 16,	.glyph_index = 793632},/*(夤)*/
    {.w_px = 16,	.glyph_index = 793800},/*(夂)*/
    {.w_px = 16,	.glyph_index = 793968},/*(饣)*/
    {.w_px = 16,	.glyph_index = 794136},/*(饧)*/
    {.w_px = 16,	.glyph_index = 794304},/*(饨)*/
    {.w_px = 16,	.glyph_index = 794472},/*(饩)*/
    {.w_px = 16,	.glyph_index = 794640},/*(饪)*/
    {.w_px = 16,	.glyph_index = 794808},/*(饫)*/
    {.w_px = 16,	.glyph_index = 794976},/*(饬)*/
    {.w_px = 16,	.glyph_index = 795144},/*(饴)*/
    {.w_px = 16,	.glyph_index = 795312},/*(饷)*/
    {.w_px = 16,	.glyph_index = 795480},/*(饽)*/
    {.w_px = 16,	.glyph_index = 795648},/*(馀)*/
    {.w_px = 16,	.glyph_index = 795816},/*(馄)*/
    {.w_px = 16,	.glyph_index = 795984},/*(馇)*/
    {.w_px = 16,	.glyph_index = 796152},/*(馊)*/
    {.w_px = 16,	.glyph_index = 796320},/*(馍)*/
    {.w_px = 16,	.glyph_index = 796488},/*(馐)*/
    {.w_px = 16,	.glyph_index = 796656},/*(馑)*/
    {.w_px = 16,	.glyph_index = 796824},/*(馓)*/
    {.w_px = 16,	.glyph_index = 796992},/*(馔)*/
    {.w_px = 16,	.glyph_index = 797160},/*(馕)*/
    {.w_px = 16,	.glyph_index = 797328},/*(庀)*/
    {.w_px = 16,	.glyph_index = 797496},/*(庑)*/
    {.w_px = 16,	.glyph_index = 797664},/*(庋)*/
    {.w_px = 16,	.glyph_index = 797832},/*(庖)*/
    {.w_px = 16,	.glyph_index = 798000},/*(庥)*/
    {.w_px = 16,	.glyph_index = 798168},/*(庠)*/
    {.w_px = 16,	.glyph_index = 798336},/*(庹)*/
    {.w_px = 16,	.glyph_index = 798504},/*(庵)*/
    {.w_px = 16,	.glyph_index = 798672},/*(庾)*/
    {.w_px = 16,	.glyph_index = 798840},/*(庳)*/
    {.w_px = 16,	.glyph_index = 799008},/*(赓)*/
    {.w_px = 16,	.glyph_index = 799176},/*(廒)*/
    {.w_px = 16,	.glyph_index = 799344},/*(廑)*/
    {.w_px = 16,	.glyph_index = 799512},/*(廛)*/
    {.w_px = 16,	.glyph_index = 799680},/*(廨)*/
    {.w_px = 16,	.glyph_index = 799848},/*(廪)*/
    {.w_px = 16,	.glyph_index = 800016},/*(膺)*/
    {.w_px = 16,	.glyph_index = 800184},/*(忄)*/
    {.w_px = 16,	.glyph_index = 800352},/*(忉)*/
    {.w_px = 16,	.glyph_index = 800520},/*(忖)*/
    {.w_px = 16,	.glyph_index = 800688},/*(忏)*/
    {.w_px = 16,	.glyph_index = 800856},/*(怃)*/
    {.w_px = 16,	.glyph_index = 801024},/*(忮)*/
    {.w_px = 16,	.glyph_index = 801192},/*(怄)*/
    {.w_px = 16,	.glyph_index = 801360},/*(忡)*/
    {.w_px = 16,	.glyph_index = 801528},/*(忤)*/
    {.w_px = 16,	.glyph_index = 801696},/*(忾)*/
    {.w_px = 16,	.glyph_index = 801864},/*(怅)*/
    {.w_px = 16,	.glyph_index = 802032},/*(怆)*/
    {.w_px = 16,	.glyph_index = 802200},/*(忪)*/
    {.w_px = 16,	.glyph_index = 802368},/*(忭)*/
    {.w_px = 16,	.glyph_index = 802536},/*(忸)*/
    {.w_px = 16,	.glyph_index = 802704},/*(怙)*/
    {.w_px = 16,	.glyph_index = 802872},/*(怵)*/
    {.w_px = 16,	.glyph_index = 803040},/*(怦)*/
    {.w_px = 16,	.glyph_index = 803208},/*(怛)*/
    {.w_px = 16,	.glyph_index = 803376},/*(怏)*/
    {.w_px = 16,	.glyph_index = 803544},/*(怍)*/
    {.w_px = 16,	.glyph_index = 803712},/*(怩)*/
    {.w_px = 16,	.glyph_index = 803880},/*(怫)*/
    {.w_px = 16,	.glyph_index = 804048},/*(怊)*/
    {.w_px = 16,	.glyph_index = 804216},/*(怿)*/
    {.w_px = 16,	.glyph_index = 804384},/*(怡)*/
    {.w_px = 16,	.glyph_index = 804552},/*(恸)*/
    {.w_px = 16,	.glyph_index = 804720},/*(恹)*/
    {.w_px = 16,	.glyph_index = 804888},/*(恻)*/
    {.w_px = 16,	.glyph_index = 805056},/*(恺)*/
    {.w_px = 16,	.glyph_index = 805224},/*(恂)*/
    {.w_px = 16,	.glyph_index = 805392},/*(恪)*/
    {.w_px = 16,	.glyph_index = 805560},/*(恽)*/
    {.w_px = 16,	.glyph_index = 805728},/*(悖)*/
    {.w_px = 16,	.glyph_index = 805896},/*(悚)*/
    {.w_px = 16,	.glyph_index = 806064},/*(悭)*/
    {.w_px = 16,	.glyph_index = 806232},/*(悝)*/
    {.w_px = 16,	.glyph_index = 806400},/*(悃)*/
    {.w_px = 16,	.glyph_index = 806568},/*(悒)*/
    {.w_px = 16,	.glyph_index = 806736},/*(悌)*/
    {.w_px = 16,	.glyph_index = 806904},/*(悛)*/
    {.w_px = 16,	.glyph_index = 807072},/*(惬)*/
    {.w_px = 16,	.glyph_index = 807240},/*(悻)*/
    {.w_px = 16,	.glyph_index = 807408},/*(悱)*/
    {.w_px = 16,	.glyph_index = 807576},/*(惝)*/
    {.w_px = 16,	.glyph_index = 807744},/*(惘)*/
    {.w_px = 16,	.glyph_index = 807912},/*(惆)*/
    {.w_px = 16,	.glyph_index = 808080},/*(惚)*/
    {.w_px = 16,	.glyph_index = 808248},/*(悴)*/
    {.w_px = 16,	.glyph_index = 808416},/*(愠)*/
    {.w_px = 16,	.glyph_index = 808584},/*(愦)*/
    {.w_px = 16,	.glyph_index = 808752},/*(愕)*/
    {.w_px = 16,	.glyph_index = 808920},/*(愣)*/
    {.w_px = 16,	.glyph_index = 809088},/*(惴)*/
    {.w_px = 16,	.glyph_index = 809256},/*(愀)*/
    {.w_px = 16,	.glyph_index = 809424},/*(愎)*/
    {.w_px = 16,	.glyph_index = 809592},/*(愫)*/
    {.w_px = 16,	.glyph_index = 809760},/*(慊)*/
    {.w_px = 16,	.glyph_index = 809928},/*(慵)*/
    {.w_px = 16,	.glyph_index = 810096},/*(憬)*/
    {.w_px = 16,	.glyph_index = 810264},/*(憔)*/
    {.w_px = 16,	.glyph_index = 810432},/*(憧)*/
    {.w_px = 16,	.glyph_index = 810600},/*(憷)*/
    {.w_px = 16,	.glyph_index = 810768},/*(懔)*/
    {.w_px = 16,	.glyph_index = 810936},/*(懵)*/
    {.w_px = 16,	.glyph_index = 811104},/*(忝)*/
    {.w_px = 16,	.glyph_index = 811272},/*(隳)*/
    {.w_px = 16,	.glyph_index = 811440},/*(闩)*/
    {.w_px = 16,	.glyph_index = 811608},/*(闫)*/
    {.w_px = 16,	.glyph_index = 811776},/*(闱)*/
    {.w_px = 16,	.glyph_index = 811944},/*(闳)*/
    {.w_px = 16,	.glyph_index = 812112},/*(闵)*/
    {.w_px = 16,	.glyph_index = 812280},/*(闶)*/
    {.w_px = 16,	.glyph_index = 812448},/*(闼)*/
    {.w_px = 16,	.glyph_index = 812616},/*(闾)*/
    {.w_px = 16,	.glyph_index = 812784},/*(阃)*/
    {.w_px = 16,	.glyph_index = 812952},/*(阄)*/
    {.w_px = 16,	.glyph_index = 813120},/*(阆)*/
    {.w_px = 16,	.glyph_index = 813288},/*(阈)*/
    {.w_px = 16,	.glyph_index = 813456},/*(阊)*/
    {.w_px = 16,	.glyph_index = 813624},/*(阋)*/
    {.w_px = 16,	.glyph_index = 813792},/*(阌)*/
    {.w_px = 16,	.glyph_index = 813960},/*(阍)*/
    {.w_px = 16,	.glyph_index = 814128},/*(阏)*/
    {.w_px = 16,	.glyph_index = 814296},/*(阒)*/
    {.w_px = 16,	.glyph_index = 814464},/*(阕)*/
    {.w_px = 16,	.glyph_index = 814632},/*(阖)*/
    {.w_px = 16,	.glyph_index = 814800},/*(阗)*/
    {.w_px = 16,	.glyph_index = 814968},/*(阙)*/
    {.w_px = 16,	.glyph_index = 815136},/*(阚)*/
    {.w_px = 16,	.glyph_index = 815304},/*(丬)*/
    {.w_px = 16,	.glyph_index = 815472},/*(爿)*/
    {.w_px = 16,	.glyph_index = 815640},/*(戕)*/
    {.w_px = 16,	.glyph_index = 815808},/*(氵)*/
    {.w_px = 16,	.glyph_index = 815976},/*(汔)*/
    {.w_px = 16,	.glyph_index = 816144},/*(汜)*/
    {.w_px = 16,	.glyph_index = 816312},/*(汊)*/
    {.w_px = 16,	.glyph_index = 816480},/*(沣)*/
    {.w_px = 16,	.glyph_index = 816648},/*(沅)*/
    {.w_px = 16,	.glyph_index = 816816},/*(沐)*/
    {.w_px = 16,	.glyph_index = 816984},/*(沔)*/
    {.w_px = 16,	.glyph_index = 817152},/*(沌)*/
    {.w_px = 16,	.glyph_index = 817320},/*(汨)*/
    {.w_px = 16,	.glyph_index = 817488},/*(汩)*/
    {.w_px = 16,	.glyph_index = 817656},/*(汴)*/
    {.w_px = 16,	.glyph_index = 817824},/*(汶)*/
    {.w_px = 16,	.glyph_index = 817992},/*(沆)*/
    {.w_px = 16,	.glyph_index = 818160},/*(沩)*/
    {.w_px = 16,	.glyph_index = 818328},/*(泐)*/
    {.w_px = 16,	.glyph_index = 818496},/*(泔)*/
    {.w_px = 16,	.glyph_index = 818664},/*(沭)*/
    {.w_px = 16,	.glyph_index = 818832},/*(泷)*/
    {.w_px = 16,	.glyph_index = 819000},/*(泸)*/
    {.w_px = 16,	.glyph_index = 819168},/*(泱)*/
    {.w_px = 16,	.glyph_index = 819336},/*(泗)*/
    {.w_px = 16,	.glyph_index = 819504},/*(沲)*/
    {.w_px = 16,	.glyph_index = 819672},/*(泠)*/
    {.w_px = 16,	.glyph_index = 819840},/*(泖)*/
    {.w_px = 16,	.glyph_index = 820008},/*(泺)*/
    {.w_px = 16,	.glyph_index = 820176},/*(泫)*/
    {.w_px = 16,	.glyph_index = 820344},/*(泮)*/
    {.w_px = 16,	.glyph_index = 820512},/*(沱)*/
    {.w_px = 16,	.glyph_index = 820680},/*(泓)*/
    {.w_px = 16,	.glyph_index = 820848},/*(泯)*/
    {.w_px = 16,	.glyph_index = 821016},/*(泾)*/
    {.w_px = 16,	.glyph_index = 821184},/*(洹)*/
    {.w_px = 16,	.glyph_index = 821352},/*(洧)*/
    {.w_px = 16,	.glyph_index = 821520},/*(洌)*/
    {.w_px = 16,	.glyph_index = 821688},/*(浃)*/
    {.w_px = 16,	.glyph_index = 821856},/*(浈)*/
    {.w_px = 16,	.glyph_index = 822024},/*(洇)*/
    {.w_px = 16,	.glyph_index = 822192},/*(洄)*/
    {.w_px = 16,	.glyph_index = 822360},/*(洙)*/
    {.w_px = 16,	.glyph_index = 822528},/*(洎)*/
    {.w_px = 16,	.glyph_index = 822696},/*(洫)*/
    {.w_px = 16,	.glyph_index = 822864},/*(浍)*/
    {.w_px = 16,	.glyph_index = 823032},/*(洮)*/
    {.w_px = 16,	.glyph_index = 823200},/*(洵)*/
    {.w_px = 16,	.glyph_index = 823368},/*(洚)*/
    {.w_px = 16,	.glyph_index = 823536},/*(浏)*/
    {.w_px = 16,	.glyph_index = 823704},/*(浒)*/
    {.w_px = 16,	.glyph_index = 823872},/*(浔)*/
    {.w_px = 16,	.glyph_index = 824040},/*(洳)*/
    {.w_px = 16,	.glyph_index = 824208},/*(涑)*/
    {.w_px = 16,	.glyph_index = 824376},/*(浯)*/
    {.w_px = 16,	.glyph_index = 824544},/*(涞)*/
    {.w_px = 16,	.glyph_index = 824712},/*(涠)*/
    {.w_px = 16,	.glyph_index = 824880},/*(浞)*/
    {.w_px = 16,	.glyph_index = 825048},/*(涓)*/
    {.w_px = 16,	.glyph_index = 825216},/*(涔)*/
    {.w_px = 16,	.glyph_index = 825384},/*(浜)*/
    {.w_px = 16,	.glyph_index = 825552},/*(浠)*/
    {.w_px = 16,	.glyph_index = 825720},/*(浼)*/
    {.w_px = 16,	.glyph_index = 825888},/*(浣)*/
    {.w_px = 16,	.glyph_index = 826056},/*(渚)*/
    {.w_px = 16,	.glyph_index = 826224},/*(淇)*/
    {.w_px = 16,	.glyph_index = 826392},/*(淅)*/
    {.w_px = 16,	.glyph_index = 826560},/*(淞)*/
    {.w_px = 16,	.glyph_index = 826728},/*(渎)*/
    {.w_px = 16,	.glyph_index = 826896},/*(涿)*/
    {.w_px = 16,	.glyph_index = 827064},/*(淠)*/
    {.w_px = 16,	.glyph_index = 827232},/*(渑)*/
    {.w_px = 16,	.glyph_index = 827400},/*(淦)*/
    {.w_px = 16,	.glyph_index = 827568},/*(淝)*/
    {.w_px = 16,	.glyph_index = 827736},/*(淙)*/
    {.w_px = 16,	.glyph_index = 827904},/*(渖)*/
    {.w_px = 16,	.glyph_index = 828072},/*(涫)*/
    {.w_px = 16,	.glyph_index = 828240},/*(渌)*/
    {.w_px = 16,	.glyph_index = 828408},/*(涮)*/
    {.w_px = 16,	.glyph_index = 828576},/*(渫)*/
    {.w_px = 16,	.glyph_index = 828744},/*(湮)*/
    {.w_px = 16,	.glyph_index = 828912},/*(湎)*/
    {.w_px = 16,	.glyph_index = 829080},/*(湫)*/
    {.w_px = 16,	.glyph_index = 829248},/*(溲)*/
    {.w_px = 16,	.glyph_index = 829416},/*(湟)*/
    {.w_px = 16,	.glyph_index = 829584},/*(溆)*/
    {.w_px = 16,	.glyph_index = 829752},/*(湓)*/
    {.w_px = 16,	.glyph_index = 829920},/*(湔)*/
    {.w_px = 16,	.glyph_index = 830088},/*(渲)*/
    {.w_px = 16,	.glyph_index = 830256},/*(渥)*/
    {.w_px = 16,	.glyph_index = 830424},/*(湄)*/
    {.w_px = 16,	.glyph_index = 830592},/*(滟)*/
    {.w_px = 16,	.glyph_index = 830760},/*(溱)*/
    {.w_px = 16,	.glyph_index = 830928},/*(溘)*/
    {.w_px = 16,	.glyph_index = 831096},/*(滠)*/
    {.w_px = 16,	.glyph_index = 831264},/*(漭)*/
    {.w_px = 16,	.glyph_index = 831432},/*(滢)*/
    {.w_px = 16,	.glyph_index = 831600},/*(溥)*/
    {.w_px = 16,	.glyph_index = 831768},/*(溧)*/
    {.w_px = 16,	.glyph_index = 831936},/*(溽)*/
    {.w_px = 16,	.glyph_index = 832104},/*(溻)*/
    {.w_px = 16,	.glyph_index = 832272},/*(溷)*/
    {.w_px = 16,	.glyph_index = 832440},/*(滗)*/
    {.w_px = 16,	.glyph_index = 832608},/*(溴)*/
    {.w_px = 16,	.glyph_index = 832776},/*(滏)*/
    {.w_px = 16,	.glyph_index = 832944},/*(溏)*/
    {.w_px = 16,	.glyph_index = 833112},/*(滂)*/
    {.w_px = 16,	.glyph_index = 833280},/*(溟)*/
    {.w_px = 16,	.glyph_index = 833448},/*(潢)*/
    {.w_px = 16,	.glyph_index = 833616},/*(潆)*/
    {.w_px = 16,	.glyph_index = 833784},/*(潇)*/
    {.w_px = 16,	.glyph_index = 833952},/*(漤)*/
    {.w_px = 16,	.glyph_index = 834120},/*(漕)*/
    {.w_px = 16,	.glyph_index = 834288},/*(滹)*/
    {.w_px = 16,	.glyph_index = 834456},/*(漯)*/
    {.w_px = 16,	.glyph_index = 834624},/*(漶)*/
    {.w_px = 16,	.glyph_index = 834792},/*(潋)*/
    {.w_px = 16,	.glyph_index = 834960},/*(潴)*/
    {.w_px = 16,	.glyph_index = 835128},/*(漪)*/
    {.w_px = 16,	.glyph_index = 835296},/*(漉)*/
    {.w_px = 16,	.glyph_index = 835464},/*(漩)*/
    {.w_px = 16,	.glyph_index = 835632},/*(澉)*/
    {.w_px = 16,	.glyph_index = 835800},/*(澍)*/
    {.w_px = 16,	.glyph_index = 835968},/*(澌)*/
    {.w_px = 16,	.glyph_index = 836136},/*(潸)*/
    {.w_px = 16,	.glyph_index = 836304},/*(潲)*/
    {.w_px = 16,	.glyph_index = 836472},/*(潼)*/
    {.w_px = 16,	.glyph_index = 836640},/*(潺)*/
    {.w_px = 16,	.glyph_index = 836808},/*(濑)*/
    {.w_px = 16,	.glyph_index = 836976},/*(濉)*/
    {.w_px = 16,	.glyph_index = 837144},/*(澧)*/
    {.w_px = 16,	.glyph_index = 837312},/*(澹)*/
    {.w_px = 16,	.glyph_index = 837480},/*(澶)*/
    {.w_px = 16,	.glyph_index = 837648},/*(濂)*/
    {.w_px = 16,	.glyph_index = 837816},/*(濡)*/
    {.w_px = 16,	.glyph_index = 837984},/*(濮)*/
    {.w_px = 16,	.glyph_index = 838152},/*(濞)*/
    {.w_px = 16,	.glyph_index = 838320},/*(濠)*/
    {.w_px = 16,	.glyph_index = 838488},/*(濯)*/
    {.w_px = 16,	.glyph_index = 838656},/*(瀚)*/
    {.w_px = 16,	.glyph_index = 838824},/*(瀣)*/
    {.w_px = 16,	.glyph_index = 838992},/*(瀛)*/
    {.w_px = 16,	.glyph_index = 839160},/*(瀹)*/
    {.w_px = 16,	.glyph_index = 839328},/*(瀵)*/
    {.w_px = 16,	.glyph_index = 839496},/*(灏)*/
    {.w_px = 16,	.glyph_index = 839664},/*(灞)*/
    {.w_px = 16,	.glyph_index = 839832},/*(宀)*/
    {.w_px = 16,	.glyph_index = 840000},/*(宄)*/
    {.w_px = 16,	.glyph_index = 840168},/*(宕)*/
    {.w_px = 16,	.glyph_index = 840336},/*(宓)*/
    {.w_px = 16,	.glyph_index = 840504},/*(宥)*/
    {.w_px = 16,	.glyph_index = 840672},/*(宸)*/
    {.w_px = 16,	.glyph_index = 840840},/*(甯)*/
    {.w_px = 16,	.glyph_index = 841008},/*(骞)*/
    {.w_px = 16,	.glyph_index = 841176},/*(搴)*/
    {.w_px = 16,	.glyph_index = 841344},/*(寤)*/
    {.w_px = 16,	.glyph_index = 841512},/*(寮)*/
    {.w_px = 16,	.glyph_index = 841680},/*(褰)*/
    {.w_px = 16,	.glyph_index = 841848},/*(寰)*/
    {.w_px = 16,	.glyph_index = 842016},/*(蹇)*/
    {.w_px = 16,	.glyph_index = 842184},/*(謇)*/
    {.w_px = 16,	.glyph_index = 842352},/*(辶)*/
    {.w_px = 16,	.glyph_index = 842520},/*(迓)*/
    {.w_px = 16,	.glyph_index = 842688},/*(迕)*/
    {.w_px = 16,	.glyph_index = 842856},/*(迥)*/
    {.w_px = 16,	.glyph_index = 843024},/*(迮)*/
    {.w_px = 16,	.glyph_index = 843192},/*(迤)*/
    {.w_px = 16,	.glyph_index = 843360},/*(迩)*/
    {.w_px = 16,	.glyph_index = 843528},/*(迦)*/
    {.w_px = 16,	.glyph_index = 843696},/*(迳)*/
    {.w_px = 16,	.glyph_index = 843864},/*(迨)*/
    {.w_px = 16,	.glyph_index = 844032},/*(逅)*/
    {.w_px = 16,	.glyph_index = 844200},/*(逄)*/
    {.w_px = 16,	.glyph_index = 844368},/*(逋)*/
    {.w_px = 16,	.glyph_index = 844536},/*(逦)*/
    {.w_px = 16,	.glyph_index = 844704},/*(逑)*/
    {.w_px = 16,	.glyph_index = 844872},/*(逍)*/
    {.w_px = 16,	.glyph_index = 845040},/*(逖)*/
    {.w_px = 16,	.glyph_index = 845208},/*(逡)*/
    {.w_px = 16,	.glyph_index = 845376},/*(逵)*/
    {.w_px = 16,	.glyph_index = 845544},/*(逶)*/
    {.w_px = 16,	.glyph_index = 845712},/*(逭)*/
    {.w_px = 16,	.glyph_index = 845880},/*(逯)*/
    {.w_px = 16,	.glyph_index = 846048},/*(遄)*/
    {.w_px = 16,	.glyph_index = 846216},/*(遑)*/
    {.w_px = 16,	.glyph_index = 846384},/*(遒)*/
    {.w_px = 16,	.glyph_index = 846552},/*(遐)*/
    {.w_px = 16,	.glyph_index = 846720},/*(遨)*/
    {.w_px = 16,	.glyph_index = 846888},/*(遘)*/
    {.w_px = 16,	.glyph_index = 847056},/*(遢)*/
    {.w_px = 16,	.glyph_index = 847224},/*(遛)*/
    {.w_px = 16,	.glyph_index = 847392},/*(暹)*/
    {.w_px = 16,	.glyph_index = 847560},/*(遴)*/
    {.w_px = 16,	.glyph_index = 847728},/*(遽)*/
    {.w_px = 16,	.glyph_index = 847896},/*(邂)*/
    {.w_px = 16,	.glyph_index = 848064},/*(邈)*/
    {.w_px = 16,	.glyph_index = 848232},/*(邃)*/
    {.w_px = 16,	.glyph_index = 848400},/*(邋)*/
    {.w_px = 16,	.glyph_index = 848568},/*(彐)*/
    {.w_px = 16,	.glyph_index = 848736},/*(彗)*/
    {.w_px = 16,	.glyph_index = 848904},/*(彖)*/
    {.w_px = 16,	.glyph_index = 849072},/*(彘)*/
    {.w_px = 16,	.glyph_index = 849240},/*(尻)*/
    {.w_px = 16,	.glyph_index = 849408},/*(咫)*/
    {.w_px = 16,	.glyph_index = 849576},/*(屐)*/
    {.w_px = 16,	.glyph_index = 849744},/*(屙)*/
    {.w_px = 16,	.glyph_index = 849912},/*(孱)*/
    {.w_px = 16,	.glyph_index = 850080},/*(屣)*/
    {.w_px = 16,	.glyph_index = 850248},/*(屦)*/
    {.w_px = 16,	.glyph_index = 850416},/*(羼)*/
    {.w_px = 16,	.glyph_index = 850584},/*(弪)*/
    {.w_px = 16,	.glyph_index = 850752},/*(弩)*/
    {.w_px = 16,	.glyph_index = 850920},/*(弭)*/
    {.w_px = 16,	.glyph_index = 851088},/*(艴)*/
    {.w_px = 16,	.glyph_index = 851256},/*(弼)*/
    {.w_px = 16,	.glyph_index = 851424},/*(鬻)*/
    {.w_px = 16,	.glyph_index = 851592},/*(屮)*/
    {.w_px = 16,	.glyph_index = 851760},/*(妁)*/
    {.w_px = 16,	.glyph_index = 851928},/*(妃)*/
    {.w_px = 16,	.glyph_index = 852096},/*(妍)*/
    {.w_px = 16,	.glyph_index = 852264},/*(妩)*/
    {.w_px = 16,	.glyph_index = 852432},/*(妪)*/
    {.w_px = 16,	.glyph_index = 852600},/*(妣)*/
    {.w_px = 16,	.glyph_index = 852768},/*(妗)*/
    {.w_px = 16,	.glyph_index = 852936},/*(姊)*/
    {.w_px = 16,	.glyph_index = 853104},/*(妫)*/
    {.w_px = 16,	.glyph_index = 853272},/*(妞)*/
    {.w_px = 16,	.glyph_index = 853440},/*(妤)*/
    {.w_px = 16,	.glyph_index = 853608},/*(姒)*/
    {.w_px = 16,	.glyph_index = 853776},/*(妲)*/
    {.w_px = 16,	.glyph_index = 853944},/*(妯)*/
    {.w_px = 16,	.glyph_index = 854112},/*(姗)*/
    {.w_px = 16,	.glyph_index = 854280},/*(妾)*/
    {.w_px = 16,	.glyph_index = 854448},/*(娅)*/
    {.w_px = 16,	.glyph_index = 854616},/*(娆)*/
    {.w_px = 16,	.glyph_index = 854784},/*(姝)*/
    {.w_px = 16,	.glyph_index = 854952},/*(娈)*/
    {.w_px = 16,	.glyph_index = 855120},/*(姣)*/
    {.w_px = 16,	.glyph_index = 855288},/*(姘)*/
    {.w_px = 16,	.glyph_index = 855456},/*(姹)*/
    {.w_px = 16,	.glyph_index = 855624},/*(娌)*/
    {.w_px = 16,	.glyph_index = 855792},/*(娉)*/
    {.w_px = 16,	.glyph_index = 855960},/*(娲)*/
    {.w_px = 16,	.glyph_index = 856128},/*(娴)*/
    {.w_px = 16,	.glyph_index = 856296},/*(娑)*/
    {.w_px = 16,	.glyph_index = 856464},/*(娣)*/
    {.w_px = 16,	.glyph_index = 856632},/*(娓)*/
    {.w_px = 16,	.glyph_index = 856800},/*(婀)*/
    {.w_px = 16,	.glyph_index = 856968},/*(婧)*/
    {.w_px = 16,	.glyph_index = 857136},/*(婊)*/
    {.w_px = 16,	.glyph_index = 857304},/*(婕)*/
    {.w_px = 16,	.glyph_index = 857472},/*(娼)*/
    {.w_px = 16,	.glyph_index = 857640},/*(婢)*/
    {.w_px = 16,	.glyph_index = 857808},/*(婵)*/
    {.w_px = 16,	.glyph_index = 857976},/*(胬)*/
    {.w_px = 16,	.glyph_index = 858144},/*(媪)*/
    {.w_px = 16,	.glyph_index = 858312},/*(媛)*/
    {.w_px = 16,	.glyph_index = 858480},/*(婷)*/
    {.w_px = 16,	.glyph_index = 858648},/*(婺)*/
    {.w_px = 16,	.glyph_index = 858816},/*(媾)*/
    {.w_px = 16,	.glyph_index = 858984},/*(嫫)*/
    {.w_px = 16,	.glyph_index = 859152},/*(媲)*/
    {.w_px = 16,	.glyph_index = 859320},/*(嫒)*/
    {.w_px = 16,	.glyph_index = 859488},/*(嫔)*/
    {.w_px = 16,	.glyph_index = 859656},/*(媸)*/
    {.w_px = 16,	.glyph_index = 859824},/*(嫠)*/
    {.w_px = 16,	.glyph_index = 859992},/*(嫣)*/
    {.w_px = 16,	.glyph_index = 860160},/*(嫱)*/
    {.w_px = 16,	.glyph_index = 860328},/*(嫖)*/
    {.w_px = 16,	.glyph_index = 860496},/*(嫦)*/
    {.w_px = 16,	.glyph_index = 860664},/*(嫘)*/
    {.w_px = 16,	.glyph_index = 860832},/*(嫜)*/
    {.w_px = 16,	.glyph_index = 861000},/*(嬉)*/
    {.w_px = 16,	.glyph_index = 861168},/*(嬗)*/
    {.w_px = 16,	.glyph_index = 861336},/*(嬖)*/
    {.w_px = 16,	.glyph_index = 861504},/*(嬲)*/
    {.w_px = 16,	.glyph_index = 861672},/*(嬷)*/
    {.w_px = 16,	.glyph_index = 861840},/*(孀)*/
    {.w_px = 16,	.glyph_index = 862008},/*(尕)*/
    {.w_px = 16,	.glyph_index = 862176},/*(尜)*/
    {.w_px = 16,	.glyph_index = 862344},/*(孚)*/
    {.w_px = 16,	.glyph_index = 862512},/*(孥)*/
    {.w_px = 16,	.glyph_index = 862680},/*(孳)*/
    {.w_px = 16,	.glyph_index = 862848},/*(孑)*/
    {.w_px = 16,	.glyph_index = 863016},/*(孓)*/
    {.w_px = 16,	.glyph_index = 863184},/*(孢)*/
    {.w_px = 16,	.glyph_index = 863352},/*(驵)*/
    {.w_px = 16,	.glyph_index = 863520},/*(驷)*/
    {.w_px = 16,	.glyph_index = 863688},/*(驸)*/
    {.w_px = 16,	.glyph_index = 863856},/*(驺)*/
    {.w_px = 16,	.glyph_index = 864024},/*(驿)*/
    {.w_px = 16,	.glyph_index = 864192},/*(驽)*/
    {.w_px = 16,	.glyph_index = 864360},/*(骀)*/
    {.w_px = 16,	.glyph_index = 864528},/*(骁)*/
    {.w_px = 16,	.glyph_index = 864696},/*(骅)*/
    {.w_px = 16,	.glyph_index = 864864},/*(骈)*/
    {.w_px = 16,	.glyph_index = 865032},/*(骊)*/
    {.w_px = 16,	.glyph_index = 865200},/*(骐)*/
    {.w_px = 16,	.glyph_index = 865368},/*(骒)*/
    {.w_px = 16,	.glyph_index = 865536},/*(骓)*/
    {.w_px = 16,	.glyph_index = 865704},/*(骖)*/
    {.w_px = 16,	.glyph_index = 865872},/*(骘)*/
    {.w_px = 16,	.glyph_index = 866040},/*(骛)*/
    {.w_px = 16,	.glyph_index = 866208},/*(骜)*/
    {.w_px = 16,	.glyph_index = 866376},/*(骝)*/
    {.w_px = 16,	.glyph_index = 866544},/*(骟)*/
    {.w_px = 16,	.glyph_index = 866712},/*(骠)*/
    {.w_px = 16,	.glyph_index = 866880},/*(骢)*/
    {.w_px = 16,	.glyph_index = 867048},/*(骣)*/
    {.w_px = 16,	.glyph_index = 867216},/*(骥)*/
    {.w_px = 16,	.glyph_index = 867384},/*(骧)*/
    {.w_px = 16,	.glyph_index = 867552},/*(纟)*/
    {.w_px = 16,	.glyph_index = 867720},/*(纡)*/
    {.w_px = 16,	.glyph_index = 867888},/*(纣)*/
    {.w_px = 16,	.glyph_index = 868056},/*(纥)*/
    {.w_px = 16,	.glyph_index = 868224},/*(纨)*/
    {.w_px = 16,	.glyph_index = 868392},/*(纩)*/
    {.w_px = 16,	.glyph_index = 868560},/*(纭)*/
    {.w_px = 16,	.glyph_index = 868728},/*(纰)*/
    {.w_px = 16,	.glyph_index = 868896},/*(纾)*/
    {.w_px = 16,	.glyph_index = 869064},/*(绀)*/
    {.w_px = 16,	.glyph_index = 869232},/*(绁)*/
    {.w_px = 16,	.glyph_index = 869400},/*(绂)*/
    {.w_px = 16,	.glyph_index = 869568},/*(绉)*/
    {.w_px = 16,	.glyph_index = 869736},/*(绋)*/
    {.w_px = 16,	.glyph_index = 869904},/*(绌)*/
    {.w_px = 16,	.glyph_index = 870072},/*(绐)*/
    {.w_px = 16,	.glyph_index = 870240},/*(绔)*/
    {.w_px = 16,	.glyph_index = 870408},/*(绗)*/
    {.w_px = 16,	.glyph_index = 870576},/*(绛)*/
    {.w_px = 16,	.glyph_index = 870744},/*(绠)*/
    {.w_px = 16,	.glyph_index = 870912},/*(绡)*/
    {.w_px = 16,	.glyph_index = 871080},/*(绨)*/
    {.w_px = 16,	.glyph_index = 871248},/*(绫)*/
    {.w_px = 16,	.glyph_index = 871416},/*(绮)*/
    {.w_px = 16,	.glyph_index = 871584},/*(绯)*/
    {.w_px = 16,	.glyph_index = 871752},/*(绱)*/
    {.w_px = 16,	.glyph_index = 871920},/*(绲)*/
    {.w_px = 16,	.glyph_index = 872088},/*(缍)*/
    {.w_px = 16,	.glyph_index = 872256},/*(绶)*/
    {.w_px = 16,	.glyph_index = 872424},/*(绺)*/
    {.w_px = 16,	.glyph_index = 872592},/*(绻)*/
    {.w_px = 16,	.glyph_index = 872760},/*(绾)*/
    {.w_px = 16,	.glyph_index = 872928},/*(缁)*/
    {.w_px = 16,	.glyph_index = 873096},/*(缂)*/
    {.w_px = 16,	.glyph_index = 873264},/*(缃)*/
    {.w_px = 16,	.glyph_index = 873432},/*(缇)*/
    {.w_px = 16,	.glyph_index = 873600},/*(缈)*/
    {.w_px = 16,	.glyph_index = 873768},/*(缋)*/
    {.w_px = 16,	.glyph_index = 873936},/*(缌)*/
    {.w_px = 16,	.glyph_index = 874104},/*(缏)*/
    {.w_px = 16,	.glyph_index = 874272},/*(缑)*/
    {.w_px = 16,	.glyph_index = 874440},/*(缒)*/
    {.w_px = 16,	.glyph_index = 874608},/*(缗)*/
    {.w_px = 16,	.glyph_index = 874776},/*(缙)*/
    {.w_px = 16,	.glyph_index = 874944},/*(缜)*/
    {.w_px = 16,	.glyph_index = 875112},/*(缛)*/
    {.w_px = 16,	.glyph_index = 875280},/*(缟)*/
    {.w_px = 16,	.glyph_index = 875448},/*(缡)*/
    {.w_px = 16,	.glyph_index = 875616},/*(缢)*/
    {.w_px = 16,	.glyph_index = 875784},/*(缣)*/
    {.w_px = 16,	.glyph_index = 875952},/*(缤)*/
    {.w_px = 16,	.glyph_index = 876120},/*(缥)*/
    {.w_px = 16,	.glyph_index = 876288},/*(缦)*/
    {.w_px = 16,	.glyph_index = 876456},/*(缧)*/
    {.w_px = 16,	.glyph_index = 876624},/*(缪)*/
    {.w_px = 16,	.glyph_index = 876792},/*(缫)*/
    {.w_px = 16,	.glyph_index = 876960},/*(缬)*/
    {.w_px = 16,	.glyph_index = 877128},/*(缭)*/
    {.w_px = 16,	.glyph_index = 877296},/*(缯)*/
    {.w_px = 16,	.glyph_index = 877464},/*(缰)*/
    {.w_px = 16,	.glyph_index = 877632},/*(缱)*/
    {.w_px = 16,	.glyph_index = 877800},/*(缲)*/
    {.w_px = 16,	.glyph_index = 877968},/*(缳)*/
    {.w_px = 16,	.glyph_index = 878136},/*(缵)*/
    {.w_px = 16,	.glyph_index = 878304},/*(幺)*/
    {.w_px = 16,	.glyph_index = 878472},/*(畿)*/
    {.w_px = 16,	.glyph_index = 878640},/*(巛)*/
    {.w_px = 16,	.glyph_index = 878808},/*(甾)*/
    {.w_px = 16,	.glyph_index = 878976},/*(邕)*/
    {.w_px = 16,	.glyph_index = 879144},/*(玎)*/
    {.w_px = 16,	.glyph_index = 879312},/*(玑)*/
    {.w_px = 16,	.glyph_index = 879480},/*(玮)*/
    {.w_px = 16,	.glyph_index = 879648},/*(玢)*/
    {.w_px = 16,	.glyph_index = 879816},/*(玟)*/
    {.w_px = 16,	.glyph_index = 879984},/*(珏)*/
    {.w_px = 16,	.glyph_index = 880152},/*(珂)*/
    {.w_px = 16,	.glyph_index = 880320},/*(珑)*/
    {.w_px = 16,	.glyph_index = 880488},/*(玷)*/
    {.w_px = 16,	.glyph_index = 880656},/*(玳)*/
    {.w_px = 16,	.glyph_index = 880824},/*(珀)*/
    {.w_px = 16,	.glyph_index = 880992},/*(珉)*/
    {.w_px = 16,	.glyph_index = 881160},/*(珈)*/
    {.w_px = 16,	.glyph_index = 881328},/*(珥)*/
    {.w_px = 16,	.glyph_index = 881496},/*(珙)*/
    {.w_px = 16,	.glyph_index = 881664},/*(顼)*/
    {.w_px = 16,	.glyph_index = 881832},/*(琊)*/
    {.w_px = 16,	.glyph_index = 882000},/*(珩)*/
    {.w_px = 16,	.glyph_index = 882168},/*(珧)*/
    {.w_px = 16,	.glyph_index = 882336},/*(珞)*/
    {.w_px = 16,	.glyph_index = 882504},/*(玺)*/
    {.w_px = 16,	.glyph_index = 882672},/*(珲)*/
    {.w_px = 16,	.glyph_index = 882840},/*(琏)*/
    {.w_px = 16,	.glyph_index = 883008},/*(琪)*/
    {.w_px = 16,	.glyph_index = 883176},/*(瑛)*/
    {.w_px = 16,	.glyph_index = 883344},/*(琦)*/
    {.w_px = 16,	.glyph_index = 883512},/*(琥)*/
    {.w_px = 16,	.glyph_index = 883680},/*(琨)*/
    {.w_px = 16,	.glyph_index = 883848},/*(琰)*/
    {.w_px = 16,	.glyph_index = 884016},/*(琮)*/
    {.w_px = 16,	.glyph_index = 884184},/*(琬)*/
    {.w_px = 16,	.glyph_index = 884352},/*(琛)*/
    {.w_px = 16,	.glyph_index = 884520},/*(琚)*/
    {.w_px = 16,	.glyph_index = 884688},/*(瑁)*/
    {.w_px = 16,	.glyph_index = 884856},/*(瑜)*/
    {.w_px = 16,	.glyph_index = 885024},/*(瑗)*/
    {.w_px = 16,	.glyph_index = 885192},/*(瑕)*/
    {.w_px = 16,	.glyph_index = 885360},/*(瑙)*/
    {.w_px = 16,	.glyph_index = 885528},/*(瑷)*/
    {.w_px = 16,	.glyph_index = 885696},/*(瑭)*/
    {.w_px = 16,	.glyph_index = 885864},/*(瑾)*/
    {.w_px = 16,	.glyph_index = 886032},/*(璜)*/
    {.w_px = 16,	.glyph_index = 886200},/*(璎)*/
    {.w_px = 16,	.glyph_index = 886368},/*(璀)*/
    {.w_px = 16,	.glyph_index = 886536},/*(璁)*/
    {.w_px = 16,	.glyph_index = 886704},/*(璇)*/
    {.w_px = 16,	.glyph_index = 886872},/*(璋)*/
    {.w_px = 16,	.glyph_index = 887040},/*(璞)*/
    {.w_px = 16,	.glyph_index = 887208},/*(璨)*/
    {.w_px = 16,	.glyph_index = 887376},/*(璩)*/
    {.w_px = 16,	.glyph_index = 887544},/*(璐)*/
    {.w_px = 16,	.glyph_index = 887712},/*(璧)*/
    {.w_px = 16,	.glyph_index = 887880},/*(瓒)*/
    {.w_px = 16,	.glyph_index = 888048},/*(璺)*/
    {.w_px = 16,	.glyph_index = 888216},/*(韪)*/
    {.w_px = 16,	.glyph_index = 888384},/*(韫)*/
    {.w_px = 16,	.glyph_index = 888552},/*(韬)*/
    {.w_px = 16,	.glyph_index = 888720},/*(杌)*/
    {.w_px = 16,	.glyph_index = 888888},/*(杓)*/
    {.w_px = 16,	.glyph_index = 889056},/*(杞)*/
    {.w_px = 16,	.glyph_index = 889224},/*(杈)*/
    {.w_px = 16,	.glyph_index = 889392},/*(杩)*/
    {.w_px = 16,	.glyph_index = 889560},/*(枥)*/
    {.w_px = 16,	.glyph_index = 889728},/*(枇)*/
    {.w_px = 16,	.glyph_index = 889896},/*(杪)*/
    {.w_px = 16,	.glyph_index = 890064},/*(杳)*/
    {.w_px = 16,	.glyph_index = 890232},/*(枘)*/
    {.w_px = 16,	.glyph_index = 890400},/*(枧)*/
    {.w_px = 16,	.glyph_index = 890568},/*(杵)*/
    {.w_px = 16,	.glyph_index = 890736},/*(枨)*/
    {.w_px = 16,	.glyph_index = 890904},/*(枞)*/
    {.w_px = 16,	.glyph_index = 891072},/*(枭)*/
    {.w_px = 16,	.glyph_index = 891240},/*(枋)*/
    {.w_px = 16,	.glyph_index = 891408},/*(杷)*/
    {.w_px = 16,	.glyph_index = 891576},/*(杼)*/
    {.w_px = 16,	.glyph_index = 891744},/*(柰)*/
    {.w_px = 16,	.glyph_index = 891912},/*(栉)*/
    {.w_px = 16,	.glyph_index = 892080},/*(柘)*/
    {.w_px = 16,	.glyph_index = 892248},/*(栊)*/
    {.w_px = 16,	.glyph_index = 892416},/*(柩)*/
    {.w_px = 16,	.glyph_index = 892584},/*(枰)*/
    {.w_px = 16,	.glyph_index = 892752},/*(栌)*/
    {.w_px = 16,	.glyph_index = 892920},/*(柙)*/
    {.w_px = 16,	.glyph_index = 893088},/*(枵)*/
    {.w_px = 16,	.glyph_index = 893256},/*(柚)*/
    {.w_px = 16,	.glyph_index = 893424},/*(枳)*/
    {.w_px = 16,	.glyph_index = 893592},/*(柝)*/
    {.w_px = 16,	.glyph_index = 893760},/*(栀)*/
    {.w_px = 16,	.glyph_index = 893928},/*(柃)*/
    {.w_px = 16,	.glyph_index = 894096},/*(枸)*/
    {.w_px = 16,	.glyph_index = 894264},/*(柢)*/
    {.w_px = 16,	.glyph_index = 894432},/*(栎)*/
    {.w_px = 16,	.glyph_index = 894600},/*(柁)*/
    {.w_px = 16,	.glyph_index = 894768},/*(柽)*/
    {.w_px = 16,	.glyph_index = 894936},/*(栲)*/
    {.w_px = 16,	.glyph_index = 895104},/*(栳)*/
    {.w_px = 16,	.glyph_index = 895272},/*(桠)*/
    {.w_px = 16,	.glyph_index = 895440},/*(桡)*/
    {.w_px = 16,	.glyph_index = 895608},/*(桎)*/
    {.w_px = 16,	.glyph_index = 895776},/*(桢)*/
    {.w_px = 16,	.glyph_index = 895944},/*(桄)*/
    {.w_px = 16,	.glyph_index = 896112},/*(桤)*/
    {.w_px = 16,	.glyph_index = 896280},/*(梃)*/
    {.w_px = 16,	.glyph_index = 896448},/*(栝)*/
    {.w_px = 16,	.glyph_index = 896616},/*(桕)*/
    {.w_px = 16,	.glyph_index = 896784},/*(桦)*/
    {.w_px = 16,	.glyph_index = 896952},/*(桁)*/
    {.w_px = 16,	.glyph_index = 897120},/*(桧)*/
    {.w_px = 16,	.glyph_index = 897288},/*(桀)*/
    {.w_px = 16,	.glyph_index = 897456},/*(栾)*/
    {.w_px = 16,	.glyph_index = 897624},/*(桊)*/
    {.w_px = 16,	.glyph_index = 897792},/*(桉)*/
    {.w_px = 16,	.glyph_index = 897960},/*(栩)*/
    {.w_px = 16,	.glyph_index = 898128},/*(梵)*/
    {.w_px = 16,	.glyph_index = 898296},/*(梏)*/
    {.w_px = 16,	.glyph_index = 898464},/*(桴)*/
    {.w_px = 16,	.glyph_index = 898632},/*(桷)*/
    {.w_px = 16,	.glyph_index = 898800},/*(梓)*/
    {.w_px = 16,	.glyph_index = 898968},/*(桫)*/
    {.w_px = 16,	.glyph_index = 899136},/*(棂)*/
    {.w_px = 16,	.glyph_index = 899304},/*(楮)*/
    {.w_px = 16,	.glyph_index = 899472},/*(棼)*/
    {.w_px = 16,	.glyph_index = 899640},/*(椟)*/
    {.w_px = 16,	.glyph_index = 899808},/*(椠)*/
    {.w_px = 16,	.glyph_index = 899976},/*(棹)*/
    {.w_px = 16,	.glyph_index = 900144},/*(椤)*/
    {.w_px = 16,	.glyph_index = 900312},/*(棰)*/
    {.w_px = 16,	.glyph_index = 900480},/*(椋)*/
    {.w_px = 16,	.glyph_index = 900648},/*(椁)*/
    {.w_px = 16,	.glyph_index = 900816},/*(楗)*/
    {.w_px = 16,	.glyph_index = 900984},/*(棣)*/
    {.w_px = 16,	.glyph_index = 901152},/*(椐)*/
    {.w_px = 16,	.glyph_index = 901320},/*(楱)*/
    {.w_px = 16,	.glyph_index = 901488},/*(椹)*/
    {.w_px = 16,	.glyph_index = 901656},/*(楠)*/
    {.w_px = 16,	.glyph_index = 901824},/*(楂)*/
    {.w_px = 16,	.glyph_index = 901992},/*(楝)*/
    {.w_px = 16,	.glyph_index = 902160},/*(榄)*/
    {.w_px = 16,	.glyph_index = 902328},/*(楫)*/
    {.w_px = 16,	.glyph_index = 902496},/*(榀)*/
    {.w_px = 16,	.glyph_index = 902664},/*(榘)*/
    {.w_px = 16,	.glyph_index = 902832},/*(楸)*/
    {.w_px = 16,	.glyph_index = 903000},/*(椴)*/
    {.w_px = 16,	.glyph_index = 903168},/*(槌)*/
    {.w_px = 16,	.glyph_index = 903336},/*(榇)*/
    {.w_px = 16,	.glyph_index = 903504},/*(榈)*/
    {.w_px = 16,	.glyph_index = 903672},/*(槎)*/
    {.w_px = 16,	.glyph_index = 903840},/*(榉)*/
    {.w_px = 16,	.glyph_index = 904008},/*(楦)*/
    {.w_px = 16,	.glyph_index = 904176},/*(楣)*/
    {.w_px = 16,	.glyph_index = 904344},/*(楹)*/
    {.w_px = 16,	.glyph_index = 904512},/*(榛)*/
    {.w_px = 16,	.glyph_index = 904680},/*(榧)*/
    {.w_px = 16,	.glyph_index = 904848},/*(榻)*/
    {.w_px = 16,	.glyph_index = 905016},/*(榫)*/
    {.w_px = 16,	.glyph_index = 905184},/*(榭)*/
    {.w_px = 16,	.glyph_index = 905352},/*(槔)*/
    {.w_px = 16,	.glyph_index = 905520},/*(榱)*/
    {.w_px = 16,	.glyph_index = 905688},/*(槁)*/
    {.w_px = 16,	.glyph_index = 905856},/*(槊)*/
    {.w_px = 16,	.glyph_index = 906024},/*(槟)*/
    {.w_px = 16,	.glyph_index = 906192},/*(榕)*/
    {.w_px = 16,	.glyph_index = 906360},/*(槠)*/
    {.w_px = 16,	.glyph_index = 906528},/*(榍)*/
    {.w_px = 16,	.glyph_index = 906696},/*(槿)*/
    {.w_px = 16,	.glyph_index = 906864},/*(樯)*/
    {.w_px = 16,	.glyph_index = 907032},/*(槭)*/
    {.w_px = 16,	.glyph_index = 907200},/*(樗)*/
    {.w_px = 16,	.glyph_index = 907368},/*(樘)*/
    {.w_px = 16,	.glyph_index = 907536},/*(橥)*/
    {.w_px = 16,	.glyph_index = 907704},/*(槲)*/
    {.w_px = 16,	.glyph_index = 907872},/*(橄)*/
    {.w_px = 16,	.glyph_index = 908040},/*(樾)*/
    {.w_px = 16,	.glyph_index = 908208},/*(檠)*/
    {.w_px = 16,	.glyph_index = 908376},/*(橐)*/
    {.w_px = 16,	.glyph_index = 908544},/*(橛)*/
    {.w_px = 16,	.glyph_index = 908712},/*(樵)*/
    {.w_px = 16,	.glyph_index = 908880},/*(檎)*/
    {.w_px = 16,	.glyph_index = 909048},/*(橹)*/
    {.w_px = 16,	.glyph_index = 909216},/*(樽)*/
    {.w_px = 16,	.glyph_index = 909384},/*(樨)*/
    {.w_px = 16,	.glyph_index = 909552},/*(橘)*/
    {.w_px = 16,	.glyph_index = 909720},/*(橼)*/
    {.w_px = 16,	.glyph_index = 909888},/*(檑)*/
    {.w_px = 16,	.glyph_index = 910056},/*(檐)*/
    {.w_px = 16,	.glyph_index = 910224},/*(檩)*/
    {.w_px = 16,	.glyph_index = 910392},/*(檗)*/
    {.w_px = 16,	.glyph_index = 910560},/*(檫)*/
    {.w_px = 16,	.glyph_index = 910728},/*(猷)*/
    {.w_px = 16,	.glyph_index = 910896},/*(獒)*/
    {.w_px = 16,	.glyph_index = 911064},/*(殁)*/
    {.w_px = 16,	.glyph_index = 911232},/*(殂)*/
    {.w_px = 16,	.glyph_index = 911400},/*(殇)*/
    {.w_px = 16,	.glyph_index = 911568},/*(殄)*/
    {.w_px = 16,	.glyph_index = 911736},/*(殒)*/
    {.w_px = 16,	.glyph_index = 911904},/*(殓)*/
    {.w_px = 16,	.glyph_index = 912072},/*(殍)*/
    {.w_px = 16,	.glyph_index = 912240},/*(殚)*/
    {.w_px = 16,	.glyph_index = 912408},/*(殛)*/
    {.w_px = 16,	.glyph_index = 912576},/*(殡)*/
    {.w_px = 16,	.glyph_index = 912744},/*(殪)*/
    {.w_px = 16,	.glyph_index = 912912},/*(轫)*/
    {.w_px = 16,	.glyph_index = 913080},/*(轭)*/
    {.w_px = 16,	.glyph_index = 913248},/*(轱)*/
    {.w_px = 16,	.glyph_index = 913416},/*(轲)*/
    {.w_px = 16,	.glyph_index = 913584},/*(轳)*/
    {.w_px = 16,	.glyph_index = 913752},/*(轵)*/
    {.w_px = 16,	.glyph_index = 913920},/*(轶)*/
    {.w_px = 16,	.glyph_index = 914088},/*(轸)*/
    {.w_px = 16,	.glyph_index = 914256},/*(轷)*/
    {.w_px = 16,	.glyph_index = 914424},/*(轹)*/
    {.w_px = 16,	.glyph_index = 914592},/*(轺)*/
    {.w_px = 16,	.glyph_index = 914760},/*(轼)*/
    {.w_px = 16,	.glyph_index = 914928},/*(轾)*/
    {.w_px = 16,	.glyph_index = 915096},/*(辁)*/
    {.w_px = 16,	.glyph_index = 915264},/*(辂)*/
    {.w_px = 16,	.glyph_index = 915432},/*(辄)*/
    {.w_px = 16,	.glyph_index = 915600},/*(辇)*/
    {.w_px = 16,	.glyph_index = 915768},/*(辋)*/
    {.w_px = 16,	.glyph_index = 915936},/*(辍)*/
    {.w_px = 16,	.glyph_index = 916104},/*(辎)*/
    {.w_px = 16,	.glyph_index = 916272},/*(辏)*/
    {.w_px = 16,	.glyph_index = 916440},/*(辘)*/
    {.w_px = 16,	.glyph_index = 916608},/*(辚)*/
    {.w_px = 16,	.glyph_index = 916776},/*(軎)*/
    {.w_px = 16,	.glyph_index = 916944},/*(戋)*/
    {.w_px = 16,	.glyph_index = 917112},/*(戗)*/
    {.w_px = 16,	.glyph_index = 917280},/*(戛)*/
    {.w_px = 16,	.glyph_index = 917448},/*(戟)*/
    {.w_px = 16,	.glyph_index = 917616},/*(戢)*/
    {.w_px = 16,	.glyph_index = 917784},/*(戡)*/
    {.w_px = 16,	.glyph_index = 917952},/*(戥)*/
    {.w_px = 16,	.glyph_index = 918120},/*(戤)*/
    {.w_px = 16,	.glyph_index = 918288},/*(戬)*/
    {.w_px = 16,	.glyph_index = 918456},/*(臧)*/
    {.w_px = 16,	.glyph_index = 918624},/*(瓯)*/
    {.w_px = 16,	.glyph_index = 918792},/*(瓴)*/
    {.w_px = 16,	.glyph_index = 918960},/*(瓿)*/
    {.w_px = 16,	.glyph_index = 919128},/*(甏)*/
    {.w_px = 16,	.glyph_index = 919296},/*(甑)*/
    {.w_px = 16,	.glyph_index = 919464},/*(甓)*/
    {.w_px = 16,	.glyph_index = 919632},/*(攴)*/
    {.w_px = 16,	.glyph_index = 919800},/*(旮)*/
    {.w_px = 16,	.glyph_index = 919968},/*(旯)*/
    {.w_px = 16,	.glyph_index = 920136},/*(旰)*/
    {.w_px = 16,	.glyph_index = 920304},/*(昊)*/
    {.w_px = 16,	.glyph_index = 920472},/*(昙)*/
    {.w_px = 16,	.glyph_index = 920640},/*(杲)*/
    {.w_px = 16,	.glyph_index = 920808},/*(昃)*/
    {.w_px = 16,	.glyph_index = 920976},/*(昕)*/
    {.w_px = 16,	.glyph_index = 921144},/*(昀)*/
    {.w_px = 16,	.glyph_index = 921312},/*(炅)*/
    {.w_px = 16,	.glyph_index = 921480},/*(曷)*/
    {.w_px = 16,	.glyph_index = 921648},/*(昝)*/
    {.w_px = 16,	.glyph_index = 921816},/*(昴)*/
    {.w_px = 16,	.glyph_index = 921984},/*(昱)*/
    {.w_px = 16,	.glyph_index = 922152},/*(昶)*/
    {.w_px = 16,	.glyph_index = 922320},/*(昵)*/
    {.w_px = 16,	.glyph_index = 922488},/*(耆)*/
    {.w_px = 16,	.glyph_index = 922656},/*(晟)*/
    {.w_px = 16,	.glyph_index = 922824},/*(晔)*/
    {.w_px = 16,	.glyph_index = 922992},/*(晁)*/
    {.w_px = 16,	.glyph_index = 923160},/*(晏)*/
    {.w_px = 16,	.glyph_index = 923328},/*(晖)*/
    {.w_px = 16,	.glyph_index = 923496},/*(晡)*/
    {.w_px = 16,	.glyph_index = 923664},/*(晗)*/
    {.w_px = 16,	.glyph_index = 923832},/*(晷)*/
    {.w_px = 16,	.glyph_index = 924000},/*(暄)*/
    {.w_px = 16,	.glyph_index = 924168},/*(暌)*/
    {.w_px = 16,	.glyph_index = 924336},/*(暧)*/
    {.w_px = 16,	.glyph_index = 924504},/*(暝)*/
    {.w_px = 16,	.glyph_index = 924672},/*(暾)*/
    {.w_px = 16,	.glyph_index = 924840},/*(曛)*/
    {.w_px = 16,	.glyph_index = 925008},/*(曜)*/
    {.w_px = 16,	.glyph_index = 925176},/*(曦)*/
    {.w_px = 16,	.glyph_index = 925344},/*(曩)*/
    {.w_px = 16,	.glyph_index = 925512},/*(贲)*/
    {.w_px = 16,	.glyph_index = 925680},/*(贳)*/
    {.w_px = 16,	.glyph_index = 925848},/*(贶)*/
    {.w_px = 16,	.glyph_index = 926016},/*(贻)*/
    {.w_px = 16,	.glyph_index = 926184},/*(贽)*/
    {.w_px = 16,	.glyph_index = 926352},/*(赀)*/
    {.w_px = 16,	.glyph_index = 926520},/*(赅)*/
    {.w_px = 16,	.glyph_index = 926688},/*(赆)*/
    {.w_px = 16,	.glyph_index = 926856},/*(赈)*/
    {.w_px = 16,	.glyph_index = 927024},/*(赉)*/
    {.w_px = 16,	.glyph_index = 927192},/*(赇)*/
    {.w_px = 16,	.glyph_index = 927360},/*(赍)*/
    {.w_px = 16,	.glyph_index = 927528},/*(赕)*/
    {.w_px = 16,	.glyph_index = 927696},/*(赙)*/
    {.w_px = 16,	.glyph_index = 927864},/*(觇)*/
    {.w_px = 16,	.glyph_index = 928032},/*(觊)*/
    {.w_px = 16,	.glyph_index = 928200},/*(觋)*/
    {.w_px = 16,	.glyph_index = 928368},/*(觌)*/
    {.w_px = 16,	.glyph_index = 928536},/*(觎)*/
    {.w_px = 16,	.glyph_index = 928704},/*(觏)*/
    {.w_px = 16,	.glyph_index = 928872},/*(觐)*/
    {.w_px = 16,	.glyph_index = 929040},/*(觑)*/
    {.w_px = 16,	.glyph_index = 929208},/*(牮)*/
    {.w_px = 16,	.glyph_index = 929376},/*(犟)*/
    {.w_px = 16,	.glyph_index = 929544},/*(牝)*/
    {.w_px = 16,	.glyph_index = 929712},/*(牦)*/
    {.w_px = 16,	.glyph_index = 929880},/*(牯)*/
    {.w_px = 16,	.glyph_index = 930048},/*(牾)*/
    {.w_px = 16,	.glyph_index = 930216},/*(牿)*/
    {.w_px = 16,	.glyph_index = 930384},/*(犄)*/
    {.w_px = 16,	.glyph_index = 930552},/*(犋)*/
    {.w_px = 16,	.glyph_index = 930720},/*(犍)*/
    {.w_px = 16,	.glyph_index = 930888},/*(犏)*/
    {.w_px = 16,	.glyph_index = 931056},/*(犒)*/
    {.w_px = 16,	.glyph_index = 931224},/*(挈)*/
    {.w_px = 16,	.glyph_index = 931392},/*(挲)*/
    {.w_px = 16,	.glyph_index = 931560},/*(掰)*/
    {.w_px = 16,	.glyph_index = 931728},/*(搿)*/
    {.w_px = 16,	.glyph_index = 931896},/*(擘)*/
    {.w_px = 16,	.glyph_index = 932064},/*(耄)*/
    {.w_px = 16,	.glyph_index = 932232},/*(毪)*/
    {.w_px = 16,	.glyph_index = 932400},/*(毳)*/
    {.w_px = 16,	.glyph_index = 932568},/*(毽)*/
    {.w_px = 16,	.glyph_index = 932736},/*(毵)*/
    {.w_px = 16,	.glyph_index = 932904},/*(毹)*/
    {.w_px = 16,	.glyph_index = 933072},/*(氅)*/
    {.w_px = 16,	.glyph_index = 933240},/*(氇)*/
    {.w_px = 16,	.glyph_index = 933408},/*(氆)*/
    {.w_px = 16,	.glyph_index = 933576},/*(氍)*/
    {.w_px = 16,	.glyph_index = 933744},/*(氕)*/
    {.w_px = 16,	.glyph_index = 933912},/*(氘)*/
    {.w_px = 16,	.glyph_index = 934080},/*(氙)*/
    {.w_px = 16,	.glyph_index = 934248},/*(氚)*/
    {.w_px = 16,	.glyph_index = 934416},/*(氡)*/
    {.w_px = 16,	.glyph_index = 934584},/*(氩)*/
    {.w_px = 16,	.glyph_index = 934752},/*(氤)*/
    {.w_px = 16,	.glyph_index = 934920},/*(氪)*/
    {.w_px = 16,	.glyph_index = 935088},/*(氲)*/
    {.w_px = 16,	.glyph_index = 935256},/*(攵)*/
    {.w_px = 16,	.glyph_index = 935424},/*(敕)*/
    {.w_px = 16,	.glyph_index = 935592},/*(敫)*/
    {.w_px = 16,	.glyph_index = 935760},/*(牍)*/
    {.w_px = 16,	.glyph_index = 935928},/*(牒)*/
    {.w_px = 16,	.glyph_index = 936096},/*(牖)*/
    {.w_px = 16,	.glyph_index = 936264},/*(爰)*/
    {.w_px = 16,	.glyph_index = 936432},/*(虢)*/
    {.w_px = 16,	.glyph_index = 936600},/*(刖)*/
    {.w_px = 16,	.glyph_index = 936768},/*(肟)*/
    {.w_px = 16,	.glyph_index = 936936},/*(肜)*/
    {.w_px = 16,	.glyph_index = 937104},/*(肓)*/
    {.w_px = 16,	.glyph_index = 937272},/*(肼)*/
    {.w_px = 16,	.glyph_index = 937440},/*(朊)*/
    {.w_px = 16,	.glyph_index = 937608},/*(肽)*/
    {.w_px = 16,	.glyph_index = 937776},/*(肱)*/
    {.w_px = 16,	.glyph_index = 937944},/*(肫)*/
    {.w_px = 16,	.glyph_index = 938112},/*(肭)*/
    {.w_px = 16,	.glyph_index = 938280},/*(肴)*/
    {.w_px = 16,	.glyph_index = 938448},/*(肷)*/
    {.w_px = 16,	.glyph_index = 938616},/*(胧)*/
    {.w_px = 16,	.glyph_index = 938784},/*(胨)*/
    {.w_px = 16,	.glyph_index = 938952},/*(胩)*/
    {.w_px = 16,	.glyph_index = 939120},/*(胪)*/
    {.w_px = 16,	.glyph_index = 939288},/*(胛)*/
    {.w_px = 16,	.glyph_index = 939456},/*(胂)*/
    {.w_px = 16,	.glyph_index = 939624},/*(胄)*/
    {.w_px = 16,	.glyph_index = 939792},/*(胙)*/
    {.w_px = 16,	.glyph_index = 939960},/*(胍)*/
    {.w_px = 16,	.glyph_index = 940128},/*(胗)*/
    {.w_px = 16,	.glyph_index = 940296},/*(朐)*/
    {.w_px = 16,	.glyph_index = 940464},/*(胝)*/
    {.w_px = 16,	.glyph_index = 940632},/*(胫)*/
    {.w_px = 16,	.glyph_index = 940800},/*(胱)*/
    {.w_px = 16,	.glyph_index = 940968},/*(胴)*/
    {.w_px = 16,	.glyph_index = 941136},/*(胭)*/
    {.w_px = 16,	.glyph_index = 941304},/*(脍)*/
    {.w_px = 16,	.glyph_index = 941472},/*(脎)*/
    {.w_px = 16,	.glyph_index = 941640},/*(胲)*/
    {.w_px = 16,	.glyph_index = 941808},/*(胼)*/
    {.w_px = 16,	.glyph_index = 941976},/*(朕)*/
    {.w_px = 16,	.glyph_index = 942144},/*(脒)*/
    {.w_px = 16,	.glyph_index = 942312},/*(豚)*/
    {.w_px = 16,	.glyph_index = 942480},/*(脶)*/
    {.w_px = 16,	.glyph_index = 942648},/*(脞)*/
    {.w_px = 16,	.glyph_index = 942816},/*(脬)*/
    {.w_px = 16,	.glyph_index = 942984},/*(脘)*/
    {.w_px = 16,	.glyph_index = 943152},/*(脲)*/
    {.w_px = 16,	.glyph_index = 943320},/*(腈)*/
    {.w_px = 16,	.glyph_index = 943488},/*(腌)*/
    {.w_px = 16,	.glyph_index = 943656},/*(腓)*/
    {.w_px = 16,	.glyph_index = 943824},/*(腴)*/
    {.w_px = 16,	.glyph_index = 943992},/*(腙)*/
    {.w_px = 16,	.glyph_index = 944160},/*(腚)*/
    {.w_px = 16,	.glyph_index = 944328},/*(腱)*/
    {.w_px = 16,	.glyph_index = 944496},/*(腠)*/
    {.w_px = 16,	.glyph_index = 944664},/*(腩)*/
    {.w_px = 16,	.glyph_index = 944832},/*(腼)*/
    {.w_px = 16,	.glyph_index = 945000},/*(腽)*/
    {.w_px = 16,	.glyph_index = 945168},/*(腭)*/
    {.w_px = 16,	.glyph_index = 945336},/*(腧)*/
    {.w_px = 16,	.glyph_index = 945504},/*(塍)*/
    {.w_px = 16,	.glyph_index = 945672},/*(媵)*/
    {.w_px = 16,	.glyph_index = 945840},/*(膈)*/
    {.w_px = 16,	.glyph_index = 946008},/*(膂)*/
    {.w_px = 16,	.glyph_index = 946176},/*(膑)*/
    {.w_px = 16,	.glyph_index = 946344},/*(滕)*/
    {.w_px = 16,	.glyph_index = 946512},/*(膣)*/
    {.w_px = 16,	.glyph_index = 946680},/*(膪)*/
    {.w_px = 16,	.glyph_index = 946848},/*(臌)*/
    {.w_px = 16,	.glyph_index = 947016},/*(朦)*/
    {.w_px = 16,	.glyph_index = 947184},/*(臊)*/
    {.w_px = 16,	.glyph_index = 947352},/*(膻)*/
    {.w_px = 16,	.glyph_index = 947520},/*(臁)*/
    {.w_px = 16,	.glyph_index = 947688},/*(膦)*/
    {.w_px = 16,	.glyph_index = 947856},/*(欤)*/
    {.w_px = 16,	.glyph_index = 948024},/*(欷)*/
    {.w_px = 16,	.glyph_index = 948192},/*(欹)*/
    {.w_px = 16,	.glyph_index = 948360},/*(歃)*/
    {.w_px = 16,	.glyph_index = 948528},/*(歆)*/
    {.w_px = 16,	.glyph_index = 948696},/*(歙)*/
    {.w_px = 16,	.glyph_index = 948864},/*(飑)*/
    {.w_px = 16,	.glyph_index = 949032},/*(飒)*/
    {.w_px = 16,	.glyph_index = 949200},/*(飓)*/
    {.w_px = 16,	.glyph_index = 949368},/*(飕)*/
    {.w_px = 16,	.glyph_index = 949536},/*(飙)*/
    {.w_px = 16,	.glyph_index = 949704},/*(飚)*/
    {.w_px = 16,	.glyph_index = 949872},/*(殳)*/
    {.w_px = 16,	.glyph_index = 950040},/*(彀)*/
    {.w_px = 16,	.glyph_index = 950208},/*(毂)*/
    {.w_px = 16,	.glyph_index = 950376},/*(觳)*/
    {.w_px = 16,	.glyph_index = 950544},/*(斐)*/
    {.w_px = 16,	.glyph_index = 950712},/*(齑)*/
    {.w_px = 16,	.glyph_index = 950880},/*(斓)*/
    {.w_px = 16,	.glyph_index = 951048},/*(於)*/
    {.w_px = 16,	.glyph_index = 951216},/*(旆)*/
    {.w_px = 16,	.glyph_index = 951384},/*(旄)*/
    {.w_px = 16,	.glyph_index = 951552},/*(旃)*/
    {.w_px = 16,	.glyph_index = 951720},/*(旌)*/
    {.w_px = 16,	.glyph_index = 951888},/*(旎)*/
    {.w_px = 16,	.glyph_index = 952056},/*(旒)*/
    {.w_px = 16,	.glyph_index = 952224},/*(旖)*/
    {.w_px = 16,	.glyph_index = 952392},/*(炀)*/
    {.w_px = 16,	.glyph_index = 952560},/*(炜)*/
    {.w_px = 16,	.glyph_index = 952728},/*(炖)*/
    {.w_px = 16,	.glyph_index = 952896},/*(炝)*/
    {.w_px = 16,	.glyph_index = 953064},/*(炻)*/
    {.w_px = 16,	.glyph_index = 953232},/*(烀)*/
    {.w_px = 16,	.glyph_index = 953400},/*(炷)*/
    {.w_px = 16,	.glyph_index = 953568},/*(炫)*/
    {.w_px = 16,	.glyph_index = 953736},/*(炱)*/
    {.w_px = 16,	.glyph_index = 953904},/*(烨)*/
    {.w_px = 16,	.glyph_index = 954072},/*(烊)*/
    {.w_px = 16,	.glyph_index = 954240},/*(焐)*/
    {.w_px = 16,	.glyph_index = 954408},/*(焓)*/
    {.w_px = 16,	.glyph_index = 954576},/*(焖)*/
    {.w_px = 16,	.glyph_index = 954744},/*(焯)*/
    {.w_px = 16,	.glyph_index = 954912},/*(焱)*/
    {.w_px = 16,	.glyph_index = 955080},/*(煳)*/
    {.w_px = 16,	.glyph_index = 955248},/*(煜)*/
    {.w_px = 16,	.glyph_index = 955416},/*(煨)*/
    {.w_px = 16,	.glyph_index = 955584},/*(煅)*/
    {.w_px = 16,	.glyph_index = 955752},/*(煲)*/
    {.w_px = 16,	.glyph_index = 955920},/*(煊)*/
    {.w_px = 16,	.glyph_index = 956088},/*(煸)*/
    {.w_px = 16,	.glyph_index = 956256},/*(煺)*/
    {.w_px = 16,	.glyph_index = 956424},/*(熘)*/
    {.w_px = 16,	.glyph_index = 956592},/*(熳)*/
    {.w_px = 16,	.glyph_index = 956760},/*(熵)*/
    {.w_px = 16,	.glyph_index = 956928},/*(熨)*/
    {.w_px = 16,	.glyph_index = 957096},/*(熠)*/
    {.w_px = 16,	.glyph_index = 957264},/*(燠)*/
    {.w_px = 16,	.glyph_index = 957432},/*(燔)*/
    {.w_px = 16,	.glyph_index = 957600},/*(燧)*/
    {.w_px = 16,	.glyph_index = 957768},/*(燹)*/
    {.w_px = 16,	.glyph_index = 957936},/*(爝)*/
    {.w_px = 16,	.glyph_index = 958104},/*(爨)*/
    {.w_px = 16,	.glyph_index = 958272},/*(灬)*/
    {.w_px = 16,	.glyph_index = 958440},/*(焘)*/
    {.w_px = 16,	.glyph_index = 958608},/*(煦)*/
    {.w_px = 16,	.glyph_index = 958776},/*(熹)*/
    {.w_px = 16,	.glyph_index = 958944},/*(戾)*/
    {.w_px = 16,	.glyph_index = 959112},/*(戽)*/
    {.w_px = 16,	.glyph_index = 959280},/*(扃)*/
    {.w_px = 16,	.glyph_index = 959448},/*(扈)*/
    {.w_px = 16,	.glyph_index = 959616},/*(扉)*/
    {.w_px = 16,	.glyph_index = 959784},/*(礻)*/
    {.w_px = 16,	.glyph_index = 959952},/*(祀)*/
    {.w_px = 16,	.glyph_index = 960120},/*(祆)*/
    {.w_px = 16,	.glyph_index = 960288},/*(祉)*/
    {.w_px = 16,	.glyph_index = 960456},/*(祛)*/
    {.w_px = 16,	.glyph_index = 960624},/*(祜)*/
    {.w_px = 16,	.glyph_index = 960792},/*(祓)*/
    {.w_px = 16,	.glyph_index = 960960},/*(祚)*/
    {.w_px = 16,	.glyph_index = 961128},/*(祢)*/
    {.w_px = 16,	.glyph_index = 961296},/*(祗)*/
    {.w_px = 16,	.glyph_index = 961464},/*(祠)*/
    {.w_px = 16,	.glyph_index = 961632},/*(祯)*/
    {.w_px = 16,	.glyph_index = 961800},/*(祧)*/
    {.w_px = 16,	.glyph_index = 961968},/*(祺)*/
    {.w_px = 16,	.glyph_index = 962136},/*(禅)*/
    {.w_px = 16,	.glyph_index = 962304},/*(禊)*/
    {.w_px = 16,	.glyph_index = 962472},/*(禚)*/
    {.w_px = 16,	.glyph_index = 962640},/*(禧)*/
    {.w_px = 16,	.glyph_index = 962808},/*(禳)*/
    {.w_px = 16,	.glyph_index = 962976},/*(忑)*/
    {.w_px = 16,	.glyph_index = 963144},/*(忐)*/
    {.w_px = 16,	.glyph_index = 963312},/*(怼)*/
    {.w_px = 16,	.glyph_index = 963480},/*(恝)*/
    {.w_px = 16,	.glyph_index = 963648},/*(恚)*/
    {.w_px = 16,	.glyph_index = 963816},/*(恧)*/
    {.w_px = 16,	.glyph_index = 963984},/*(恁)*/
    {.w_px = 16,	.glyph_index = 964152},/*(恙)*/
    {.w_px = 16,	.glyph_index = 964320},/*(恣)*/
    {.w_px = 16,	.glyph_index = 964488},/*(悫)*/
    {.w_px = 16,	.glyph_index = 964656},/*(愆)*/
    {.w_px = 16,	.glyph_index = 964824},/*(愍)*/
    {.w_px = 16,	.glyph_index = 964992},/*(慝)*/
    {.w_px = 16,	.glyph_index = 965160},/*(憩)*/
    {.w_px = 16,	.glyph_index = 965328},/*(憝)*/
    {.w_px = 16,	.glyph_index = 965496},/*(懋)*/
    {.w_px = 16,	.glyph_index = 965664},/*(懑)*/
    {.w_px = 16,	.glyph_index = 965832},/*(戆)*/
    {.w_px = 16,	.glyph_index = 966000},/*(肀)*/
    {.w_px = 16,	.glyph_index = 966168},/*(聿)*/
    {.w_px = 16,	.glyph_index = 966336},/*(沓)*/
    {.w_px = 16,	.glyph_index = 966504},/*(泶)*/
    {.w_px = 16,	.glyph_index = 966672},/*(淼)*/
    {.w_px = 16,	.glyph_index = 966840},/*(矶)*/
    {.w_px = 16,	.glyph_index = 967008},/*(矸)*/
    {.w_px = 16,	.glyph_index = 967176},/*(砀)*/
    {.w_px = 16,	.glyph_index = 967344},/*(砉)*/
    {.w_px = 16,	.glyph_index = 967512},/*(砗)*/
    {.w_px = 16,	.glyph_index = 967680},/*(砘)*/
    {.w_px = 16,	.glyph_index = 967848},/*(砑)*/
    {.w_px = 16,	.glyph_index = 968016},/*(斫)*/
    {.w_px = 16,	.glyph_index = 968184},/*(砭)*/
    {.w_px = 16,	.glyph_index = 968352},/*(砜)*/
    {.w_px = 16,	.glyph_index = 968520},/*(砝)*/
    {.w_px = 16,	.glyph_index = 968688},/*(砹)*/
    {.w_px = 16,	.glyph_index = 968856},/*(砺)*/
    {.w_px = 16,	.glyph_index = 969024},/*(砻)*/
    {.w_px = 16,	.glyph_index = 969192},/*(砟)*/
    {.w_px = 16,	.glyph_index = 969360},/*(砼)*/
    {.w_px = 16,	.glyph_index = 969528},/*(砥)*/
    {.w_px = 16,	.glyph_index = 969696},/*(砬)*/
    {.w_px = 16,	.glyph_index = 969864},/*(砣)*/
    {.w_px = 16,	.glyph_index = 970032},/*(砩)*/
    {.w_px = 16,	.glyph_index = 970200},/*(硎)*/
    {.w_px = 16,	.glyph_index = 970368},/*(硭)*/
    {.w_px = 16,	.glyph_index = 970536},/*(硖)*/
    {.w_px = 16,	.glyph_index = 970704},/*(硗)*/
    {.w_px = 16,	.glyph_index = 970872},/*(砦)*/
    {.w_px = 16,	.glyph_index = 971040},/*(硐)*/
    {.w_px = 16,	.glyph_index = 971208},/*(硇)*/
    {.w_px = 16,	.glyph_index = 971376},/*(硌)*/
    {.w_px = 16,	.glyph_index = 971544},/*(硪)*/
    {.w_px = 16,	.glyph_index = 971712},/*(碛)*/
    {.w_px = 16,	.glyph_index = 971880},/*(碓)*/
    {.w_px = 16,	.glyph_index = 972048},/*(碚)*/
    {.w_px = 16,	.glyph_index = 972216},/*(碇)*/
    {.w_px = 16,	.glyph_index = 972384},/*(碜)*/
    {.w_px = 16,	.glyph_index = 972552},/*(碡)*/
    {.w_px = 16,	.glyph_index = 972720},/*(碣)*/
    {.w_px = 16,	.glyph_index = 972888},/*(碲)*/
    {.w_px = 16,	.glyph_index = 973056},/*(碹)*/
    {.w_px = 16,	.glyph_index = 973224},/*(碥)*/
    {.w_px = 16,	.glyph_index = 973392},/*(磔)*/
    {.w_px = 16,	.glyph_index = 973560},/*(磙)*/
    {.w_px = 16,	.glyph_index = 973728},/*(磉)*/
    {.w_px = 16,	.glyph_index = 973896},/*(磬)*/
    {.w_px = 16,	.glyph_index = 974064},/*(磲)*/
    {.w_px = 16,	.glyph_index = 974232},/*(礅)*/
    {.w_px = 16,	.glyph_index = 974400},/*(磴)*/
    {.w_px = 16,	.glyph_index = 974568},/*(礓)*/
    {.w_px = 16,	.glyph_index = 974736},/*(礤)*/
    {.w_px = 16,	.glyph_index = 974904},/*(礞)*/
    {.w_px = 16,	.glyph_index = 975072},/*(礴)*/
    {.w_px = 16,	.glyph_index = 975240},/*(龛)*/
    {.w_px = 16,	.glyph_index = 975408},/*(黹)*/
    {.w_px = 16,	.glyph_index = 975576},/*(黻)*/
    {.w_px = 16,	.glyph_index = 975744},/*(黼)*/
    {.w_px = 16,	.glyph_index = 975912},/*(盱)*/
    {.w_px = 16,	.glyph_index = 976080},/*(眄)*/
    {.w_px = 16,	.glyph_index = 976248},/*(眍)*/
    {.w_px = 16,	.glyph_index = 976416},/*(盹)*/
    {.w_px = 16,	.glyph_index = 976584},/*(眇)*/
    {.w_px = 16,	.glyph_index = 976752},/*(眈)*/
    {.w_px = 16,	.glyph_index = 976920},/*(眚)*/
    {.w_px = 16,	.glyph_index = 977088},/*(眢)*/
    {.w_px = 16,	.glyph_index = 977256},/*(眙)*/
    {.w_px = 16,	.glyph_index = 977424},/*(眭)*/
    {.w_px = 16,	.glyph_index = 977592},/*(眦)*/
    {.w_px = 16,	.glyph_index = 977760},/*(眵)*/
    {.w_px = 16,	.glyph_index = 977928},/*(眸)*/
    {.w_px = 16,	.glyph_index = 978096},/*(睐)*/
    {.w_px = 16,	.glyph_index = 978264},/*(睑)*/
    {.w_px = 16,	.glyph_index = 978432},/*(睇)*/
    {.w_px = 16,	.glyph_index = 978600},/*(睃)*/
    {.w_px = 16,	.glyph_index = 978768},/*(睚)*/
    {.w_px = 16,	.glyph_index = 978936},/*(睨)*/
    {.w_px = 16,	.glyph_index = 979104},/*(睢)*/
    {.w_px = 16,	.glyph_index = 979272},/*(睥)*/
    {.w_px = 16,	.glyph_index = 979440},/*(睿)*/
    {.w_px = 16,	.glyph_index = 979608},/*(瞍)*/
    {.w_px = 16,	.glyph_index = 979776},/*(睽)*/
    {.w_px = 16,	.glyph_index = 979944},/*(瞀)*/
    {.w_px = 16,	.glyph_index = 980112},/*(瞌)*/
    {.w_px = 16,	.glyph_index = 980280},/*(瞑)*/
    {.w_px = 16,	.glyph_index = 980448},/*(瞟)*/
    {.w_px = 16,	.glyph_index = 980616},/*(瞠)*/
    {.w_px = 16,	.glyph_index = 980784},/*(瞰)*/
    {.w_px = 16,	.glyph_index = 980952},/*(瞵)*/
    {.w_px = 16,	.glyph_index = 981120},/*(瞽)*/
    {.w_px = 16,	.glyph_index = 981288},/*(町)*/
    {.w_px = 16,	.glyph_index = 981456},/*(畀)*/
    {.w_px = 16,	.glyph_index = 981624},/*(畎)*/
    {.w_px = 16,	.glyph_index = 981792},/*(畋)*/
    {.w_px = 16,	.glyph_index = 981960},/*(畈)*/
    {.w_px = 16,	.glyph_index = 982128},/*(畛)*/
    {.w_px = 16,	.glyph_index = 982296},/*(畲)*/
    {.w_px = 16,	.glyph_index = 982464},/*(畹)*/
    {.w_px = 16,	.glyph_index = 982632},/*(疃)*/
    {.w_px = 16,	.glyph_index = 982800},/*(罘)*/
    {.w_px = 16,	.glyph_index = 982968},/*(罡)*/
    {.w_px = 16,	.glyph_index = 983136},/*(罟)*/
    {.w_px = 16,	.glyph_index = 983304},/*(詈)*/
    {.w_px = 16,	.glyph_index = 983472},/*(罨)*/
    {.w_px = 16,	.glyph_index = 983640},/*(罴)*/
    {.w_px = 16,	.glyph_index = 983808},/*(罱)*/
    {.w_px = 16,	.glyph_index = 983976},/*(罹)*/
    {.w_px = 16,	.glyph_index = 984144},/*(羁)*/
    {.w_px = 16,	.glyph_index = 984312},/*(罾)*/
    {.w_px = 16,	.glyph_index = 984480},/*(盍)*/
    {.w_px = 16,	.glyph_index = 984648},/*(盥)*/
    {.w_px = 16,	.glyph_index = 984816},/*(蠲)*/
    {.w_px = 16,	.glyph_index = 984984},/*(钅)*/
    {.w_px = 16,	.glyph_index = 985152},/*(钆)*/
    {.w_px = 16,	.glyph_index = 985320},/*(钇)*/
    {.w_px = 16,	.glyph_index = 985488},/*(钋)*/
    {.w_px = 16,	.glyph_index = 985656},/*(钊)*/
    {.w_px = 16,	.glyph_index = 985824},/*(钌)*/
    {.w_px = 16,	.glyph_index = 985992},/*(钍)*/
    {.w_px = 16,	.glyph_index = 986160},/*(钏)*/
    {.w_px = 16,	.glyph_index = 986328},/*(钐)*/
    {.w_px = 16,	.glyph_index = 986496},/*(钔)*/
    {.w_px = 16,	.glyph_index = 986664},/*(钗)*/
    {.w_px = 16,	.glyph_index = 986832},/*(钕)*/
    {.w_px = 16,	.glyph_index = 987000},/*(钚)*/
    {.w_px = 16,	.glyph_index = 987168},/*(钛)*/
    {.w_px = 16,	.glyph_index = 987336},/*(钜)*/
    {.w_px = 16,	.glyph_index = 987504},/*(钣)*/
    {.w_px = 16,	.glyph_index = 987672},/*(钤)*/
    {.w_px = 16,	.glyph_index = 987840},/*(钫)*/
    {.w_px = 16,	.glyph_index = 988008},/*(钪)*/
    {.w_px = 16,	.glyph_index = 988176},/*(钭)*/
    {.w_px = 16,	.glyph_index = 988344},/*(钬)*/
    {.w_px = 16,	.glyph_index = 988512},/*(钯)*/
    {.w_px = 16,	.glyph_index = 988680},/*(钰)*/
    {.w_px = 16,	.glyph_index = 988848},/*(钲)*/
    {.w_px = 16,	.glyph_index = 989016},/*(钴)*/
    {.w_px = 16,	.glyph_index = 989184},/*(钶)*/
    {.w_px = 16,	.glyph_index = 989352},/*(钷)*/
    {.w_px = 16,	.glyph_index = 989520},/*(钸)*/
    {.w_px = 16,	.glyph_index = 989688},/*(钹)*/
    {.w_px = 16,	.glyph_index = 989856},/*(钺)*/
    {.w_px = 16,	.glyph_index = 990024},/*(钼)*/
    {.w_px = 16,	.glyph_index = 990192},/*(钽)*/
    {.w_px = 16,	.glyph_index = 990360},/*(钿)*/
    {.w_px = 16,	.glyph_index = 990528},/*(铄)*/
    {.w_px = 16,	.glyph_index = 990696},/*(铈)*/
    {.w_px = 16,	.glyph_index = 990864},/*(铉)*/
    {.w_px = 16,	.glyph_index = 991032},/*(铊)*/
    {.w_px = 16,	.glyph_index = 991200},/*(铋)*/
    {.w_px = 16,	.glyph_index = 991368},/*(铌)*/
    {.w_px = 16,	.glyph_index = 991536},/*(铍)*/
    {.w_px = 16,	.glyph_index = 991704},/*(铎)*/
    {.w_px = 16,	.glyph_index = 991872},/*(铐)*/
    {.w_px = 16,	.glyph_index = 992040},/*(铑)*/
    {.w_px = 16,	.glyph_index = 992208},/*(铒)*/
    {.w_px = 16,	.glyph_index = 992376},/*(铕)*/
    {.w_px = 16,	.glyph_index = 992544},/*(铖)*/
    {.w_px = 16,	.glyph_index = 992712},/*(铗)*/
    {.w_px = 16,	.glyph_index = 992880},/*(铙)*/
    {.w_px = 16,	.glyph_index = 993048},/*(铘)*/
    {.w_px = 16,	.glyph_index = 993216},/*(铛)*/
    {.w_px = 16,	.glyph_index = 993384},/*(铞)*/
    {.w_px = 16,	.glyph_index = 993552},/*(铟)*/
    {.w_px = 16,	.glyph_index = 993720},/*(铠)*/
    {.w_px = 16,	.glyph_index = 993888},/*(铢)*/
    {.w_px = 16,	.glyph_index = 994056},/*(铤)*/
    {.w_px = 16,	.glyph_index = 994224},/*(铥)*/
    {.w_px = 16,	.glyph_index = 994392},/*(铧)*/
    {.w_px = 16,	.glyph_index = 994560},/*(铨)*/
    {.w_px = 16,	.glyph_index = 994728},/*(铪)*/
    {.w_px = 16,	.glyph_index = 994896},/*(铩)*/
    {.w_px = 16,	.glyph_index = 995064},/*(铫)*/
    {.w_px = 16,	.glyph_index = 995232},/*(铮)*/
    {.w_px = 16,	.glyph_index = 995400},/*(铯)*/
    {.w_px = 16,	.glyph_index = 995568},/*(铳)*/
    {.w_px = 16,	.glyph_index = 995736},/*(铴)*/
    {.w_px = 16,	.glyph_index = 995904},/*(铵)*/
    {.w_px = 16,	.glyph_index = 996072},/*(铷)*/
    {.w_px = 16,	.glyph_index = 996240},/*(铹)*/
    {.w_px = 16,	.glyph_index = 996408},/*(铼)*/
    {.w_px = 16,	.glyph_index = 996576},/*(铽)*/
    {.w_px = 16,	.glyph_index = 996744},/*(铿)*/
    {.w_px = 16,	.glyph_index = 996912},/*(锃)*/
    {.w_px = 16,	.glyph_index = 997080},/*(锂)*/
    {.w_px = 16,	.glyph_index = 997248},/*(锆)*/
    {.w_px = 16,	.glyph_index = 997416},/*(锇)*/
    {.w_px = 16,	.glyph_index = 997584},/*(锉)*/
    {.w_px = 16,	.glyph_index = 997752},/*(锊)*/
    {.w_px = 16,	.glyph_index = 997920},/*(锍)*/
    {.w_px = 16,	.glyph_index = 998088},/*(锎)*/
    {.w_px = 16,	.glyph_index = 998256},/*(锏)*/
    {.w_px = 16,	.glyph_index = 998424},/*(锒)*/
    {.w_px = 16,	.glyph_index = 998592},/*(锓)*/
    {.w_px = 16,	.glyph_index = 998760},/*(锔)*/
    {.w_px = 16,	.glyph_index = 998928},/*(锕)*/
    {.w_px = 16,	.glyph_index = 999096},/*(锖)*/
    {.w_px = 16,	.glyph_index = 999264},/*(锘)*/
    {.w_px = 16,	.glyph_index = 999432},/*(锛)*/
    {.w_px = 16,	.glyph_index = 999600},/*(锝)*/
    {.w_px = 16,	.glyph_index = 999768},/*(锞)*/
    {.w_px = 16,	.glyph_index = 999936},/*(锟)*/
    {.w_px = 16,	.glyph_index = 1000104},/*(锢)*/
    {.w_px = 16,	.glyph_index = 1000272},/*(锪)*/
    {.w_px = 16,	.glyph_index = 1000440},/*(锫)*/
    {.w_px = 16,	.glyph_index = 1000608},/*(锩)*/
    {.w_px = 16,	.glyph_index = 1000776},/*(锬)*/
    {.w_px = 16,	.glyph_index = 1000944},/*(锱)*/
    {.w_px = 16,	.glyph_index = 1001112},/*(锲)*/
    {.w_px = 16,	.glyph_index = 1001280},/*(锴)*/
    {.w_px = 16,	.glyph_index = 1001448},/*(锶)*/
    {.w_px = 16,	.glyph_index = 1001616},/*(锷)*/
    {.w_px = 16,	.glyph_index = 1001784},/*(锸)*/
    {.w_px = 16,	.glyph_index = 1001952},/*(锼)*/
    {.w_px = 16,	.glyph_index = 1002120},/*(锾)*/
    {.w_px = 16,	.glyph_index = 1002288},/*(锿)*/
    {.w_px = 16,	.glyph_index = 1002456},/*(镂)*/
    {.w_px = 16,	.glyph_index = 1002624},/*(锵)*/
    {.w_px = 16,	.glyph_index = 1002792},/*(镄)*/
    {.w_px = 16,	.glyph_index = 1002960},/*(镅)*/
    {.w_px = 16,	.glyph_index = 1003128},/*(镆)*/
    {.w_px = 16,	.glyph_index = 1003296},/*(镉)*/
    {.w_px = 16,	.glyph_index = 1003464},/*(镌)*/
    {.w_px = 16,	.glyph_index = 1003632},/*(镎)*/
    {.w_px = 16,	.glyph_index = 1003800},/*(镏)*/
    {.w_px = 16,	.glyph_index = 1003968},/*(镒)*/
    {.w_px = 16,	.glyph_index = 1004136},/*(镓)*/
    {.w_px = 16,	.glyph_index = 1004304},/*(镔)*/
    {.w_px = 16,	.glyph_index = 1004472},/*(镖)*/
    {.w_px = 16,	.glyph_index = 1004640},/*(镗)*/
    {.w_px = 16,	.glyph_index = 1004808},/*(镘)*/
    {.w_px = 16,	.glyph_index = 1004976},/*(镙)*/
    {.w_px = 16,	.glyph_index = 1005144},/*(镛)*/
    {.w_px = 16,	.glyph_index = 1005312},/*(镞)*/
    {.w_px = 16,	.glyph_index = 1005480},/*(镟)*/
    {.w_px = 16,	.glyph_index = 1005648},/*(镝)*/
    {.w_px = 16,	.glyph_index = 1005816},/*(镡)*/
    {.w_px = 16,	.glyph_index = 1005984},/*(镢)*/
    {.w_px = 16,	.glyph_index = 1006152},/*(镤)*/
    {.w_px = 16,	.glyph_index = 1006320},/*(镥)*/
    {.w_px = 16,	.glyph_index = 1006488},/*(镦)*/
    {.w_px = 16,	.glyph_index = 1006656},/*(镧)*/
    {.w_px = 16,	.glyph_index = 1006824},/*(镨)*/
    {.w_px = 16,	.glyph_index = 1006992},/*(镩)*/
    {.w_px = 16,	.glyph_index = 1007160},/*(镪)*/
    {.w_px = 16,	.glyph_index = 1007328},/*(镫)*/
    {.w_px = 16,	.glyph_index = 1007496},/*(镬)*/
    {.w_px = 16,	.glyph_index = 1007664},/*(镯)*/
    {.w_px = 16,	.glyph_index = 1007832},/*(镱)*/
    {.w_px = 16,	.glyph_index = 1008000},/*(镲)*/
    {.w_px = 16,	.glyph_index = 1008168},/*(镳)*/
    {.w_px = 16,	.glyph_index = 1008336},/*(锺)*/
    {.w_px = 16,	.glyph_index = 1008504},/*(矧)*/
    {.w_px = 16,	.glyph_index = 1008672},/*(矬)*/
    {.w_px = 16,	.glyph_index = 1008840},/*(雉)*/
    {.w_px = 16,	.glyph_index = 1009008},/*(秕)*/
    {.w_px = 16,	.glyph_index = 1009176},/*(秭)*/
    {.w_px = 16,	.glyph_index = 1009344},/*(秣)*/
    {.w_px = 16,	.glyph_index = 1009512},/*(秫)*/
    {.w_px = 16,	.glyph_index = 1009680},/*(稆)*/
    {.w_px = 16,	.glyph_index = 1009848},/*(嵇)*/
    {.w_px = 16,	.glyph_index = 1010016},/*(稃)*/
    {.w_px = 16,	.glyph_index = 1010184},/*(稂)*/
    {.w_px = 16,	.glyph_index = 1010352},/*(稞)*/
    {.w_px = 16,	.glyph_index = 1010520},/*(稔)*/
    {.w_px = 16,	.glyph_index = 1010688},/*(稹)*/
    {.w_px = 16,	.glyph_index = 1010856},/*(稷)*/
    {.w_px = 16,	.glyph_index = 1011024},/*(穑)*/
    {.w_px = 16,	.glyph_index = 1011192},/*(黏)*/
    {.w_px = 16,	.glyph_index = 1011360},/*(馥)*/
    {.w_px = 16,	.glyph_index = 1011528},/*(穰)*/
    {.w_px = 16,	.glyph_index = 1011696},/*(皈)*/
    {.w_px = 16,	.glyph_index = 1011864},/*(皎)*/
    {.w_px = 16,	.glyph_index = 1012032},/*(皓)*/
    {.w_px = 16,	.glyph_index = 1012200},/*(皙)*/
    {.w_px = 16,	.glyph_index = 1012368},/*(皤)*/
    {.w_px = 16,	.glyph_index = 1012536},/*(瓞)*/
    {.w_px = 16,	.glyph_index = 1012704},/*(瓠)*/
    {.w_px = 16,	.glyph_index = 1012872},/*(甬)*/
    {.w_px = 16,	.glyph_index = 1013040},/*(鸠)*/
    {.w_px = 16,	.glyph_index = 1013208},/*(鸢)*/
    {.w_px = 16,	.glyph_index = 1013376},/*(鸨)*/
    {.w_px = 16,	.glyph_index = 1013544},/*(鸩)*/
    {.w_px = 16,	.glyph_index = 1013712},/*(鸪)*/
    {.w_px = 16,	.glyph_index = 1013880},/*(鸫)*/
    {.w_px = 16,	.glyph_index = 1014048},/*(鸬)*/
    {.w_px = 16,	.glyph_index = 1014216},/*(鸲)*/
    {.w_px = 16,	.glyph_index = 1014384},/*(鸱)*/
    {.w_px = 16,	.glyph_index = 1014552},/*(鸶)*/
    {.w_px = 16,	.glyph_index = 1014720},/*(鸸)*/
    {.w_px = 16,	.glyph_index = 1014888},/*(鸷)*/
    {.w_px = 16,	.glyph_index = 1015056},/*(鸹)*/
    {.w_px = 16,	.glyph_index = 1015224},/*(鸺)*/
    {.w_px = 16,	.glyph_index = 1015392},/*(鸾)*/
    {.w_px = 16,	.glyph_index = 1015560},/*(鹁)*/
    {.w_px = 16,	.glyph_index = 1015728},/*(鹂)*/
    {.w_px = 16,	.glyph_index = 1015896},/*(鹄)*/
    {.w_px = 16,	.glyph_index = 1016064},/*(鹆)*/
    {.w_px = 16,	.glyph_index = 1016232},/*(鹇)*/
    {.w_px = 16,	.glyph_index = 1016400},/*(鹈)*/
    {.w_px = 16,	.glyph_index = 1016568},/*(鹉)*/
    {.w_px = 16,	.glyph_index = 1016736},/*(鹋)*/
    {.w_px = 16,	.glyph_index = 1016904},/*(鹌)*/
    {.w_px = 16,	.glyph_index = 1017072},/*(鹎)*/
    {.w_px = 16,	.glyph_index = 1017240},/*(鹑)*/
    {.w_px = 16,	.glyph_index = 1017408},/*(鹕)*/
    {.w_px = 16,	.glyph_index = 1017576},/*(鹗)*/
    {.w_px = 16,	.glyph_index = 1017744},/*(鹚)*/
    {.w_px = 16,	.glyph_index = 1017912},/*(鹛)*/
    {.w_px = 16,	.glyph_index = 1018080},/*(鹜)*/
    {.w_px = 16,	.glyph_index = 1018248},/*(鹞)*/
    {.w_px = 16,	.glyph_index = 1018416},/*(鹣)*/
    {.w_px = 16,	.glyph_index = 1018584},/*(鹦)*/
    {.w_px = 16,	.glyph_index = 1018752},/*(鹧)*/
    {.w_px = 16,	.glyph_index = 1018920},/*(鹨)*/
    {.w_px = 16,	.glyph_index = 1019088},/*(鹩)*/
    {.w_px = 16,	.glyph_index = 1019256},/*(鹪)*/
    {.w_px = 16,	.glyph_index = 1019424},/*(鹫)*/
    {.w_px = 16,	.glyph_index = 1019592},/*(鹬)*/
    {.w_px = 16,	.glyph_index = 1019760},/*(鹱)*/
    {.w_px = 16,	.glyph_index = 1019928},/*(鹭)*/
    {.w_px = 16,	.glyph_index = 1020096},/*(鹳)*/
    {.w_px = 16,	.glyph_index = 1020264},/*(疒)*/
    {.w_px = 16,	.glyph_index = 1020432},/*(疔)*/
    {.w_px = 16,	.glyph_index = 1020600},/*(疖)*/
    {.w_px = 16,	.glyph_index = 1020768},/*(疠)*/
    {.w_px = 16,	.glyph_index = 1020936},/*(疝)*/
    {.w_px = 16,	.glyph_index = 1021104},/*(疬)*/
    {.w_px = 16,	.glyph_index = 1021272},/*(疣)*/
    {.w_px = 16,	.glyph_index = 1021440},/*(疳)*/
    {.w_px = 16,	.glyph_index = 1021608},/*(疴)*/
    {.w_px = 16,	.glyph_index = 1021776},/*(疸)*/
    {.w_px = 16,	.glyph_index = 1021944},/*(痄)*/
    {.w_px = 16,	.glyph_index = 1022112},/*(疱)*/
    {.w_px = 16,	.glyph_index = 1022280},/*(疰)*/
    {.w_px = 16,	.glyph_index = 1022448},/*(痃)*/
    {.w_px = 16,	.glyph_index = 1022616},/*(痂)*/
    {.w_px = 16,	.glyph_index = 1022784},/*(痖)*/
    {.w_px = 16,	.glyph_index = 1022952},/*(痍)*/
    {.w_px = 16,	.glyph_index = 1023120},/*(痣)*/
    {.w_px = 16,	.glyph_index = 1023288},/*(痨)*/
    {.w_px = 16,	.glyph_index = 1023456},/*(痦)*/
    {.w_px = 16,	.glyph_index = 1023624},/*(痤)*/
    {.w_px = 16,	.glyph_index = 1023792},/*(痫)*/
    {.w_px = 16,	.glyph_index = 1023960},/*(痧)*/
    {.w_px = 16,	.glyph_index = 1024128},/*(瘃)*/
    {.w_px = 16,	.glyph_index = 1024296},/*(痱)*/
    {.w_px = 16,	.glyph_index = 1024464},/*(痼)*/
    {.w_px = 16,	.glyph_index = 1024632},/*(痿)*/
    {.w_px = 16,	.glyph_index = 1024800},/*(瘐)*/
    {.w_px = 16,	.glyph_index = 1024968},/*(瘀)*/
    {.w_px = 16,	.glyph_index = 1025136},/*(瘅)*/
    {.w_px = 16,	.glyph_index = 1025304},/*(瘌)*/
    {.w_px = 16,	.glyph_index = 1025472},/*(瘗)*/
    {.w_px = 16,	.glyph_index = 1025640},/*(瘊)*/
    {.w_px = 16,	.glyph_index = 1025808},/*(瘥)*/
    {.w_px = 16,	.glyph_index = 1025976},/*(瘘)*/
    {.w_px = 16,	.glyph_index = 1026144},/*(瘕)*/
    {.w_px = 16,	.glyph_index = 1026312},/*(瘙)*/
    {.w_px = 16,	.glyph_index = 1026480},/*(瘛)*/
    {.w_px = 16,	.glyph_index = 1026648},/*(瘼)*/
    {.w_px = 16,	.glyph_index = 1026816},/*(瘢)*/
    {.w_px = 16,	.glyph_index = 1026984},/*(瘠)*/
    {.w_px = 16,	.glyph_index = 1027152},/*(癀)*/
    {.w_px = 16,	.glyph_index = 1027320},/*(瘭)*/
    {.w_px = 16,	.glyph_index = 1027488},/*(瘰)*/
    {.w_px = 16,	.glyph_index = 1027656},/*(瘿)*/
    {.w_px = 16,	.glyph_index = 1027824},/*(瘵)*/
    {.w_px = 16,	.glyph_index = 1027992},/*(癃)*/
    {.w_px = 16,	.glyph_index = 1028160},/*(瘾)*/
    {.w_px = 16,	.glyph_index = 1028328},/*(瘳)*/
    {.w_px = 16,	.glyph_index = 1028496},/*(癍)*/
    {.w_px = 16,	.glyph_index = 1028664},/*(癞)*/
    {.w_px = 16,	.glyph_index = 1028832},/*(癔)*/
    {.w_px = 16,	.glyph_index = 1029000},/*(癜)*/
    {.w_px = 16,	.glyph_index = 1029168},/*(癖)*/
    {.w_px = 16,	.glyph_index = 1029336},/*(癫)*/
    {.w_px = 16,	.glyph_index = 1029504},/*(癯)*/
    {.w_px = 16,	.glyph_index = 1029672},/*(翊)*/
    {.w_px = 16,	.glyph_index = 1029840},/*(竦)*/
    {.w_px = 16,	.glyph_index = 1030008},/*(穸)*/
    {.w_px = 16,	.glyph_index = 1030176},/*(穹)*/
    {.w_px = 16,	.glyph_index = 1030344},/*(窀)*/
    {.w_px = 16,	.glyph_index = 1030512},/*(窆)*/
    {.w_px = 16,	.glyph_index = 1030680},/*(窈)*/
    {.w_px = 16,	.glyph_index = 1030848},/*(窕)*/
    {.w_px = 16,	.glyph_index = 1031016},/*(窦)*/
    {.w_px = 16,	.glyph_index = 1031184},/*(窠)*/
    {.w_px = 16,	.glyph_index = 1031352},/*(窬)*/
    {.w_px = 16,	.glyph_index = 1031520},/*(窨)*/
    {.w_px = 16,	.glyph_index = 1031688},/*(窭)*/
    {.w_px = 16,	.glyph_index = 1031856},/*(窳)*/
    {.w_px = 16,	.glyph_index = 1032024},/*(衤)*/
    {.w_px = 16,	.glyph_index = 1032192},/*(衩)*/
    {.w_px = 16,	.glyph_index = 1032360},/*(衲)*/
    {.w_px = 16,	.glyph_index = 1032528},/*(衽)*/
    {.w_px = 16,	.glyph_index = 1032696},/*(衿)*/
    {.w_px = 16,	.glyph_index = 1032864},/*(袂)*/
    {.w_px = 16,	.glyph_index = 1033032},/*(袢)*/
    {.w_px = 16,	.glyph_index = 1033200},/*(裆)*/
    {.w_px = 16,	.glyph_index = 1033368},/*(袷)*/
    {.w_px = 16,	.glyph_index = 1033536},/*(袼)*/
    {.w_px = 16,	.glyph_index = 1033704},/*(裉)*/
    {.w_px = 16,	.glyph_index = 1033872},/*(裢)*/
    {.w_px = 16,	.glyph_index = 1034040},/*(裎)*/
    {.w_px = 16,	.glyph_index = 1034208},/*(裣)*/
    {.w_px = 16,	.glyph_index = 1034376},/*(裥)*/
    {.w_px = 16,	.glyph_index = 1034544},/*(裱)*/
    {.w_px = 16,	.glyph_index = 1034712},/*(褚)*/
    {.w_px = 16,	.glyph_index = 1034880},/*(裼)*/
    {.w_px = 16,	.glyph_index = 1035048},/*(裨)*/
    {.w_px = 16,	.glyph_index = 1035216},/*(裾)*/
    {.w_px = 16,	.glyph_index = 1035384},/*(裰)*/
    {.w_px = 16,	.glyph_index = 1035552},/*(褡)*/
    {.w_px = 16,	.glyph_index = 1035720},/*(褙)*/
    {.w_px = 16,	.glyph_index = 1035888},/*(褓)*/
    {.w_px = 16,	.glyph_index = 1036056},/*(褛)*/
    {.w_px = 16,	.glyph_index = 1036224},/*(褊)*/
    {.w_px = 16,	.glyph_index = 1036392},/*(褴)*/
    {.w_px = 16,	.glyph_index = 1036560},/*(褫)*/
    {.w_px = 16,	.glyph_index = 1036728},/*(褶)*/
    {.w_px = 16,	.glyph_index = 1036896},/*(襁)*/
    {.w_px = 16,	.glyph_index = 1037064},/*(襦)*/
    {.w_px = 16,	.glyph_index = 1037232},/*(襻)*/
    {.w_px = 16,	.glyph_index = 1037400},/*(疋)*/
    {.w_px = 16,	.glyph_index = 1037568},/*(胥)*/
    {.w_px = 16,	.glyph_index = 1037736},/*(皲)*/
    {.w_px = 16,	.glyph_index = 1037904},/*(皴)*/
    {.w_px = 16,	.glyph_index = 1038072},/*(矜)*/
    {.w_px = 16,	.glyph_index = 1038240},/*(耒)*/
    {.w_px = 16,	.glyph_index = 1038408},/*(耔)*/
    {.w_px = 16,	.glyph_index = 1038576},/*(耖)*/
    {.w_px = 16,	.glyph_index = 1038744},/*(耜)*/
    {.w_px = 16,	.glyph_index = 1038912},/*(耠)*/
    {.w_px = 16,	.glyph_index = 1039080},/*(耢)*/
    {.w_px = 16,	.glyph_index = 1039248},/*(耥)*/
    {.w_px = 16,	.glyph_index = 1039416},/*(耦)*/
    {.w_px = 16,	.glyph_index = 1039584},/*(耧)*/
    {.w_px = 16,	.glyph_index = 1039752},/*(耩)*/
    {.w_px = 16,	.glyph_index = 1039920},/*(耨)*/
    {.w_px = 16,	.glyph_index = 1040088},/*(耱)*/
    {.w_px = 16,	.glyph_index = 1040256},/*(耋)*/
    {.w_px = 16,	.glyph_index = 1040424},/*(耵)*/
    {.w_px = 16,	.glyph_index = 1040592},/*(聃)*/
    {.w_px = 16,	.glyph_index = 1040760},/*(聆)*/
    {.w_px = 16,	.glyph_index = 1040928},/*(聍)*/
    {.w_px = 16,	.glyph_index = 1041096},/*(聒)*/
    {.w_px = 16,	.glyph_index = 1041264},/*(聩)*/
    {.w_px = 16,	.glyph_index = 1041432},/*(聱)*/
    {.w_px = 16,	.glyph_index = 1041600},/*(覃)*/
    {.w_px = 16,	.glyph_index = 1041768},/*(顸)*/
    {.w_px = 16,	.glyph_index = 1041936},/*(颀)*/
    {.w_px = 16,	.glyph_index = 1042104},/*(颃)*/
    {.w_px = 16,	.glyph_index = 1042272},/*(颉)*/
    {.w_px = 16,	.glyph_index = 1042440},/*(颌)*/
    {.w_px = 16,	.glyph_index = 1042608},/*(颍)*/
    {.w_px = 16,	.glyph_index = 1042776},/*(颏)*/
    {.w_px = 16,	.glyph_index = 1042944},/*(颔)*/
    {.w_px = 16,	.glyph_index = 1043112},/*(颚)*/
    {.w_px = 16,	.glyph_index = 1043280},/*(颛)*/
    {.w_px = 16,	.glyph_index = 1043448},/*(颞)*/
    {.w_px = 16,	.glyph_index = 1043616},/*(颟)*/
    {.w_px = 16,	.glyph_index = 1043784},/*(颡)*/
    {.w_px = 16,	.glyph_index = 1043952},/*(颢)*/
    {.w_px = 16,	.glyph_index = 1044120},/*(颥)*/
    {.w_px = 16,	.glyph_index = 1044288},/*(颦)*/
    {.w_px = 16,	.glyph_index = 1044456},/*(虍)*/
    {.w_px = 16,	.glyph_index = 1044624},/*(虔)*/
    {.w_px = 16,	.glyph_index = 1044792},/*(虬)*/
    {.w_px = 16,	.glyph_index = 1044960},/*(虮)*/
    {.w_px = 16,	.glyph_index = 1045128},/*(虿)*/
    {.w_px = 16,	.glyph_index = 1045296},/*(虺)*/
    {.w_px = 16,	.glyph_index = 1045464},/*(虼)*/
    {.w_px = 16,	.glyph_index = 1045632},/*(虻)*/
    {.w_px = 16,	.glyph_index = 1045800},/*(蚨)*/
    {.w_px = 16,	.glyph_index = 1045968},/*(蚍)*/
    {.w_px = 16,	.glyph_index = 1046136},/*(蚋)*/
    {.w_px = 16,	.glyph_index = 1046304},/*(蚬)*/
    {.w_px = 16,	.glyph_index = 1046472},/*(蚝)*/
    {.w_px = 16,	.glyph_index = 1046640},/*(蚧)*/
    {.w_px = 16,	.glyph_index = 1046808},/*(蚣)*/
    {.w_px = 16,	.glyph_index = 1046976},/*(蚪)*/
    {.w_px = 16,	.glyph_index = 1047144},/*(蚓)*/
    {.w_px = 16,	.glyph_index = 1047312},/*(蚩)*/
    {.w_px = 16,	.glyph_index = 1047480},/*(蚶)*/
    {.w_px = 16,	.glyph_index = 1047648},/*(蛄)*/
    {.w_px = 16,	.glyph_index = 1047816},/*(蚵)*/
    {.w_px = 16,	.glyph_index = 1047984},/*(蛎)*/
    {.w_px = 16,	.glyph_index = 1048152},/*(蚰)*/
    {.w_px = 16,	.glyph_index = 1048320},/*(蚺)*/
    {.w_px = 16,	.glyph_index = 1048488},/*(蚱)*/
    {.w_px = 16,	.glyph_index = 1048656},/*(蚯)*/
    {.w_px = 16,	.glyph_index = 1048824},/*(蛉)*/
    {.w_px = 16,	.glyph_index = 1048992},/*(蛏)*/
    {.w_px = 16,	.glyph_index = 1049160},/*(蚴)*/
    {.w_px = 16,	.glyph_index = 1049328},/*(蛩)*/
    {.w_px = 16,	.glyph_index = 1049496},/*(蛱)*/
    {.w_px = 16,	.glyph_index = 1049664},/*(蛲)*/
    {.w_px = 16,	.glyph_index = 1049832},/*(蛭)*/
    {.w_px = 16,	.glyph_index = 1050000},/*(蛳)*/
    {.w_px = 16,	.glyph_index = 1050168},/*(蛐)*/
    {.w_px = 16,	.glyph_index = 1050336},/*(蜓)*/
    {.w_px = 16,	.glyph_index = 1050504},/*(蛞)*/
    {.w_px = 16,	.glyph_index = 1050672},/*(蛴)*/
    {.w_px = 16,	.glyph_index = 1050840},/*(蛟)*/
    {.w_px = 16,	.glyph_index = 1051008},/*(蛘)*/
    {.w_px = 16,	.glyph_index = 1051176},/*(蛑)*/
    {.w_px = 16,	.glyph_index = 1051344},/*(蜃)*/
    {.w_px = 16,	.glyph_index = 1051512},/*(蜇)*/
    {.w_px = 16,	.glyph_index = 1051680},/*(蛸)*/
    {.w_px = 16,	.glyph_index = 1051848},/*(蜈)*/
    {.w_px = 16,	.glyph_index = 1052016},/*(蜊)*/
    {.w_px = 16,	.glyph_index = 1052184},/*(蜍)*/
    {.w_px = 16,	.glyph_index = 1052352},/*(蜉)*/
    {.w_px = 16,	.glyph_index = 1052520},/*(蜣)*/
    {.w_px = 16,	.glyph_index = 1052688},/*(蜻)*/
    {.w_px = 16,	.glyph_index = 1052856},/*(蜞)*/
    {.w_px = 16,	.glyph_index = 1053024},/*(蜥)*/
    {.w_px = 16,	.glyph_index = 1053192},/*(蜮)*/
    {.w_px = 16,	.glyph_index = 1053360},/*(蜚)*/
    {.w_px = 16,	.glyph_index = 1053528},/*(蜾)*/
    {.w_px = 16,	.glyph_index = 1053696},/*(蝈)*/
    {.w_px = 16,	.glyph_index = 1053864},/*(蜴)*/
    {.w_px = 16,	.glyph_index = 1054032},/*(蜱)*/
    {.w_px = 16,	.glyph_index = 1054200},/*(蜩)*/
    {.w_px = 16,	.glyph_index = 1054368},/*(蜷)*/
    {.w_px = 16,	.glyph_index = 1054536},/*(蜿)*/
    {.w_px = 16,	.glyph_index = 1054704},/*(螂)*/
    {.w_px = 16,	.glyph_index = 1054872},/*(蜢)*/
    {.w_px = 16,	.glyph_index = 1055040},/*(蝽)*/
    {.w_px = 16,	.glyph_index = 1055208},/*(蝾)*/
    {.w_px = 16,	.glyph_index = 1055376},/*(蝻)*/
    {.w_px = 16,	.glyph_index = 1055544},/*(蝠)*/
    {.w_px = 16,	.glyph_index = 1055712},/*(蝰)*/
    {.w_px = 16,	.glyph_index = 1055880},/*(蝌)*/
    {.w_px = 16,	.glyph_index = 1056048},/*(蝮)*/
    {.w_px = 16,	.glyph_index = 1056216},/*(螋)*/
    {.w_px = 16,	.glyph_index = 1056384},/*(蝓)*/
    {.w_px = 16,	.glyph_index = 1056552},/*(蝣)*/
    {.w_px = 16,	.glyph_index = 1056720},/*(蝼)*/
    {.w_px = 16,	.glyph_index = 1056888},/*(蝤)*/
    {.w_px = 16,	.glyph_index = 1057056},/*(蝙)*/
    {.w_px = 16,	.glyph_index = 1057224},/*(蝥)*/
    {.w_px = 16,	.glyph_index = 1057392},/*(螓)*/
    {.w_px = 16,	.glyph_index = 1057560},/*(螯)*/
    {.w_px = 16,	.glyph_index = 1057728},/*(螨)*/
    {.w_px = 16,	.glyph_index = 1057896},/*(蟒)*/
    {.w_px = 16,	.glyph_index = 1058064},/*(蟆)*/
    {.w_px = 16,	.glyph_index = 1058232},/*(螈)*/
    {.w_px = 16,	.glyph_index = 1058400},/*(螅)*/
    {.w_px = 16,	.glyph_index = 1058568},/*(螭)*/
    {.w_px = 16,	.glyph_index = 1058736},/*(螗)*/
    {.w_px = 16,	.glyph_index = 1058904},/*(螃)*/
    {.w_px = 16,	.glyph_index = 1059072},/*(螫)*/
    {.w_px = 16,	.glyph_index = 1059240},/*(蟥)*/
    {.w_px = 16,	.glyph_index = 1059408},/*(螬)*/
    {.w_px = 16,	.glyph_index = 1059576},/*(螵)*/
    {.w_px = 16,	.glyph_index = 1059744},/*(螳)*/
    {.w_px = 16,	.glyph_index = 1059912},/*(蟋)*/
    {.w_px = 16,	.glyph_index = 1060080},/*(蟓)*/
    {.w_px = 16,	.glyph_index = 1060248},/*(螽)*/
    {.w_px = 16,	.glyph_index = 1060416},/*(蟑)*/
    {.w_px = 16,	.glyph_index = 1060584},/*(蟀)*/
    {.w_px = 16,	.glyph_index = 1060752},/*(蟊)*/
    {.w_px = 16,	.glyph_index = 1060920},/*(蟛)*/
    {.w_px = 16,	.glyph_index = 1061088},/*(蟪)*/
    {.w_px = 16,	.glyph_index = 1061256},/*(蟠)*/
    {.w_px = 16,	.glyph_index = 1061424},/*(蟮)*/
    {.w_px = 16,	.glyph_index = 1061592},/*(蠖)*/
    {.w_px = 16,	.glyph_index = 1061760},/*(蠓)*/
    {.w_px = 16,	.glyph_index = 1061928},/*(蟾)*/
    {.w_px = 16,	.glyph_index = 1062096},/*(蠊)*/
    {.w_px = 16,	.glyph_index = 1062264},/*(蠛)*/
    {.w_px = 16,	.glyph_index = 1062432},/*(蠡)*/
    {.w_px = 16,	.glyph_index = 1062600},/*(蠹)*/
    {.w_px = 16,	.glyph_index = 1062768},/*(蠼)*/
    {.w_px = 16,	.glyph_index = 1062936},/*(缶)*/
    {.w_px = 16,	.glyph_index = 1063104},/*(罂)*/
    {.w_px = 16,	.glyph_index = 1063272},/*(罄)*/
    {.w_px = 16,	.glyph_index = 1063440},/*(罅)*/
    {.w_px = 16,	.glyph_index = 1063608},/*(舐)*/
    {.w_px = 16,	.glyph_index = 1063776},/*(竺)*/
    {.w_px = 16,	.glyph_index = 1063944},/*(竽)*/
    {.w_px = 16,	.glyph_index = 1064112},/*(笈)*/
    {.w_px = 16,	.glyph_index = 1064280},/*(笃)*/
    {.w_px = 16,	.glyph_index = 1064448},/*(笄)*/
    {.w_px = 16,	.glyph_index = 1064616},/*(笕)*/
    {.w_px = 16,	.glyph_index = 1064784},/*(笊)*/
    {.w_px = 16,	.glyph_index = 1064952},/*(笫)*/
    {.w_px = 16,	.glyph_index = 1065120},/*(笏)*/
    {.w_px = 16,	.glyph_index = 1065288},/*(筇)*/
    {.w_px = 16,	.glyph_index = 1065456},/*(笸)*/
    {.w_px = 16,	.glyph_index = 1065624},/*(笪)*/
    {.w_px = 16,	.glyph_index = 1065792},/*(笙)*/
    {.w_px = 16,	.glyph_index = 1065960},/*(笮)*/
    {.w_px = 16,	.glyph_index = 1066128},/*(笱)*/
    {.w_px = 16,	.glyph_index = 1066296},/*(笠)*/
    {.w_px = 16,	.glyph_index = 1066464},/*(笥)*/
    {.w_px = 16,	.glyph_index = 1066632},/*(笤)*/
    {.w_px = 16,	.glyph_index = 1066800},/*(笳)*/
    {.w_px = 16,	.glyph_index = 1066968},/*(笾)*/
    {.w_px = 16,	.glyph_index = 1067136},/*(笞)*/
    {.w_px = 16,	.glyph_index = 1067304},/*(筘)*/
    {.w_px = 16,	.glyph_index = 1067472},/*(筚)*/
    {.w_px = 16,	.glyph_index = 1067640},/*(筅)*/
    {.w_px = 16,	.glyph_index = 1067808},/*(筵)*/
    {.w_px = 16,	.glyph_index = 1067976},/*(筌)*/
    {.w_px = 16,	.glyph_index = 1068144},/*(筝)*/
    {.w_px = 16,	.glyph_index = 1068312},/*(筠)*/
    {.w_px = 16,	.glyph_index = 1068480},/*(筮)*/
    {.w_px = 16,	.glyph_index = 1068648},/*(筻)*/
    {.w_px = 16,	.glyph_index = 1068816},/*(筢)*/
    {.w_px = 16,	.glyph_index = 1068984},/*(筲)*/
    {.w_px = 16,	.glyph_index = 1069152},/*(筱)*/
    {.w_px = 16,	.glyph_index = 1069320},/*(箐)*/
    {.w_px = 16,	.glyph_index = 1069488},/*(箦)*/
    {.w_px = 16,	.glyph_index = 1069656},/*(箧)*/
    {.w_px = 16,	.glyph_index = 1069824},/*(箸)*/
    {.w_px = 16,	.glyph_index = 1069992},/*(箬)*/
    {.w_px = 16,	.glyph_index = 1070160},/*(箝)*/
    {.w_px = 16,	.glyph_index = 1070328},/*(箨)*/
    {.w_px = 16,	.glyph_index = 1070496},/*(箅)*/
    {.w_px = 16,	.glyph_index = 1070664},/*(箪)*/
    {.w_px = 16,	.glyph_index = 1070832},/*(箜)*/
    {.w_px = 16,	.glyph_index = 1071000},/*(箢)*/
    {.w_px = 16,	.glyph_index = 1071168},/*(箫)*/
    {.w_px = 16,	.glyph_index = 1071336},/*(箴)*/
    {.w_px = 16,	.glyph_index = 1071504},/*(篑)*/
    {.w_px = 16,	.glyph_index = 1071672},/*(篁)*/
    {.w_px = 16,	.glyph_index = 1071840},/*(篌)*/
    {.w_px = 16,	.glyph_index = 1072008},/*(篝)*/
    {.w_px = 16,	.glyph_index = 1072176},/*(篚)*/
    {.w_px = 16,	.glyph_index = 1072344},/*(篥)*/
    {.w_px = 16,	.glyph_index = 1072512},/*(篦)*/
    {.w_px = 16,	.glyph_index = 1072680},/*(篪)*/
    {.w_px = 16,	.glyph_index = 1072848},/*(簌)*/
    {.w_px = 16,	.glyph_index = 1073016},/*(篾)*/
    {.w_px = 16,	.glyph_index = 1073184},/*(篼)*/
    {.w_px = 16,	.glyph_index = 1073352},/*(簏)*/
    {.w_px = 16,	.glyph_index = 1073520},/*(簖)*/
    {.w_px = 16,	.glyph_index = 1073688},/*(簋)*/
    {.w_px = 16,	.glyph_index = 1073856},/*(簟)*/
    {.w_px = 16,	.glyph_index = 1074024},/*(簪)*/
    {.w_px = 16,	.glyph_index = 1074192},/*(簦)*/
    {.w_px = 16,	.glyph_index = 1074360},/*(簸)*/
    {.w_px = 16,	.glyph_index = 1074528},/*(籁)*/
    {.w_px = 16,	.glyph_index = 1074696},/*(籀)*/
    {.w_px = 16,	.glyph_index = 1074864},/*(臾)*/
    {.w_px = 16,	.glyph_index = 1075032},/*(舁)*/
    {.w_px = 16,	.glyph_index = 1075200},/*(舂)*/
    {.w_px = 16,	.glyph_index = 1075368},/*(舄)*/
    {.w_px = 16,	.glyph_index = 1075536},/*(臬)*/
    {.w_px = 16,	.glyph_index = 1075704},/*(衄)*/
    {.w_px = 16,	.glyph_index = 1075872},/*(舡)*/
    {.w_px = 16,	.glyph_index = 1076040},/*(舢)*/
    {.w_px = 16,	.glyph_index = 1076208},/*(舣)*/
    {.w_px = 16,	.glyph_index = 1076376},/*(舭)*/
    {.w_px = 16,	.glyph_index = 1076544},/*(舯)*/
    {.w_px = 16,	.glyph_index = 1076712},/*(舨)*/
    {.w_px = 16,	.glyph_index = 1076880},/*(舫)*/
    {.w_px = 16,	.glyph_index = 1077048},/*(舸)*/
    {.w_px = 16,	.glyph_index = 1077216},/*(舻)*/
    {.w_px = 16,	.glyph_index = 1077384},/*(舳)*/
    {.w_px = 16,	.glyph_index = 1077552},/*(舴)*/
    {.w_px = 16,	.glyph_index = 1077720},/*(舾)*/
    {.w_px = 16,	.glyph_index = 1077888},/*(艄)*/
    {.w_px = 16,	.glyph_index = 1078056},/*(艉)*/
    {.w_px = 16,	.glyph_index = 1078224},/*(艋)*/
    {.w_px = 16,	.glyph_index = 1078392},/*(艏)*/
    {.w_px = 16,	.glyph_index = 1078560},/*(艚)*/
    {.w_px = 16,	.glyph_index = 1078728},/*(艟)*/
    {.w_px = 16,	.glyph_index = 1078896},/*(艨)*/
    {.w_px = 16,	.glyph_index = 1079064},/*(衾)*/
    {.w_px = 16,	.glyph_index = 1079232},/*(袅)*/
    {.w_px = 16,	.glyph_index = 1079400},/*(袈)*/
    {.w_px = 16,	.glyph_index = 1079568},/*(裘)*/
    {.w_px = 16,	.glyph_index = 1079736},/*(裟)*/
    {.w_px = 16,	.glyph_index = 1079904},/*(襞)*/
    {.w_px = 16,	.glyph_index = 1080072},/*(羝)*/
    {.w_px = 16,	.glyph_index = 1080240},/*(羟)*/
    {.w_px = 16,	.glyph_index = 1080408},/*(羧)*/
    {.w_px = 16,	.glyph_index = 1080576},/*(羯)*/
    {.w_px = 16,	.glyph_index = 1080744},/*(羰)*/
    {.w_px = 16,	.glyph_index = 1080912},/*(羲)*/
    {.w_px = 16,	.glyph_index = 1081080},/*(籼)*/
    {.w_px = 16,	.glyph_index = 1081248},/*(敉)*/
    {.w_px = 16,	.glyph_index = 1081416},/*(粑)*/
    {.w_px = 16,	.glyph_index = 1081584},/*(粝)*/
    {.w_px = 16,	.glyph_index = 1081752},/*(粜)*/
    {.w_px = 16,	.glyph_index = 1081920},/*(粞)*/
    {.w_px = 16,	.glyph_index = 1082088},/*(粢)*/
    {.w_px = 16,	.glyph_index = 1082256},/*(粲)*/
    {.w_px = 16,	.glyph_index = 1082424},/*(粼)*/
    {.w_px = 16,	.glyph_index = 1082592},/*(粽)*/
    {.w_px = 16,	.glyph_index = 1082760},/*(糁)*/
    {.w_px = 16,	.glyph_index = 1082928},/*(糇)*/
    {.w_px = 16,	.glyph_index = 1083096},/*(糌)*/
    {.w_px = 16,	.glyph_index = 1083264},/*(糍)*/
    {.w_px = 16,	.glyph_index = 1083432},/*(糈)*/
    {.w_px = 16,	.glyph_index = 1083600},/*(糅)*/
    {.w_px = 16,	.glyph_index = 1083768},/*(糗)*/
    {.w_px = 16,	.glyph_index = 1083936},/*(糨)*/
    {.w_px = 16,	.glyph_index = 1084104},/*(艮)*/
    {.w_px = 16,	.glyph_index = 1084272},/*(暨)*/
    {.w_px = 16,	.glyph_index = 1084440},/*(羿)*/
    {.w_px = 16,	.glyph_index = 1084608},/*(翎)*/
    {.w_px = 16,	.glyph_index = 1084776},/*(翕)*/
    {.w_px = 16,	.glyph_index = 1084944},/*(翥)*/
    {.w_px = 16,	.glyph_index = 1085112},/*(翡)*/
    {.w_px = 16,	.glyph_index = 1085280},/*(翦)*/
    {.w_px = 16,	.glyph_index = 1085448},/*(翩)*/
    {.w_px = 16,	.glyph_index = 1085616},/*(翮)*/
    {.w_px = 16,	.glyph_index = 1085784},/*(翳)*/
    {.w_px = 16,	.glyph_index = 1085952},/*(糸)*/
    {.w_px = 16,	.glyph_index = 1086120},/*(絷)*/
    {.w_px = 16,	.glyph_index = 1086288},/*(綦)*/
    {.w_px = 16,	.glyph_index = 1086456},/*(綮)*/
    {.w_px = 16,	.glyph_index = 1086624},/*(繇)*/
    {.w_px = 16,	.glyph_index = 1086792},/*(纛)*/
    {.w_px = 16,	.glyph_index = 1086960},/*(麸)*/
    {.w_px = 16,	.glyph_index = 1087128},/*(麴)*/
    {.w_px = 16,	.glyph_index = 1087296},/*(赳)*/
    {.w_px = 16,	.glyph_index = 1087464},/*(趄)*/
    {.w_px = 16,	.glyph_index = 1087632},/*(趔)*/
    {.w_px = 16,	.glyph_index = 1087800},/*(趑)*/
    {.w_px = 16,	.glyph_index = 1087968},/*(趱)*/
    {.w_px = 16,	.glyph_index = 1088136},/*(赧)*/
    {.w_px = 16,	.glyph_index = 1088304},/*(赭)*/
    {.w_px = 16,	.glyph_index = 1088472},/*(豇)*/
    {.w_px = 16,	.glyph_index = 1088640},/*(豉)*/
    {.w_px = 16,	.glyph_index = 1088808},/*(酊)*/
    {.w_px = 16,	.glyph_index = 1088976},/*(酐)*/
    {.w_px = 16,	.glyph_index = 1089144},/*(酎)*/
    {.w_px = 16,	.glyph_index = 1089312},/*(酏)*/
    {.w_px = 16,	.glyph_index = 1089480},/*(酤)*/
    {.w_px = 16,	.glyph_index = 1089648},/*(酢)*/
    {.w_px = 16,	.glyph_index = 1089816},/*(酡)*/
    {.w_px = 16,	.glyph_index = 1089984},/*(酰)*/
    {.w_px = 16,	.glyph_index = 1090152},/*(酩)*/
    {.w_px = 16,	.glyph_index = 1090320},/*(酯)*/
    {.w_px = 16,	.glyph_index = 1090488},/*(酽)*/
    {.w_px = 16,	.glyph_index = 1090656},/*(酾)*/
    {.w_px = 16,	.glyph_index = 1090824},/*(酲)*/
    {.w_px = 16,	.glyph_index = 1090992},/*(酴)*/
    {.w_px = 16,	.glyph_index = 1091160},/*(酹)*/
    {.w_px = 16,	.glyph_index = 1091328},/*(醌)*/
    {.w_px = 16,	.glyph_index = 1091496},/*(醅)*/
    {.w_px = 16,	.glyph_index = 1091664},/*(醐)*/
    {.w_px = 16,	.glyph_index = 1091832},/*(醍)*/
    {.w_px = 16,	.glyph_index = 1092000},/*(醑)*/
    {.w_px = 16,	.glyph_index = 1092168},/*(醢)*/
    {.w_px = 16,	.glyph_index = 1092336},/*(醣)*/
    {.w_px = 16,	.glyph_index = 1092504},/*(醪)*/
    {.w_px = 16,	.glyph_index = 1092672},/*(醭)*/
    {.w_px = 16,	.glyph_index = 1092840},/*(醮)*/
    {.w_px = 16,	.glyph_index = 1093008},/*(醯)*/
    {.w_px = 16,	.glyph_index = 1093176},/*(醵)*/
    {.w_px = 16,	.glyph_index = 1093344},/*(醴)*/
    {.w_px = 16,	.glyph_index = 1093512},/*(醺)*/
    {.w_px = 16,	.glyph_index = 1093680},/*(豕)*/
    {.w_px = 16,	.glyph_index = 1093848},/*(鹾)*/
    {.w_px = 16,	.glyph_index = 1094016},/*(趸)*/
    {.w_px = 16,	.glyph_index = 1094184},/*(跫)*/
    {.w_px = 16,	.glyph_index = 1094352},/*(踅)*/
    {.w_px = 16,	.glyph_index = 1094520},/*(蹙)*/
    {.w_px = 16,	.glyph_index = 1094688},/*(蹩)*/
    {.w_px = 16,	.glyph_index = 1094856},/*(趵)*/
    {.w_px = 16,	.glyph_index = 1095024},/*(趿)*/
    {.w_px = 16,	.glyph_index = 1095192},/*(趼)*/
    {.w_px = 16,	.glyph_index = 1095360},/*(趺)*/
    {.w_px = 16,	.glyph_index = 1095528},/*(跄)*/
    {.w_px = 16,	.glyph_index = 1095696},/*(跖)*/
    {.w_px = 16,	.glyph_index = 1095864},/*(跗)*/
    {.w_px = 16,	.glyph_index = 1096032},/*(跚)*/
    {.w_px = 16,	.glyph_index = 1096200},/*(跞)*/
    {.w_px = 16,	.glyph_index = 1096368},/*(跎)*/
    {.w_px = 16,	.glyph_index = 1096536},/*(跏)*/
    {.w_px = 16,	.glyph_index = 1096704},/*(跛)*/
    {.w_px = 16,	.glyph_index = 1096872},/*(跆)*/
    {.w_px = 16,	.glyph_index = 1097040},/*(跬)*/
    {.w_px = 16,	.glyph_index = 1097208},/*(跷)*/
    {.w_px = 16,	.glyph_index = 1097376},/*(跸)*/
    {.w_px = 16,	.glyph_index = 1097544},/*(跣)*/
    {.w_px = 16,	.glyph_index = 1097712},/*(跹)*/
    {.w_px = 16,	.glyph_index = 1097880},/*(跻)*/
    {.w_px = 16,	.glyph_index = 1098048},/*(跤)*/
    {.w_px = 16,	.glyph_index = 1098216},/*(踉)*/
    {.w_px = 16,	.glyph_index = 1098384},/*(跽)*/
    {.w_px = 16,	.glyph_index = 1098552},/*(踔)*/
    {.w_px = 16,	.glyph_index = 1098720},/*(踝)*/
    {.w_px = 16,	.glyph_index = 1098888},/*(踟)*/
    {.w_px = 16,	.glyph_index = 1099056},/*(踬)*/
    {.w_px = 16,	.glyph_index = 1099224},/*(踮)*/
    {.w_px = 16,	.glyph_index = 1099392},/*(踣)*/
    {.w_px = 16,	.glyph_index = 1099560},/*(踯)*/
    {.w_px = 16,	.glyph_index = 1099728},/*(踺)*/
    {.w_px = 16,	.glyph_index = 1099896},/*(蹀)*/
    {.w_px = 16,	.glyph_index = 1100064},/*(踹)*/
    {.w_px = 16,	.glyph_index = 1100232},/*(踵)*/
    {.w_px = 16,	.glyph_index = 1100400},/*(踽)*/
    {.w_px = 16,	.glyph_index = 1100568},/*(踱)*/
    {.w_px = 16,	.glyph_index = 1100736},/*(蹉)*/
    {.w_px = 16,	.glyph_index = 1100904},/*(蹁)*/
    {.w_px = 16,	.glyph_index = 1101072},/*(蹂)*/
    {.w_px = 16,	.glyph_index = 1101240},/*(蹑)*/
    {.w_px = 16,	.glyph_index = 1101408},/*(蹒)*/
    {.w_px = 16,	.glyph_index = 1101576},/*(蹊)*/
    {.w_px = 16,	.glyph_index = 1101744},/*(蹰)*/
    {.w_px = 16,	.glyph_index = 1101912},/*(蹶)*/
    {.w_px = 16,	.glyph_index = 1102080},/*(蹼)*/
    {.w_px = 16,	.glyph_index = 1102248},/*(蹯)*/
    {.w_px = 16,	.glyph_index = 1102416},/*(蹴)*/
    {.w_px = 16,	.glyph_index = 1102584},/*(躅)*/
    {.w_px = 16,	.glyph_index = 1102752},/*(躏)*/
    {.w_px = 16,	.glyph_index = 1102920},/*(躔)*/
    {.w_px = 16,	.glyph_index = 1103088},/*(躐)*/
    {.w_px = 16,	.glyph_index = 1103256},/*(躜)*/
    {.w_px = 16,	.glyph_index = 1103424},/*(躞)*/
    {.w_px = 16,	.glyph_index = 1103592},/*(豸)*/
    {.w_px = 16,	.glyph_index = 1103760},/*(貂)*/
    {.w_px = 16,	.glyph_index = 1103928},/*(貊)*/
    {.w_px = 16,	.glyph_index = 1104096},/*(貅)*/
    {.w_px = 16,	.glyph_index = 1104264},/*(貘)*/
    {.w_px = 16,	.glyph_index = 1104432},/*(貔)*/
    {.w_px = 16,	.glyph_index = 1104600},/*(斛)*/
    {.w_px = 16,	.glyph_index = 1104768},/*(觖)*/
    {.w_px = 16,	.glyph_index = 1104936},/*(觞)*/
    {.w_px = 16,	.glyph_index = 1105104},/*(觚)*/
    {.w_px = 16,	.glyph_index = 1105272},/*(觜)*/
    {.w_px = 16,	.glyph_index = 1105440},/*(觥)*/
    {.w_px = 16,	.glyph_index = 1105608},/*(觫)*/
    {.w_px = 16,	.glyph_index = 1105776},/*(觯)*/
    {.w_px = 16,	.glyph_index = 1105944},/*(訾)*/
    {.w_px = 16,	.glyph_index = 1106112},/*(謦)*/
    {.w_px = 16,	.glyph_index = 1106280},/*(靓)*/
    {.w_px = 16,	.glyph_index = 1106448},/*(雩)*/
    {.w_px = 16,	.glyph_index = 1106616},/*(雳)*/
    {.w_px = 16,	.glyph_index = 1106784},/*(雯)*/
    {.w_px = 16,	.glyph_index = 1106952},/*(霆)*/
    {.w_px = 16,	.glyph_index = 1107120},/*(霁)*/
    {.w_px = 16,	.glyph_index = 1107288},/*(霈)*/
    {.w_px = 16,	.glyph_index = 1107456},/*(霏)*/
    {.w_px = 16,	.glyph_index = 1107624},/*(霎)*/
    {.w_px = 16,	.glyph_index = 1107792},/*(霪)*/
    {.w_px = 16,	.glyph_index = 1107960},/*(霭)*/
    {.w_px = 16,	.glyph_index = 1108128},/*(霰)*/
    {.w_px = 16,	.glyph_index = 1108296},/*(霾)*/
    {.w_px = 16,	.glyph_index = 1108464},/*(龀)*/
    {.w_px = 16,	.glyph_index = 1108632},/*(龃)*/
    {.w_px = 16,	.glyph_index = 1108800},/*(龅)*/
    {.w_px = 16,	.glyph_index = 1108968},/*(龆)*/
    {.w_px = 16,	.glyph_index = 1109136},/*(龇)*/
    {.w_px = 16,	.glyph_index = 1109304},/*(龈)*/
    {.w_px = 16,	.glyph_index = 1109472},/*(龉)*/
    {.w_px = 16,	.glyph_index = 1109640},/*(龊)*/
    {.w_px = 16,	.glyph_index = 1109808},/*(龌)*/
    {.w_px = 16,	.glyph_index = 1109976},/*(黾)*/
    {.w_px = 16,	.glyph_index = 1110144},/*(鼋)*/
    {.w_px = 16,	.glyph_index = 1110312},/*(鼍)*/
    {.w_px = 16,	.glyph_index = 1110480},/*(隹)*/
    {.w_px = 16,	.glyph_index = 1110648},/*(隼)*/
    {.w_px = 16,	.glyph_index = 1110816},/*(隽)*/
    {.w_px = 16,	.glyph_index = 1110984},/*(雎)*/
    {.w_px = 16,	.glyph_index = 1111152},/*(雒)*/
    {.w_px = 16,	.glyph_index = 1111320},/*(瞿)*/
    {.w_px = 16,	.glyph_index = 1111488},/*(雠)*/
    {.w_px = 16,	.glyph_index = 1111656},/*(銎)*/
    {.w_px = 16,	.glyph_index = 1111824},/*(銮)*/
    {.w_px = 16,	.glyph_index = 1111992},/*(鋈)*/
    {.w_px = 16,	.glyph_index = 1112160},/*(錾)*/
    {.w_px = 16,	.glyph_index = 1112328},/*(鍪)*/
    {.w_px = 16,	.glyph_index = 1112496},/*(鏊)*/
    {.w_px = 16,	.glyph_index = 1112664},/*(鎏)*/
    {.w_px = 16,	.glyph_index = 1112832},/*(鐾)*/
    {.w_px = 16,	.glyph_index = 1113000},/*(鑫)*/
    {.w_px = 16,	.glyph_index = 1113168},/*(鱿)*/
    {.w_px = 16,	.glyph_index = 1113336},/*(鲂)*/
    {.w_px = 16,	.glyph_index = 1113504},/*(鲅)*/
    {.w_px = 16,	.glyph_index = 1113672},/*(鲆)*/
    {.w_px = 16,	.glyph_index = 1113840},/*(鲇)*/
    {.w_px = 16,	.glyph_index = 1114008},/*(鲈)*/
    {.w_px = 16,	.glyph_index = 1114176},/*(稣)*/
    {.w_px = 16,	.glyph_index = 1114344},/*(鲋)*/
    {.w_px = 16,	.glyph_index = 1114512},/*(鲎)*/
    {.w_px = 16,	.glyph_index = 1114680},/*(鲐)*/
    {.w_px = 16,	.glyph_index = 1114848},/*(鲑)*/
    {.w_px = 16,	.glyph_index = 1115016},/*(鲒)*/
    {.w_px = 16,	.glyph_index = 1115184},/*(鲔)*/
    {.w_px = 16,	.glyph_index = 1115352},/*(鲕)*/
    {.w_px = 16,	.glyph_index = 1115520},/*(鲚)*/
    {.w_px = 16,	.glyph_index = 1115688},/*(鲛)*/
    {.w_px = 16,	.glyph_index = 1115856},/*(鲞)*/
    {.w_px = 16,	.glyph_index = 1116024},/*(鲟)*/
    {.w_px = 16,	.glyph_index = 1116192},/*(鲠)*/
    {.w_px = 16,	.glyph_index = 1116360},/*(鲡)*/
    {.w_px = 16,	.glyph_index = 1116528},/*(鲢)*/
    {.w_px = 16,	.glyph_index = 1116696},/*(鲣)*/
    {.w_px = 16,	.glyph_index = 1116864},/*(鲥)*/
    {.w_px = 16,	.glyph_index = 1117032},/*(鲦)*/
    {.w_px = 16,	.glyph_index = 1117200},/*(鲧)*/
    {.w_px = 16,	.glyph_index = 1117368},/*(鲨)*/
    {.w_px = 16,	.glyph_index = 1117536},/*(鲩)*/
    {.w_px = 16,	.glyph_index = 1117704},/*(鲫)*/
    {.w_px = 16,	.glyph_index = 1117872},/*(鲭)*/
    {.w_px = 16,	.glyph_index = 1118040},/*(鲮)*/
    {.w_px = 16,	.glyph_index = 1118208},/*(鲰)*/
    {.w_px = 16,	.glyph_index = 1118376},/*(鲱)*/
    {.w_px = 16,	.glyph_index = 1118544},/*(鲲)*/
    {.w_px = 16,	.glyph_index = 1118712},/*(鲳)*/
    {.w_px = 16,	.glyph_index = 1118880},/*(鲴)*/
    {.w_px = 16,	.glyph_index = 1119048},/*(鲵)*/
    {.w_px = 16,	.glyph_index = 1119216},/*(鲶)*/
    {.w_px = 16,	.glyph_index = 1119384},/*(鲷)*/
    {.w_px = 16,	.glyph_index = 1119552},/*(鲺)*/
    {.w_px = 16,	.glyph_index = 1119720},/*(鲻)*/
    {.w_px = 16,	.glyph_index = 1119888},/*(鲼)*/
    {.w_px = 16,	.glyph_index = 1120056},/*(鲽)*/
    {.w_px = 16,	.glyph_index = 1120224},/*(鳄)*/
    {.w_px = 16,	.glyph_index = 1120392},/*(鳅)*/
    {.w_px = 16,	.glyph_index = 1120560},/*(鳆)*/
    {.w_px = 16,	.glyph_index = 1120728},/*(鳇)*/
    {.w_px = 16,	.glyph_index = 1120896},/*(鳊)*/
    {.w_px = 16,	.glyph_index = 1121064},/*(鳋)*/
    {.w_px = 16,	.glyph_index = 1121232},/*(鳌)*/
    {.w_px = 16,	.glyph_index = 1121400},/*(鳍)*/
    {.w_px = 16,	.glyph_index = 1121568},/*(鳎)*/
    {.w_px = 16,	.glyph_index = 1121736},/*(鳏)*/
    {.w_px = 16,	.glyph_index = 1121904},/*(鳐)*/
    {.w_px = 16,	.glyph_index = 1122072},/*(鳓)*/
    {.w_px = 16,	.glyph_index = 1122240},/*(鳔)*/
    {.w_px = 16,	.glyph_index = 1122408},/*(鳕)*/
    {.w_px = 16,	.glyph_index = 1122576},/*(鳗)*/
    {.w_px = 16,	.glyph_index = 1122744},/*(鳘)*/
    {.w_px = 16,	.glyph_index = 1122912},/*(鳙)*/
    {.w_px = 16,	.glyph_index = 1123080},/*(鳜)*/
    {.w_px = 16,	.glyph_index = 1123248},/*(鳝)*/
    {.w_px = 16,	.glyph_index = 1123416},/*(鳟)*/
    {.w_px = 16,	.glyph_index = 1123584},/*(鳢)*/
    {.w_px = 16,	.glyph_index = 1123752},/*(靼)*/
    {.w_px = 16,	.glyph_index = 1123920},/*(鞅)*/
    {.w_px = 16,	.glyph_index = 1124088},/*(鞑)*/
    {.w_px = 16,	.glyph_index = 1124256},/*(鞒)*/
    {.w_px = 16,	.glyph_index = 1124424},/*(鞔)*/
    {.w_px = 16,	.glyph_index = 1124592},/*(鞯)*/
    {.w_px = 16,	.glyph_index = 1124760},/*(鞫)*/
    {.w_px = 16,	.glyph_index = 1124928},/*(鞣)*/
    {.w_px = 16,	.glyph_index = 1125096},/*(鞲)*/
    {.w_px = 16,	.glyph_index = 1125264},/*(鞴)*/
    {.w_px = 16,	.glyph_index = 1125432},/*(骱)*/
    {.w_px = 16,	.glyph_index = 1125600},/*(骰)*/
    {.w_px = 16,	.glyph_index = 1125768},/*(骷)*/
    {.w_px = 16,	.glyph_index = 1125936},/*(鹘)*/
    {.w_px = 16,	.glyph_index = 1126104},/*(骶)*/
    {.w_px = 16,	.glyph_index = 1126272},/*(骺)*/
    {.w_px = 16,	.glyph_index = 1126440},/*(骼)*/
    {.w_px = 16,	.glyph_index = 1126608},/*(髁)*/
    {.w_px = 16,	.glyph_index = 1126776},/*(髀)*/
    {.w_px = 16,	.glyph_index = 1126944},/*(髅)*/
    {.w_px = 16,	.glyph_index = 1127112},/*(髂)*/
    {.w_px = 16,	.glyph_index = 1127280},/*(髋)*/
    {.w_px = 16,	.glyph_index = 1127448},/*(髌)*/
    {.w_px = 16,	.glyph_index = 1127616},/*(髑)*/
    {.w_px = 16,	.glyph_index = 1127784},/*(魅)*/
    {.w_px = 16,	.glyph_index = 1127952},/*(魃)*/
    {.w_px = 16,	.glyph_index = 1128120},/*(魇)*/
    {.w_px = 16,	.glyph_index = 1128288},/*(魉)*/
    {.w_px = 16,	.glyph_index = 1128456},/*(魈)*/
    {.w_px = 16,	.glyph_index = 1128624},/*(魍)*/
    {.w_px = 16,	.glyph_index = 1128792},/*(魑)*/
    {.w_px = 16,	.glyph_index = 1128960},/*(飨)*/
    {.w_px = 16,	.glyph_index = 1129128},/*(餍)*/
    {.w_px = 16,	.glyph_index = 1129296},/*(餮)*/
    {.w_px = 16,	.glyph_index = 1129464},/*(饕)*/
    {.w_px = 16,	.glyph_index = 1129632},/*(饔)*/
    {.w_px = 16,	.glyph_index = 1129800},/*(髟)*/
    {.w_px = 16,	.glyph_index = 1129968},/*(髡)*/
    {.w_px = 16,	.glyph_index = 1130136},/*(髦)*/
    {.w_px = 16,	.glyph_index = 1130304},/*(髯)*/
    {.w_px = 16,	.glyph_index = 1130472},/*(髫)*/
    {.w_px = 16,	.glyph_index = 1130640},/*(髻)*/
    {.w_px = 16,	.glyph_index = 1130808},/*(髭)*/
    {.w_px = 16,	.glyph_index = 1130976},/*(髹)*/
    {.w_px = 16,	.glyph_index = 1131144},/*(鬈)*/
    {.w_px = 16,	.glyph_index = 1131312},/*(鬏)*/
    {.w_px = 16,	.glyph_index = 1131480},/*(鬓)*/
    {.w_px = 16,	.glyph_index = 1131648},/*(鬟)*/
    {.w_px = 16,	.glyph_index = 1131816},/*(鬣)*/
    {.w_px = 16,	.glyph_index = 1131984},/*(麽)*/
    {.w_px = 16,	.glyph_index = 1132152},/*(麾)*/
    {.w_px = 16,	.glyph_index = 1132320},/*(縻)*/
    {.w_px = 16,	.glyph_index = 1132488},/*(麂)*/
    {.w_px = 16,	.glyph_index = 1132656},/*(麇)*/
    {.w_px = 16,	.glyph_index = 1132824},/*(麈)*/
    {.w_px = 16,	.glyph_index = 1132992},/*(麋)*/
    {.w_px = 16,	.glyph_index = 1133160},/*(麒)*/
    {.w_px = 16,	.glyph_index = 1133328},/*(鏖)*/
    {.w_px = 16,	.glyph_index = 1133496},/*(麝)*/
    {.w_px = 16,	.glyph_index = 1133664},/*(麟)*/
    {.w_px = 16,	.glyph_index = 1133832},/*(黛)*/
    {.w_px = 16,	.glyph_index = 1134000},/*(黜)*/
    {.w_px = 16,	.glyph_index = 1134168},/*(黝)*/
    {.w_px = 16,	.glyph_index = 1134336},/*(黠)*/
    {.w_px = 16,	.glyph_index = 1134504},/*(黟)*/
    {.w_px = 16,	.glyph_index = 1134672},/*(黢)*/
    {.w_px = 16,	.glyph_index = 1134840},/*(黩)*/
    {.w_px = 16,	.glyph_index = 1135008},/*(黧)*/
    {.w_px = 16,	.glyph_index = 1135176},/*(黥)*/
    {.w_px = 16,	.glyph_index = 1135344},/*(黪)*/
    {.w_px = 16,	.glyph_index = 1135512},/*(黯)*/
    {.w_px = 16,	.glyph_index = 1135680},/*(鼢)*/
    {.w_px = 16,	.glyph_index = 1135848},/*(鼬)*/
    {.w_px = 16,	.glyph_index = 1136016},/*(鼯)*/
    {.w_px = 16,	.glyph_index = 1136184},/*(鼹)*/
    {.w_px = 16,	.glyph_index = 1136352},/*(鼷)*/
    {.w_px = 16,	.glyph_index = 1136520},/*(鼽)*/
    {.w_px = 16,	.glyph_index = 1136688},/*(鼾)*/
    {.w_px = 16,	.glyph_index = 1136856},/*(齄)*/
    {.w_px = 0,	.glyph_index = 1137024},/*(
)*/
};


static const uint32_t unicode_list[] = 
{
    0x554a,	/*(啊)*/
    0x963f,	/*(阿)*/
    0x57c3,	/*(埃)*/
    0x6328,	/*(挨)*/
    0x54ce,	/*(哎)*/
    0x5509,	/*(唉)*/
    0x54c0,	/*(哀)*/
    0x7691,	/*(皑)*/
    0x764c,	/*(癌)*/
    0x853c,	/*(蔼)*/
    0x77ee,	/*(矮)*/
    0x827e,	/*(艾)*/
    0x788d,	/*(碍)*/
    0x7231,	/*(爱)*/
    0x9698,	/*(隘)*/
    0x978d,	/*(鞍)*/
    0x6c28,	/*(氨)*/
    0x5b89,	/*(安)*/
    0x4ffa,	/*(俺)*/
    0x6309,	/*(按)*/
    0x6697,	/*(暗)*/
    0x5cb8,	/*(岸)*/
    0x80fa,	/*(胺)*/
    0x6848,	/*(案)*/
    0x80ae,	/*(肮)*/
    0x6602,	/*(昂)*/
    0x76ce,	/*(盎)*/
    0x51f9,	/*(凹)*/
    0x6556,	/*(敖)*/
    0x71ac,	/*(熬)*/
    0x7ff1,	/*(翱)*/
    0x8884,	/*(袄)*/
    0x50b2,	/*(傲)*/
    0x5965,	/*(奥)*/
    0x61ca,	/*(懊)*/
    0x6fb3,	/*(澳)*/
    0x82ad,	/*(芭)*/
    0x634c,	/*(捌)*/
    0x6252,	/*(扒)*/
    0x53ed,	/*(叭)*/
    0x5427,	/*(吧)*/
    0x7b06,	/*(笆)*/
    0x516b,	/*(八)*/
    0x75a4,	/*(疤)*/
    0x5df4,	/*(巴)*/
    0x62d4,	/*(拔)*/
    0x8dcb,	/*(跋)*/
    0x9776,	/*(靶)*/
    0x628a,	/*(把)*/
    0x8019,	/*(耙)*/
    0x575d,	/*(坝)*/
    0x9738,	/*(霸)*/
    0x7f62,	/*(罢)*/
    0x7238,	/*(爸)*/
    0x767d,	/*(白)*/
    0x67cf,	/*(柏)*/
    0x767e,	/*(百)*/
    0x6446,	/*(摆)*/
    0x4f70,	/*(佰)*/
    0x8d25,	/*(败)*/
    0x62dc,	/*(拜)*/
    0x7a17,	/*(稗)*/
    0x6591,	/*(斑)*/
    0x73ed,	/*(班)*/
    0x642c,	/*(搬)*/
    0x6273,	/*(扳)*/
    0x822c,	/*(般)*/
    0x9881,	/*(颁)*/
    0x677f,	/*(板)*/
    0x7248,	/*(版)*/
    0x626e,	/*(扮)*/
    0x62cc,	/*(拌)*/
    0x4f34,	/*(伴)*/
    0x74e3,	/*(瓣)*/
    0x534a,	/*(半)*/
    0x529e,	/*(办)*/
    0x7eca,	/*(绊)*/
    0x90a6,	/*(邦)*/
    0x5e2e,	/*(帮)*/
    0x6886,	/*(梆)*/
    0x699c,	/*(榜)*/
    0x8180,	/*(膀)*/
    0x7ed1,	/*(绑)*/
    0x68d2,	/*(棒)*/
    0x78c5,	/*(磅)*/
    0x868c,	/*(蚌)*/
    0x9551,	/*(镑)*/
    0x508d,	/*(傍)*/
    0x8c24,	/*(谤)*/
    0x82de,	/*(苞)*/
    0x80de,	/*(胞)*/
    0x5305,	/*(包)*/
    0x8912,	/*(褒)*/
    0x5265,	/*(剥)*/
    0x8584,	/*(薄)*/
    0x96f9,	/*(雹)*/
    0x4fdd,	/*(保)*/
    0x5821,	/*(堡)*/
    0x9971,	/*(饱)*/
    0x5b9d,	/*(宝)*/
    0x62b1,	/*(抱)*/
    0x62a5,	/*(报)*/
    0x66b4,	/*(暴)*/
    0x8c79,	/*(豹)*/
    0x9c8d,	/*(鲍)*/
    0x7206,	/*(爆)*/
    0x676f,	/*(杯)*/
    0x7891,	/*(碑)*/
    0x60b2,	/*(悲)*/
    0x5351,	/*(卑)*/
    0x5317,	/*(北)*/
    0x8f88,	/*(辈)*/
    0x80cc,	/*(背)*/
    0x8d1d,	/*(贝)*/
    0x94a1,	/*(钡)*/
    0x500d,	/*(倍)*/
    0x72c8,	/*(狈)*/
    0x5907,	/*(备)*/
    0x60eb,	/*(惫)*/
    0x7119,	/*(焙)*/
    0x88ab,	/*(被)*/
    0x5954,	/*(奔)*/
    0x82ef,	/*(苯)*/
    0x672c,	/*(本)*/
    0x7b28,	/*(笨)*/
    0x5d29,	/*(崩)*/
    0x7ef7,	/*(绷)*/
    0x752d,	/*(甭)*/
    0x6cf5,	/*(泵)*/
    0x8e66,	/*(蹦)*/
    0x8ff8,	/*(迸)*/
    0x903c,	/*(逼)*/
    0x9f3b,	/*(鼻)*/
    0x6bd4,	/*(比)*/
    0x9119,	/*(鄙)*/
    0x7b14,	/*(笔)*/
    0x5f7c,	/*(彼)*/
    0x78a7,	/*(碧)*/
    0x84d6,	/*(蓖)*/
    0x853d,	/*(蔽)*/
    0x6bd5,	/*(毕)*/
    0x6bd9,	/*(毙)*/
    0x6bd6,	/*(毖)*/
    0x5e01,	/*(币)*/
    0x5e87,	/*(庇)*/
    0x75f9,	/*(痹)*/
    0x95ed,	/*(闭)*/
    0x655d,	/*(敝)*/
    0x5f0a,	/*(弊)*/
    0x5fc5,	/*(必)*/
    0x8f9f,	/*(辟)*/
    0x58c1,	/*(壁)*/
    0x81c2,	/*(臂)*/
    0x907f,	/*(避)*/
    0x965b,	/*(陛)*/
    0x97ad,	/*(鞭)*/
    0x8fb9,	/*(边)*/
    0x7f16,	/*(编)*/
    0x8d2c,	/*(贬)*/
    0x6241,	/*(扁)*/
    0x4fbf,	/*(便)*/
    0x53d8,	/*(变)*/
    0x535e,	/*(卞)*/
    0x8fa8,	/*(辨)*/
    0x8fa9,	/*(辩)*/
    0x8fab,	/*(辫)*/
    0x904d,	/*(遍)*/
    0x6807,	/*(标)*/
    0x5f6a,	/*(彪)*/
    0x8198,	/*(膘)*/
    0x8868,	/*(表)*/
    0x9cd6,	/*(鳖)*/
    0x618b,	/*(憋)*/
    0x522b,	/*(别)*/
    0x762a,	/*(瘪)*/
    0x5f6c,	/*(彬)*/
    0x658c,	/*(斌)*/
    0x6fd2,	/*(濒)*/
    0x6ee8,	/*(滨)*/
    0x5bbe,	/*(宾)*/
    0x6448,	/*(摈)*/
    0x5175,	/*(兵)*/
    0x51b0,	/*(冰)*/
    0x67c4,	/*(柄)*/
    0x4e19,	/*(丙)*/
    0x79c9,	/*(秉)*/
    0x997c,	/*(饼)*/
    0x70b3,	/*(炳)*/
    0x75c5,	/*(病)*/
    0x5e76,	/*(并)*/
    0x73bb,	/*(玻)*/
    0x83e0,	/*(菠)*/
    0x64ad,	/*(播)*/
    0x62e8,	/*(拨)*/
    0x94b5,	/*(钵)*/
    0x6ce2,	/*(波)*/
    0x535a,	/*(博)*/
    0x52c3,	/*(勃)*/
    0x640f,	/*(搏)*/
    0x94c2,	/*(铂)*/
    0x7b94,	/*(箔)*/
    0x4f2f,	/*(伯)*/
    0x5e1b,	/*(帛)*/
    0x8236,	/*(舶)*/
    0x8116,	/*(脖)*/
    0x818a,	/*(膊)*/
    0x6e24,	/*(渤)*/
    0x6cca,	/*(泊)*/
    0x9a73,	/*(驳)*/
    0x6355,	/*(捕)*/
    0x535c,	/*(卜)*/
    0x54fa,	/*(哺)*/
    0x8865,	/*(补)*/
    0x57e0,	/*(埠)*/
    0x4e0d,	/*(不)*/
    0x5e03,	/*(布)*/
    0x6b65,	/*(步)*/
    0x7c3f,	/*(簿)*/
    0x90e8,	/*(部)*/
    0x6016,	/*(怖)*/
    0x64e6,	/*(擦)*/
    0x731c,	/*(猜)*/
    0x88c1,	/*(裁)*/
    0x6750,	/*(材)*/
    0x624d,	/*(才)*/
    0x8d22,	/*(财)*/
    0x776c,	/*(睬)*/
    0x8e29,	/*(踩)*/
    0x91c7,	/*(采)*/
    0x5f69,	/*(彩)*/
    0x83dc,	/*(菜)*/
    0x8521,	/*(蔡)*/
    0x9910,	/*(餐)*/
    0x53c2,	/*(参)*/
    0x8695,	/*(蚕)*/
    0x6b8b,	/*(残)*/
    0x60ed,	/*(惭)*/
    0x60e8,	/*(惨)*/
    0x707f,	/*(灿)*/
    0x82cd,	/*(苍)*/
    0x8231,	/*(舱)*/
    0x4ed3,	/*(仓)*/
    0x6ca7,	/*(沧)*/
    0x85cf,	/*(藏)*/
    0x64cd,	/*(操)*/
    0x7cd9,	/*(糙)*/
    0x69fd,	/*(槽)*/
    0x66f9,	/*(曹)*/
    0x8349,	/*(草)*/
    0x5395,	/*(厕)*/
    0x7b56,	/*(策)*/
    0x4fa7,	/*(侧)*/
    0x518c,	/*(册)*/
    0x6d4b,	/*(测)*/
    0x5c42,	/*(层)*/
    0x8e6d,	/*(蹭)*/
    0x63d2,	/*(插)*/
    0x53c9,	/*(叉)*/
    0x832c,	/*(茬)*/
    0x8336,	/*(茶)*/
    0x67e5,	/*(查)*/
    0x78b4,	/*(碴)*/
    0x643d,	/*(搽)*/
    0x5bdf,	/*(察)*/
    0x5c94,	/*(岔)*/
    0x5dee,	/*(差)*/
    0x8be7,	/*(诧)*/
    0x62c6,	/*(拆)*/
    0x67f4,	/*(柴)*/
    0x8c7a,	/*(豺)*/
    0x6400,	/*(搀)*/
    0x63ba,	/*(掺)*/
    0x8749,	/*(蝉)*/
    0x998b,	/*(馋)*/
    0x8c17,	/*(谗)*/
    0x7f20,	/*(缠)*/
    0x94f2,	/*(铲)*/
    0x4ea7,	/*(产)*/
    0x9610,	/*(阐)*/
    0x98a4,	/*(颤)*/
    0x660c,	/*(昌)*/
    0x7316,	/*(猖)*/
    0x573a,	/*(场)*/
    0x5c1d,	/*(尝)*/
    0x5e38,	/*(常)*/
    0x957f,	/*(长)*/
    0x507f,	/*(偿)*/
    0x80a0,	/*(肠)*/
    0x5382,	/*(厂)*/
    0x655e,	/*(敞)*/
    0x7545,	/*(畅)*/
    0x5531,	/*(唱)*/
    0x5021,	/*(倡)*/
    0x8d85,	/*(超)*/
    0x6284,	/*(抄)*/
    0x949e,	/*(钞)*/
    0x671d,	/*(朝)*/
    0x5632,	/*(嘲)*/
    0x6f6e,	/*(潮)*/
    0x5de2,	/*(巢)*/
    0x5435,	/*(吵)*/
    0x7092,	/*(炒)*/
    0x8f66,	/*(车)*/
    0x626f,	/*(扯)*/
    0x64a4,	/*(撤)*/
    0x63a3,	/*(掣)*/
    0x5f7b,	/*(彻)*/
    0x6f88,	/*(澈)*/
    0x90f4,	/*(郴)*/
    0x81e3,	/*(臣)*/
    0x8fb0,	/*(辰)*/
    0x5c18,	/*(尘)*/
    0x6668,	/*(晨)*/
    0x5ff1,	/*(忱)*/
    0x6c89,	/*(沉)*/
    0x9648,	/*(陈)*/
    0x8d81,	/*(趁)*/
    0x886c,	/*(衬)*/
    0x6491,	/*(撑)*/
    0x79f0,	/*(称)*/
    0x57ce,	/*(城)*/
    0x6a59,	/*(橙)*/
    0x6210,	/*(成)*/
    0x5448,	/*(呈)*/
    0x4e58,	/*(乘)*/
    0x7a0b,	/*(程)*/
    0x60e9,	/*(惩)*/
    0x6f84,	/*(澄)*/
    0x8bda,	/*(诚)*/
    0x627f,	/*(承)*/
    0x901e,	/*(逞)*/
    0x9a8b,	/*(骋)*/
    0x79e4,	/*(秤)*/
    0x5403,	/*(吃)*/
    0x75f4,	/*(痴)*/
    0x6301,	/*(持)*/
    0x5319,	/*(匙)*/
    0x6c60,	/*(池)*/
    0x8fdf,	/*(迟)*/
    0x5f1b,	/*(弛)*/
    0x9a70,	/*(驰)*/
    0x803b,	/*(耻)*/
    0x9f7f,	/*(齿)*/
    0x4f88,	/*(侈)*/
    0x5c3a,	/*(尺)*/
    0x8d64,	/*(赤)*/
    0x7fc5,	/*(翅)*/
    0x65a5,	/*(斥)*/
    0x70bd,	/*(炽)*/
    0x5145,	/*(充)*/
    0x51b2,	/*(冲)*/
    0x866b,	/*(虫)*/
    0x5d07,	/*(崇)*/
    0x5ba0,	/*(宠)*/
    0x62bd,	/*(抽)*/
    0x916c,	/*(酬)*/
    0x7574,	/*(畴)*/
    0x8e0c,	/*(踌)*/
    0x7a20,	/*(稠)*/
    0x6101,	/*(愁)*/
    0x7b79,	/*(筹)*/
    0x4ec7,	/*(仇)*/
    0x7ef8,	/*(绸)*/
    0x7785,	/*(瞅)*/
    0x4e11,	/*(丑)*/
    0x81ed,	/*(臭)*/
    0x521d,	/*(初)*/
    0x51fa,	/*(出)*/
    0x6a71,	/*(橱)*/
    0x53a8,	/*(厨)*/
    0x8e87,	/*(躇)*/
    0x9504,	/*(锄)*/
    0x96cf,	/*(雏)*/
    0x6ec1,	/*(滁)*/
    0x9664,	/*(除)*/
    0x695a,	/*(楚)*/
    0x7840,	/*(础)*/
    0x50a8,	/*(储)*/
    0x77d7,	/*(矗)*/
    0x6410,	/*(搐)*/
    0x89e6,	/*(触)*/
    0x5904,	/*(处)*/
    0x63e3,	/*(揣)*/
    0x5ddd,	/*(川)*/
    0x7a7f,	/*(穿)*/
    0x693d,	/*(椽)*/
    0x4f20,	/*(传)*/
    0x8239,	/*(船)*/
    0x5598,	/*(喘)*/
    0x4e32,	/*(串)*/
    0x75ae,	/*(疮)*/
    0x7a97,	/*(窗)*/
    0x5e62,	/*(幢)*/
    0x5e8a,	/*(床)*/
    0x95ef,	/*(闯)*/
    0x521b,	/*(创)*/
    0x5439,	/*(吹)*/
    0x708a,	/*(炊)*/
    0x6376,	/*(捶)*/
    0x9524,	/*(锤)*/
    0x5782,	/*(垂)*/
    0x6625,	/*(春)*/
    0x693f,	/*(椿)*/
    0x9187,	/*(醇)*/
    0x5507,	/*(唇)*/
    0x6df3,	/*(淳)*/
    0x7eaf,	/*(纯)*/
    0x8822,	/*(蠢)*/
    0x6233,	/*(戳)*/
    0x7ef0,	/*(绰)*/
    0x75b5,	/*(疵)*/
    0x8328,	/*(茨)*/
    0x78c1,	/*(磁)*/
    0x96cc,	/*(雌)*/
    0x8f9e,	/*(辞)*/
    0x6148,	/*(慈)*/
    0x74f7,	/*(瓷)*/
    0x8bcd,	/*(词)*/
    0x6b64,	/*(此)*/
    0x523a,	/*(刺)*/
    0x8d50,	/*(赐)*/
    0x6b21,	/*(次)*/
    0x806a,	/*(聪)*/
    0x8471,	/*(葱)*/
    0x56f1,	/*(囱)*/
    0x5306,	/*(匆)*/
    0x4ece,	/*(从)*/
    0x4e1b,	/*(丛)*/
    0x51d1,	/*(凑)*/
    0x7c97,	/*(粗)*/
    0x918b,	/*(醋)*/
    0x7c07,	/*(簇)*/
    0x4fc3,	/*(促)*/
    0x8e7f,	/*(蹿)*/
    0x7be1,	/*(篡)*/
    0x7a9c,	/*(窜)*/
    0x6467,	/*(摧)*/
    0x5d14,	/*(崔)*/
    0x50ac,	/*(催)*/
    0x8106,	/*(脆)*/
    0x7601,	/*(瘁)*/
    0x7cb9,	/*(粹)*/
    0x6dec,	/*(淬)*/
    0x7fe0,	/*(翠)*/
    0x6751,	/*(村)*/
    0x5b58,	/*(存)*/
    0x5bf8,	/*(寸)*/
    0x78cb,	/*(磋)*/
    0x64ae,	/*(撮)*/
    0x6413,	/*(搓)*/
    0x63aa,	/*(措)*/
    0x632b,	/*(挫)*/
    0x9519,	/*(错)*/
    0x642d,	/*(搭)*/
    0x8fbe,	/*(达)*/
    0x7b54,	/*(答)*/
    0x7629,	/*(瘩)*/
    0x6253,	/*(打)*/
    0x5927,	/*(大)*/
    0x5446,	/*(呆)*/
    0x6b79,	/*(歹)*/
    0x50a3,	/*(傣)*/
    0x6234,	/*(戴)*/
    0x5e26,	/*(带)*/
    0x6b86,	/*(殆)*/
    0x4ee3,	/*(代)*/
    0x8d37,	/*(贷)*/
    0x888b,	/*(袋)*/
    0x5f85,	/*(待)*/
    0x902e,	/*(逮)*/
    0x6020,	/*(怠)*/
    0x803d,	/*(耽)*/
    0x62c5,	/*(担)*/
    0x4e39,	/*(丹)*/
    0x5355,	/*(单)*/
    0x90f8,	/*(郸)*/
    0x63b8,	/*(掸)*/
    0x80c6,	/*(胆)*/
    0x65e6,	/*(旦)*/
    0x6c2e,	/*(氮)*/
    0x4f46,	/*(但)*/
    0x60ee,	/*(惮)*/
    0x6de1,	/*(淡)*/
    0x8bde,	/*(诞)*/
    0x5f39,	/*(弹)*/
    0x86cb,	/*(蛋)*/
    0x5f53,	/*(当)*/
    0x6321,	/*(挡)*/
    0x515a,	/*(党)*/
    0x8361,	/*(荡)*/
    0x6863,	/*(档)*/
    0x5200,	/*(刀)*/
    0x6363,	/*(捣)*/
    0x8e48,	/*(蹈)*/
    0x5012,	/*(倒)*/
    0x5c9b,	/*(岛)*/
    0x7977,	/*(祷)*/
    0x5bfc,	/*(导)*/
    0x5230,	/*(到)*/
    0x7a3b,	/*(稻)*/
    0x60bc,	/*(悼)*/
    0x9053,	/*(道)*/
    0x76d7,	/*(盗)*/
    0x5fb7,	/*(德)*/
    0x5f97,	/*(得)*/
    0x7684,	/*(的)*/
    0x8e6c,	/*(蹬)*/
    0x706f,	/*(灯)*/
    0x767b,	/*(登)*/
    0x7b49,	/*(等)*/
    0x77aa,	/*(瞪)*/
    0x51f3,	/*(凳)*/
    0x9093,	/*(邓)*/
    0x5824,	/*(堤)*/
    0x4f4e,	/*(低)*/
    0x6ef4,	/*(滴)*/
    0x8fea,	/*(迪)*/
    0x654c,	/*(敌)*/
    0x7b1b,	/*(笛)*/
    0x72c4,	/*(狄)*/
    0x6da4,	/*(涤)*/
    0x7fdf,	/*(翟)*/
    0x5ae1,	/*(嫡)*/
    0x62b5,	/*(抵)*/
    0x5e95,	/*(底)*/
    0x5730,	/*(地)*/
    0x8482,	/*(蒂)*/
    0x7b2c,	/*(第)*/
    0x5e1d,	/*(帝)*/
    0x5f1f,	/*(弟)*/
    0x9012,	/*(递)*/
    0x7f14,	/*(缔)*/
    0x98a0,	/*(颠)*/
    0x6382,	/*(掂)*/
    0x6ec7,	/*(滇)*/
    0x7898,	/*(碘)*/
    0x70b9,	/*(点)*/
    0x5178,	/*(典)*/
    0x975b,	/*(靛)*/
    0x57ab,	/*(垫)*/
    0x7535,	/*(电)*/
    0x4f43,	/*(佃)*/
    0x7538,	/*(甸)*/
    0x5e97,	/*(店)*/
    0x60e6,	/*(惦)*/
    0x5960,	/*(奠)*/
    0x6dc0,	/*(淀)*/
    0x6bbf,	/*(殿)*/
    0x7889,	/*(碉)*/
    0x53fc,	/*(叼)*/
    0x96d5,	/*(雕)*/
    0x51cb,	/*(凋)*/
    0x5201,	/*(刁)*/
    0x6389,	/*(掉)*/
    0x540a,	/*(吊)*/
    0x9493,	/*(钓)*/
    0x8c03,	/*(调)*/
    0x8dcc,	/*(跌)*/
    0x7239,	/*(爹)*/
    0x789f,	/*(碟)*/
    0x8776,	/*(蝶)*/
    0x8fed,	/*(迭)*/
    0x8c0d,	/*(谍)*/
    0x53e0,	/*(叠)*/
    0x4e01,	/*(丁)*/
    0x76ef,	/*(盯)*/
    0x53ee,	/*(叮)*/
    0x9489,	/*(钉)*/
    0x9876,	/*(顶)*/
    0x9f0e,	/*(鼎)*/
    0x952d,	/*(锭)*/
    0x5b9a,	/*(定)*/
    0x8ba2,	/*(订)*/
    0x4e22,	/*(丢)*/
    0x4e1c,	/*(东)*/
    0x51ac,	/*(冬)*/
    0x8463,	/*(董)*/
    0x61c2,	/*(懂)*/
    0x52a8,	/*(动)*/
    0x680b,	/*(栋)*/
    0x4f97,	/*(侗)*/
    0x606b,	/*(恫)*/
    0x51bb,	/*(冻)*/
    0x6d1e,	/*(洞)*/
    0x515c,	/*(兜)*/
    0x6296,	/*(抖)*/
    0x6597,	/*(斗)*/
    0x9661,	/*(陡)*/
    0x8c46,	/*(豆)*/
    0x9017,	/*(逗)*/
    0x75d8,	/*(痘)*/
    0x90fd,	/*(都)*/
    0x7763,	/*(督)*/
    0x6bd2,	/*(毒)*/
    0x728a,	/*(犊)*/
    0x72ec,	/*(独)*/
    0x8bfb,	/*(读)*/
    0x5835,	/*(堵)*/
    0x7779,	/*(睹)*/
    0x8d4c,	/*(赌)*/
    0x675c,	/*(杜)*/
    0x9540,	/*(镀)*/
    0x809a,	/*(肚)*/
    0x5ea6,	/*(度)*/
    0x6e21,	/*(渡)*/
    0x5992,	/*(妒)*/
    0x7aef,	/*(端)*/
    0x77ed,	/*(短)*/
    0x953b,	/*(锻)*/
    0x6bb5,	/*(段)*/
    0x65ad,	/*(断)*/
    0x7f0e,	/*(缎)*/
    0x5806,	/*(堆)*/
    0x5151,	/*(兑)*/
    0x961f,	/*(队)*/
    0x5bf9,	/*(对)*/
    0x58a9,	/*(墩)*/
    0x5428,	/*(吨)*/
    0x8e72,	/*(蹲)*/
    0x6566,	/*(敦)*/
    0x987f,	/*(顿)*/
    0x56e4,	/*(囤)*/
    0x949d,	/*(钝)*/
    0x76fe,	/*(盾)*/
    0x9041,	/*(遁)*/
    0x6387,	/*(掇)*/
    0x54c6,	/*(哆)*/
    0x591a,	/*(多)*/
    0x593a,	/*(夺)*/
    0x579b,	/*(垛)*/
    0x8eb2,	/*(躲)*/
    0x6735,	/*(朵)*/
    0x8dfa,	/*(跺)*/
    0x8235,	/*(舵)*/
    0x5241,	/*(剁)*/
    0x60f0,	/*(惰)*/
    0x5815,	/*(堕)*/
    0x86fe,	/*(蛾)*/
    0x5ce8,	/*(峨)*/
    0x9e45,	/*(鹅)*/
    0x4fc4,	/*(俄)*/
    0x989d,	/*(额)*/
    0x8bb9,	/*(讹)*/
    0x5a25,	/*(娥)*/
    0x6076,	/*(恶)*/
    0x5384,	/*(厄)*/
    0x627c,	/*(扼)*/
    0x904f,	/*(遏)*/
    0x9102,	/*(鄂)*/
    0x997f,	/*(饿)*/
    0x6069,	/*(恩)*/
    0x800c,	/*(而)*/
    0x513f,	/*(儿)*/
    0x8033,	/*(耳)*/
    0x5c14,	/*(尔)*/
    0x9975,	/*(饵)*/
    0x6d31,	/*(洱)*/
    0x4e8c,	/*(二)*/
    0x8d30,	/*(贰)*/
    0x53d1,	/*(发)*/
    0x7f5a,	/*(罚)*/
    0x7b4f,	/*(筏)*/
    0x4f10,	/*(伐)*/
    0x4e4f,	/*(乏)*/
    0x9600,	/*(阀)*/
    0x6cd5,	/*(法)*/
    0x73d0,	/*(珐)*/
    0x85e9,	/*(藩)*/
    0x5e06,	/*(帆)*/
    0x756a,	/*(番)*/
    0x7ffb,	/*(翻)*/
    0x6a0a,	/*(樊)*/
    0x77fe,	/*(矾)*/
    0x9492,	/*(钒)*/
    0x7e41,	/*(繁)*/
    0x51e1,	/*(凡)*/
    0x70e6,	/*(烦)*/
    0x53cd,	/*(反)*/
    0x8fd4,	/*(返)*/
    0x8303,	/*(范)*/
    0x8d29,	/*(贩)*/
    0x72af,	/*(犯)*/
    0x996d,	/*(饭)*/
    0x6cdb,	/*(泛)*/
    0x574a,	/*(坊)*/
    0x82b3,	/*(芳)*/
    0x65b9,	/*(方)*/
    0x80aa,	/*(肪)*/
    0x623f,	/*(房)*/
    0x9632,	/*(防)*/
    0x59a8,	/*(妨)*/
    0x4eff,	/*(仿)*/
    0x8bbf,	/*(访)*/
    0x7eba,	/*(纺)*/
    0x653e,	/*(放)*/
    0x83f2,	/*(菲)*/
    0x975e,	/*(非)*/
    0x5561,	/*(啡)*/
    0x98de,	/*(飞)*/
    0x80a5,	/*(肥)*/
    0x532a,	/*(匪)*/
    0x8bfd,	/*(诽)*/
    0x5420,	/*(吠)*/
    0x80ba,	/*(肺)*/
    0x5e9f,	/*(废)*/
    0x6cb8,	/*(沸)*/
    0x8d39,	/*(费)*/
    0x82ac,	/*(芬)*/
    0x915a,	/*(酚)*/
    0x5429,	/*(吩)*/
    0x6c1b,	/*(氛)*/
    0x5206,	/*(分)*/
    0x7eb7,	/*(纷)*/
    0x575f,	/*(坟)*/
    0x711a,	/*(焚)*/
    0x6c7e,	/*(汾)*/
    0x7c89,	/*(粉)*/
    0x594b,	/*(奋)*/
    0x4efd,	/*(份)*/
    0x5fff,	/*(忿)*/
    0x6124,	/*(愤)*/
    0x7caa,	/*(粪)*/
    0x4e30,	/*(丰)*/
    0x5c01,	/*(封)*/
    0x67ab,	/*(枫)*/
    0x8702,	/*(蜂)*/
    0x5cf0,	/*(峰)*/
    0x950b,	/*(锋)*/
    0x98ce,	/*(风)*/
    0x75af,	/*(疯)*/
    0x70fd,	/*(烽)*/
    0x9022,	/*(逢)*/
    0x51af,	/*(冯)*/
    0x7f1d,	/*(缝)*/
    0x8bbd,	/*(讽)*/
    0x5949,	/*(奉)*/
    0x51e4,	/*(凤)*/
    0x4f5b,	/*(佛)*/
    0x5426,	/*(否)*/
    0x592b,	/*(夫)*/
    0x6577,	/*(敷)*/
    0x80a4,	/*(肤)*/
    0x5b75,	/*(孵)*/
    0x6276,	/*(扶)*/
    0x62c2,	/*(拂)*/
    0x8f90,	/*(辐)*/
    0x5e45,	/*(幅)*/
    0x6c1f,	/*(氟)*/
    0x7b26,	/*(符)*/
    0x4f0f,	/*(伏)*/
    0x4fd8,	/*(俘)*/
    0x670d,	/*(服)*/
    0x6d6e,	/*(浮)*/
    0x6daa,	/*(涪)*/
    0x798f,	/*(福)*/
    0x88b1,	/*(袱)*/
    0x5f17,	/*(弗)*/
    0x752b,	/*(甫)*/
    0x629a,	/*(抚)*/
    0x8f85,	/*(辅)*/
    0x4fef,	/*(俯)*/
    0x91dc,	/*(釜)*/
    0x65a7,	/*(斧)*/
    0x812f,	/*(脯)*/
    0x8151,	/*(腑)*/
    0x5e9c,	/*(府)*/
    0x8150,	/*(腐)*/
    0x8d74,	/*(赴)*/
    0x526f,	/*(副)*/
    0x8986,	/*(覆)*/
    0x8d4b,	/*(赋)*/
    0x590d,	/*(复)*/
    0x5085,	/*(傅)*/
    0x4ed8,	/*(付)*/
    0x961c,	/*(阜)*/
    0x7236,	/*(父)*/
    0x8179,	/*(腹)*/
    0x8d1f,	/*(负)*/
    0x5bcc,	/*(富)*/
    0x8ba3,	/*(讣)*/
    0x9644,	/*(附)*/
    0x5987,	/*(妇)*/
    0x7f1a,	/*(缚)*/
    0x5490,	/*(咐)*/
    0x5676,	/*(噶)*/
    0x560e,	/*(嘎)*/
    0x8be5,	/*(该)*/
    0x6539,	/*(改)*/
    0x6982,	/*(概)*/
    0x9499,	/*(钙)*/
    0x76d6,	/*(盖)*/
    0x6e89,	/*(溉)*/
    0x5e72,	/*(干)*/
    0x7518,	/*(甘)*/
    0x6746,	/*(杆)*/
    0x67d1,	/*(柑)*/
    0x7aff,	/*(竿)*/
    0x809d,	/*(肝)*/
    0x8d76,	/*(赶)*/
    0x611f,	/*(感)*/
    0x79c6,	/*(秆)*/
    0x6562,	/*(敢)*/
    0x8d63,	/*(赣)*/
    0x5188,	/*(冈)*/
    0x521a,	/*(刚)*/
    0x94a2,	/*(钢)*/
    0x7f38,	/*(缸)*/
    0x809b,	/*(肛)*/
    0x7eb2,	/*(纲)*/
    0x5c97,	/*(岗)*/
    0x6e2f,	/*(港)*/
    0x6760,	/*(杠)*/
    0x7bd9,	/*(篙)*/
    0x768b,	/*(皋)*/
    0x9ad8,	/*(高)*/
    0x818f,	/*(膏)*/
    0x7f94,	/*(羔)*/
    0x7cd5,	/*(糕)*/
    0x641e,	/*(搞)*/
    0x9550,	/*(镐)*/
    0x7a3f,	/*(稿)*/
    0x544a,	/*(告)*/
    0x54e5,	/*(哥)*/
    0x6b4c,	/*(歌)*/
    0x6401,	/*(搁)*/
    0x6208,	/*(戈)*/
    0x9e3d,	/*(鸽)*/
    0x80f3,	/*(胳)*/
    0x7599,	/*(疙)*/
    0x5272,	/*(割)*/
    0x9769,	/*(革)*/
    0x845b,	/*(葛)*/
    0x683c,	/*(格)*/
    0x86e4,	/*(蛤)*/
    0x9601,	/*(阁)*/
    0x9694,	/*(隔)*/
    0x94ec,	/*(铬)*/
    0x4e2a,	/*(个)*/
    0x5404,	/*(各)*/
    0x7ed9,	/*(给)*/
    0x6839,	/*(根)*/
    0x8ddf,	/*(跟)*/
    0x8015,	/*(耕)*/
    0x66f4,	/*(更)*/
    0x5e9a,	/*(庚)*/
    0x7fb9,	/*(羹)*/
    0x57c2,	/*(埂)*/
    0x803f,	/*(耿)*/
    0x6897,	/*(梗)*/
    0x5de5,	/*(工)*/
    0x653b,	/*(攻)*/
    0x529f,	/*(功)*/
    0x606d,	/*(恭)*/
    0x9f9a,	/*(龚)*/
    0x4f9b,	/*(供)*/
    0x8eac,	/*(躬)*/
    0x516c,	/*(公)*/
    0x5bab,	/*(宫)*/
    0x5f13,	/*(弓)*/
    0x5de9,	/*(巩)*/
    0x6c5e,	/*(汞)*/
    0x62f1,	/*(拱)*/
    0x8d21,	/*(贡)*/
    0x5171,	/*(共)*/
    0x94a9,	/*(钩)*/
    0x52fe,	/*(勾)*/
    0x6c9f,	/*(沟)*/
    0x82df,	/*(苟)*/
    0x72d7,	/*(狗)*/
    0x57a2,	/*(垢)*/
    0x6784,	/*(构)*/
    0x8d2d,	/*(购)*/
    0x591f,	/*(够)*/
    0x8f9c,	/*(辜)*/
    0x83c7,	/*(菇)*/
    0x5495,	/*(咕)*/
    0x7b8d,	/*(箍)*/
    0x4f30,	/*(估)*/
    0x6cbd,	/*(沽)*/
    0x5b64,	/*(孤)*/
    0x59d1,	/*(姑)*/
    0x9f13,	/*(鼓)*/
    0x53e4,	/*(古)*/
    0x86ca,	/*(蛊)*/
    0x9aa8,	/*(骨)*/
    0x8c37,	/*(谷)*/
    0x80a1,	/*(股)*/
    0x6545,	/*(故)*/
    0x987e,	/*(顾)*/
    0x56fa,	/*(固)*/
    0x96c7,	/*(雇)*/
    0x522e,	/*(刮)*/
    0x74dc,	/*(瓜)*/
    0x5250,	/*(剐)*/
    0x5be1,	/*(寡)*/
    0x6302,	/*(挂)*/
    0x8902,	/*(褂)*/
    0x4e56,	/*(乖)*/
    0x62d0,	/*(拐)*/
    0x602a,	/*(怪)*/
    0x68fa,	/*(棺)*/
    0x5173,	/*(关)*/
    0x5b98,	/*(官)*/
    0x51a0,	/*(冠)*/
    0x89c2,	/*(观)*/
    0x7ba1,	/*(管)*/
    0x9986,	/*(馆)*/
    0x7f50,	/*(罐)*/
    0x60ef,	/*(惯)*/
    0x704c,	/*(灌)*/
    0x8d2f,	/*(贯)*/
    0x5149,	/*(光)*/
    0x5e7f,	/*(广)*/
    0x901b,	/*(逛)*/
    0x7470,	/*(瑰)*/
    0x89c4,	/*(规)*/
    0x572d,	/*(圭)*/
    0x7845,	/*(硅)*/
    0x5f52,	/*(归)*/
    0x9f9f,	/*(龟)*/
    0x95fa,	/*(闺)*/
    0x8f68,	/*(轨)*/
    0x9b3c,	/*(鬼)*/
    0x8be1,	/*(诡)*/
    0x7678,	/*(癸)*/
    0x6842,	/*(桂)*/
    0x67dc,	/*(柜)*/
    0x8dea,	/*(跪)*/
    0x8d35,	/*(贵)*/
    0x523d,	/*(刽)*/
    0x8f8a,	/*(辊)*/
    0x6eda,	/*(滚)*/
    0x68cd,	/*(棍)*/
    0x9505,	/*(锅)*/
    0x90ed,	/*(郭)*/
    0x56fd,	/*(国)*/
    0x679c,	/*(果)*/
    0x88f9,	/*(裹)*/
    0x8fc7,	/*(过)*/
    0x54c8,	/*(哈)*/
    0x9ab8,	/*(骸)*/
    0x5b69,	/*(孩)*/
    0x6d77,	/*(海)*/
    0x6c26,	/*(氦)*/
    0x4ea5,	/*(亥)*/
    0x5bb3,	/*(害)*/
    0x9a87,	/*(骇)*/
    0x9163,	/*(酣)*/
    0x61a8,	/*(憨)*/
    0x90af,	/*(邯)*/
    0x97e9,	/*(韩)*/
    0x542b,	/*(含)*/
    0x6db5,	/*(涵)*/
    0x5bd2,	/*(寒)*/
    0x51fd,	/*(函)*/
    0x558a,	/*(喊)*/
    0x7f55,	/*(罕)*/
    0x7ff0,	/*(翰)*/
    0x64bc,	/*(撼)*/
    0x634d,	/*(捍)*/
    0x65f1,	/*(旱)*/
    0x61be,	/*(憾)*/
    0x608d,	/*(悍)*/
    0x710a,	/*(焊)*/
    0x6c57,	/*(汗)*/
    0x6c49,	/*(汉)*/
    0x592f,	/*(夯)*/
    0x676d,	/*(杭)*/
    0x822a,	/*(航)*/
    0x58d5,	/*(壕)*/
    0x568e,	/*(嚎)*/
    0x8c6a,	/*(豪)*/
    0x6beb,	/*(毫)*/
    0x90dd,	/*(郝)*/
    0x597d,	/*(好)*/
    0x8017,	/*(耗)*/
    0x53f7,	/*(号)*/
    0x6d69,	/*(浩)*/
    0x5475,	/*(呵)*/
    0x559d,	/*(喝)*/
    0x8377,	/*(荷)*/
    0x83cf,	/*(菏)*/
    0x6838,	/*(核)*/
    0x79be,	/*(禾)*/
    0x548c,	/*(和)*/
    0x4f55,	/*(何)*/
    0x5408,	/*(合)*/
    0x76d2,	/*(盒)*/
    0x8c89,	/*(貉)*/
    0x9602,	/*(阂)*/
    0x6cb3,	/*(河)*/
    0x6db8,	/*(涸)*/
    0x8d6b,	/*(赫)*/
    0x8910,	/*(褐)*/
    0x9e64,	/*(鹤)*/
    0x8d3a,	/*(贺)*/
    0x563f,	/*(嘿)*/
    0x9ed1,	/*(黑)*/
    0x75d5,	/*(痕)*/
    0x5f88,	/*(很)*/
    0x72e0,	/*(狠)*/
    0x6068,	/*(恨)*/
    0x54fc,	/*(哼)*/
    0x4ea8,	/*(亨)*/
    0x6a2a,	/*(横)*/
    0x8861,	/*(衡)*/
    0x6052,	/*(恒)*/
    0x8f70,	/*(轰)*/
    0x54c4,	/*(哄)*/
    0x70d8,	/*(烘)*/
    0x8679,	/*(虹)*/
    0x9e3f,	/*(鸿)*/
    0x6d2a,	/*(洪)*/
    0x5b8f,	/*(宏)*/
    0x5f18,	/*(弘)*/
    0x7ea2,	/*(红)*/
    0x5589,	/*(喉)*/
    0x4faf,	/*(侯)*/
    0x7334,	/*(猴)*/
    0x543c,	/*(吼)*/
    0x539a,	/*(厚)*/
    0x5019,	/*(候)*/
    0x540e,	/*(后)*/
    0x547c,	/*(呼)*/
    0x4e4e,	/*(乎)*/
    0x5ffd,	/*(忽)*/
    0x745a,	/*(瑚)*/
    0x58f6,	/*(壶)*/
    0x846b,	/*(葫)*/
    0x80e1,	/*(胡)*/
    0x8774,	/*(蝴)*/
    0x72d0,	/*(狐)*/
    0x7cca,	/*(糊)*/
    0x6e56,	/*(湖)*/
    0x5f27,	/*(弧)*/
    0x864e,	/*(虎)*/
    0x552c,	/*(唬)*/
    0x62a4,	/*(护)*/
    0x4e92,	/*(互)*/
    0x6caa,	/*(沪)*/
    0x6237,	/*(户)*/
    0x82b1,	/*(花)*/
    0x54d7,	/*(哗)*/
    0x534e,	/*(华)*/
    0x733e,	/*(猾)*/
    0x6ed1,	/*(滑)*/
    0x753b,	/*(画)*/
    0x5212,	/*(划)*/
    0x5316,	/*(化)*/
    0x8bdd,	/*(话)*/
    0x69d0,	/*(槐)*/
    0x5f8a,	/*(徊)*/
    0x6000,	/*(怀)*/
    0x6dee,	/*(淮)*/
    0x574f,	/*(坏)*/
    0x6b22,	/*(欢)*/
    0x73af,	/*(环)*/
    0x6853,	/*(桓)*/
    0x8fd8,	/*(还)*/
    0x7f13,	/*(缓)*/
    0x6362,	/*(换)*/
    0x60a3,	/*(患)*/
    0x5524,	/*(唤)*/
    0x75ea,	/*(痪)*/
    0x8c62,	/*(豢)*/
    0x7115,	/*(焕)*/
    0x6da3,	/*(涣)*/
    0x5ba6,	/*(宦)*/
    0x5e7b,	/*(幻)*/
    0x8352,	/*(荒)*/
    0x614c,	/*(慌)*/
    0x9ec4,	/*(黄)*/
    0x78fa,	/*(磺)*/
    0x8757,	/*(蝗)*/
    0x7c27,	/*(簧)*/
    0x7687,	/*(皇)*/
    0x51f0,	/*(凰)*/
    0x60f6,	/*(惶)*/
    0x714c,	/*(煌)*/
    0x6643,	/*(晃)*/
    0x5e4c,	/*(幌)*/
    0x604d,	/*(恍)*/
    0x8c0e,	/*(谎)*/
    0x7070,	/*(灰)*/
    0x6325,	/*(挥)*/
    0x8f89,	/*(辉)*/
    0x5fbd,	/*(徽)*/
    0x6062,	/*(恢)*/
    0x86d4,	/*(蛔)*/
    0x56de,	/*(回)*/
    0x6bc1,	/*(毁)*/
    0x6094,	/*(悔)*/
    0x6167,	/*(慧)*/
    0x5349,	/*(卉)*/
    0x60e0,	/*(惠)*/
    0x6666,	/*(晦)*/
    0x8d3f,	/*(贿)*/
    0x79fd,	/*(秽)*/
    0x4f1a,	/*(会)*/
    0x70e9,	/*(烩)*/
    0x6c47,	/*(汇)*/
    0x8bb3,	/*(讳)*/
    0x8bf2,	/*(诲)*/
    0x7ed8,	/*(绘)*/
    0x8364,	/*(荤)*/
    0x660f,	/*(昏)*/
    0x5a5a,	/*(婚)*/
    0x9b42,	/*(魂)*/
    0x6d51,	/*(浑)*/
    0x6df7,	/*(混)*/
    0x8c41,	/*(豁)*/
    0x6d3b,	/*(活)*/
    0x4f19,	/*(伙)*/
    0x706b,	/*(火)*/
    0x83b7,	/*(获)*/
    0x6216,	/*(或)*/
    0x60d1,	/*(惑)*/
    0x970d,	/*(霍)*/
    0x8d27,	/*(货)*/
    0x7978,	/*(祸)*/
    0x51fb,	/*(击)*/
    0x573e,	/*(圾)*/
    0x57fa,	/*(基)*/
    0x673a,	/*(机)*/
    0x7578,	/*(畸)*/
    0x7a3d,	/*(稽)*/
    0x79ef,	/*(积)*/
    0x7b95,	/*(箕)*/
    0x808c,	/*(肌)*/
    0x9965,	/*(饥)*/
    0x8ff9,	/*(迹)*/
    0x6fc0,	/*(激)*/
    0x8ba5,	/*(讥)*/
    0x9e21,	/*(鸡)*/
    0x59ec,	/*(姬)*/
    0x7ee9,	/*(绩)*/
    0x7f09,	/*(缉)*/
    0x5409,	/*(吉)*/
    0x6781,	/*(极)*/
    0x68d8,	/*(棘)*/
    0x8f91,	/*(辑)*/
    0x7c4d,	/*(籍)*/
    0x96c6,	/*(集)*/
    0x53ca,	/*(及)*/
    0x6025,	/*(急)*/
    0x75be,	/*(疾)*/
    0x6c72,	/*(汲)*/
    0x5373,	/*(即)*/
    0x5ac9,	/*(嫉)*/
    0x7ea7,	/*(级)*/
    0x6324,	/*(挤)*/
    0x51e0,	/*(几)*/
    0x810a,	/*(脊)*/
    0x5df1,	/*(己)*/
    0x84df,	/*(蓟)*/
    0x6280,	/*(技)*/
    0x5180,	/*(冀)*/
    0x5b63,	/*(季)*/
    0x4f0e,	/*(伎)*/
    0x796d,	/*(祭)*/
    0x5242,	/*(剂)*/
    0x60b8,	/*(悸)*/
    0x6d4e,	/*(济)*/
    0x5bc4,	/*(寄)*/
    0x5bc2,	/*(寂)*/
    0x8ba1,	/*(计)*/
    0x8bb0,	/*(记)*/
    0x65e2,	/*(既)*/
    0x5fcc,	/*(忌)*/
    0x9645,	/*(际)*/
    0x5993,	/*(妓)*/
    0x7ee7,	/*(继)*/
    0x7eaa,	/*(纪)*/
    0x5609,	/*(嘉)*/
    0x67b7,	/*(枷)*/
    0x5939,	/*(夹)*/
    0x4f73,	/*(佳)*/
    0x5bb6,	/*(家)*/
    0x52a0,	/*(加)*/
    0x835a,	/*(荚)*/
    0x988a,	/*(颊)*/
    0x8d3e,	/*(贾)*/
    0x7532,	/*(甲)*/
    0x94be,	/*(钾)*/
    0x5047,	/*(假)*/
    0x7a3c,	/*(稼)*/
    0x4ef7,	/*(价)*/
    0x67b6,	/*(架)*/
    0x9a7e,	/*(驾)*/
    0x5ac1,	/*(嫁)*/
    0x6b7c,	/*(歼)*/
    0x76d1,	/*(监)*/
    0x575a,	/*(坚)*/
    0x5c16,	/*(尖)*/
    0x7b3a,	/*(笺)*/
    0x95f4,	/*(间)*/
    0x714e,	/*(煎)*/
    0x517c,	/*(兼)*/
    0x80a9,	/*(肩)*/
    0x8270,	/*(艰)*/
    0x5978,	/*(奸)*/
    0x7f04,	/*(缄)*/
    0x8327,	/*(茧)*/
    0x68c0,	/*(检)*/
    0x67ec,	/*(柬)*/
    0x78b1,	/*(碱)*/
    0x7877,	/*(硷)*/
    0x62e3,	/*(拣)*/
    0x6361,	/*(捡)*/
    0x7b80,	/*(简)*/
    0x4fed,	/*(俭)*/
    0x526a,	/*(剪)*/
    0x51cf,	/*(减)*/
    0x8350,	/*(荐)*/
    0x69db,	/*(槛)*/
    0x9274,	/*(鉴)*/
    0x8df5,	/*(践)*/
    0x8d31,	/*(贱)*/
    0x89c1,	/*(见)*/
    0x952e,	/*(键)*/
    0x7bad,	/*(箭)*/
    0x4ef6,	/*(件)*/
    0x5065,	/*(健)*/
    0x8230,	/*(舰)*/
    0x5251,	/*(剑)*/
    0x996f,	/*(饯)*/
    0x6e10,	/*(渐)*/
    0x6e85,	/*(溅)*/
    0x6da7,	/*(涧)*/
    0x5efa,	/*(建)*/
    0x50f5,	/*(僵)*/
    0x59dc,	/*(姜)*/
    0x5c06,	/*(将)*/
    0x6d46,	/*(浆)*/
    0x6c5f,	/*(江)*/
    0x7586,	/*(疆)*/
    0x848b,	/*(蒋)*/
    0x6868,	/*(桨)*/
    0x5956,	/*(奖)*/
    0x8bb2,	/*(讲)*/
    0x5320,	/*(匠)*/
    0x9171,	/*(酱)*/
    0x964d,	/*(降)*/
    0x8549,	/*(蕉)*/
    0x6912,	/*(椒)*/
    0x7901,	/*(礁)*/
    0x7126,	/*(焦)*/
    0x80f6,	/*(胶)*/
    0x4ea4,	/*(交)*/
    0x90ca,	/*(郊)*/
    0x6d47,	/*(浇)*/
    0x9a84,	/*(骄)*/
    0x5a07,	/*(娇)*/
    0x56bc,	/*(嚼)*/
    0x6405,	/*(搅)*/
    0x94f0,	/*(铰)*/
    0x77eb,	/*(矫)*/
    0x4fa5,	/*(侥)*/
    0x811a,	/*(脚)*/
    0x72e1,	/*(狡)*/
    0x89d2,	/*(角)*/
    0x997a,	/*(饺)*/
    0x7f34,	/*(缴)*/
    0x7ede,	/*(绞)*/
    0x527f,	/*(剿)*/
    0x6559,	/*(教)*/
    0x9175,	/*(酵)*/
    0x8f7f,	/*(轿)*/
    0x8f83,	/*(较)*/
    0x53eb,	/*(叫)*/
    0x7a96,	/*(窖)*/
    0x63ed,	/*(揭)*/
    0x63a5,	/*(接)*/
    0x7686,	/*(皆)*/
    0x79f8,	/*(秸)*/
    0x8857,	/*(街)*/
    0x9636,	/*(阶)*/
    0x622a,	/*(截)*/
    0x52ab,	/*(劫)*/
    0x8282,	/*(节)*/
    0x6854,	/*(桔)*/
    0x6770,	/*(杰)*/
    0x6377,	/*(捷)*/
    0x776b,	/*(睫)*/
    0x7aed,	/*(竭)*/
    0x6d01,	/*(洁)*/
    0x7ed3,	/*(结)*/
    0x89e3,	/*(解)*/
    0x59d0,	/*(姐)*/
    0x6212,	/*(戒)*/
    0x85c9,	/*(藉)*/
    0x82a5,	/*(芥)*/
    0x754c,	/*(界)*/
    0x501f,	/*(借)*/
    0x4ecb,	/*(介)*/
    0x75a5,	/*(疥)*/
    0x8beb,	/*(诫)*/
    0x5c4a,	/*(届)*/
    0x5dfe,	/*(巾)*/
    0x7b4b,	/*(筋)*/
    0x65a4,	/*(斤)*/
    0x91d1,	/*(金)*/
    0x4eca,	/*(今)*/
    0x6d25,	/*(津)*/
    0x895f,	/*(襟)*/
    0x7d27,	/*(紧)*/
    0x9526,	/*(锦)*/
    0x4ec5,	/*(仅)*/
    0x8c28,	/*(谨)*/
    0x8fdb,	/*(进)*/
    0x9773,	/*(靳)*/
    0x664b,	/*(晋)*/
    0x7981,	/*(禁)*/
    0x8fd1,	/*(近)*/
    0x70ec,	/*(烬)*/
    0x6d78,	/*(浸)*/
    0x5c3d,	/*(尽)*/
    0x52b2,	/*(劲)*/
    0x8346,	/*(荆)*/
    0x5162,	/*(兢)*/
    0x830e,	/*(茎)*/
    0x775b,	/*(睛)*/
    0x6676,	/*(晶)*/
    0x9cb8,	/*(鲸)*/
    0x4eac,	/*(京)*/
    0x60ca,	/*(惊)*/
    0x7cbe,	/*(精)*/
    0x7cb3,	/*(粳)*/
    0x7ecf,	/*(经)*/
    0x4e95,	/*(井)*/
    0x8b66,	/*(警)*/
    0x666f,	/*(景)*/
    0x9888,	/*(颈)*/
    0x9759,	/*(静)*/
    0x5883,	/*(境)*/
    0x656c,	/*(敬)*/
    0x955c,	/*(镜)*/
    0x5f84,	/*(径)*/
    0x75c9,	/*(痉)*/
    0x9756,	/*(靖)*/
    0x7adf,	/*(竟)*/
    0x7ade,	/*(竞)*/
    0x51c0,	/*(净)*/
    0x70af,	/*(炯)*/
    0x7a98,	/*(窘)*/
    0x63ea,	/*(揪)*/
    0x7a76,	/*(究)*/
    0x7ea0,	/*(纠)*/
    0x7396,	/*(玖)*/
    0x97ed,	/*(韭)*/
    0x4e45,	/*(久)*/
    0x7078,	/*(灸)*/
    0x4e5d,	/*(九)*/
    0x9152,	/*(酒)*/
    0x53a9,	/*(厩)*/
    0x6551,	/*(救)*/
    0x65e7,	/*(旧)*/
    0x81fc,	/*(臼)*/
    0x8205,	/*(舅)*/
    0x548e,	/*(咎)*/
    0x5c31,	/*(就)*/
    0x759a,	/*(疚)*/
    0x97a0,	/*(鞠)*/
    0x62d8,	/*(拘)*/
    0x72d9,	/*(狙)*/
    0x75bd,	/*(疽)*/
    0x5c45,	/*(居)*/
    0x9a79,	/*(驹)*/
    0x83ca,	/*(菊)*/
    0x5c40,	/*(局)*/
    0x5480,	/*(咀)*/
    0x77e9,	/*(矩)*/
    0x4e3e,	/*(举)*/
    0x6cae,	/*(沮)*/
    0x805a,	/*(聚)*/
    0x62d2,	/*(拒)*/
    0x636e,	/*(据)*/
    0x5de8,	/*(巨)*/
    0x5177,	/*(具)*/
    0x8ddd,	/*(距)*/
    0x8e1e,	/*(踞)*/
    0x952f,	/*(锯)*/
    0x4ff1,	/*(俱)*/
    0x53e5,	/*(句)*/
    0x60e7,	/*(惧)*/
    0x70ac,	/*(炬)*/
    0x5267,	/*(剧)*/
    0x6350,	/*(捐)*/
    0x9e43,	/*(鹃)*/
    0x5a1f,	/*(娟)*/
    0x5026,	/*(倦)*/
    0x7737,	/*(眷)*/
    0x5377,	/*(卷)*/
    0x7ee2,	/*(绢)*/
    0x6485,	/*(撅)*/
    0x652b,	/*(攫)*/
    0x6289,	/*(抉)*/
    0x6398,	/*(掘)*/
    0x5014,	/*(倔)*/
    0x7235,	/*(爵)*/
    0x89c9,	/*(觉)*/
    0x51b3,	/*(决)*/
    0x8bc0,	/*(诀)*/
    0x7edd,	/*(绝)*/
    0x5747,	/*(均)*/
    0x83cc,	/*(菌)*/
    0x94a7,	/*(钧)*/
    0x519b,	/*(军)*/
    0x541b,	/*(君)*/
    0x5cfb,	/*(峻)*/
    0x4fca,	/*(俊)*/
    0x7ae3,	/*(竣)*/
    0x6d5a,	/*(浚)*/
    0x90e1,	/*(郡)*/
    0x9a8f,	/*(骏)*/
    0x5580,	/*(喀)*/
    0x5496,	/*(咖)*/
    0x5361,	/*(卡)*/
    0x54af,	/*(咯)*/
    0x5f00,	/*(开)*/
    0x63e9,	/*(揩)*/
    0x6977,	/*(楷)*/
    0x51ef,	/*(凯)*/
    0x6168,	/*(慨)*/
    0x520a,	/*(刊)*/
    0x582a,	/*(堪)*/
    0x52d8,	/*(勘)*/
    0x574e,	/*(坎)*/
    0x780d,	/*(砍)*/
    0x770b,	/*(看)*/
    0x5eb7,	/*(康)*/
    0x6177,	/*(慷)*/
    0x7ce0,	/*(糠)*/
    0x625b,	/*(扛)*/
    0x6297,	/*(抗)*/
    0x4ea2,	/*(亢)*/
    0x7095,	/*(炕)*/
    0x8003,	/*(考)*/
    0x62f7,	/*(拷)*/
    0x70e4,	/*(烤)*/
    0x9760,	/*(靠)*/
    0x5777,	/*(坷)*/
    0x82db,	/*(苛)*/
    0x67ef,	/*(柯)*/
    0x68f5,	/*(棵)*/
    0x78d5,	/*(磕)*/
    0x9897,	/*(颗)*/
    0x79d1,	/*(科)*/
    0x58f3,	/*(壳)*/
    0x54b3,	/*(咳)*/
    0x53ef,	/*(可)*/
    0x6e34,	/*(渴)*/
    0x514b,	/*(克)*/
    0x523b,	/*(刻)*/
    0x5ba2,	/*(客)*/
    0x8bfe,	/*(课)*/
    0x80af,	/*(肯)*/
    0x5543,	/*(啃)*/
    0x57a6,	/*(垦)*/
    0x6073,	/*(恳)*/
    0x5751,	/*(坑)*/
    0x542d,	/*(吭)*/
    0x7a7a,	/*(空)*/
    0x6050,	/*(恐)*/
    0x5b54,	/*(孔)*/
    0x63a7,	/*(控)*/
    0x62a0,	/*(抠)*/
    0x53e3,	/*(口)*/
    0x6263,	/*(扣)*/
    0x5bc7,	/*(寇)*/
    0x67af,	/*(枯)*/
    0x54ed,	/*(哭)*/
    0x7a9f,	/*(窟)*/
    0x82e6,	/*(苦)*/
    0x9177,	/*(酷)*/
    0x5e93,	/*(库)*/
    0x88e4,	/*(裤)*/
    0x5938,	/*(夸)*/
    0x57ae,	/*(垮)*/
    0x630e,	/*(挎)*/
    0x8de8,	/*(跨)*/
    0x80ef,	/*(胯)*/
    0x5757,	/*(块)*/
    0x7b77,	/*(筷)*/
    0x4fa9,	/*(侩)*/
    0x5feb,	/*(快)*/
    0x5bbd,	/*(宽)*/
    0x6b3e,	/*(款)*/
    0x5321,	/*(匡)*/
    0x7b50,	/*(筐)*/
    0x72c2,	/*(狂)*/
    0x6846,	/*(框)*/
    0x77ff,	/*(矿)*/
    0x7736,	/*(眶)*/
    0x65f7,	/*(旷)*/
    0x51b5,	/*(况)*/
    0x4e8f,	/*(亏)*/
    0x76d4,	/*(盔)*/
    0x5cbf,	/*(岿)*/
    0x7aa5,	/*(窥)*/
    0x8475,	/*(葵)*/
    0x594e,	/*(奎)*/
    0x9b41,	/*(魁)*/
    0x5080,	/*(傀)*/
    0x9988,	/*(馈)*/
    0x6127,	/*(愧)*/
    0x6e83,	/*(溃)*/
    0x5764,	/*(坤)*/
    0x6606,	/*(昆)*/
    0x6346,	/*(捆)*/
    0x56f0,	/*(困)*/
    0x62ec,	/*(括)*/
    0x6269,	/*(扩)*/
    0x5ed3,	/*(廓)*/
    0x9614,	/*(阔)*/
    0x5783,	/*(垃)*/
    0x62c9,	/*(拉)*/
    0x5587,	/*(喇)*/
    0x8721,	/*(蜡)*/
    0x814a,	/*(腊)*/
    0x8fa3,	/*(辣)*/
    0x5566,	/*(啦)*/
    0x83b1,	/*(莱)*/
    0x6765,	/*(来)*/
    0x8d56,	/*(赖)*/
    0x84dd,	/*(蓝)*/
    0x5a6a,	/*(婪)*/
    0x680f,	/*(栏)*/
    0x62e6,	/*(拦)*/
    0x7bee,	/*(篮)*/
    0x9611,	/*(阑)*/
    0x5170,	/*(兰)*/
    0x6f9c,	/*(澜)*/
    0x8c30,	/*(谰)*/
    0x63fd,	/*(揽)*/
    0x89c8,	/*(览)*/
    0x61d2,	/*(懒)*/
    0x7f06,	/*(缆)*/
    0x70c2,	/*(烂)*/
    0x6ee5,	/*(滥)*/
    0x7405,	/*(琅)*/
    0x6994,	/*(榔)*/
    0x72fc,	/*(狼)*/
    0x5eca,	/*(廊)*/
    0x90ce,	/*(郎)*/
    0x6717,	/*(朗)*/
    0x6d6a,	/*(浪)*/
    0x635e,	/*(捞)*/
    0x52b3,	/*(劳)*/
    0x7262,	/*(牢)*/
    0x8001,	/*(老)*/
    0x4f6c,	/*(佬)*/
    0x59e5,	/*(姥)*/
    0x916a,	/*(酪)*/
    0x70d9,	/*(烙)*/
    0x6d9d,	/*(涝)*/
    0x52d2,	/*(勒)*/
    0x4e50,	/*(乐)*/
    0x96f7,	/*(雷)*/
    0x956d,	/*(镭)*/
    0x857e,	/*(蕾)*/
    0x78ca,	/*(磊)*/
    0x7d2f,	/*(累)*/
    0x5121,	/*(儡)*/
    0x5792,	/*(垒)*/
    0x64c2,	/*(擂)*/
    0x808b,	/*(肋)*/
    0x7c7b,	/*(类)*/
    0x6cea,	/*(泪)*/
    0x68f1,	/*(棱)*/
    0x695e,	/*(楞)*/
    0x51b7,	/*(冷)*/
    0x5398,	/*(厘)*/
    0x68a8,	/*(梨)*/
    0x7281,	/*(犁)*/
    0x9ece,	/*(黎)*/
    0x7bf1,	/*(篱)*/
    0x72f8,	/*(狸)*/
    0x79bb,	/*(离)*/
    0x6f13,	/*(漓)*/
    0x7406,	/*(理)*/
    0x674e,	/*(李)*/
    0x91cc,	/*(里)*/
    0x9ca4,	/*(鲤)*/
    0x793c,	/*(礼)*/
    0x8389,	/*(莉)*/
    0x8354,	/*(荔)*/
    0x540f,	/*(吏)*/
    0x6817,	/*(栗)*/
    0x4e3d,	/*(丽)*/
    0x5389,	/*(厉)*/
    0x52b1,	/*(励)*/
    0x783e,	/*(砾)*/
    0x5386,	/*(历)*/
    0x5229,	/*(利)*/
    0x5088,	/*(傈)*/
    0x4f8b,	/*(例)*/
    0x4fd0,	/*(俐)*/
    0x75e2,	/*(痢)*/
    0x7acb,	/*(立)*/
    0x7c92,	/*(粒)*/
    0x6ca5,	/*(沥)*/
    0x96b6,	/*(隶)*/
    0x529b,	/*(力)*/
    0x7483,	/*(璃)*/
    0x54e9,	/*(哩)*/
    0x4fe9,	/*(俩)*/
    0x8054,	/*(联)*/
    0x83b2,	/*(莲)*/
    0x8fde,	/*(连)*/
    0x9570,	/*(镰)*/
    0x5ec9,	/*(廉)*/
    0x601c,	/*(怜)*/
    0x6d9f,	/*(涟)*/
    0x5e18,	/*(帘)*/
    0x655b,	/*(敛)*/
    0x8138,	/*(脸)*/
    0x94fe,	/*(链)*/
    0x604b,	/*(恋)*/
    0x70bc,	/*(炼)*/
    0x7ec3,	/*(练)*/
    0x7cae,	/*(粮)*/
    0x51c9,	/*(凉)*/
    0x6881,	/*(梁)*/
    0x7cb1,	/*(粱)*/
    0x826f,	/*(良)*/
    0x4e24,	/*(两)*/
    0x8f86,	/*(辆)*/
    0x91cf,	/*(量)*/
    0x667e,	/*(晾)*/
    0x4eae,	/*(亮)*/
    0x8c05,	/*(谅)*/
    0x64a9,	/*(撩)*/
    0x804a,	/*(聊)*/
    0x50da,	/*(僚)*/
    0x7597,	/*(疗)*/
    0x71ce,	/*(燎)*/
    0x5be5,	/*(寥)*/
    0x8fbd,	/*(辽)*/
    0x6f66,	/*(潦)*/
    0x4e86,	/*(了)*/
    0x6482,	/*(撂)*/
    0x9563,	/*(镣)*/
    0x5ed6,	/*(廖)*/
    0x6599,	/*(料)*/
    0x5217,	/*(列)*/
    0x88c2,	/*(裂)*/
    0x70c8,	/*(烈)*/
    0x52a3,	/*(劣)*/
    0x730e,	/*(猎)*/
    0x7433,	/*(琳)*/
    0x6797,	/*(林)*/
    0x78f7,	/*(磷)*/
    0x9716,	/*(霖)*/
    0x4e34,	/*(临)*/
    0x90bb,	/*(邻)*/
    0x9cde,	/*(鳞)*/
    0x6dcb,	/*(淋)*/
    0x51db,	/*(凛)*/
    0x8d41,	/*(赁)*/
    0x541d,	/*(吝)*/
    0x62ce,	/*(拎)*/
    0x73b2,	/*(玲)*/
    0x83f1,	/*(菱)*/
    0x96f6,	/*(零)*/
    0x9f84,	/*(龄)*/
    0x94c3,	/*(铃)*/
    0x4f36,	/*(伶)*/
    0x7f9a,	/*(羚)*/
    0x51cc,	/*(凌)*/
    0x7075,	/*(灵)*/
    0x9675,	/*(陵)*/
    0x5cad,	/*(岭)*/
    0x9886,	/*(领)*/
    0x53e6,	/*(另)*/
    0x4ee4,	/*(令)*/
    0x6e9c,	/*(溜)*/
    0x7409,	/*(琉)*/
    0x69b4,	/*(榴)*/
    0x786b,	/*(硫)*/
    0x998f,	/*(馏)*/
    0x7559,	/*(留)*/
    0x5218,	/*(刘)*/
    0x7624,	/*(瘤)*/
    0x6d41,	/*(流)*/
    0x67f3,	/*(柳)*/
    0x516d,	/*(六)*/
    0x9f99,	/*(龙)*/
    0x804b,	/*(聋)*/
    0x5499,	/*(咙)*/
    0x7b3c,	/*(笼)*/
    0x7abf,	/*(窿)*/
    0x9686,	/*(隆)*/
    0x5784,	/*(垄)*/
    0x62e2,	/*(拢)*/
    0x9647,	/*(陇)*/
    0x697c,	/*(楼)*/
    0x5a04,	/*(娄)*/
    0x6402,	/*(搂)*/
    0x7bd3,	/*(篓)*/
    0x6f0f,	/*(漏)*/
    0x964b,	/*(陋)*/
    0x82a6,	/*(芦)*/
    0x5362,	/*(卢)*/
    0x9885,	/*(颅)*/
    0x5e90,	/*(庐)*/
    0x7089,	/*(炉)*/
    0x63b3,	/*(掳)*/
    0x5364,	/*(卤)*/
    0x864f,	/*(虏)*/
    0x9c81,	/*(鲁)*/
    0x9e93,	/*(麓)*/
    0x788c,	/*(碌)*/
    0x9732,	/*(露)*/
    0x8def,	/*(路)*/
    0x8d42,	/*(赂)*/
    0x9e7f,	/*(鹿)*/
    0x6f5e,	/*(潞)*/
    0x7984,	/*(禄)*/
    0x5f55,	/*(录)*/
    0x9646,	/*(陆)*/
    0x622e,	/*(戮)*/
    0x9a74,	/*(驴)*/
    0x5415,	/*(吕)*/
    0x94dd,	/*(铝)*/
    0x4fa3,	/*(侣)*/
    0x65c5,	/*(旅)*/
    0x5c65,	/*(履)*/
    0x5c61,	/*(屡)*/
    0x7f15,	/*(缕)*/
    0x8651,	/*(虑)*/
    0x6c2f,	/*(氯)*/
    0x5f8b,	/*(律)*/
    0x7387,	/*(率)*/
    0x6ee4,	/*(滤)*/
    0x7eff,	/*(绿)*/
    0x5ce6,	/*(峦)*/
    0x631b,	/*(挛)*/
    0x5b6a,	/*(孪)*/
    0x6ee6,	/*(滦)*/
    0x5375,	/*(卵)*/
    0x4e71,	/*(乱)*/
    0x63a0,	/*(掠)*/
    0x7565,	/*(略)*/
    0x62a1,	/*(抡)*/
    0x8f6e,	/*(轮)*/
    0x4f26,	/*(伦)*/
    0x4ed1,	/*(仑)*/
    0x6ca6,	/*(沦)*/
    0x7eb6,	/*(纶)*/
    0x8bba,	/*(论)*/
    0x841d,	/*(萝)*/
    0x87ba,	/*(螺)*/
    0x7f57,	/*(罗)*/
    0x903b,	/*(逻)*/
    0x9523,	/*(锣)*/
    0x7ba9,	/*(箩)*/
    0x9aa1,	/*(骡)*/
    0x88f8,	/*(裸)*/
    0x843d,	/*(落)*/
    0x6d1b,	/*(洛)*/
    0x9a86,	/*(骆)*/
    0x7edc,	/*(络)*/
    0x5988,	/*(妈)*/
    0x9ebb,	/*(麻)*/
    0x739b,	/*(玛)*/
    0x7801,	/*(码)*/
    0x8682,	/*(蚂)*/
    0x9a6c,	/*(马)*/
    0x9a82,	/*(骂)*/
    0x561b,	/*(嘛)*/
    0x5417,	/*(吗)*/
    0x57cb,	/*(埋)*/
    0x4e70,	/*(买)*/
    0x9ea6,	/*(麦)*/
    0x5356,	/*(卖)*/
    0x8fc8,	/*(迈)*/
    0x8109,	/*(脉)*/
    0x7792,	/*(瞒)*/
    0x9992,	/*(馒)*/
    0x86ee,	/*(蛮)*/
    0x6ee1,	/*(满)*/
    0x8513,	/*(蔓)*/
    0x66fc,	/*(曼)*/
    0x6162,	/*(慢)*/
    0x6f2b,	/*(漫)*/
    0x8c29,	/*(谩)*/
    0x8292,	/*(芒)*/
    0x832b,	/*(茫)*/
    0x76f2,	/*(盲)*/
    0x6c13,	/*(氓)*/
    0x5fd9,	/*(忙)*/
    0x83bd,	/*(莽)*/
    0x732b,	/*(猫)*/
    0x8305,	/*(茅)*/
    0x951a,	/*(锚)*/
    0x6bdb,	/*(毛)*/
    0x77db,	/*(矛)*/
    0x94c6,	/*(铆)*/
    0x536f,	/*(卯)*/
    0x8302,	/*(茂)*/
    0x5192,	/*(冒)*/
    0x5e3d,	/*(帽)*/
    0x8c8c,	/*(貌)*/
    0x8d38,	/*(贸)*/
    0x4e48,	/*(么)*/
    0x73ab,	/*(玫)*/
    0x679a,	/*(枚)*/
    0x6885,	/*(梅)*/
    0x9176,	/*(酶)*/
    0x9709,	/*(霉)*/
    0x7164,	/*(煤)*/
    0x6ca1,	/*(没)*/
    0x7709,	/*(眉)*/
    0x5a92,	/*(媒)*/
    0x9541,	/*(镁)*/
    0x6bcf,	/*(每)*/
    0x7f8e,	/*(美)*/
    0x6627,	/*(昧)*/
    0x5bd0,	/*(寐)*/
    0x59b9,	/*(妹)*/
    0x5a9a,	/*(媚)*/
    0x95e8,	/*(门)*/
    0x95f7,	/*(闷)*/
    0x4eec,	/*(们)*/
    0x840c,	/*(萌)*/
    0x8499,	/*(蒙)*/
    0x6aac,	/*(檬)*/
    0x76df,	/*(盟)*/
    0x9530,	/*(锰)*/
    0x731b,	/*(猛)*/
    0x68a6,	/*(梦)*/
    0x5b5f,	/*(孟)*/
    0x772f,	/*(眯)*/
    0x919a,	/*(醚)*/
    0x9761,	/*(靡)*/
    0x7cdc,	/*(糜)*/
    0x8ff7,	/*(迷)*/
    0x8c1c,	/*(谜)*/
    0x5f25,	/*(弥)*/
    0x7c73,	/*(米)*/
    0x79d8,	/*(秘)*/
    0x89c5,	/*(觅)*/
    0x6ccc,	/*(泌)*/
    0x871c,	/*(蜜)*/
    0x5bc6,	/*(密)*/
    0x5e42,	/*(幂)*/
    0x68c9,	/*(棉)*/
    0x7720,	/*(眠)*/
    0x7ef5,	/*(绵)*/
    0x5195,	/*(冕)*/
    0x514d,	/*(免)*/
    0x52c9,	/*(勉)*/
    0x5a29,	/*(娩)*/
    0x7f05,	/*(缅)*/
    0x9762,	/*(面)*/
    0x82d7,	/*(苗)*/
    0x63cf,	/*(描)*/
    0x7784,	/*(瞄)*/
    0x85d0,	/*(藐)*/
    0x79d2,	/*(秒)*/
    0x6e3a,	/*(渺)*/
    0x5e99,	/*(庙)*/
    0x5999,	/*(妙)*/
    0x8511,	/*(蔑)*/
    0x706d,	/*(灭)*/
    0x6c11,	/*(民)*/
    0x62bf,	/*(抿)*/
    0x76bf,	/*(皿)*/
    0x654f,	/*(敏)*/
    0x60af,	/*(悯)*/
    0x95fd,	/*(闽)*/
    0x660e,	/*(明)*/
    0x879f,	/*(螟)*/
    0x9e23,	/*(鸣)*/
    0x94ed,	/*(铭)*/
    0x540d,	/*(名)*/
    0x547d,	/*(命)*/
    0x8c2c,	/*(谬)*/
    0x6478,	/*(摸)*/
    0x6479,	/*(摹)*/
    0x8611,	/*(蘑)*/
    0x6a21,	/*(模)*/
    0x819c,	/*(膜)*/
    0x78e8,	/*(磨)*/
    0x6469,	/*(摩)*/
    0x9b54,	/*(魔)*/
    0x62b9,	/*(抹)*/
    0x672b,	/*(末)*/
    0x83ab,	/*(莫)*/
    0x58a8,	/*(墨)*/
    0x9ed8,	/*(默)*/
    0x6cab,	/*(沫)*/
    0x6f20,	/*(漠)*/
    0x5bde,	/*(寞)*/
    0x964c,	/*(陌)*/
    0x8c0b,	/*(谋)*/
    0x725f,	/*(牟)*/
    0x67d0,	/*(某)*/
    0x62c7,	/*(拇)*/
    0x7261,	/*(牡)*/
    0x4ea9,	/*(亩)*/
    0x59c6,	/*(姆)*/
    0x6bcd,	/*(母)*/
    0x5893,	/*(墓)*/
    0x66ae,	/*(暮)*/
    0x5e55,	/*(幕)*/
    0x52df,	/*(募)*/
    0x6155,	/*(慕)*/
    0x6728,	/*(木)*/
    0x76ee,	/*(目)*/
    0x7766,	/*(睦)*/
    0x7267,	/*(牧)*/
    0x7a46,	/*(穆)*/
    0x62ff,	/*(拿)*/
    0x54ea,	/*(哪)*/
    0x5450,	/*(呐)*/
    0x94a0,	/*(钠)*/
    0x90a3,	/*(那)*/
    0x5a1c,	/*(娜)*/
    0x7eb3,	/*(纳)*/
    0x6c16,	/*(氖)*/
    0x4e43,	/*(乃)*/
    0x5976,	/*(奶)*/
    0x8010,	/*(耐)*/
    0x5948,	/*(奈)*/
    0x5357,	/*(南)*/
    0x7537,	/*(男)*/
    0x96be,	/*(难)*/
    0x56ca,	/*(囊)*/
    0x6320,	/*(挠)*/
    0x8111,	/*(脑)*/
    0x607c,	/*(恼)*/
    0x95f9,	/*(闹)*/
    0x6dd6,	/*(淖)*/
    0x5462,	/*(呢)*/
    0x9981,	/*(馁)*/
    0x5185,	/*(内)*/
    0x5ae9,	/*(嫩)*/
    0x80fd,	/*(能)*/
    0x59ae,	/*(妮)*/
    0x9713,	/*(霓)*/
    0x502a,	/*(倪)*/
    0x6ce5,	/*(泥)*/
    0x5c3c,	/*(尼)*/
    0x62df,	/*(拟)*/
    0x4f60,	/*(你)*/
    0x533f,	/*(匿)*/
    0x817b,	/*(腻)*/
    0x9006,	/*(逆)*/
    0x6eba,	/*(溺)*/
    0x852b,	/*(蔫)*/
    0x62c8,	/*(拈)*/
    0x5e74,	/*(年)*/
    0x78be,	/*(碾)*/
    0x64b5,	/*(撵)*/
    0x637b,	/*(捻)*/
    0x5ff5,	/*(念)*/
    0x5a18,	/*(娘)*/
    0x917f,	/*(酿)*/
    0x9e1f,	/*(鸟)*/
    0x5c3f,	/*(尿)*/
    0x634f,	/*(捏)*/
    0x8042,	/*(聂)*/
    0x5b7d,	/*(孽)*/
    0x556e,	/*(啮)*/
    0x954a,	/*(镊)*/
    0x954d,	/*(镍)*/
    0x6d85,	/*(涅)*/
    0x60a8,	/*(您)*/
    0x67e0,	/*(柠)*/
    0x72de,	/*(狞)*/
    0x51dd,	/*(凝)*/
    0x5b81,	/*(宁)*/
    0x62e7,	/*(拧)*/
    0x6cde,	/*(泞)*/
    0x725b,	/*(牛)*/
    0x626d,	/*(扭)*/
    0x94ae,	/*(钮)*/
    0x7ebd,	/*(纽)*/
    0x8113,	/*(脓)*/
    0x6d53,	/*(浓)*/
    0x519c,	/*(农)*/
    0x5f04,	/*(弄)*/
    0x5974,	/*(奴)*/
    0x52aa,	/*(努)*/
    0x6012,	/*(怒)*/
    0x5973,	/*(女)*/
    0x6696,	/*(暖)*/
    0x8650,	/*(虐)*/
    0x759f,	/*(疟)*/
    0x632a,	/*(挪)*/
    0x61e6,	/*(懦)*/
    0x7cef,	/*(糯)*/
    0x8bfa,	/*(诺)*/
    0x54e6,	/*(哦)*/
    0x6b27,	/*(欧)*/
    0x9e25,	/*(鸥)*/
    0x6bb4,	/*(殴)*/
    0x85d5,	/*(藕)*/
    0x5455,	/*(呕)*/
    0x5076,	/*(偶)*/
    0x6ca4,	/*(沤)*/
    0x556a,	/*(啪)*/
    0x8db4,	/*(趴)*/
    0x722c,	/*(爬)*/
    0x5e15,	/*(帕)*/
    0x6015,	/*(怕)*/
    0x7436,	/*(琶)*/
    0x62cd,	/*(拍)*/
    0x6392,	/*(排)*/
    0x724c,	/*(牌)*/
    0x5f98,	/*(徘)*/
    0x6e43,	/*(湃)*/
    0x6d3e,	/*(派)*/
    0x6500,	/*(攀)*/
    0x6f58,	/*(潘)*/
    0x76d8,	/*(盘)*/
    0x78d0,	/*(磐)*/
    0x76fc,	/*(盼)*/
    0x7554,	/*(畔)*/
    0x5224,	/*(判)*/
    0x53db,	/*(叛)*/
    0x4e53,	/*(乓)*/
    0x5e9e,	/*(庞)*/
    0x65c1,	/*(旁)*/
    0x802a,	/*(耪)*/
    0x80d6,	/*(胖)*/
    0x629b,	/*(抛)*/
    0x5486,	/*(咆)*/
    0x5228,	/*(刨)*/
    0x70ae,	/*(炮)*/
    0x888d,	/*(袍)*/
    0x8dd1,	/*(跑)*/
    0x6ce1,	/*(泡)*/
    0x5478,	/*(呸)*/
    0x80da,	/*(胚)*/
    0x57f9,	/*(培)*/
    0x88f4,	/*(裴)*/
    0x8d54,	/*(赔)*/
    0x966a,	/*(陪)*/
    0x914d,	/*(配)*/
    0x4f69,	/*(佩)*/
    0x6c9b,	/*(沛)*/
    0x55b7,	/*(喷)*/
    0x76c6,	/*(盆)*/
    0x7830,	/*(砰)*/
    0x62a8,	/*(抨)*/
    0x70f9,	/*(烹)*/
    0x6f8e,	/*(澎)*/
    0x5f6d,	/*(彭)*/
    0x84ec,	/*(蓬)*/
    0x68da,	/*(棚)*/
    0x787c,	/*(硼)*/
    0x7bf7,	/*(篷)*/
    0x81a8,	/*(膨)*/
    0x670b,	/*(朋)*/
    0x9e4f,	/*(鹏)*/
    0x6367,	/*(捧)*/
    0x78b0,	/*(碰)*/
    0x576f,	/*(坯)*/
    0x7812,	/*(砒)*/
    0x9739,	/*(霹)*/
    0x6279,	/*(批)*/
    0x62ab,	/*(披)*/
    0x5288,	/*(劈)*/
    0x7435,	/*(琵)*/
    0x6bd7,	/*(毗)*/
    0x5564,	/*(啤)*/
    0x813e,	/*(脾)*/
    0x75b2,	/*(疲)*/
    0x76ae,	/*(皮)*/
    0x5339,	/*(匹)*/
    0x75de,	/*(痞)*/
    0x50fb,	/*(僻)*/
    0x5c41,	/*(屁)*/
    0x8b6c,	/*(譬)*/
    0x7bc7,	/*(篇)*/
    0x504f,	/*(偏)*/
    0x7247,	/*(片)*/
    0x9a97,	/*(骗)*/
    0x98d8,	/*(飘)*/
    0x6f02,	/*(漂)*/
    0x74e2,	/*(瓢)*/
    0x7968,	/*(票)*/
    0x6487,	/*(撇)*/
    0x77a5,	/*(瞥)*/
    0x62fc,	/*(拼)*/
    0x9891,	/*(频)*/
    0x8d2b,	/*(贫)*/
    0x54c1,	/*(品)*/
    0x8058,	/*(聘)*/
    0x4e52,	/*(乒)*/
    0x576a,	/*(坪)*/
    0x82f9,	/*(苹)*/
    0x840d,	/*(萍)*/
    0x5e73,	/*(平)*/
    0x51ed,	/*(凭)*/
    0x74f6,	/*(瓶)*/
    0x8bc4,	/*(评)*/
    0x5c4f,	/*(屏)*/
    0x5761,	/*(坡)*/
    0x6cfc,	/*(泼)*/
    0x9887,	/*(颇)*/
    0x5a46,	/*(婆)*/
    0x7834,	/*(破)*/
    0x9b44,	/*(魄)*/
    0x8feb,	/*(迫)*/
    0x7c95,	/*(粕)*/
    0x5256,	/*(剖)*/
    0x6251,	/*(扑)*/
    0x94fa,	/*(铺)*/
    0x4ec6,	/*(仆)*/
    0x8386,	/*(莆)*/
    0x8461,	/*(葡)*/
    0x83e9,	/*(菩)*/
    0x84b2,	/*(蒲)*/
    0x57d4,	/*(埔)*/
    0x6734,	/*(朴)*/
    0x5703,	/*(圃)*/
    0x666e,	/*(普)*/
    0x6d66,	/*(浦)*/
    0x8c31,	/*(谱)*/
    0x66dd,	/*(曝)*/
    0x7011,	/*(瀑)*/
    0x671f,	/*(期)*/
    0x6b3a,	/*(欺)*/
    0x6816,	/*(栖)*/
    0x621a,	/*(戚)*/
    0x59bb,	/*(妻)*/
    0x4e03,	/*(七)*/
    0x51c4,	/*(凄)*/
    0x6f06,	/*(漆)*/
    0x67d2,	/*(柒)*/
    0x6c8f,	/*(沏)*/
    0x5176,	/*(其)*/
    0x68cb,	/*(棋)*/
    0x5947,	/*(奇)*/
    0x6b67,	/*(歧)*/
    0x7566,	/*(畦)*/
    0x5d0e,	/*(崎)*/
    0x8110,	/*(脐)*/
    0x9f50,	/*(齐)*/
    0x65d7,	/*(旗)*/
    0x7948,	/*(祈)*/
    0x7941,	/*(祁)*/
    0x9a91,	/*(骑)*/
    0x8d77,	/*(起)*/
    0x5c82,	/*(岂)*/
    0x4e5e,	/*(乞)*/
    0x4f01,	/*(企)*/
    0x542f,	/*(启)*/
    0x5951,	/*(契)*/
    0x780c,	/*(砌)*/
    0x5668,	/*(器)*/
    0x6c14,	/*(气)*/
    0x8fc4,	/*(迄)*/
    0x5f03,	/*(弃)*/
    0x6c7d,	/*(汽)*/
    0x6ce3,	/*(泣)*/
    0x8bab,	/*(讫)*/
    0x6390,	/*(掐)*/
    0x6070,	/*(恰)*/
    0x6d3d,	/*(洽)*/
    0x7275,	/*(牵)*/
    0x6266,	/*(扦)*/
    0x948e,	/*(钎)*/
    0x94c5,	/*(铅)*/
    0x5343,	/*(千)*/
    0x8fc1,	/*(迁)*/
    0x7b7e,	/*(签)*/
    0x4edf,	/*(仟)*/
    0x8c26,	/*(谦)*/
    0x4e7e,	/*(乾)*/
    0x9ed4,	/*(黔)*/
    0x94b1,	/*(钱)*/
    0x94b3,	/*(钳)*/
    0x524d,	/*(前)*/
    0x6f5c,	/*(潜)*/
    0x9063,	/*(遣)*/
    0x6d45,	/*(浅)*/
    0x8c34,	/*(谴)*/
    0x5811,	/*(堑)*/
    0x5d4c,	/*(嵌)*/
    0x6b20,	/*(欠)*/
    0x6b49,	/*(歉)*/
    0x67aa,	/*(枪)*/
    0x545b,	/*(呛)*/
    0x8154,	/*(腔)*/
    0x7f8c,	/*(羌)*/
    0x5899,	/*(墙)*/
    0x8537,	/*(蔷)*/
    0x5f3a,	/*(强)*/
    0x62a2,	/*(抢)*/
    0x6a47,	/*(橇)*/
    0x9539,	/*(锹)*/
    0x6572,	/*(敲)*/
    0x6084,	/*(悄)*/
    0x6865,	/*(桥)*/
    0x77a7,	/*(瞧)*/
    0x4e54,	/*(乔)*/
    0x4fa8,	/*(侨)*/
    0x5de7,	/*(巧)*/
    0x9798,	/*(鞘)*/
    0x64ac,	/*(撬)*/
    0x7fd8,	/*(翘)*/
    0x5ced,	/*(峭)*/
    0x4fcf,	/*(俏)*/
    0x7a8d,	/*(窍)*/
    0x5207,	/*(切)*/
    0x8304,	/*(茄)*/
    0x4e14,	/*(且)*/
    0x602f,	/*(怯)*/
    0x7a83,	/*(窃)*/
    0x94a6,	/*(钦)*/
    0x4fb5,	/*(侵)*/
    0x4eb2,	/*(亲)*/
    0x79e6,	/*(秦)*/
    0x7434,	/*(琴)*/
    0x52e4,	/*(勤)*/
    0x82b9,	/*(芹)*/
    0x64d2,	/*(擒)*/
    0x79bd,	/*(禽)*/
    0x5bdd,	/*(寝)*/
    0x6c81,	/*(沁)*/
    0x9752,	/*(青)*/
    0x8f7b,	/*(轻)*/
    0x6c22,	/*(氢)*/
    0x503e,	/*(倾)*/
    0x537f,	/*(卿)*/
    0x6e05,	/*(清)*/
    0x64ce,	/*(擎)*/
    0x6674,	/*(晴)*/
    0x6c30,	/*(氰)*/
    0x60c5,	/*(情)*/
    0x9877,	/*(顷)*/
    0x8bf7,	/*(请)*/
    0x5e86,	/*(庆)*/
    0x743c,	/*(琼)*/
    0x7a77,	/*(穷)*/
    0x79cb,	/*(秋)*/
    0x4e18,	/*(丘)*/
    0x90b1,	/*(邱)*/
    0x7403,	/*(球)*/
    0x6c42,	/*(求)*/
    0x56da,	/*(囚)*/
    0x914b,	/*(酋)*/
    0x6cc5,	/*(泅)*/
    0x8d8b,	/*(趋)*/
    0x533a,	/*(区)*/
    0x86c6,	/*(蛆)*/
    0x66f2,	/*(曲)*/
    0x8eaf,	/*(躯)*/
    0x5c48,	/*(屈)*/
    0x9a71,	/*(驱)*/
    0x6e20,	/*(渠)*/
    0x53d6,	/*(取)*/
    0x5a36,	/*(娶)*/
    0x9f8b,	/*(龋)*/
    0x8da3,	/*(趣)*/
    0x53bb,	/*(去)*/
    0x5708,	/*(圈)*/
    0x98a7,	/*(颧)*/
    0x6743,	/*(权)*/
    0x919b,	/*(醛)*/
    0x6cc9,	/*(泉)*/
    0x5168,	/*(全)*/
    0x75ca,	/*(痊)*/
    0x62f3,	/*(拳)*/
    0x72ac,	/*(犬)*/
    0x5238,	/*(券)*/
    0x529d,	/*(劝)*/
    0x7f3a,	/*(缺)*/
    0x7094,	/*(炔)*/
    0x7638,	/*(瘸)*/
    0x5374,	/*(却)*/
    0x9e4a,	/*(鹊)*/
    0x69b7,	/*(榷)*/
    0x786e,	/*(确)*/
    0x96c0,	/*(雀)*/
    0x88d9,	/*(裙)*/
    0x7fa4,	/*(群)*/
    0x7136,	/*(然)*/
    0x71c3,	/*(燃)*/
    0x5189,	/*(冉)*/
    0x67d3,	/*(染)*/
    0x74e4,	/*(瓤)*/
    0x58e4,	/*(壤)*/
    0x6518,	/*(攘)*/
    0x56b7,	/*(嚷)*/
    0x8ba9,	/*(让)*/
    0x9976,	/*(饶)*/
    0x6270,	/*(扰)*/
    0x7ed5,	/*(绕)*/
    0x60f9,	/*(惹)*/
    0x70ed,	/*(热)*/
    0x58ec,	/*(壬)*/
    0x4ec1,	/*(仁)*/
    0x4eba,	/*(人)*/
    0x5fcd,	/*(忍)*/
    0x97e7,	/*(韧)*/
    0x4efb,	/*(任)*/
    0x8ba4,	/*(认)*/
    0x5203,	/*(刃)*/
    0x598a,	/*(妊)*/
    0x7eab,	/*(纫)*/
    0x6254,	/*(扔)*/
    0x4ecd,	/*(仍)*/
    0x65e5,	/*(日)*/
    0x620e,	/*(戎)*/
    0x8338,	/*(茸)*/
    0x84c9,	/*(蓉)*/
    0x8363,	/*(荣)*/
    0x878d,	/*(融)*/
    0x7194,	/*(熔)*/
    0x6eb6,	/*(溶)*/
    0x5bb9,	/*(容)*/
    0x7ed2,	/*(绒)*/
    0x5197,	/*(冗)*/
    0x63c9,	/*(揉)*/
    0x67d4,	/*(柔)*/
    0x8089,	/*(肉)*/
    0x8339,	/*(茹)*/
    0x8815,	/*(蠕)*/
    0x5112,	/*(儒)*/
    0x5b7a,	/*(孺)*/
    0x5982,	/*(如)*/
    0x8fb1,	/*(辱)*/
    0x4e73,	/*(乳)*/
    0x6c5d,	/*(汝)*/
    0x5165,	/*(入)*/
    0x8925,	/*(褥)*/
    0x8f6f,	/*(软)*/
    0x962e,	/*(阮)*/
    0x854a,	/*(蕊)*/
    0x745e,	/*(瑞)*/
    0x9510,	/*(锐)*/
    0x95f0,	/*(闰)*/
    0x6da6,	/*(润)*/
    0x82e5,	/*(若)*/
    0x5f31,	/*(弱)*/
    0x6492,	/*(撒)*/
    0x6d12,	/*(洒)*/
    0x8428,	/*(萨)*/
    0x816e,	/*(腮)*/
    0x9cc3,	/*(鳃)*/
    0x585e,	/*(塞)*/
    0x8d5b,	/*(赛)*/
    0x4e09,	/*(三)*/
    0x53c1,	/*(叁)*/
    0x4f1e,	/*(伞)*/
    0x6563,	/*(散)*/
    0x6851,	/*(桑)*/
    0x55d3,	/*(嗓)*/
    0x4e27,	/*(丧)*/
    0x6414,	/*(搔)*/
    0x9a9a,	/*(骚)*/
    0x626b,	/*(扫)*/
    0x5ac2,	/*(嫂)*/
    0x745f,	/*(瑟)*/
    0x8272,	/*(色)*/
    0x6da9,	/*(涩)*/
    0x68ee,	/*(森)*/
    0x50e7,	/*(僧)*/
    0x838e,	/*(莎)*/
    0x7802,	/*(砂)*/
    0x6740,	/*(杀)*/
    0x5239,	/*(刹)*/
    0x6c99,	/*(沙)*/
    0x7eb1,	/*(纱)*/
    0x50bb,	/*(傻)*/
    0x5565,	/*(啥)*/
    0x715e,	/*(煞)*/
    0x7b5b,	/*(筛)*/
    0x6652,	/*(晒)*/
    0x73ca,	/*(珊)*/
    0x82eb,	/*(苫)*/
    0x6749,	/*(杉)*/
    0x5c71,	/*(山)*/
    0x5220,	/*(删)*/
    0x717d,	/*(煽)*/
    0x886b,	/*(衫)*/
    0x95ea,	/*(闪)*/
    0x9655,	/*(陕)*/
    0x64c5,	/*(擅)*/
    0x8d61,	/*(赡)*/
    0x81b3,	/*(膳)*/
    0x5584,	/*(善)*/
    0x6c55,	/*(汕)*/
    0x6247,	/*(扇)*/
    0x7f2e,	/*(缮)*/
    0x5892,	/*(墒)*/
    0x4f24,	/*(伤)*/
    0x5546,	/*(商)*/
    0x8d4f,	/*(赏)*/
    0x664c,	/*(晌)*/
    0x4e0a,	/*(上)*/
    0x5c1a,	/*(尚)*/
    0x88f3,	/*(裳)*/
    0x68a2,	/*(梢)*/
    0x634e,	/*(捎)*/
    0x7a0d,	/*(稍)*/
    0x70e7,	/*(烧)*/
    0x828d,	/*(芍)*/
    0x52fa,	/*(勺)*/
    0x97f6,	/*(韶)*/
    0x5c11,	/*(少)*/
    0x54e8,	/*(哨)*/
    0x90b5,	/*(邵)*/
    0x7ecd,	/*(绍)*/
    0x5962,	/*(奢)*/
    0x8d4a,	/*(赊)*/
    0x86c7,	/*(蛇)*/
    0x820c,	/*(舌)*/
    0x820d,	/*(舍)*/
    0x8d66,	/*(赦)*/
    0x6444,	/*(摄)*/
    0x5c04,	/*(射)*/
    0x6151,	/*(慑)*/
    0x6d89,	/*(涉)*/
    0x793e,	/*(社)*/
    0x8bbe,	/*(设)*/
    0x7837,	/*(砷)*/
    0x7533,	/*(申)*/
    0x547b,	/*(呻)*/
    0x4f38,	/*(伸)*/
    0x8eab,	/*(身)*/
    0x6df1,	/*(深)*/
    0x5a20,	/*(娠)*/
    0x7ec5,	/*(绅)*/
    0x795e,	/*(神)*/
    0x6c88,	/*(沈)*/
    0x5ba1,	/*(审)*/
    0x5a76,	/*(婶)*/
    0x751a,	/*(甚)*/
    0x80be,	/*(肾)*/
    0x614e,	/*(慎)*/
    0x6e17,	/*(渗)*/
    0x58f0,	/*(声)*/
    0x751f,	/*(生)*/
    0x7525,	/*(甥)*/
    0x7272,	/*(牲)*/
    0x5347,	/*(升)*/
    0x7ef3,	/*(绳)*/
    0x7701,	/*(省)*/
    0x76db,	/*(盛)*/
    0x5269,	/*(剩)*/
    0x80dc,	/*(胜)*/
    0x5723,	/*(圣)*/
    0x5e08,	/*(师)*/
    0x5931,	/*(失)*/
    0x72ee,	/*(狮)*/
    0x65bd,	/*(施)*/
    0x6e7f,	/*(湿)*/
    0x8bd7,	/*(诗)*/
    0x5c38,	/*(尸)*/
    0x8671,	/*(虱)*/
    0x5341,	/*(十)*/
    0x77f3,	/*(石)*/
    0x62fe,	/*(拾)*/
    0x65f6,	/*(时)*/
    0x4ec0,	/*(什)*/
    0x98df,	/*(食)*/
    0x8680,	/*(蚀)*/
    0x5b9e,	/*(实)*/
    0x8bc6,	/*(识)*/
    0x53f2,	/*(史)*/
    0x77e2,	/*(矢)*/
    0x4f7f,	/*(使)*/
    0x5c4e,	/*(屎)*/
    0x9a76,	/*(驶)*/
    0x59cb,	/*(始)*/
    0x5f0f,	/*(式)*/
    0x793a,	/*(示)*/
    0x58eb,	/*(士)*/
    0x4e16,	/*(世)*/
    0x67ff,	/*(柿)*/
    0x4e8b,	/*(事)*/
    0x62ed,	/*(拭)*/
    0x8a93,	/*(誓)*/
    0x901d,	/*(逝)*/
    0x52bf,	/*(势)*/
    0x662f,	/*(是)*/
    0x55dc,	/*(嗜)*/
    0x566c,	/*(噬)*/
    0x9002,	/*(适)*/
    0x4ed5,	/*(仕)*/
    0x4f8d,	/*(侍)*/
    0x91ca,	/*(释)*/
    0x9970,	/*(饰)*/
    0x6c0f,	/*(氏)*/
    0x5e02,	/*(市)*/
    0x6043,	/*(恃)*/
    0x5ba4,	/*(室)*/
    0x89c6,	/*(视)*/
    0x8bd5,	/*(试)*/
    0x6536,	/*(收)*/
    0x624b,	/*(手)*/
    0x9996,	/*(首)*/
    0x5b88,	/*(守)*/
    0x5bff,	/*(寿)*/
    0x6388,	/*(授)*/
    0x552e,	/*(售)*/
    0x53d7,	/*(受)*/
    0x7626,	/*(瘦)*/
    0x517d,	/*(兽)*/
    0x852c,	/*(蔬)*/
    0x67a2,	/*(枢)*/
    0x68b3,	/*(梳)*/
    0x6b8a,	/*(殊)*/
    0x6292,	/*(抒)*/
    0x8f93,	/*(输)*/
    0x53d4,	/*(叔)*/
    0x8212,	/*(舒)*/
    0x6dd1,	/*(淑)*/
    0x758f,	/*(疏)*/
    0x4e66,	/*(书)*/
    0x8d4e,	/*(赎)*/
    0x5b70,	/*(孰)*/
    0x719f,	/*(熟)*/
    0x85af,	/*(薯)*/
    0x6691,	/*(暑)*/
    0x66d9,	/*(曙)*/
    0x7f72,	/*(署)*/
    0x8700,	/*(蜀)*/
    0x9ecd,	/*(黍)*/
    0x9f20,	/*(鼠)*/
    0x5c5e,	/*(属)*/
    0x672f,	/*(术)*/
    0x8ff0,	/*(述)*/
    0x6811,	/*(树)*/
    0x675f,	/*(束)*/
    0x620d,	/*(戍)*/
    0x7ad6,	/*(竖)*/
    0x5885,	/*(墅)*/
    0x5eb6,	/*(庶)*/
    0x6570,	/*(数)*/
    0x6f31,	/*(漱)*/
    0x6055,	/*(恕)*/
    0x5237,	/*(刷)*/
    0x800d,	/*(耍)*/
    0x6454,	/*(摔)*/
    0x8870,	/*(衰)*/
    0x7529,	/*(甩)*/
    0x5e05,	/*(帅)*/
    0x6813,	/*(栓)*/
    0x62f4,	/*(拴)*/
    0x971c,	/*(霜)*/
    0x53cc,	/*(双)*/
    0x723d,	/*(爽)*/
    0x8c01,	/*(谁)*/
    0x6c34,	/*(水)*/
    0x7761,	/*(睡)*/
    0x7a0e,	/*(税)*/
    0x542e,	/*(吮)*/
    0x77ac,	/*(瞬)*/
    0x987a,	/*(顺)*/
    0x821c,	/*(舜)*/
    0x8bf4,	/*(说)*/
    0x7855,	/*(硕)*/
    0x6714,	/*(朔)*/
    0x70c1,	/*(烁)*/
    0x65af,	/*(斯)*/
    0x6495,	/*(撕)*/
    0x5636,	/*(嘶)*/
    0x601d,	/*(思)*/
    0x79c1,	/*(私)*/
    0x53f8,	/*(司)*/
    0x4e1d,	/*(丝)*/
    0x6b7b,	/*(死)*/
    0x8086,	/*(肆)*/
    0x5bfa,	/*(寺)*/
    0x55e3,	/*(嗣)*/
    0x56db,	/*(四)*/
    0x4f3a,	/*(伺)*/
    0x4f3c,	/*(似)*/
    0x9972,	/*(饲)*/
    0x5df3,	/*(巳)*/
    0x677e,	/*(松)*/
    0x8038,	/*(耸)*/
    0x6002,	/*(怂)*/
    0x9882,	/*(颂)*/
    0x9001,	/*(送)*/
    0x5b8b,	/*(宋)*/
    0x8bbc,	/*(讼)*/
    0x8bf5,	/*(诵)*/
    0x641c,	/*(搜)*/
    0x8258,	/*(艘)*/
    0x64de,	/*(擞)*/
    0x55fd,	/*(嗽)*/
    0x82cf,	/*(苏)*/
    0x9165,	/*(酥)*/
    0x4fd7,	/*(俗)*/
    0x7d20,	/*(素)*/
    0x901f,	/*(速)*/
    0x7c9f,	/*(粟)*/
    0x50f3,	/*(僳)*/
    0x5851,	/*(塑)*/
    0x6eaf,	/*(溯)*/
    0x5bbf,	/*(宿)*/
    0x8bc9,	/*(诉)*/
    0x8083,	/*(肃)*/
    0x9178,	/*(酸)*/
    0x849c,	/*(蒜)*/
    0x7b97,	/*(算)*/
    0x867d,	/*(虽)*/
    0x968b,	/*(隋)*/
    0x968f,	/*(随)*/
    0x7ee5,	/*(绥)*/
    0x9ad3,	/*(髓)*/
    0x788e,	/*(碎)*/
    0x5c81,	/*(岁)*/
    0x7a57,	/*(穗)*/
    0x9042,	/*(遂)*/
    0x96a7,	/*(隧)*/
    0x795f,	/*(祟)*/
    0x5b59,	/*(孙)*/
    0x635f,	/*(损)*/
    0x7b0b,	/*(笋)*/
    0x84d1,	/*(蓑)*/
    0x68ad,	/*(梭)*/
    0x5506,	/*(唆)*/
    0x7f29,	/*(缩)*/
    0x7410,	/*(琐)*/
    0x7d22,	/*(索)*/
    0x9501,	/*(锁)*/
    0x6240,	/*(所)*/
    0x584c,	/*(塌)*/
    0x4ed6,	/*(他)*/
    0x5b83,	/*(它)*/
    0x5979,	/*(她)*/
    0x5854,	/*(塔)*/
    0x736d,	/*(獭)*/
    0x631e,	/*(挞)*/
    0x8e4b,	/*(蹋)*/
    0x8e0f,	/*(踏)*/
    0x80ce,	/*(胎)*/
    0x82d4,	/*(苔)*/
    0x62ac,	/*(抬)*/
    0x53f0,	/*(台)*/
    0x6cf0,	/*(泰)*/
    0x915e,	/*(酞)*/
    0x592a,	/*(太)*/
    0x6001,	/*(态)*/
    0x6c70,	/*(汰)*/
    0x574d,	/*(坍)*/
    0x644a,	/*(摊)*/
    0x8d2a,	/*(贪)*/
    0x762b,	/*(瘫)*/
    0x6ee9,	/*(滩)*/
    0x575b,	/*(坛)*/
    0x6a80,	/*(檀)*/
    0x75f0,	/*(痰)*/
    0x6f6d,	/*(潭)*/
    0x8c2d,	/*(谭)*/
    0x8c08,	/*(谈)*/
    0x5766,	/*(坦)*/
    0x6bef,	/*(毯)*/
    0x8892,	/*(袒)*/
    0x78b3,	/*(碳)*/
    0x63a2,	/*(探)*/
    0x53f9,	/*(叹)*/
    0x70ad,	/*(炭)*/
    0x6c64,	/*(汤)*/
    0x5858,	/*(塘)*/
    0x642a,	/*(搪)*/
    0x5802,	/*(堂)*/
    0x68e0,	/*(棠)*/
    0x819b,	/*(膛)*/
    0x5510,	/*(唐)*/
    0x7cd6,	/*(糖)*/
    0x5018,	/*(倘)*/
    0x8eba,	/*(躺)*/
    0x6dcc,	/*(淌)*/
    0x8d9f,	/*(趟)*/
    0x70eb,	/*(烫)*/
    0x638f,	/*(掏)*/
    0x6d9b,	/*(涛)*/
    0x6ed4,	/*(滔)*/
    0x7ee6,	/*(绦)*/
    0x8404,	/*(萄)*/
    0x6843,	/*(桃)*/
    0x9003,	/*(逃)*/
    0x6dd8,	/*(淘)*/
    0x9676,	/*(陶)*/
    0x8ba8,	/*(讨)*/
    0x5957,	/*(套)*/
    0x7279,	/*(特)*/
    0x85e4,	/*(藤)*/
    0x817e,	/*(腾)*/
    0x75bc,	/*(疼)*/
    0x8a8a,	/*(誊)*/
    0x68af,	/*(梯)*/
    0x5254,	/*(剔)*/
    0x8e22,	/*(踢)*/
    0x9511,	/*(锑)*/
    0x63d0,	/*(提)*/
    0x9898,	/*(题)*/
    0x8e44,	/*(蹄)*/
    0x557c,	/*(啼)*/
    0x4f53,	/*(体)*/
    0x66ff,	/*(替)*/
    0x568f,	/*(嚏)*/
    0x60d5,	/*(惕)*/
    0x6d95,	/*(涕)*/
    0x5243,	/*(剃)*/
    0x5c49,	/*(屉)*/
    0x5929,	/*(天)*/
    0x6dfb,	/*(添)*/
    0x586b,	/*(填)*/
    0x7530,	/*(田)*/
    0x751c,	/*(甜)*/
    0x606c,	/*(恬)*/
    0x8214,	/*(舔)*/
    0x8146,	/*(腆)*/
    0x6311,	/*(挑)*/
    0x6761,	/*(条)*/
    0x8fe2,	/*(迢)*/
    0x773a,	/*(眺)*/
    0x8df3,	/*(跳)*/
    0x8d34,	/*(贴)*/
    0x94c1,	/*(铁)*/
    0x5e16,	/*(帖)*/
    0x5385,	/*(厅)*/
    0x542c,	/*(听)*/
    0x70c3,	/*(烃)*/
    0x6c40,	/*(汀)*/
    0x5ef7,	/*(廷)*/
    0x505c,	/*(停)*/
    0x4ead,	/*(亭)*/
    0x5ead,	/*(庭)*/
    0x633a,	/*(挺)*/
    0x8247,	/*(艇)*/
    0x901a,	/*(通)*/
    0x6850,	/*(桐)*/
    0x916e,	/*(酮)*/
    0x77b3,	/*(瞳)*/
    0x540c,	/*(同)*/
    0x94dc,	/*(铜)*/
    0x5f64,	/*(彤)*/
    0x7ae5,	/*(童)*/
    0x6876,	/*(桶)*/
    0x6345,	/*(捅)*/
    0x7b52,	/*(筒)*/
    0x7edf,	/*(统)*/
    0x75db,	/*(痛)*/
    0x5077,	/*(偷)*/
    0x6295,	/*(投)*/
    0x5934,	/*(头)*/
    0x900f,	/*(透)*/
    0x51f8,	/*(凸)*/
    0x79c3,	/*(秃)*/
    0x7a81,	/*(突)*/
    0x56fe,	/*(图)*/
    0x5f92,	/*(徒)*/
    0x9014,	/*(途)*/
    0x6d82,	/*(涂)*/
    0x5c60,	/*(屠)*/
    0x571f,	/*(土)*/
    0x5410,	/*(吐)*/
    0x5154,	/*(兔)*/
    0x6e4d,	/*(湍)*/
    0x56e2,	/*(团)*/
    0x63a8,	/*(推)*/
    0x9893,	/*(颓)*/
    0x817f,	/*(腿)*/
    0x8715,	/*(蜕)*/
    0x892a,	/*(褪)*/
    0x9000,	/*(退)*/
    0x541e,	/*(吞)*/
    0x5c6f,	/*(屯)*/
    0x81c0,	/*(臀)*/
    0x62d6,	/*(拖)*/
    0x6258,	/*(托)*/
    0x8131,	/*(脱)*/
    0x9e35,	/*(鸵)*/
    0x9640,	/*(陀)*/
    0x9a6e,	/*(驮)*/
    0x9a7c,	/*(驼)*/
    0x692d,	/*(椭)*/
    0x59a5,	/*(妥)*/
    0x62d3,	/*(拓)*/
    0x553e,	/*(唾)*/
    0x6316,	/*(挖)*/
    0x54c7,	/*(哇)*/
    0x86d9,	/*(蛙)*/
    0x6d3c,	/*(洼)*/
    0x5a03,	/*(娃)*/
    0x74e6,	/*(瓦)*/
    0x889c,	/*(袜)*/
    0x6b6a,	/*(歪)*/
    0x5916,	/*(外)*/
    0x8c4c,	/*(豌)*/
    0x5f2f,	/*(弯)*/
    0x6e7e,	/*(湾)*/
    0x73a9,	/*(玩)*/
    0x987d,	/*(顽)*/
    0x4e38,	/*(丸)*/
    0x70f7,	/*(烷)*/
    0x5b8c,	/*(完)*/
    0x7897,	/*(碗)*/
    0x633d,	/*(挽)*/
    0x665a,	/*(晚)*/
    0x7696,	/*(皖)*/
    0x60cb,	/*(惋)*/
    0x5b9b,	/*(宛)*/
    0x5a49,	/*(婉)*/
    0x4e07,	/*(万)*/
    0x8155,	/*(腕)*/
    0x6c6a,	/*(汪)*/
    0x738b,	/*(王)*/
    0x4ea1,	/*(亡)*/
    0x6789,	/*(枉)*/
    0x7f51,	/*(网)*/
    0x5f80,	/*(往)*/
    0x65fa,	/*(旺)*/
    0x671b,	/*(望)*/
    0x5fd8,	/*(忘)*/
    0x5984,	/*(妄)*/
    0x5a01,	/*(威)*/
    0x5dcd,	/*(巍)*/
    0x5fae,	/*(微)*/
    0x5371,	/*(危)*/
    0x97e6,	/*(韦)*/
    0x8fdd,	/*(违)*/
    0x6845,	/*(桅)*/
    0x56f4,	/*(围)*/
    0x552f,	/*(唯)*/
    0x60df,	/*(惟)*/
    0x4e3a,	/*(为)*/
    0x6f4d,	/*(潍)*/
    0x7ef4,	/*(维)*/
    0x82c7,	/*(苇)*/
    0x840e,	/*(萎)*/
    0x59d4,	/*(委)*/
    0x4f1f,	/*(伟)*/
    0x4f2a,	/*(伪)*/
    0x5c3e,	/*(尾)*/
    0x7eac,	/*(纬)*/
    0x672a,	/*(未)*/
    0x851a,	/*(蔚)*/
    0x5473,	/*(味)*/
    0x754f,	/*(畏)*/
    0x80c3,	/*(胃)*/
    0x5582,	/*(喂)*/
    0x9b4f,	/*(魏)*/
    0x4f4d,	/*(位)*/
    0x6e2d,	/*(渭)*/
    0x8c13,	/*(谓)*/
    0x5c09,	/*(尉)*/
    0x6170,	/*(慰)*/
    0x536b,	/*(卫)*/
    0x761f,	/*(瘟)*/
    0x6e29,	/*(温)*/
    0x868a,	/*(蚊)*/
    0x6587,	/*(文)*/
    0x95fb,	/*(闻)*/
    0x7eb9,	/*(纹)*/
    0x543b,	/*(吻)*/
    0x7a33,	/*(稳)*/
    0x7d0a,	/*(紊)*/
    0x95ee,	/*(问)*/
    0x55e1,	/*(嗡)*/
    0x7fc1,	/*(翁)*/
    0x74ee,	/*(瓮)*/
    0x631d,	/*(挝)*/
    0x8717,	/*(蜗)*/
    0x6da1,	/*(涡)*/
    0x7a9d,	/*(窝)*/
    0x6211,	/*(我)*/
    0x65a1,	/*(斡)*/
    0x5367,	/*(卧)*/
    0x63e1,	/*(握)*/
    0x6c83,	/*(沃)*/
    0x5deb,	/*(巫)*/
    0x545c,	/*(呜)*/
    0x94a8,	/*(钨)*/
    0x4e4c,	/*(乌)*/
    0x6c61,	/*(污)*/
    0x8bec,	/*(诬)*/
    0x5c4b,	/*(屋)*/
    0x65e0,	/*(无)*/
    0x829c,	/*(芜)*/
    0x68a7,	/*(梧)*/
    0x543e,	/*(吾)*/
    0x5434,	/*(吴)*/
    0x6bcb,	/*(毋)*/
    0x6b66,	/*(武)*/
    0x4e94,	/*(五)*/
    0x6342,	/*(捂)*/
    0x5348,	/*(午)*/
    0x821e,	/*(舞)*/
    0x4f0d,	/*(伍)*/
    0x4fae,	/*(侮)*/
    0x575e,	/*(坞)*/
    0x620a,	/*(戊)*/
    0x96fe,	/*(雾)*/
    0x6664,	/*(晤)*/
    0x7269,	/*(物)*/
    0x52ff,	/*(勿)*/
    0x52a1,	/*(务)*/
    0x609f,	/*(悟)*/
    0x8bef,	/*(误)*/
    0x6614,	/*(昔)*/
    0x7199,	/*(熙)*/
    0x6790,	/*(析)*/
    0x897f,	/*(西)*/
    0x7852,	/*(硒)*/
    0x77fd,	/*(矽)*/
    0x6670,	/*(晰)*/
    0x563b,	/*(嘻)*/
    0x5438,	/*(吸)*/
    0x9521,	/*(锡)*/
    0x727a,	/*(牺)*/
    0x7a00,	/*(稀)*/
    0x606f,	/*(息)*/
    0x5e0c,	/*(希)*/
    0x6089,	/*(悉)*/
    0x819d,	/*(膝)*/
    0x5915,	/*(夕)*/
    0x60dc,	/*(惜)*/
    0x7184,	/*(熄)*/
    0x70ef,	/*(烯)*/
    0x6eaa,	/*(溪)*/
    0x6c50,	/*(汐)*/
    0x7280,	/*(犀)*/
    0x6a84,	/*(檄)*/
    0x88ad,	/*(袭)*/
    0x5e2d,	/*(席)*/
    0x4e60,	/*(习)*/
    0x5ab3,	/*(媳)*/
    0x559c,	/*(喜)*/
    0x94e3,	/*(铣)*/
    0x6d17,	/*(洗)*/
    0x7cfb,	/*(系)*/
    0x9699,	/*(隙)*/
    0x620f,	/*(戏)*/
    0x7ec6,	/*(细)*/
    0x778e,	/*(瞎)*/
    0x867e,	/*(虾)*/
    0x5323,	/*(匣)*/
    0x971e,	/*(霞)*/
    0x8f96,	/*(辖)*/
    0x6687,	/*(暇)*/
    0x5ce1,	/*(峡)*/
    0x4fa0,	/*(侠)*/
    0x72ed,	/*(狭)*/
    0x4e0b,	/*(下)*/
    0x53a6,	/*(厦)*/
    0x590f,	/*(夏)*/
    0x5413,	/*(吓)*/
    0x6380,	/*(掀)*/
    0x9528,	/*(锨)*/
    0x5148,	/*(先)*/
    0x4ed9,	/*(仙)*/
    0x9c9c,	/*(鲜)*/
    0x7ea4,	/*(纤)*/
    0x54b8,	/*(咸)*/
    0x8d24,	/*(贤)*/
    0x8854,	/*(衔)*/
    0x8237,	/*(舷)*/
    0x95f2,	/*(闲)*/
    0x6d8e,	/*(涎)*/
    0x5f26,	/*(弦)*/
    0x5acc,	/*(嫌)*/
    0x663e,	/*(显)*/
    0x9669,	/*(险)*/
    0x73b0,	/*(现)*/
    0x732e,	/*(献)*/
    0x53bf,	/*(县)*/
    0x817a,	/*(腺)*/
    0x9985,	/*(馅)*/
    0x7fa1,	/*(羡)*/
    0x5baa,	/*(宪)*/
    0x9677,	/*(陷)*/
    0x9650,	/*(限)*/
    0x7ebf,	/*(线)*/
    0x76f8,	/*(相)*/
    0x53a2,	/*(厢)*/
    0x9576,	/*(镶)*/
    0x9999,	/*(香)*/
    0x7bb1,	/*(箱)*/
    0x8944,	/*(襄)*/
    0x6e58,	/*(湘)*/
    0x4e61,	/*(乡)*/
    0x7fd4,	/*(翔)*/
    0x7965,	/*(祥)*/
    0x8be6,	/*(详)*/
    0x60f3,	/*(想)*/
    0x54cd,	/*(响)*/
    0x4eab,	/*(享)*/
    0x9879,	/*(项)*/
    0x5df7,	/*(巷)*/
    0x6a61,	/*(橡)*/
    0x50cf,	/*(像)*/
    0x5411,	/*(向)*/
    0x8c61,	/*(象)*/
    0x8427,	/*(萧)*/
    0x785d,	/*(硝)*/
    0x9704,	/*(霄)*/
    0x524a,	/*(削)*/
    0x54ee,	/*(哮)*/
    0x56a3,	/*(嚣)*/
    0x9500,	/*(销)*/
    0x6d88,	/*(消)*/
    0x5bb5,	/*(宵)*/
    0x6dc6,	/*(淆)*/
    0x6653,	/*(晓)*/
    0x5c0f,	/*(小)*/
    0x5b5d,	/*(孝)*/
    0x6821,	/*(校)*/
    0x8096,	/*(肖)*/
    0x5578,	/*(啸)*/
    0x7b11,	/*(笑)*/
    0x6548,	/*(效)*/
    0x6954,	/*(楔)*/
    0x4e9b,	/*(些)*/
    0x6b47,	/*(歇)*/
    0x874e,	/*(蝎)*/
    0x978b,	/*(鞋)*/
    0x534f,	/*(协)*/
    0x631f,	/*(挟)*/
    0x643a,	/*(携)*/
    0x90aa,	/*(邪)*/
    0x659c,	/*(斜)*/
    0x80c1,	/*(胁)*/
    0x8c10,	/*(谐)*/
    0x5199,	/*(写)*/
    0x68b0,	/*(械)*/
    0x5378,	/*(卸)*/
    0x87f9,	/*(蟹)*/
    0x61c8,	/*(懈)*/
    0x6cc4,	/*(泄)*/
    0x6cfb,	/*(泻)*/
    0x8c22,	/*(谢)*/
    0x5c51,	/*(屑)*/
    0x85aa,	/*(薪)*/
    0x82af,	/*(芯)*/
    0x950c,	/*(锌)*/
    0x6b23,	/*(欣)*/
    0x8f9b,	/*(辛)*/
    0x65b0,	/*(新)*/
    0x5ffb,	/*(忻)*/
    0x5fc3,	/*(心)*/
    0x4fe1,	/*(信)*/
    0x8845,	/*(衅)*/
    0x661f,	/*(星)*/
    0x8165,	/*(腥)*/
    0x7329,	/*(猩)*/
    0x60fa,	/*(惺)*/
    0x5174,	/*(兴)*/
    0x5211,	/*(刑)*/
    0x578b,	/*(型)*/
    0x5f62,	/*(形)*/
    0x90a2,	/*(邢)*/
    0x884c,	/*(行)*/
    0x9192,	/*(醒)*/
    0x5e78,	/*(幸)*/
    0x674f,	/*(杏)*/
    0x6027,	/*(性)*/
    0x59d3,	/*(姓)*/
    0x5144,	/*(兄)*/
    0x51f6,	/*(凶)*/
    0x80f8,	/*(胸)*/
    0x5308,	/*(匈)*/
    0x6c79,	/*(汹)*/
    0x96c4,	/*(雄)*/
    0x718a,	/*(熊)*/
    0x4f11,	/*(休)*/
    0x4fee,	/*(修)*/
    0x7f9e,	/*(羞)*/
    0x673d,	/*(朽)*/
    0x55c5,	/*(嗅)*/
    0x9508,	/*(锈)*/
    0x79c0,	/*(秀)*/
    0x8896,	/*(袖)*/
    0x7ee3,	/*(绣)*/
    0x589f,	/*(墟)*/
    0x620c,	/*(戌)*/
    0x9700,	/*(需)*/
    0x865a,	/*(虚)*/
    0x5618,	/*(嘘)*/
    0x987b,	/*(须)*/
    0x5f90,	/*(徐)*/
    0x8bb8,	/*(许)*/
    0x84c4,	/*(蓄)*/
    0x9157,	/*(酗)*/
    0x53d9,	/*(叙)*/
    0x65ed,	/*(旭)*/
    0x5e8f,	/*(序)*/
    0x755c,	/*(畜)*/
    0x6064,	/*(恤)*/
    0x7d6e,	/*(絮)*/
    0x5a7f,	/*(婿)*/
    0x7eea,	/*(绪)*/
    0x7eed,	/*(续)*/
    0x8f69,	/*(轩)*/
    0x55a7,	/*(喧)*/
    0x5ba3,	/*(宣)*/
    0x60ac,	/*(悬)*/
    0x65cb,	/*(旋)*/
    0x7384,	/*(玄)*/
    0x9009,	/*(选)*/
    0x7663,	/*(癣)*/
    0x7729,	/*(眩)*/
    0x7eda,	/*(绚)*/
    0x9774,	/*(靴)*/
    0x859b,	/*(薛)*/
    0x5b66,	/*(学)*/
    0x7a74,	/*(穴)*/
    0x96ea,	/*(雪)*/
    0x8840,	/*(血)*/
    0x52cb,	/*(勋)*/
    0x718f,	/*(熏)*/
    0x5faa,	/*(循)*/
    0x65ec,	/*(旬)*/
    0x8be2,	/*(询)*/
    0x5bfb,	/*(寻)*/
    0x9a6f,	/*(驯)*/
    0x5de1,	/*(巡)*/
    0x6b89,	/*(殉)*/
    0x6c5b,	/*(汛)*/
    0x8bad,	/*(训)*/
    0x8baf,	/*(讯)*/
    0x900a,	/*(逊)*/
    0x8fc5,	/*(迅)*/
    0x538b,	/*(压)*/
    0x62bc,	/*(押)*/
    0x9e26,	/*(鸦)*/
    0x9e2d,	/*(鸭)*/
    0x5440,	/*(呀)*/
    0x4e2b,	/*(丫)*/
    0x82bd,	/*(芽)*/
    0x7259,	/*(牙)*/
    0x869c,	/*(蚜)*/
    0x5d16,	/*(崖)*/
    0x8859,	/*(衙)*/
    0x6daf,	/*(涯)*/
    0x96c5,	/*(雅)*/
    0x54d1,	/*(哑)*/
    0x4e9a,	/*(亚)*/
    0x8bb6,	/*(讶)*/
    0x7109,	/*(焉)*/
    0x54bd,	/*(咽)*/
    0x9609,	/*(阉)*/
    0x70df,	/*(烟)*/
    0x6df9,	/*(淹)*/
    0x76d0,	/*(盐)*/
    0x4e25,	/*(严)*/
    0x7814,	/*(研)*/
    0x8712,	/*(蜒)*/
    0x5ca9,	/*(岩)*/
    0x5ef6,	/*(延)*/
    0x8a00,	/*(言)*/
    0x989c,	/*(颜)*/
    0x960e,	/*(阎)*/
    0x708e,	/*(炎)*/
    0x6cbf,	/*(沿)*/
    0x5944,	/*(奄)*/
    0x63a9,	/*(掩)*/
    0x773c,	/*(眼)*/
    0x884d,	/*(衍)*/
    0x6f14,	/*(演)*/
    0x8273,	/*(艳)*/
    0x5830,	/*(堰)*/
    0x71d5,	/*(燕)*/
    0x538c,	/*(厌)*/
    0x781a,	/*(砚)*/
    0x96c1,	/*(雁)*/
    0x5501,	/*(唁)*/
    0x5f66,	/*(彦)*/
    0x7130,	/*(焰)*/
    0x5bb4,	/*(宴)*/
    0x8c1a,	/*(谚)*/
    0x9a8c,	/*(验)*/
    0x6b83,	/*(殃)*/
    0x592e,	/*(央)*/
    0x9e2f,	/*(鸯)*/
    0x79e7,	/*(秧)*/
    0x6768,	/*(杨)*/
    0x626c,	/*(扬)*/
    0x4f6f,	/*(佯)*/
    0x75a1,	/*(疡)*/
    0x7f8a,	/*(羊)*/
    0x6d0b,	/*(洋)*/
    0x9633,	/*(阳)*/
    0x6c27,	/*(氧)*/
    0x4ef0,	/*(仰)*/
    0x75d2,	/*(痒)*/
    0x517b,	/*(养)*/
    0x6837,	/*(样)*/
    0x6f3e,	/*(漾)*/
    0x9080,	/*(邀)*/
    0x8170,	/*(腰)*/
    0x5996,	/*(妖)*/
    0x7476,	/*(瑶)*/
    0x6447,	/*(摇)*/
    0x5c27,	/*(尧)*/
    0x9065,	/*(遥)*/
    0x7a91,	/*(窑)*/
    0x8c23,	/*(谣)*/
    0x59da,	/*(姚)*/
    0x54ac,	/*(咬)*/
    0x8200,	/*(舀)*/
    0x836f,	/*(药)*/
    0x8981,	/*(要)*/
    0x8000,	/*(耀)*/
    0x6930,	/*(椰)*/
    0x564e,	/*(噎)*/
    0x8036,	/*(耶)*/
    0x7237,	/*(爷)*/
    0x91ce,	/*(野)*/
    0x51b6,	/*(冶)*/
    0x4e5f,	/*(也)*/
    0x9875,	/*(页)*/
    0x6396,	/*(掖)*/
    0x4e1a,	/*(业)*/
    0x53f6,	/*(叶)*/
    0x66f3,	/*(曳)*/
    0x814b,	/*(腋)*/
    0x591c,	/*(夜)*/
    0x6db2,	/*(液)*/
    0x4e00,	/*(一)*/
    0x58f9,	/*(壹)*/
    0x533b,	/*(医)*/
    0x63d6,	/*(揖)*/
    0x94f1,	/*(铱)*/
    0x4f9d,	/*(依)*/
    0x4f0a,	/*(伊)*/
    0x8863,	/*(衣)*/
    0x9890,	/*(颐)*/
    0x5937,	/*(夷)*/
    0x9057,	/*(遗)*/
    0x79fb,	/*(移)*/
    0x4eea,	/*(仪)*/
    0x80f0,	/*(胰)*/
    0x7591,	/*(疑)*/
    0x6c82,	/*(沂)*/
    0x5b9c,	/*(宜)*/
    0x59e8,	/*(姨)*/
    0x5f5d,	/*(彝)*/
    0x6905,	/*(椅)*/
    0x8681,	/*(蚁)*/
    0x501a,	/*(倚)*/
    0x5df2,	/*(已)*/
    0x4e59,	/*(乙)*/
    0x77e3,	/*(矣)*/
    0x4ee5,	/*(以)*/
    0x827a,	/*(艺)*/
    0x6291,	/*(抑)*/
    0x6613,	/*(易)*/
    0x9091,	/*(邑)*/
    0x5c79,	/*(屹)*/
    0x4ebf,	/*(亿)*/
    0x5f79,	/*(役)*/
    0x81c6,	/*(臆)*/
    0x9038,	/*(逸)*/
    0x8084,	/*(肄)*/
    0x75ab,	/*(疫)*/
    0x4ea6,	/*(亦)*/
    0x88d4,	/*(裔)*/
    0x610f,	/*(意)*/
    0x6bc5,	/*(毅)*/
    0x5fc6,	/*(忆)*/
    0x4e49,	/*(义)*/
    0x76ca,	/*(益)*/
    0x6ea2,	/*(溢)*/
    0x8be3,	/*(诣)*/
    0x8bae,	/*(议)*/
    0x8c0a,	/*(谊)*/
    0x8bd1,	/*(译)*/
    0x5f02,	/*(异)*/
    0x7ffc,	/*(翼)*/
    0x7fcc,	/*(翌)*/
    0x7ece,	/*(绎)*/
    0x8335,	/*(茵)*/
    0x836b,	/*(荫)*/
    0x56e0,	/*(因)*/
    0x6bb7,	/*(殷)*/
    0x97f3,	/*(音)*/
    0x9634,	/*(阴)*/
    0x59fb,	/*(姻)*/
    0x541f,	/*(吟)*/
    0x94f6,	/*(银)*/
    0x6deb,	/*(淫)*/
    0x5bc5,	/*(寅)*/
    0x996e,	/*(饮)*/
    0x5c39,	/*(尹)*/
    0x5f15,	/*(引)*/
    0x9690,	/*(隐)*/
    0x5370,	/*(印)*/
    0x82f1,	/*(英)*/
    0x6a31,	/*(樱)*/
    0x5a74,	/*(婴)*/
    0x9e70,	/*(鹰)*/
    0x5e94,	/*(应)*/
    0x7f28,	/*(缨)*/
    0x83b9,	/*(莹)*/
    0x8424,	/*(萤)*/
    0x8425,	/*(营)*/
    0x8367,	/*(荧)*/
    0x8747,	/*(蝇)*/
    0x8fce,	/*(迎)*/
    0x8d62,	/*(赢)*/
    0x76c8,	/*(盈)*/
    0x5f71,	/*(影)*/
    0x9896,	/*(颖)*/
    0x786c,	/*(硬)*/
    0x6620,	/*(映)*/
    0x54df,	/*(哟)*/
    0x62e5,	/*(拥)*/
    0x4f63,	/*(佣)*/
    0x81c3,	/*(臃)*/
    0x75c8,	/*(痈)*/
    0x5eb8,	/*(庸)*/
    0x96cd,	/*(雍)*/
    0x8e0a,	/*(踊)*/
    0x86f9,	/*(蛹)*/
    0x548f,	/*(咏)*/
    0x6cf3,	/*(泳)*/
    0x6d8c,	/*(涌)*/
    0x6c38,	/*(永)*/
    0x607f,	/*(恿)*/
    0x52c7,	/*(勇)*/
    0x7528,	/*(用)*/
    0x5e7d,	/*(幽)*/
    0x4f18,	/*(优)*/
    0x60a0,	/*(悠)*/
    0x5fe7,	/*(忧)*/
    0x5c24,	/*(尤)*/
    0x7531,	/*(由)*/
    0x90ae,	/*(邮)*/
    0x94c0,	/*(铀)*/
    0x72b9,	/*(犹)*/
    0x6cb9,	/*(油)*/
    0x6e38,	/*(游)*/
    0x9149,	/*(酉)*/
    0x6709,	/*(有)*/
    0x53cb,	/*(友)*/
    0x53f3,	/*(右)*/
    0x4f51,	/*(佑)*/
    0x91c9,	/*(釉)*/
    0x8bf1,	/*(诱)*/
    0x53c8,	/*(又)*/
    0x5e7c,	/*(幼)*/
    0x8fc2,	/*(迂)*/
    0x6de4,	/*(淤)*/
    0x4e8e,	/*(于)*/
    0x76c2,	/*(盂)*/
    0x6986,	/*(榆)*/
    0x865e,	/*(虞)*/
    0x611a,	/*(愚)*/
    0x8206,	/*(舆)*/
    0x4f59,	/*(余)*/
    0x4fde,	/*(俞)*/
    0x903e,	/*(逾)*/
    0x9c7c,	/*(鱼)*/
    0x6109,	/*(愉)*/
    0x6e1d,	/*(渝)*/
    0x6e14,	/*(渔)*/
    0x9685,	/*(隅)*/
    0x4e88,	/*(予)*/
    0x5a31,	/*(娱)*/
    0x96e8,	/*(雨)*/
    0x4e0e,	/*(与)*/
    0x5c7f,	/*(屿)*/
    0x79b9,	/*(禹)*/
    0x5b87,	/*(宇)*/
    0x8bed,	/*(语)*/
    0x7fbd,	/*(羽)*/
    0x7389,	/*(玉)*/
    0x57df,	/*(域)*/
    0x828b,	/*(芋)*/
    0x90c1,	/*(郁)*/
    0x5401,	/*(吁)*/
    0x9047,	/*(遇)*/
    0x55bb,	/*(喻)*/
    0x5cea,	/*(峪)*/
    0x5fa1,	/*(御)*/
    0x6108,	/*(愈)*/
    0x6b32,	/*(欲)*/
    0x72f1,	/*(狱)*/
    0x80b2,	/*(育)*/
    0x8a89,	/*(誉)*/
    0x6d74,	/*(浴)*/
    0x5bd3,	/*(寓)*/
    0x88d5,	/*(裕)*/
    0x9884,	/*(预)*/
    0x8c6b,	/*(豫)*/
    0x9a6d,	/*(驭)*/
    0x9e33,	/*(鸳)*/
    0x6e0a,	/*(渊)*/
    0x51a4,	/*(冤)*/
    0x5143,	/*(元)*/
    0x57a3,	/*(垣)*/
    0x8881,	/*(袁)*/
    0x539f,	/*(原)*/
    0x63f4,	/*(援)*/
    0x8f95,	/*(辕)*/
    0x56ed,	/*(园)*/
    0x5458,	/*(员)*/
    0x5706,	/*(圆)*/
    0x733f,	/*(猿)*/
    0x6e90,	/*(源)*/
    0x7f18,	/*(缘)*/
    0x8fdc,	/*(远)*/
    0x82d1,	/*(苑)*/
    0x613f,	/*(愿)*/
    0x6028,	/*(怨)*/
    0x9662,	/*(院)*/
    0x66f0,	/*(曰)*/
    0x7ea6,	/*(约)*/
    0x8d8a,	/*(越)*/
    0x8dc3,	/*(跃)*/
    0x94a5,	/*(钥)*/
    0x5cb3,	/*(岳)*/
    0x7ca4,	/*(粤)*/
    0x6708,	/*(月)*/
    0x60a6,	/*(悦)*/
    0x9605,	/*(阅)*/
    0x8018,	/*(耘)*/
    0x4e91,	/*(云)*/
    0x90e7,	/*(郧)*/
    0x5300,	/*(匀)*/
    0x9668,	/*(陨)*/
    0x5141,	/*(允)*/
    0x8fd0,	/*(运)*/
    0x8574,	/*(蕴)*/
    0x915d,	/*(酝)*/
    0x6655,	/*(晕)*/
    0x97f5,	/*(韵)*/
    0x5b55,	/*(孕)*/
    0x531d,	/*(匝)*/
    0x7838,	/*(砸)*/
    0x6742,	/*(杂)*/
    0x683d,	/*(栽)*/
    0x54c9,	/*(哉)*/
    0x707e,	/*(灾)*/
    0x5bb0,	/*(宰)*/
    0x8f7d,	/*(载)*/
    0x518d,	/*(再)*/
    0x5728,	/*(在)*/
    0x54b1,	/*(咱)*/
    0x6512,	/*(攒)*/
    0x6682,	/*(暂)*/
    0x8d5e,	/*(赞)*/
    0x8d43,	/*(赃)*/
    0x810f,	/*(脏)*/
    0x846c,	/*(葬)*/
    0x906d,	/*(遭)*/
    0x7cdf,	/*(糟)*/
    0x51ff,	/*(凿)*/
    0x85fb,	/*(藻)*/
    0x67a3,	/*(枣)*/
    0x65e9,	/*(早)*/
    0x6fa1,	/*(澡)*/
    0x86a4,	/*(蚤)*/
    0x8e81,	/*(躁)*/
    0x566a,	/*(噪)*/
    0x9020,	/*(造)*/
    0x7682,	/*(皂)*/
    0x7076,	/*(灶)*/
    0x71e5,	/*(燥)*/
    0x8d23,	/*(责)*/
    0x62e9,	/*(择)*/
    0x5219,	/*(则)*/
    0x6cfd,	/*(泽)*/
    0x8d3c,	/*(贼)*/
    0x600e,	/*(怎)*/
    0x589e,	/*(增)*/
    0x618e,	/*(憎)*/
    0x66fe,	/*(曾)*/
    0x8d60,	/*(赠)*/
    0x624e,	/*(扎)*/
    0x55b3,	/*(喳)*/
    0x6e23,	/*(渣)*/
    0x672d,	/*(札)*/
    0x8f67,	/*(轧)*/
    0x94e1,	/*(铡)*/
    0x95f8,	/*(闸)*/
    0x7728,	/*(眨)*/
    0x6805,	/*(栅)*/
    0x69a8,	/*(榨)*/
    0x548b,	/*(咋)*/
    0x4e4d,	/*(乍)*/
    0x70b8,	/*(炸)*/
    0x8bc8,	/*(诈)*/
    0x6458,	/*(摘)*/
    0x658b,	/*(斋)*/
    0x5b85,	/*(宅)*/
    0x7a84,	/*(窄)*/
    0x503a,	/*(债)*/
    0x5be8,	/*(寨)*/
    0x77bb,	/*(瞻)*/
    0x6be1,	/*(毡)*/
    0x8a79,	/*(詹)*/
    0x7c98,	/*(粘)*/
    0x6cbe,	/*(沾)*/
    0x76cf,	/*(盏)*/
    0x65a9,	/*(斩)*/
    0x8f97,	/*(辗)*/
    0x5d2d,	/*(崭)*/
    0x5c55,	/*(展)*/
    0x8638,	/*(蘸)*/
    0x6808,	/*(栈)*/
    0x5360,	/*(占)*/
    0x6218,	/*(战)*/
    0x7ad9,	/*(站)*/
    0x6e5b,	/*(湛)*/
    0x7efd,	/*(绽)*/
    0x6a1f,	/*(樟)*/
    0x7ae0,	/*(章)*/
    0x5f70,	/*(彰)*/
    0x6f33,	/*(漳)*/
    0x5f20,	/*(张)*/
    0x638c,	/*(掌)*/
    0x6da8,	/*(涨)*/
    0x6756,	/*(杖)*/
    0x4e08,	/*(丈)*/
    0x5e10,	/*(帐)*/
    0x8d26,	/*(账)*/
    0x4ed7,	/*(仗)*/
    0x80c0,	/*(胀)*/
    0x7634,	/*(瘴)*/
    0x969c,	/*(障)*/
    0x62db,	/*(招)*/
    0x662d,	/*(昭)*/
    0x627e,	/*(找)*/
    0x6cbc,	/*(沼)*/
    0x8d75,	/*(赵)*/
    0x7167,	/*(照)*/
    0x7f69,	/*(罩)*/
    0x5146,	/*(兆)*/
    0x8087,	/*(肇)*/
    0x53ec,	/*(召)*/
    0x906e,	/*(遮)*/
    0x6298,	/*(折)*/
    0x54f2,	/*(哲)*/
    0x86f0,	/*(蛰)*/
    0x8f99,	/*(辙)*/
    0x8005,	/*(者)*/
    0x9517,	/*(锗)*/
    0x8517,	/*(蔗)*/
    0x8fd9,	/*(这)*/
    0x6d59,	/*(浙)*/
    0x73cd,	/*(珍)*/
    0x659f,	/*(斟)*/
    0x771f,	/*(真)*/
    0x7504,	/*(甄)*/
    0x7827,	/*(砧)*/
    0x81fb,	/*(臻)*/
    0x8d1e,	/*(贞)*/
    0x9488,	/*(针)*/
    0x4fa6,	/*(侦)*/
    0x6795,	/*(枕)*/
    0x75b9,	/*(疹)*/
    0x8bca,	/*(诊)*/
    0x9707,	/*(震)*/
    0x632f,	/*(振)*/
    0x9547,	/*(镇)*/
    0x9635,	/*(阵)*/
    0x84b8,	/*(蒸)*/
    0x6323,	/*(挣)*/
    0x7741,	/*(睁)*/
    0x5f81,	/*(征)*/
    0x72f0,	/*(狰)*/
    0x4e89,	/*(争)*/
    0x6014,	/*(怔)*/
    0x6574,	/*(整)*/
    0x62ef,	/*(拯)*/
    0x6b63,	/*(正)*/
    0x653f,	/*(政)*/
    0x5e27,	/*(帧)*/
    0x75c7,	/*(症)*/
    0x90d1,	/*(郑)*/
    0x8bc1,	/*(证)*/
    0x829d,	/*(芝)*/
    0x679d,	/*(枝)*/
    0x652f,	/*(支)*/
    0x5431,	/*(吱)*/
    0x8718,	/*(蜘)*/
    0x77e5,	/*(知)*/
    0x80a2,	/*(肢)*/
    0x8102,	/*(脂)*/
    0x6c41,	/*(汁)*/
    0x4e4b,	/*(之)*/
    0x7ec7,	/*(织)*/
    0x804c,	/*(职)*/
    0x76f4,	/*(直)*/
    0x690d,	/*(植)*/
    0x6b96,	/*(殖)*/
    0x6267,	/*(执)*/
    0x503c,	/*(值)*/
    0x4f84,	/*(侄)*/
    0x5740,	/*(址)*/
    0x6307,	/*(指)*/
    0x6b62,	/*(止)*/
    0x8dbe,	/*(趾)*/
    0x53ea,	/*(只)*/
    0x65e8,	/*(旨)*/
    0x7eb8,	/*(纸)*/
    0x5fd7,	/*(志)*/
    0x631a,	/*(挚)*/
    0x63b7,	/*(掷)*/
    0x81f3,	/*(至)*/
    0x81f4,	/*(致)*/
    0x7f6e,	/*(置)*/
    0x5e1c,	/*(帜)*/
    0x5cd9,	/*(峙)*/
    0x5236,	/*(制)*/
    0x667a,	/*(智)*/
    0x79e9,	/*(秩)*/
    0x7a1a,	/*(稚)*/
    0x8d28,	/*(质)*/
    0x7099,	/*(炙)*/
    0x75d4,	/*(痔)*/
    0x6ede,	/*(滞)*/
    0x6cbb,	/*(治)*/
    0x7a92,	/*(窒)*/
    0x4e2d,	/*(中)*/
    0x76c5,	/*(盅)*/
    0x5fe0,	/*(忠)*/
    0x949f,	/*(钟)*/
    0x8877,	/*(衷)*/
    0x7ec8,	/*(终)*/
    0x79cd,	/*(种)*/
    0x80bf,	/*(肿)*/
    0x91cd,	/*(重)*/
    0x4ef2,	/*(仲)*/
    0x4f17,	/*(众)*/
    0x821f,	/*(舟)*/
    0x5468,	/*(周)*/
    0x5dde,	/*(州)*/
    0x6d32,	/*(洲)*/
    0x8bcc,	/*(诌)*/
    0x7ca5,	/*(粥)*/
    0x8f74,	/*(轴)*/
    0x8098,	/*(肘)*/
    0x5e1a,	/*(帚)*/
    0x5492,	/*(咒)*/
    0x76b1,	/*(皱)*/
    0x5b99,	/*(宙)*/
    0x663c,	/*(昼)*/
    0x9aa4,	/*(骤)*/
    0x73e0,	/*(珠)*/
    0x682a,	/*(株)*/
    0x86db,	/*(蛛)*/
    0x6731,	/*(朱)*/
    0x732a,	/*(猪)*/
    0x8bf8,	/*(诸)*/
    0x8bdb,	/*(诛)*/
    0x9010,	/*(逐)*/
    0x7af9,	/*(竹)*/
    0x70db,	/*(烛)*/
    0x716e,	/*(煮)*/
    0x62c4,	/*(拄)*/
    0x77a9,	/*(瞩)*/
    0x5631,	/*(嘱)*/
    0x4e3b,	/*(主)*/
    0x8457,	/*(著)*/
    0x67f1,	/*(柱)*/
    0x52a9,	/*(助)*/
    0x86c0,	/*(蛀)*/
    0x8d2e,	/*(贮)*/
    0x94f8,	/*(铸)*/
    0x7b51,	/*(筑)*/
    0x4f4f,	/*(住)*/
    0x6ce8,	/*(注)*/
    0x795d,	/*(祝)*/
    0x9a7b,	/*(驻)*/
    0x6293,	/*(抓)*/
    0x722a,	/*(爪)*/
    0x62fd,	/*(拽)*/
    0x4e13,	/*(专)*/
    0x7816,	/*(砖)*/
    0x8f6c,	/*(转)*/
    0x64b0,	/*(撰)*/
    0x8d5a,	/*(赚)*/
    0x7bc6,	/*(篆)*/
    0x6869,	/*(桩)*/
    0x5e84,	/*(庄)*/
    0x88c5,	/*(装)*/
    0x5986,	/*(妆)*/
    0x649e,	/*(撞)*/
    0x58ee,	/*(壮)*/
    0x72b6,	/*(状)*/
    0x690e,	/*(椎)*/
    0x9525,	/*(锥)*/
    0x8ffd,	/*(追)*/
    0x8d58,	/*(赘)*/
    0x5760,	/*(坠)*/
    0x7f00,	/*(缀)*/
    0x8c06,	/*(谆)*/
    0x51c6,	/*(准)*/
    0x6349,	/*(捉)*/
    0x62d9,	/*(拙)*/
    0x5353,	/*(卓)*/
    0x684c,	/*(桌)*/
    0x7422,	/*(琢)*/
    0x8301,	/*(茁)*/
    0x914c,	/*(酌)*/
    0x5544,	/*(啄)*/
    0x7740,	/*(着)*/
    0x707c,	/*(灼)*/
    0x6d4a,	/*(浊)*/
    0x5179,	/*(兹)*/
    0x54a8,	/*(咨)*/
    0x8d44,	/*(资)*/
    0x59ff,	/*(姿)*/
    0x6ecb,	/*(滋)*/
    0x6dc4,	/*(淄)*/
    0x5b5c,	/*(孜)*/
    0x7d2b,	/*(紫)*/
    0x4ed4,	/*(仔)*/
    0x7c7d,	/*(籽)*/
    0x6ed3,	/*(滓)*/
    0x5b50,	/*(子)*/
    0x81ea,	/*(自)*/
    0x6e0d,	/*(渍)*/
    0x5b57,	/*(字)*/
    0x9b03,	/*(鬃)*/
    0x68d5,	/*(棕)*/
    0x8e2a,	/*(踪)*/
    0x5b97,	/*(宗)*/
    0x7efc,	/*(综)*/
    0x603b,	/*(总)*/
    0x7eb5,	/*(纵)*/
    0x90b9,	/*(邹)*/
    0x8d70,	/*(走)*/
    0x594f,	/*(奏)*/
    0x63cd,	/*(揍)*/
    0x79df,	/*(租)*/
    0x8db3,	/*(足)*/
    0x5352,	/*(卒)*/
    0x65cf,	/*(族)*/
    0x7956,	/*(祖)*/
    0x8bc5,	/*(诅)*/
    0x963b,	/*(阻)*/
    0x7ec4,	/*(组)*/
    0x94bb,	/*(钻)*/
    0x7e82,	/*(纂)*/
    0x5634,	/*(嘴)*/
    0x9189,	/*(醉)*/
    0x6700,	/*(最)*/
    0x7f6a,	/*(罪)*/
    0x5c0a,	/*(尊)*/
    0x9075,	/*(遵)*/
    0x6628,	/*(昨)*/
    0x5de6,	/*(左)*/
    0x4f50,	/*(佐)*/
    0x67de,	/*(柞)*/
    0x505a,	/*(做)*/
    0x4f5c,	/*(作)*/
    0x5750,	/*(坐)*/
    0x5ea7,	/*(座)*/
    0xe810,	/*()*/
    0xe811,	/*()*/
    0xe812,	/*()*/
    0xe813,	/*()*/
    0xe814,	/*()*/
    0x4e8d,	/*(亍)*/
    0x4e0c,	/*(丌)*/
    0x5140,	/*(兀)*/
    0x4e10,	/*(丐)*/
    0x5eff,	/*(廿)*/
    0x5345,	/*(卅)*/
    0x4e15,	/*(丕)*/
    0x4e98,	/*(亘)*/
    0x4e1e,	/*(丞)*/
    0x9b32,	/*(鬲)*/
    0x5b6c,	/*(孬)*/
    0x5669,	/*(噩)*/
    0x4e28,	/*(丨)*/
    0x79ba,	/*(禺)*/
    0x4e3f,	/*(丿)*/
    0x5315,	/*(匕)*/
    0x4e47,	/*(乇)*/
    0x592d,	/*(夭)*/
    0x723b,	/*(爻)*/
    0x536e,	/*(卮)*/
    0x6c10,	/*(氐)*/
    0x56df,	/*(囟)*/
    0x80e4,	/*(胤)*/
    0x9997,	/*(馗)*/
    0x6bd3,	/*(毓)*/
    0x777e,	/*(睾)*/
    0x9f17,	/*(鼗)*/
    0x4e36,	/*(丶)*/
    0x4e9f,	/*(亟)*/
    0x9f10,	/*(鼐)*/
    0x4e5c,	/*(乜)*/
    0x4e69,	/*(乩)*/
    0x4e93,	/*(亓)*/
    0x8288,	/*(芈)*/
    0x5b5b,	/*(孛)*/
    0x556c,	/*(啬)*/
    0x560f,	/*(嘏)*/
    0x4ec4,	/*(仄)*/
    0x538d,	/*(厍)*/
    0x539d,	/*(厝)*/
    0x53a3,	/*(厣)*/
    0x53a5,	/*(厥)*/
    0x53ae,	/*(厮)*/
    0x9765,	/*(靥)*/
    0x8d5d,	/*(赝)*/
    0x531a,	/*(匚)*/
    0x53f5,	/*(叵)*/
    0x5326,	/*(匦)*/
    0x532e,	/*(匮)*/
    0x533e,	/*(匾)*/
    0x8d5c,	/*(赜)*/
    0x5366,	/*(卦)*/
    0x5363,	/*(卣)*/
    0x5202,	/*(刂)*/
    0x5208,	/*(刈)*/
    0x520e,	/*(刎)*/
    0x522d,	/*(刭)*/
    0x5233,	/*(刳)*/
    0x523f,	/*(刿)*/
    0x5240,	/*(剀)*/
    0x524c,	/*(剌)*/
    0x525e,	/*(剞)*/
    0x5261,	/*(剡)*/
    0x525c,	/*(剜)*/
    0x84af,	/*(蒯)*/
    0x527d,	/*(剽)*/
    0x5282,	/*(劂)*/
    0x5281,	/*(劁)*/
    0x5290,	/*(劐)*/
    0x5293,	/*(劓)*/
    0x5182,	/*(冂)*/
    0x7f54,	/*(罔)*/
    0x4ebb,	/*(亻)*/
    0x4ec3,	/*(仃)*/
    0x4ec9,	/*(仉)*/
    0x4ec2,	/*(仂)*/
    0x4ee8,	/*(仨)*/
    0x4ee1,	/*(仡)*/
    0x4eeb,	/*(仫)*/
    0x4ede,	/*(仞)*/
    0x4f1b,	/*(伛)*/
    0x4ef3,	/*(仳)*/
    0x4f22,	/*(伢)*/
    0x4f64,	/*(佤)*/
    0x4ef5,	/*(仵)*/
    0x4f25,	/*(伥)*/
    0x4f27,	/*(伧)*/
    0x4f09,	/*(伉)*/
    0x4f2b,	/*(伫)*/
    0x4f5e,	/*(佞)*/
    0x4f67,	/*(佧)*/
    0x6538,	/*(攸)*/
    0x4f5a,	/*(佚)*/
    0x4f5d,	/*(佝)*/
    0x4f5f,	/*(佟)*/
    0x4f57,	/*(佗)*/
    0x4f32,	/*(伲)*/
    0x4f3d,	/*(伽)*/
    0x4f76,	/*(佶)*/
    0x4f74,	/*(佴)*/
    0x4f91,	/*(侑)*/
    0x4f89,	/*(侉)*/
    0x4f83,	/*(侃)*/
    0x4f8f,	/*(侏)*/
    0x4f7e,	/*(佾)*/
    0x4f7b,	/*(佻)*/
    0x4faa,	/*(侪)*/
    0x4f7c,	/*(佼)*/
    0x4fac,	/*(侬)*/
    0x4f94,	/*(侔)*/
    0x4fe6,	/*(俦)*/
    0x4fe8,	/*(俨)*/
    0x4fea,	/*(俪)*/
    0x4fc5,	/*(俅)*/
    0x4fda,	/*(俚)*/
    0x4fe3,	/*(俣)*/
    0x4fdc,	/*(俜)*/
    0x4fd1,	/*(俑)*/
    0x4fdf,	/*(俟)*/
    0x4ff8,	/*(俸)*/
    0x5029,	/*(倩)*/
    0x504c,	/*(偌)*/
    0x4ff3,	/*(俳)*/
    0x502c,	/*(倬)*/
    0x500f,	/*(倏)*/
    0x502e,	/*(倮)*/
    0x502d,	/*(倭)*/
    0x4ffe,	/*(俾)*/
    0x501c,	/*(倜)*/
    0x500c,	/*(倌)*/
    0x5025,	/*(倥)*/
    0x5028,	/*(倨)*/
    0x507e,	/*(偾)*/
    0x5043,	/*(偃)*/
    0x5055,	/*(偕)*/
    0x5048,	/*(偈)*/
    0x504e,	/*(偎)*/
    0x506c,	/*(偬)*/
    0x507b,	/*(偻)*/
    0x50a5,	/*(傥)*/
    0x50a7,	/*(傧)*/
    0x50a9,	/*(傩)*/
    0x50ba,	/*(傺)*/
    0x50d6,	/*(僖)*/
    0x5106,	/*(儆)*/
    0x50ed,	/*(僭)*/
    0x50ec,	/*(僬)*/
    0x50e6,	/*(僦)*/
    0x50ee,	/*(僮)*/
    0x5107,	/*(儇)*/
    0x510b,	/*(儋)*/
    0x4edd,	/*(仝)*/
    0x6c3d,	/*(氽)*/
    0x4f58,	/*(佘)*/
    0x4f65,	/*(佥)*/
    0x4fce,	/*(俎)*/
    0x9fa0,	/*(龠)*/
    0x6c46,	/*(汆)*/
    0x7c74,	/*(籴)*/
    0x516e,	/*(兮)*/
    0x5dfd,	/*(巽)*/
    0x9ec9,	/*(黉)*/
    0x9998,	/*(馘)*/
    0x5181,	/*(冁)*/
    0x5914,	/*(夔)*/
    0x52f9,	/*(勹)*/
    0x530d,	/*(匍)*/
    0x8a07,	/*(訇)*/
    0x5310,	/*(匐)*/
    0x51eb,	/*(凫)*/
    0x5919,	/*(夙)*/
    0x5155,	/*(兕)*/
    0x4ea0,	/*(亠)*/
    0x5156,	/*(兖)*/
    0x4eb3,	/*(亳)*/
    0x886e,	/*(衮)*/
    0x88a4,	/*(袤)*/
    0x4eb5,	/*(亵)*/
    0x8114,	/*(脔)*/
    0x88d2,	/*(裒)*/
    0x7980,	/*(禀)*/
    0x5b34,	/*(嬴)*/
    0x8803,	/*(蠃)*/
    0x7fb8,	/*(羸)*/
    0x51ab,	/*(冫)*/
    0x51b1,	/*(冱)*/
    0x51bd,	/*(冽)*/
    0x51bc,	/*(冼)*/
    0x51c7,	/*(凇)*/
    0x5196,	/*(冖)*/
    0x51a2,	/*(冢)*/
    0x51a5,	/*(冥)*/
    0x8ba0,	/*(讠)*/
    0x8ba6,	/*(讦)*/
    0x8ba7,	/*(讧)*/
    0x8baa,	/*(讪)*/
    0x8bb4,	/*(讴)*/
    0x8bb5,	/*(讵)*/
    0x8bb7,	/*(讷)*/
    0x8bc2,	/*(诂)*/
    0x8bc3,	/*(诃)*/
    0x8bcb,	/*(诋)*/
    0x8bcf,	/*(诏)*/
    0x8bce,	/*(诎)*/
    0x8bd2,	/*(诒)*/
    0x8bd3,	/*(诓)*/
    0x8bd4,	/*(诔)*/
    0x8bd6,	/*(诖)*/
    0x8bd8,	/*(诘)*/
    0x8bd9,	/*(诙)*/
    0x8bdc,	/*(诜)*/
    0x8bdf,	/*(诟)*/
    0x8be0,	/*(诠)*/
    0x8be4,	/*(诤)*/
    0x8be8,	/*(诨)*/
    0x8be9,	/*(诩)*/
    0x8bee,	/*(诮)*/
    0x8bf0,	/*(诰)*/
    0x8bf3,	/*(诳)*/
    0x8bf6,	/*(诶)*/
    0x8bf9,	/*(诹)*/
    0x8bfc,	/*(诼)*/
    0x8bff,	/*(诿)*/
    0x8c00,	/*(谀)*/
    0x8c02,	/*(谂)*/
    0x8c04,	/*(谄)*/
    0x8c07,	/*(谇)*/
    0x8c0c,	/*(谌)*/
    0x8c0f,	/*(谏)*/
    0x8c11,	/*(谑)*/
    0x8c12,	/*(谒)*/
    0x8c14,	/*(谔)*/
    0x8c15,	/*(谕)*/
    0x8c16,	/*(谖)*/
    0x8c19,	/*(谙)*/
    0x8c1b,	/*(谛)*/
    0x8c18,	/*(谘)*/
    0x8c1d,	/*(谝)*/
    0x8c1f,	/*(谟)*/
    0x8c20,	/*(谠)*/
    0x8c21,	/*(谡)*/
    0x8c25,	/*(谥)*/
    0x8c27,	/*(谧)*/
    0x8c2a,	/*(谪)*/
    0x8c2b,	/*(谫)*/
    0x8c2e,	/*(谮)*/
    0x8c2f,	/*(谯)*/
    0x8c32,	/*(谲)*/
    0x8c33,	/*(谳)*/
    0x8c35,	/*(谵)*/
    0x8c36,	/*(谶)*/
    0x5369,	/*(卩)*/
    0x537a,	/*(卺)*/
    0x961d,	/*(阝)*/
    0x9622,	/*(阢)*/
    0x9621,	/*(阡)*/
    0x9631,	/*(阱)*/
    0x962a,	/*(阪)*/
    0x963d,	/*(阽)*/
    0x963c,	/*(阼)*/
    0x9642,	/*(陂)*/
    0x9649,	/*(陉)*/
    0x9654,	/*(陔)*/
    0x965f,	/*(陟)*/
    0x9667,	/*(陧)*/
    0x966c,	/*(陬)*/
    0x9672,	/*(陲)*/
    0x9674,	/*(陴)*/
    0x9688,	/*(隈)*/
    0x968d,	/*(隍)*/
    0x9697,	/*(隗)*/
    0x96b0,	/*(隰)*/
    0x9097,	/*(邗)*/
    0x909b,	/*(邛)*/
    0x909d,	/*(邝)*/
    0x9099,	/*(邙)*/
    0x90ac,	/*(邬)*/
    0x90a1,	/*(邡)*/
    0x90b4,	/*(邴)*/
    0x90b3,	/*(邳)*/
    0x90b6,	/*(邶)*/
    0x90ba,	/*(邺)*/
    0x90b8,	/*(邸)*/
    0x90b0,	/*(邰)*/
    0x90cf,	/*(郏)*/
    0x90c5,	/*(郅)*/
    0x90be,	/*(邾)*/
    0x90d0,	/*(郐)*/
    0x90c4,	/*(郄)*/
    0x90c7,	/*(郇)*/
    0x90d3,	/*(郓)*/
    0x90e6,	/*(郦)*/
    0x90e2,	/*(郢)*/
    0x90dc,	/*(郜)*/
    0x90d7,	/*(郗)*/
    0x90db,	/*(郛)*/
    0x90eb,	/*(郫)*/
    0x90ef,	/*(郯)*/
    0x90fe,	/*(郾)*/
    0x9104,	/*(鄄)*/
    0x9122,	/*(鄢)*/
    0x911e,	/*(鄞)*/
    0x9123,	/*(鄣)*/
    0x9131,	/*(鄱)*/
    0x912f,	/*(鄯)*/
    0x9139,	/*(鄹)*/
    0x9143,	/*(酃)*/
    0x9146,	/*(酆)*/
    0x520d,	/*(刍)*/
    0x5942,	/*(奂)*/
    0x52a2,	/*(劢)*/
    0x52ac,	/*(劬)*/
    0x52ad,	/*(劭)*/
    0x52be,	/*(劾)*/
    0x54ff,	/*(哿)*/
    0x52d0,	/*(勐)*/
    0x52d6,	/*(勖)*/
    0x52f0,	/*(勰)*/
    0x53df,	/*(叟)*/
    0x71ee,	/*(燮)*/
    0x77cd,	/*(矍)*/
    0x5ef4,	/*(廴)*/
    0x51f5,	/*(凵)*/
    0x51fc,	/*(凼)*/
    0x9b2f,	/*(鬯)*/
    0x53b6,	/*(厶)*/
    0x5f01,	/*(弁)*/
    0x755a,	/*(畚)*/
    0x5def,	/*(巯)*/
    0x574c,	/*(坌)*/
    0x57a9,	/*(垩)*/
    0x57a1,	/*(垡)*/
    0x587e,	/*(塾)*/
    0x58bc,	/*(墼)*/
    0x58c5,	/*(壅)*/
    0x58d1,	/*(壑)*/
    0x5729,	/*(圩)*/
    0x572c,	/*(圬)*/
    0x572a,	/*(圪)*/
    0x5733,	/*(圳)*/
    0x5739,	/*(圹)*/
    0x572e,	/*(圮)*/
    0x572f,	/*(圯)*/
    0x575c,	/*(坜)*/
    0x573b,	/*(圻)*/
    0x5742,	/*(坂)*/
    0x5769,	/*(坩)*/
    0x5785,	/*(垅)*/
    0x576b,	/*(坫)*/
    0x5786,	/*(垆)*/
    0x577c,	/*(坼)*/
    0x577b,	/*(坻)*/
    0x5768,	/*(坨)*/
    0x576d,	/*(坭)*/
    0x5776,	/*(坶)*/
    0x5773,	/*(坳)*/
    0x57ad,	/*(垭)*/
    0x57a4,	/*(垤)*/
    0x578c,	/*(垌)*/
    0x57b2,	/*(垲)*/
    0x57cf,	/*(埏)*/
    0x57a7,	/*(垧)*/
    0x57b4,	/*(垴)*/
    0x5793,	/*(垓)*/
    0x57a0,	/*(垠)*/
    0x57d5,	/*(埕)*/
    0x57d8,	/*(埘)*/
    0x57da,	/*(埚)*/
    0x57d9,	/*(埙)*/
    0x57d2,	/*(埒)*/
    0x57b8,	/*(垸)*/
    0x57f4,	/*(埴)*/
    0x57ef,	/*(埯)*/
    0x57f8,	/*(埸)*/
    0x57e4,	/*(埤)*/
    0x57dd,	/*(埝)*/
    0x580b,	/*(堋)*/
    0x580d,	/*(堍)*/
    0x57fd,	/*(埽)*/
    0x57ed,	/*(埭)*/
    0x5800,	/*(堀)*/
    0x581e,	/*(堞)*/
    0x5819,	/*(堙)*/
    0x5844,	/*(塄)*/
    0x5820,	/*(堠)*/
    0x5865,	/*(塥)*/
    0x586c,	/*(塬)*/
    0x5881,	/*(墁)*/
    0x5889,	/*(墉)*/
    0x589a,	/*(墚)*/
    0x5880,	/*(墀)*/
    0x99a8,	/*(馨)*/
    0x9f19,	/*(鼙)*/
    0x61ff,	/*(懿)*/
    0x8279,	/*(艹)*/
    0x827d,	/*(艽)*/
    0x827f,	/*(艿)*/
    0x828f,	/*(芏)*/
    0x828a,	/*(芊)*/
    0x82a8,	/*(芨)*/
    0x8284,	/*(芄)*/
    0x828e,	/*(芎)*/
    0x8291,	/*(芑)*/
    0x8297,	/*(芗)*/
    0x8299,	/*(芙)*/
    0x82ab,	/*(芫)*/
    0x82b8,	/*(芸)*/
    0x82be,	/*(芾)*/
    0x82b0,	/*(芰)*/
    0x82c8,	/*(苈)*/
    0x82ca,	/*(苊)*/
    0x82e3,	/*(苣)*/
    0x8298,	/*(芘)*/
    0x82b7,	/*(芷)*/
    0x82ae,	/*(芮)*/
    0x82cb,	/*(苋)*/
    0x82cc,	/*(苌)*/
    0x82c1,	/*(苁)*/
    0x82a9,	/*(芩)*/
    0x82b4,	/*(芴)*/
    0x82a1,	/*(芡)*/
    0x82aa,	/*(芪)*/
    0x829f,	/*(芟)*/
    0x82c4,	/*(苄)*/
    0x82ce,	/*(苎)*/
    0x82a4,	/*(芤)*/
    0x82e1,	/*(苡)*/
    0x8309,	/*(茉)*/
    0x82f7,	/*(苷)*/
    0x82e4,	/*(苤)*/
    0x830f,	/*(茏)*/
    0x8307,	/*(茇)*/
    0x82dc,	/*(苜)*/
    0x82f4,	/*(苴)*/
    0x82d2,	/*(苒)*/
    0x82d8,	/*(苘)*/
    0x830c,	/*(茌)*/
    0x82fb,	/*(苻)*/
    0x82d3,	/*(苓)*/
    0x8311,	/*(茑)*/
    0x831a,	/*(茚)*/
    0x8306,	/*(茆)*/
    0x8314,	/*(茔)*/
    0x8315,	/*(茕)*/
    0x82e0,	/*(苠)*/
    0x82d5,	/*(苕)*/
    0x831c,	/*(茜)*/
    0x8351,	/*(荑)*/
    0x835b,	/*(荛)*/
    0x835c,	/*(荜)*/
    0x8308,	/*(茈)*/
    0x8392,	/*(莒)*/
    0x833c,	/*(茼)*/
    0x8334,	/*(茴)*/
    0x8331,	/*(茱)*/
    0x839b,	/*(莛)*/
    0x835e,	/*(荞)*/
    0x832f,	/*(茯)*/
    0x834f,	/*(荏)*/
    0x8347,	/*(荇)*/
    0x8343,	/*(荃)*/
    0x835f,	/*(荟)*/
    0x8340,	/*(荀)*/
    0x8317,	/*(茗)*/
    0x8360,	/*(荠)*/
    0x832d,	/*(茭)*/
    0x833a,	/*(茺)*/
    0x8333,	/*(茳)*/
    0x8366,	/*(荦)*/
    0x8365,	/*(荥)*/
    0x8368,	/*(荨)*/
    0x831b,	/*(茛)*/
    0x8369,	/*(荩)*/
    0x836c,	/*(荬)*/
    0x836a,	/*(荪)*/
    0x836d,	/*(荭)*/
    0x836e,	/*(荮)*/
    0x83b0,	/*(莰)*/
    0x8378,	/*(荸)*/
    0x83b3,	/*(莳)*/
    0x83b4,	/*(莴)*/
    0x83a0,	/*(莠)*/
    0x83aa,	/*(莪)*/
    0x8393,	/*(莓)*/
    0x839c,	/*(莜)*/
    0x8385,	/*(莅)*/
    0x837c,	/*(荼)*/
    0x83b6,	/*(莶)*/
    0x83a9,	/*(莩)*/
    0x837d,	/*(荽)*/
    0x83b8,	/*(莸)*/
    0x837b,	/*(荻)*/
    0x8398,	/*(莘)*/
    0x839e,	/*(莞)*/
    0x83a8,	/*(莨)*/
    0x83ba,	/*(莺)*/
    0x83bc,	/*(莼)*/
    0x83c1,	/*(菁)*/
    0x8401,	/*(萁)*/
    0x83e5,	/*(菥)*/
    0x83d8,	/*(菘)*/
    0x5807,	/*(堇)*/
    0x8418,	/*(萘)*/
    0x840b,	/*(萋)*/
    0x83dd,	/*(菝)*/
    0x83fd,	/*(菽)*/
    0x83d6,	/*(菖)*/
    0x841c,	/*(萜)*/
    0x8438,	/*(萸)*/
    0x8411,	/*(萑)*/
    0x8406,	/*(萆)*/
    0x83d4,	/*(菔)*/
    0x83df,	/*(菟)*/
    0x840f,	/*(萏)*/
    0x8403,	/*(萃)*/
    0x83f8,	/*(菸)*/
    0x83f9,	/*(菹)*/
    0x83ea,	/*(菪)*/
    0x83c5,	/*(菅)*/
    0x83c0,	/*(菀)*/
    0x8426,	/*(萦)*/
    0x83f0,	/*(菰)*/
    0x83e1,	/*(菡)*/
    0x845c,	/*(葜)*/
    0x8451,	/*(葑)*/
    0x845a,	/*(葚)*/
    0x8459,	/*(葙)*/
    0x8473,	/*(葳)*/
    0x8487,	/*(蒇)*/
    0x8488,	/*(蒈)*/
    0x847a,	/*(葺)*/
    0x8489,	/*(蒉)*/
    0x8478,	/*(葸)*/
    0x843c,	/*(萼)*/
    0x8446,	/*(葆)*/
    0x8469,	/*(葩)*/
    0x8476,	/*(葶)*/
    0x848c,	/*(蒌)*/
    0x848e,	/*(蒎)*/
    0x8431,	/*(萱)*/
    0x846d,	/*(葭)*/
    0x84c1,	/*(蓁)*/
    0x84cd,	/*(蓍)*/
    0x84d0,	/*(蓐)*/
    0x84e6,	/*(蓦)*/
    0x84bd,	/*(蒽)*/
    0x84d3,	/*(蓓)*/
    0x84ca,	/*(蓊)*/
    0x84bf,	/*(蒿)*/
    0x84ba,	/*(蒺)*/
    0x84e0,	/*(蓠)*/
    0x84a1,	/*(蒡)*/
    0x84b9,	/*(蒹)*/
    0x84b4,	/*(蒴)*/
    0x8497,	/*(蒗)*/
    0x84e5,	/*(蓥)*/
    0x84e3,	/*(蓣)*/
    0x850c,	/*(蔌)*/
    0x750d,	/*(甍)*/
    0x8538,	/*(蔸)*/
    0x84f0,	/*(蓰)*/
    0x8539,	/*(蔹)*/
    0x851f,	/*(蔟)*/
    0x853a,	/*(蔺)*/
    0x8556,	/*(蕖)*/
    0x853b,	/*(蔻)*/
    0x84ff,	/*(蓿)*/
    0x84fc,	/*(蓼)*/
    0x8559,	/*(蕙)*/
    0x8548,	/*(蕈)*/
    0x8568,	/*(蕨)*/
    0x8564,	/*(蕤)*/
    0x855e,	/*(蕞)*/
    0x857a,	/*(蕺)*/
    0x77a2,	/*(瞢)*/
    0x8543,	/*(蕃)*/
    0x8572,	/*(蕲)*/
    0x857b,	/*(蕻)*/
    0x85a4,	/*(薤)*/
    0x85a8,	/*(薨)*/
    0x8587,	/*(薇)*/
    0x858f,	/*(薏)*/
    0x8579,	/*(蕹)*/
    0x85ae,	/*(薮)*/
    0x859c,	/*(薜)*/
    0x8585,	/*(薅)*/
    0x85b9,	/*(薹)*/
    0x85b7,	/*(薷)*/
    0x85b0,	/*(薰)*/
    0x85d3,	/*(藓)*/
    0x85c1,	/*(藁)*/
    0x85dc,	/*(藜)*/
    0x85ff,	/*(藿)*/
    0x8627,	/*(蘧)*/
    0x8605,	/*(蘅)*/
    0x8629,	/*(蘩)*/
    0x8616,	/*(蘖)*/
    0x863c,	/*(蘼)*/
    0x5efe,	/*(廾)*/
    0x5f08,	/*(弈)*/
    0x593c,	/*(夼)*/
    0x5941,	/*(奁)*/
    0x8037,	/*(耷)*/
    0x5955,	/*(奕)*/
    0x595a,	/*(奚)*/
    0x5958,	/*(奘)*/
    0x530f,	/*(匏)*/
    0x5c22,	/*(尢)*/
    0x5c25,	/*(尥)*/
    0x5c2c,	/*(尬)*/
    0x5c34,	/*(尴)*/
    0x624c,	/*(扌)*/
    0x626a,	/*(扪)*/
    0x629f,	/*(抟)*/
    0x62bb,	/*(抻)*/
    0x62ca,	/*(拊)*/
    0x62da,	/*(拚)*/
    0x62d7,	/*(拗)*/
    0x62ee,	/*(拮)*/
    0x6322,	/*(挢)*/
    0x62f6,	/*(拶)*/
    0x6339,	/*(挹)*/
    0x634b,	/*(捋)*/
    0x6343,	/*(捃)*/
    0x63ad,	/*(掭)*/
    0x63f6,	/*(揶)*/
    0x6371,	/*(捱)*/
    0x637a,	/*(捺)*/
    0x638e,	/*(掎)*/
    0x63b4,	/*(掴)*/
    0x636d,	/*(捭)*/
    0x63ac,	/*(掬)*/
    0x638a,	/*(掊)*/
    0x6369,	/*(捩)*/
    0x63ae,	/*(掮)*/
    0x63bc,	/*(掼)*/
    0x63f2,	/*(揲)*/
    0x63f8,	/*(揸)*/
    0x63e0,	/*(揠)*/
    0x63ff,	/*(揿)*/
    0x63c4,	/*(揄)*/
    0x63de,	/*(揞)*/
    0x63ce,	/*(揎)*/
    0x6452,	/*(摒)*/
    0x63c6,	/*(揆)*/
    0x63be,	/*(掾)*/
    0x6445,	/*(摅)*/
    0x6441,	/*(摁)*/
    0x640b,	/*(搋)*/
    0x641b,	/*(搛)*/
    0x6420,	/*(搠)*/
    0x640c,	/*(搌)*/
    0x6426,	/*(搦)*/
    0x6421,	/*(搡)*/
    0x645e,	/*(摞)*/
    0x6484,	/*(撄)*/
    0x646d,	/*(摭)*/
    0x6496,	/*(撖)*/
    0x647a,	/*(摺)*/
    0x64b7,	/*(撷)*/
    0x64b8,	/*(撸)*/
    0x6499,	/*(撙)*/
    0x64ba,	/*(撺)*/
    0x64c0,	/*(擀)*/
    0x64d0,	/*(擐)*/
    0x64d7,	/*(擗)*/
    0x64e4,	/*(擤)*/
    0x64e2,	/*(擢)*/
    0x6509,	/*(攉)*/
    0x6525,	/*(攥)*/
    0x652e,	/*(攮)*/
    0x5f0b,	/*(弋)*/
    0x5fd2,	/*(忒)*/
    0x7519,	/*(甙)*/
    0x5f11,	/*(弑)*/
    0x535f,	/*(卟)*/
    0x53f1,	/*(叱)*/
    0x53fd,	/*(叽)*/
    0x53e9,	/*(叩)*/
    0x53e8,	/*(叨)*/
    0x53fb,	/*(叻)*/
    0x5412,	/*(吒)*/
    0x5416,	/*(吖)*/
    0x5406,	/*(吆)*/
    0x544b,	/*(呋)*/
    0x5452,	/*(呒)*/
    0x5453,	/*(呓)*/
    0x5454,	/*(呔)*/
    0x5456,	/*(呖)*/
    0x5443,	/*(呃)*/
    0x5421,	/*(吡)*/
    0x5457,	/*(呗)*/
    0x5459,	/*(呙)*/
    0x5423,	/*(吣)*/
    0x5432,	/*(吲)*/
    0x5482,	/*(咂)*/
    0x5494,	/*(咔)*/
    0x5477,	/*(呷)*/
    0x5471,	/*(呱)*/
    0x5464,	/*(呤)*/
    0x549a,	/*(咚)*/
    0x549b,	/*(咛)*/
    0x5484,	/*(咄)*/
    0x5476,	/*(呶)*/
    0x5466,	/*(呦)*/
    0x549d,	/*(咝)*/
    0x54d0,	/*(哐)*/
    0x54ad,	/*(咭)*/
    0x54c2,	/*(哂)*/
    0x54b4,	/*(咴)*/
    0x54d2,	/*(哒)*/
    0x54a7,	/*(咧)*/
    0x54a6,	/*(咦)*/
    0x54d3,	/*(哓)*/
    0x54d4,	/*(哔)*/
    0x5472,	/*(呲)*/
    0x54a3,	/*(咣)*/
    0x54d5,	/*(哕)*/
    0x54bb,	/*(咻)*/
    0x54bf,	/*(咿)*/
    0x54cc,	/*(哌)*/
    0x54d9,	/*(哙)*/
    0x54da,	/*(哚)*/
    0x54dc,	/*(哜)*/
    0x54a9,	/*(咩)*/
    0x54aa,	/*(咪)*/
    0x54a4,	/*(咤)*/
    0x54dd,	/*(哝)*/
    0x54cf,	/*(哏)*/
    0x54de,	/*(哞)*/
    0x551b,	/*(唛)*/
    0x54e7,	/*(哧)*/
    0x5520,	/*(唠)*/
    0x54fd,	/*(哽)*/
    0x5514,	/*(唔)*/
    0x54f3,	/*(哳)*/
    0x5522,	/*(唢)*/
    0x5523,	/*(唣)*/
    0x550f,	/*(唏)*/
    0x5511,	/*(唑)*/
    0x5527,	/*(唧)*/
    0x552a,	/*(唪)*/
    0x5567,	/*(啧)*/
    0x558f,	/*(喏)*/
    0x55b5,	/*(喵)*/
    0x5549,	/*(啉)*/
    0x556d,	/*(啭)*/
    0x5541,	/*(啁)*/
    0x5555,	/*(啕)*/
    0x553f,	/*(唿)*/
    0x5550,	/*(啐)*/
    0x553c,	/*(唼)*/
    0x5537,	/*(唷)*/
    0x5556,	/*(啖)*/
    0x5575,	/*(啵)*/
    0x5576,	/*(啶)*/
    0x5577,	/*(啷)*/
    0x5533,	/*(唳)*/
    0x5530,	/*(唰)*/
    0x555c,	/*(啜)*/
    0x558b,	/*(喋)*/
    0x55d2,	/*(嗒)*/
    0x5583,	/*(喃)*/
    0x55b1,	/*(喱)*/
    0x55b9,	/*(喹)*/
    0x5588,	/*(喈)*/
    0x5581,	/*(喁)*/
    0x559f,	/*(喟)*/
    0x557e,	/*(啾)*/
    0x55d6,	/*(嗖)*/
    0x5591,	/*(喑)*/
    0x557b,	/*(啻)*/
    0x55df,	/*(嗟)*/
    0x55bd,	/*(喽)*/
    0x55be,	/*(喾)*/
    0x5594,	/*(喔)*/
    0x5599,	/*(喙)*/
    0x55ea,	/*(嗪)*/
    0x55f7,	/*(嗷)*/
    0x55c9,	/*(嗉)*/
    0x561f,	/*(嘟)*/
    0x55d1,	/*(嗑)*/
    0x55eb,	/*(嗫)*/
    0x55ec,	/*(嗬)*/
    0x55d4,	/*(嗔)*/
    0x55e6,	/*(嗦)*/
    0x55dd,	/*(嗝)*/
    0x55c4,	/*(嗄)*/
    0x55ef,	/*(嗯)*/
    0x55e5,	/*(嗥)*/
    0x55f2,	/*(嗲)*/
    0x55f3,	/*(嗳)*/
    0x55cc,	/*(嗌)*/
    0x55cd,	/*(嗍)*/
    0x55e8,	/*(嗨)*/
    0x55f5,	/*(嗵)*/
    0x55e4,	/*(嗤)*/
    0x8f94,	/*(辔)*/
    0x561e,	/*(嘞)*/
    0x5608,	/*(嘈)*/
    0x560c,	/*(嘌)*/
    0x5601,	/*(嘁)*/
    0x5624,	/*(嘤)*/
    0x5623,	/*(嘣)*/
    0x55fe,	/*(嗾)*/
    0x5600,	/*(嘀)*/
    0x5627,	/*(嘧)*/
    0x562d,	/*(嘭)*/
    0x5658,	/*(噘)*/
    0x5639,	/*(嘹)*/
    0x5657,	/*(噗)*/
    0x562c,	/*(嘬)*/
    0x564d,	/*(噍)*/
    0x5662,	/*(噢)*/
    0x5659,	/*(噙)*/
    0x565c,	/*(噜)*/
    0x564c,	/*(噌)*/
    0x5654,	/*(噔)*/
    0x5686,	/*(嚆)*/
    0x5664,	/*(噤)*/
    0x5671,	/*(噱)*/
    0x566b,	/*(噫)*/
    0x567b,	/*(噻)*/
    0x567c,	/*(噼)*/
    0x5685,	/*(嚅)*/
    0x5693,	/*(嚓)*/
    0x56af,	/*(嚯)*/
    0x56d4,	/*(囔)*/
    0x56d7,	/*(囗)*/
    0x56dd,	/*(囝)*/
    0x56e1,	/*(囡)*/
    0x56f5,	/*(囵)*/
    0x56eb,	/*(囫)*/
    0x56f9,	/*(囹)*/
    0x56ff,	/*(囿)*/
    0x5704,	/*(圄)*/
    0x570a,	/*(圊)*/
    0x5709,	/*(圉)*/
    0x571c,	/*(圜)*/
    0x5e0f,	/*(帏)*/
    0x5e19,	/*(帙)*/
    0x5e14,	/*(帔)*/
    0x5e11,	/*(帑)*/
    0x5e31,	/*(帱)*/
    0x5e3b,	/*(帻)*/
    0x5e3c,	/*(帼)*/
    0x5e37,	/*(帷)*/
    0x5e44,	/*(幄)*/
    0x5e54,	/*(幔)*/
    0x5e5b,	/*(幛)*/
    0x5e5e,	/*(幞)*/
    0x5e61,	/*(幡)*/
    0x5c8c,	/*(岌)*/
    0x5c7a,	/*(屺)*/
    0x5c8d,	/*(岍)*/
    0x5c90,	/*(岐)*/
    0x5c96,	/*(岖)*/
    0x5c88,	/*(岈)*/
    0x5c98,	/*(岘)*/
    0x5c99,	/*(岙)*/
    0x5c91,	/*(岑)*/
    0x5c9a,	/*(岚)*/
    0x5c9c,	/*(岜)*/
    0x5cb5,	/*(岵)*/
    0x5ca2,	/*(岢)*/
    0x5cbd,	/*(岽)*/
    0x5cac,	/*(岬)*/
    0x5cab,	/*(岫)*/
    0x5cb1,	/*(岱)*/
    0x5ca3,	/*(岣)*/
    0x5cc1,	/*(峁)*/
    0x5cb7,	/*(岷)*/
    0x5cc4,	/*(峄)*/
    0x5cd2,	/*(峒)*/
    0x5ce4,	/*(峤)*/
    0x5ccb,	/*(峋)*/
    0x5ce5,	/*(峥)*/
    0x5d02,	/*(崂)*/
    0x5d03,	/*(崃)*/
    0x5d27,	/*(崧)*/
    0x5d26,	/*(崦)*/
    0x5d2e,	/*(崮)*/
    0x5d24,	/*(崤)*/
    0x5d1e,	/*(崞)*/
    0x5d06,	/*(崆)*/
    0x5d1b,	/*(崛)*/
    0x5d58,	/*(嵘)*/
    0x5d3e,	/*(崾)*/
    0x5d34,	/*(崴)*/
    0x5d3d,	/*(崽)*/
    0x5d6c,	/*(嵬)*/
    0x5d5b,	/*(嵛)*/
    0x5d6f,	/*(嵯)*/
    0x5d5d,	/*(嵝)*/
    0x5d6b,	/*(嵫)*/
    0x5d4b,	/*(嵋)*/
    0x5d4a,	/*(嵊)*/
    0x5d69,	/*(嵩)*/
    0x5d74,	/*(嵴)*/
    0x5d82,	/*(嶂)*/
    0x5d99,	/*(嶙)*/
    0x5d9d,	/*(嶝)*/
    0x8c73,	/*(豳)*/
    0x5db7,	/*(嶷)*/
    0x5dc5,	/*(巅)*/
    0x5f73,	/*(彳)*/
    0x5f77,	/*(彷)*/
    0x5f82,	/*(徂)*/
    0x5f87,	/*(徇)*/
    0x5f89,	/*(徉)*/
    0x5f8c,	/*(後)*/
    0x5f95,	/*(徕)*/
    0x5f99,	/*(徙)*/
    0x5f9c,	/*(徜)*/
    0x5fa8,	/*(徨)*/
    0x5fad,	/*(徭)*/
    0x5fb5,	/*(徵)*/
    0x5fbc,	/*(徼)*/
    0x8862,	/*(衢)*/
    0x5f61,	/*(彡)*/
    0x72ad,	/*(犭)*/
    0x72b0,	/*(犰)*/
    0x72b4,	/*(犴)*/
    0x72b7,	/*(犷)*/
    0x72b8,	/*(犸)*/
    0x72c3,	/*(狃)*/
    0x72c1,	/*(狁)*/
    0x72ce,	/*(狎)*/
    0x72cd,	/*(狍)*/
    0x72d2,	/*(狒)*/
    0x72e8,	/*(狨)*/
    0x72ef,	/*(狯)*/
    0x72e9,	/*(狩)*/
    0x72f2,	/*(狲)*/
    0x72f4,	/*(狴)*/
    0x72f7,	/*(狷)*/
    0x7301,	/*(猁)*/
    0x72f3,	/*(狳)*/
    0x7303,	/*(猃)*/
    0x72fa,	/*(狺)*/
    0x72fb,	/*(狻)*/
    0x7317,	/*(猗)*/
    0x7313,	/*(猓)*/
    0x7321,	/*(猡)*/
    0x730a,	/*(猊)*/
    0x731e,	/*(猞)*/
    0x731d,	/*(猝)*/
    0x7315,	/*(猕)*/
    0x7322,	/*(猢)*/
    0x7339,	/*(猹)*/
    0x7325,	/*(猥)*/
    0x732c,	/*(猬)*/
    0x7338,	/*(猸)*/
    0x7331,	/*(猱)*/
    0x7350,	/*(獐)*/
    0x734d,	/*(獍)*/
    0x7357,	/*(獗)*/
    0x7360,	/*(獠)*/
    0x736c,	/*(獬)*/
    0x736f,	/*(獯)*/
    0x737e,	/*(獾)*/
    0x821b,	/*(舛)*/
    0x5925,	/*(夥)*/
    0x98e7,	/*(飧)*/
    0x5924,	/*(夤)*/
    0x5902,	/*(夂)*/
    0x9963,	/*(饣)*/
    0x9967,	/*(饧)*/
    0x9968,	/*(饨)*/
    0x9969,	/*(饩)*/
    0x996a,	/*(饪)*/
    0x996b,	/*(饫)*/
    0x996c,	/*(饬)*/
    0x9974,	/*(饴)*/
    0x9977,	/*(饷)*/
    0x997d,	/*(饽)*/
    0x9980,	/*(馀)*/
    0x9984,	/*(馄)*/
    0x9987,	/*(馇)*/
    0x998a,	/*(馊)*/
    0x998d,	/*(馍)*/
    0x9990,	/*(馐)*/
    0x9991,	/*(馑)*/
    0x9993,	/*(馓)*/
    0x9994,	/*(馔)*/
    0x9995,	/*(馕)*/
    0x5e80,	/*(庀)*/
    0x5e91,	/*(庑)*/
    0x5e8b,	/*(庋)*/
    0x5e96,	/*(庖)*/
    0x5ea5,	/*(庥)*/
    0x5ea0,	/*(庠)*/
    0x5eb9,	/*(庹)*/
    0x5eb5,	/*(庵)*/
    0x5ebe,	/*(庾)*/
    0x5eb3,	/*(庳)*/
    0x8d53,	/*(赓)*/
    0x5ed2,	/*(廒)*/
    0x5ed1,	/*(廑)*/
    0x5edb,	/*(廛)*/
    0x5ee8,	/*(廨)*/
    0x5eea,	/*(廪)*/
    0x81ba,	/*(膺)*/
    0x5fc4,	/*(忄)*/
    0x5fc9,	/*(忉)*/
    0x5fd6,	/*(忖)*/
    0x5fcf,	/*(忏)*/
    0x6003,	/*(怃)*/
    0x5fee,	/*(忮)*/
    0x6004,	/*(怄)*/
    0x5fe1,	/*(忡)*/
    0x5fe4,	/*(忤)*/
    0x5ffe,	/*(忾)*/
    0x6005,	/*(怅)*/
    0x6006,	/*(怆)*/
    0x5fea,	/*(忪)*/
    0x5fed,	/*(忭)*/
    0x5ff8,	/*(忸)*/
    0x6019,	/*(怙)*/
    0x6035,	/*(怵)*/
    0x6026,	/*(怦)*/
    0x601b,	/*(怛)*/
    0x600f,	/*(怏)*/
    0x600d,	/*(怍)*/
    0x6029,	/*(怩)*/
    0x602b,	/*(怫)*/
    0x600a,	/*(怊)*/
    0x603f,	/*(怿)*/
    0x6021,	/*(怡)*/
    0x6078,	/*(恸)*/
    0x6079,	/*(恹)*/
    0x607b,	/*(恻)*/
    0x607a,	/*(恺)*/
    0x6042,	/*(恂)*/
    0x606a,	/*(恪)*/
    0x607d,	/*(恽)*/
    0x6096,	/*(悖)*/
    0x609a,	/*(悚)*/
    0x60ad,	/*(悭)*/
    0x609d,	/*(悝)*/
    0x6083,	/*(悃)*/
    0x6092,	/*(悒)*/
    0x608c,	/*(悌)*/
    0x609b,	/*(悛)*/
    0x60ec,	/*(惬)*/
    0x60bb,	/*(悻)*/
    0x60b1,	/*(悱)*/
    0x60dd,	/*(惝)*/
    0x60d8,	/*(惘)*/
    0x60c6,	/*(惆)*/
    0x60da,	/*(惚)*/
    0x60b4,	/*(悴)*/
    0x6120,	/*(愠)*/
    0x6126,	/*(愦)*/
    0x6115,	/*(愕)*/
    0x6123,	/*(愣)*/
    0x60f4,	/*(惴)*/
    0x6100,	/*(愀)*/
    0x610e,	/*(愎)*/
    0x612b,	/*(愫)*/
    0x614a,	/*(慊)*/
    0x6175,	/*(慵)*/
    0x61ac,	/*(憬)*/
    0x6194,	/*(憔)*/
    0x61a7,	/*(憧)*/
    0x61b7,	/*(憷)*/
    0x61d4,	/*(懔)*/
    0x61f5,	/*(懵)*/
    0x5fdd,	/*(忝)*/
    0x96b3,	/*(隳)*/
    0x95e9,	/*(闩)*/
    0x95eb,	/*(闫)*/
    0x95f1,	/*(闱)*/
    0x95f3,	/*(闳)*/
    0x95f5,	/*(闵)*/
    0x95f6,	/*(闶)*/
    0x95fc,	/*(闼)*/
    0x95fe,	/*(闾)*/
    0x9603,	/*(阃)*/
    0x9604,	/*(阄)*/
    0x9606,	/*(阆)*/
    0x9608,	/*(阈)*/
    0x960a,	/*(阊)*/
    0x960b,	/*(阋)*/
    0x960c,	/*(阌)*/
    0x960d,	/*(阍)*/
    0x960f,	/*(阏)*/
    0x9612,	/*(阒)*/
    0x9615,	/*(阕)*/
    0x9616,	/*(阖)*/
    0x9617,	/*(阗)*/
    0x9619,	/*(阙)*/
    0x961a,	/*(阚)*/
    0x4e2c,	/*(丬)*/
    0x723f,	/*(爿)*/
    0x6215,	/*(戕)*/
    0x6c35,	/*(氵)*/
    0x6c54,	/*(汔)*/
    0x6c5c,	/*(汜)*/
    0x6c4a,	/*(汊)*/
    0x6ca3,	/*(沣)*/
    0x6c85,	/*(沅)*/
    0x6c90,	/*(沐)*/
    0x6c94,	/*(沔)*/
    0x6c8c,	/*(沌)*/
    0x6c68,	/*(汨)*/
    0x6c69,	/*(汩)*/
    0x6c74,	/*(汴)*/
    0x6c76,	/*(汶)*/
    0x6c86,	/*(沆)*/
    0x6ca9,	/*(沩)*/
    0x6cd0,	/*(泐)*/
    0x6cd4,	/*(泔)*/
    0x6cad,	/*(沭)*/
    0x6cf7,	/*(泷)*/
    0x6cf8,	/*(泸)*/
    0x6cf1,	/*(泱)*/
    0x6cd7,	/*(泗)*/
    0x6cb2,	/*(沲)*/
    0x6ce0,	/*(泠)*/
    0x6cd6,	/*(泖)*/
    0x6cfa,	/*(泺)*/
    0x6ceb,	/*(泫)*/
    0x6cee,	/*(泮)*/
    0x6cb1,	/*(沱)*/
    0x6cd3,	/*(泓)*/
    0x6cef,	/*(泯)*/
    0x6cfe,	/*(泾)*/
    0x6d39,	/*(洹)*/
    0x6d27,	/*(洧)*/
    0x6d0c,	/*(洌)*/
    0x6d43,	/*(浃)*/
    0x6d48,	/*(浈)*/
    0x6d07,	/*(洇)*/
    0x6d04,	/*(洄)*/
    0x6d19,	/*(洙)*/
    0x6d0e,	/*(洎)*/
    0x6d2b,	/*(洫)*/
    0x6d4d,	/*(浍)*/
    0x6d2e,	/*(洮)*/
    0x6d35,	/*(洵)*/
    0x6d1a,	/*(洚)*/
    0x6d4f,	/*(浏)*/
    0x6d52,	/*(浒)*/
    0x6d54,	/*(浔)*/
    0x6d33,	/*(洳)*/
    0x6d91,	/*(涑)*/
    0x6d6f,	/*(浯)*/
    0x6d9e,	/*(涞)*/
    0x6da0,	/*(涠)*/
    0x6d5e,	/*(浞)*/
    0x6d93,	/*(涓)*/
    0x6d94,	/*(涔)*/
    0x6d5c,	/*(浜)*/
    0x6d60,	/*(浠)*/
    0x6d7c,	/*(浼)*/
    0x6d63,	/*(浣)*/
    0x6e1a,	/*(渚)*/
    0x6dc7,	/*(淇)*/
    0x6dc5,	/*(淅)*/
    0x6dde,	/*(淞)*/
    0x6e0e,	/*(渎)*/
    0x6dbf,	/*(涿)*/
    0x6de0,	/*(淠)*/
    0x6e11,	/*(渑)*/
    0x6de6,	/*(淦)*/
    0x6ddd,	/*(淝)*/
    0x6dd9,	/*(淙)*/
    0x6e16,	/*(渖)*/
    0x6dab,	/*(涫)*/
    0x6e0c,	/*(渌)*/
    0x6dae,	/*(涮)*/
    0x6e2b,	/*(渫)*/
    0x6e6e,	/*(湮)*/
    0x6e4e,	/*(湎)*/
    0x6e6b,	/*(湫)*/
    0x6eb2,	/*(溲)*/
    0x6e5f,	/*(湟)*/
    0x6e86,	/*(溆)*/
    0x6e53,	/*(湓)*/
    0x6e54,	/*(湔)*/
    0x6e32,	/*(渲)*/
    0x6e25,	/*(渥)*/
    0x6e44,	/*(湄)*/
    0x6edf,	/*(滟)*/
    0x6eb1,	/*(溱)*/
    0x6e98,	/*(溘)*/
    0x6ee0,	/*(滠)*/
    0x6f2d,	/*(漭)*/
    0x6ee2,	/*(滢)*/
    0x6ea5,	/*(溥)*/
    0x6ea7,	/*(溧)*/
    0x6ebd,	/*(溽)*/
    0x6ebb,	/*(溻)*/
    0x6eb7,	/*(溷)*/
    0x6ed7,	/*(滗)*/
    0x6eb4,	/*(溴)*/
    0x6ecf,	/*(滏)*/
    0x6e8f,	/*(溏)*/
    0x6ec2,	/*(滂)*/
    0x6e9f,	/*(溟)*/
    0x6f62,	/*(潢)*/
    0x6f46,	/*(潆)*/
    0x6f47,	/*(潇)*/
    0x6f24,	/*(漤)*/
    0x6f15,	/*(漕)*/
    0x6ef9,	/*(滹)*/
    0x6f2f,	/*(漯)*/
    0x6f36,	/*(漶)*/
    0x6f4b,	/*(潋)*/
    0x6f74,	/*(潴)*/
    0x6f2a,	/*(漪)*/
    0x6f09,	/*(漉)*/
    0x6f29,	/*(漩)*/
    0x6f89,	/*(澉)*/
    0x6f8d,	/*(澍)*/
    0x6f8c,	/*(澌)*/
    0x6f78,	/*(潸)*/
    0x6f72,	/*(潲)*/
    0x6f7c,	/*(潼)*/
    0x6f7a,	/*(潺)*/
    0x6fd1,	/*(濑)*/
    0x6fc9,	/*(濉)*/
    0x6fa7,	/*(澧)*/
    0x6fb9,	/*(澹)*/
    0x6fb6,	/*(澶)*/
    0x6fc2,	/*(濂)*/
    0x6fe1,	/*(濡)*/
    0x6fee,	/*(濮)*/
    0x6fde,	/*(濞)*/
    0x6fe0,	/*(濠)*/
    0x6fef,	/*(濯)*/
    0x701a,	/*(瀚)*/
    0x7023,	/*(瀣)*/
    0x701b,	/*(瀛)*/
    0x7039,	/*(瀹)*/
    0x7035,	/*(瀵)*/
    0x704f,	/*(灏)*/
    0x705e,	/*(灞)*/
    0x5b80,	/*(宀)*/
    0x5b84,	/*(宄)*/
    0x5b95,	/*(宕)*/
    0x5b93,	/*(宓)*/
    0x5ba5,	/*(宥)*/
    0x5bb8,	/*(宸)*/
    0x752f,	/*(甯)*/
    0x9a9e,	/*(骞)*/
    0x6434,	/*(搴)*/
    0x5be4,	/*(寤)*/
    0x5bee,	/*(寮)*/
    0x8930,	/*(褰)*/
    0x5bf0,	/*(寰)*/
    0x8e47,	/*(蹇)*/
    0x8b07,	/*(謇)*/
    0x8fb6,	/*(辶)*/
    0x8fd3,	/*(迓)*/
    0x8fd5,	/*(迕)*/
    0x8fe5,	/*(迥)*/
    0x8fee,	/*(迮)*/
    0x8fe4,	/*(迤)*/
    0x8fe9,	/*(迩)*/
    0x8fe6,	/*(迦)*/
    0x8ff3,	/*(迳)*/
    0x8fe8,	/*(迨)*/
    0x9005,	/*(逅)*/
    0x9004,	/*(逄)*/
    0x900b,	/*(逋)*/
    0x9026,	/*(逦)*/
    0x9011,	/*(逑)*/
    0x900d,	/*(逍)*/
    0x9016,	/*(逖)*/
    0x9021,	/*(逡)*/
    0x9035,	/*(逵)*/
    0x9036,	/*(逶)*/
    0x902d,	/*(逭)*/
    0x902f,	/*(逯)*/
    0x9044,	/*(遄)*/
    0x9051,	/*(遑)*/
    0x9052,	/*(遒)*/
    0x9050,	/*(遐)*/
    0x9068,	/*(遨)*/
    0x9058,	/*(遘)*/
    0x9062,	/*(遢)*/
    0x905b,	/*(遛)*/
    0x66b9,	/*(暹)*/
    0x9074,	/*(遴)*/
    0x907d,	/*(遽)*/
    0x9082,	/*(邂)*/
    0x9088,	/*(邈)*/
    0x9083,	/*(邃)*/
    0x908b,	/*(邋)*/
    0x5f50,	/*(彐)*/
    0x5f57,	/*(彗)*/
    0x5f56,	/*(彖)*/
    0x5f58,	/*(彘)*/
    0x5c3b,	/*(尻)*/
    0x54ab,	/*(咫)*/
    0x5c50,	/*(屐)*/
    0x5c59,	/*(屙)*/
    0x5b71,	/*(孱)*/
    0x5c63,	/*(屣)*/
    0x5c66,	/*(屦)*/
    0x7fbc,	/*(羼)*/
    0x5f2a,	/*(弪)*/
    0x5f29,	/*(弩)*/
    0x5f2d,	/*(弭)*/
    0x8274,	/*(艴)*/
    0x5f3c,	/*(弼)*/
    0x9b3b,	/*(鬻)*/
    0x5c6e,	/*(屮)*/
    0x5981,	/*(妁)*/
    0x5983,	/*(妃)*/
    0x598d,	/*(妍)*/
    0x59a9,	/*(妩)*/
    0x59aa,	/*(妪)*/
    0x59a3,	/*(妣)*/
    0x5997,	/*(妗)*/
    0x59ca,	/*(姊)*/
    0x59ab,	/*(妫)*/
    0x599e,	/*(妞)*/
    0x59a4,	/*(妤)*/
    0x59d2,	/*(姒)*/
    0x59b2,	/*(妲)*/
    0x59af,	/*(妯)*/
    0x59d7,	/*(姗)*/
    0x59be,	/*(妾)*/
    0x5a05,	/*(娅)*/
    0x5a06,	/*(娆)*/
    0x59dd,	/*(姝)*/
    0x5a08,	/*(娈)*/
    0x59e3,	/*(姣)*/
    0x59d8,	/*(姘)*/
    0x59f9,	/*(姹)*/
    0x5a0c,	/*(娌)*/
    0x5a09,	/*(娉)*/
    0x5a32,	/*(娲)*/
    0x5a34,	/*(娴)*/
    0x5a11,	/*(娑)*/
    0x5a23,	/*(娣)*/
    0x5a13,	/*(娓)*/
    0x5a40,	/*(婀)*/
    0x5a67,	/*(婧)*/
    0x5a4a,	/*(婊)*/
    0x5a55,	/*(婕)*/
    0x5a3c,	/*(娼)*/
    0x5a62,	/*(婢)*/
    0x5a75,	/*(婵)*/
    0x80ec,	/*(胬)*/
    0x5aaa,	/*(媪)*/
    0x5a9b,	/*(媛)*/
    0x5a77,	/*(婷)*/
    0x5a7a,	/*(婺)*/
    0x5abe,	/*(媾)*/
    0x5aeb,	/*(嫫)*/
    0x5ab2,	/*(媲)*/
    0x5ad2,	/*(嫒)*/
    0x5ad4,	/*(嫔)*/
    0x5ab8,	/*(媸)*/
    0x5ae0,	/*(嫠)*/
    0x5ae3,	/*(嫣)*/
    0x5af1,	/*(嫱)*/
    0x5ad6,	/*(嫖)*/
    0x5ae6,	/*(嫦)*/
    0x5ad8,	/*(嫘)*/
    0x5adc,	/*(嫜)*/
    0x5b09,	/*(嬉)*/
    0x5b17,	/*(嬗)*/
    0x5b16,	/*(嬖)*/
    0x5b32,	/*(嬲)*/
    0x5b37,	/*(嬷)*/
    0x5b40,	/*(孀)*/
    0x5c15,	/*(尕)*/
    0x5c1c,	/*(尜)*/
    0x5b5a,	/*(孚)*/
    0x5b65,	/*(孥)*/
    0x5b73,	/*(孳)*/
    0x5b51,	/*(孑)*/
    0x5b53,	/*(孓)*/
    0x5b62,	/*(孢)*/
    0x9a75,	/*(驵)*/
    0x9a77,	/*(驷)*/
    0x9a78,	/*(驸)*/
    0x9a7a,	/*(驺)*/
    0x9a7f,	/*(驿)*/
    0x9a7d,	/*(驽)*/
    0x9a80,	/*(骀)*/
    0x9a81,	/*(骁)*/
    0x9a85,	/*(骅)*/
    0x9a88,	/*(骈)*/
    0x9a8a,	/*(骊)*/
    0x9a90,	/*(骐)*/
    0x9a92,	/*(骒)*/
    0x9a93,	/*(骓)*/
    0x9a96,	/*(骖)*/
    0x9a98,	/*(骘)*/
    0x9a9b,	/*(骛)*/
    0x9a9c,	/*(骜)*/
    0x9a9d,	/*(骝)*/
    0x9a9f,	/*(骟)*/
    0x9aa0,	/*(骠)*/
    0x9aa2,	/*(骢)*/
    0x9aa3,	/*(骣)*/
    0x9aa5,	/*(骥)*/
    0x9aa7,	/*(骧)*/
    0x7e9f,	/*(纟)*/
    0x7ea1,	/*(纡)*/
    0x7ea3,	/*(纣)*/
    0x7ea5,	/*(纥)*/
    0x7ea8,	/*(纨)*/
    0x7ea9,	/*(纩)*/
    0x7ead,	/*(纭)*/
    0x7eb0,	/*(纰)*/
    0x7ebe,	/*(纾)*/
    0x7ec0,	/*(绀)*/
    0x7ec1,	/*(绁)*/
    0x7ec2,	/*(绂)*/
    0x7ec9,	/*(绉)*/
    0x7ecb,	/*(绋)*/
    0x7ecc,	/*(绌)*/
    0x7ed0,	/*(绐)*/
    0x7ed4,	/*(绔)*/
    0x7ed7,	/*(绗)*/
    0x7edb,	/*(绛)*/
    0x7ee0,	/*(绠)*/
    0x7ee1,	/*(绡)*/
    0x7ee8,	/*(绨)*/
    0x7eeb,	/*(绫)*/
    0x7eee,	/*(绮)*/
    0x7eef,	/*(绯)*/
    0x7ef1,	/*(绱)*/
    0x7ef2,	/*(绲)*/
    0x7f0d,	/*(缍)*/
    0x7ef6,	/*(绶)*/
    0x7efa,	/*(绺)*/
    0x7efb,	/*(绻)*/
    0x7efe,	/*(绾)*/
    0x7f01,	/*(缁)*/
    0x7f02,	/*(缂)*/
    0x7f03,	/*(缃)*/
    0x7f07,	/*(缇)*/
    0x7f08,	/*(缈)*/
    0x7f0b,	/*(缋)*/
    0x7f0c,	/*(缌)*/
    0x7f0f,	/*(缏)*/
    0x7f11,	/*(缑)*/
    0x7f12,	/*(缒)*/
    0x7f17,	/*(缗)*/
    0x7f19,	/*(缙)*/
    0x7f1c,	/*(缜)*/
    0x7f1b,	/*(缛)*/
    0x7f1f,	/*(缟)*/
    0x7f21,	/*(缡)*/
    0x7f22,	/*(缢)*/
    0x7f23,	/*(缣)*/
    0x7f24,	/*(缤)*/
    0x7f25,	/*(缥)*/
    0x7f26,	/*(缦)*/
    0x7f27,	/*(缧)*/
    0x7f2a,	/*(缪)*/
    0x7f2b,	/*(缫)*/
    0x7f2c,	/*(缬)*/
    0x7f2d,	/*(缭)*/
    0x7f2f,	/*(缯)*/
    0x7f30,	/*(缰)*/
    0x7f31,	/*(缱)*/
    0x7f32,	/*(缲)*/
    0x7f33,	/*(缳)*/
    0x7f35,	/*(缵)*/
    0x5e7a,	/*(幺)*/
    0x757f,	/*(畿)*/
    0x5ddb,	/*(巛)*/
    0x753e,	/*(甾)*/
    0x9095,	/*(邕)*/
    0x738e,	/*(玎)*/
    0x7391,	/*(玑)*/
    0x73ae,	/*(玮)*/
    0x73a2,	/*(玢)*/
    0x739f,	/*(玟)*/
    0x73cf,	/*(珏)*/
    0x73c2,	/*(珂)*/
    0x73d1,	/*(珑)*/
    0x73b7,	/*(玷)*/
    0x73b3,	/*(玳)*/
    0x73c0,	/*(珀)*/
    0x73c9,	/*(珉)*/
    0x73c8,	/*(珈)*/
    0x73e5,	/*(珥)*/
    0x73d9,	/*(珙)*/
    0x987c,	/*(顼)*/
    0x740a,	/*(琊)*/
    0x73e9,	/*(珩)*/
    0x73e7,	/*(珧)*/
    0x73de,	/*(珞)*/
    0x73ba,	/*(玺)*/
    0x73f2,	/*(珲)*/
    0x740f,	/*(琏)*/
    0x742a,	/*(琪)*/
    0x745b,	/*(瑛)*/
    0x7426,	/*(琦)*/
    0x7425,	/*(琥)*/
    0x7428,	/*(琨)*/
    0x7430,	/*(琰)*/
    0x742e,	/*(琮)*/
    0x742c,	/*(琬)*/
    0x741b,	/*(琛)*/
    0x741a,	/*(琚)*/
    0x7441,	/*(瑁)*/
    0x745c,	/*(瑜)*/
    0x7457,	/*(瑗)*/
    0x7455,	/*(瑕)*/
    0x7459,	/*(瑙)*/
    0x7477,	/*(瑷)*/
    0x746d,	/*(瑭)*/
    0x747e,	/*(瑾)*/
    0x749c,	/*(璜)*/
    0x748e,	/*(璎)*/
    0x7480,	/*(璀)*/
    0x7481,	/*(璁)*/
    0x7487,	/*(璇)*/
    0x748b,	/*(璋)*/
    0x749e,	/*(璞)*/
    0x74a8,	/*(璨)*/
    0x74a9,	/*(璩)*/
    0x7490,	/*(璐)*/
    0x74a7,	/*(璧)*/
    0x74d2,	/*(瓒)*/
    0x74ba,	/*(璺)*/
    0x97ea,	/*(韪)*/
    0x97eb,	/*(韫)*/
    0x97ec,	/*(韬)*/
    0x674c,	/*(杌)*/
    0x6753,	/*(杓)*/
    0x675e,	/*(杞)*/
    0x6748,	/*(杈)*/
    0x6769,	/*(杩)*/
    0x67a5,	/*(枥)*/
    0x6787,	/*(枇)*/
    0x676a,	/*(杪)*/
    0x6773,	/*(杳)*/
    0x6798,	/*(枘)*/
    0x67a7,	/*(枧)*/
    0x6775,	/*(杵)*/
    0x67a8,	/*(枨)*/
    0x679e,	/*(枞)*/
    0x67ad,	/*(枭)*/
    0x678b,	/*(枋)*/
    0x6777,	/*(杷)*/
    0x677c,	/*(杼)*/
    0x67f0,	/*(柰)*/
    0x6809,	/*(栉)*/
    0x67d8,	/*(柘)*/
    0x680a,	/*(栊)*/
    0x67e9,	/*(柩)*/
    0x67b0,	/*(枰)*/
    0x680c,	/*(栌)*/
    0x67d9,	/*(柙)*/
    0x67b5,	/*(枵)*/
    0x67da,	/*(柚)*/
    0x67b3,	/*(枳)*/
    0x67dd,	/*(柝)*/
    0x6800,	/*(栀)*/
    0x67c3,	/*(柃)*/
    0x67b8,	/*(枸)*/
    0x67e2,	/*(柢)*/
    0x680e,	/*(栎)*/
    0x67c1,	/*(柁)*/
    0x67fd,	/*(柽)*/
    0x6832,	/*(栲)*/
    0x6833,	/*(栳)*/
    0x6860,	/*(桠)*/
    0x6861,	/*(桡)*/
    0x684e,	/*(桎)*/
    0x6862,	/*(桢)*/
    0x6844,	/*(桄)*/
    0x6864,	/*(桤)*/
    0x6883,	/*(梃)*/
    0x681d,	/*(栝)*/
    0x6855,	/*(桕)*/
    0x6866,	/*(桦)*/
    0x6841,	/*(桁)*/
    0x6867,	/*(桧)*/
    0x6840,	/*(桀)*/
    0x683e,	/*(栾)*/
    0x684a,	/*(桊)*/
    0x6849,	/*(桉)*/
    0x6829,	/*(栩)*/
    0x68b5,	/*(梵)*/
    0x688f,	/*(梏)*/
    0x6874,	/*(桴)*/
    0x6877,	/*(桷)*/
    0x6893,	/*(梓)*/
    0x686b,	/*(桫)*/
    0x68c2,	/*(棂)*/
    0x696e,	/*(楮)*/
    0x68fc,	/*(棼)*/
    0x691f,	/*(椟)*/
    0x6920,	/*(椠)*/
    0x68f9,	/*(棹)*/
    0x6924,	/*(椤)*/
    0x68f0,	/*(棰)*/
    0x690b,	/*(椋)*/
    0x6901,	/*(椁)*/
    0x6957,	/*(楗)*/
    0x68e3,	/*(棣)*/
    0x6910,	/*(椐)*/
    0x6971,	/*(楱)*/
    0x6939,	/*(椹)*/
    0x6960,	/*(楠)*/
    0x6942,	/*(楂)*/
    0x695d,	/*(楝)*/
    0x6984,	/*(榄)*/
    0x696b,	/*(楫)*/
    0x6980,	/*(榀)*/
    0x6998,	/*(榘)*/
    0x6978,	/*(楸)*/
    0x6934,	/*(椴)*/
    0x69cc,	/*(槌)*/
    0x6987,	/*(榇)*/
    0x6988,	/*(榈)*/
    0x69ce,	/*(槎)*/
    0x6989,	/*(榉)*/
    0x6966,	/*(楦)*/
    0x6963,	/*(楣)*/
    0x6979,	/*(楹)*/
    0x699b,	/*(榛)*/
    0x69a7,	/*(榧)*/
    0x69bb,	/*(榻)*/
    0x69ab,	/*(榫)*/
    0x69ad,	/*(榭)*/
    0x69d4,	/*(槔)*/
    0x69b1,	/*(榱)*/
    0x69c1,	/*(槁)*/
    0x69ca,	/*(槊)*/
    0x69df,	/*(槟)*/
    0x6995,	/*(榕)*/
    0x69e0,	/*(槠)*/
    0x698d,	/*(榍)*/
    0x69ff,	/*(槿)*/
    0x6a2f,	/*(樯)*/
    0x69ed,	/*(槭)*/
    0x6a17,	/*(樗)*/
    0x6a18,	/*(樘)*/
    0x6a65,	/*(橥)*/
    0x69f2,	/*(槲)*/
    0x6a44,	/*(橄)*/
    0x6a3e,	/*(樾)*/
    0x6aa0,	/*(檠)*/
    0x6a50,	/*(橐)*/
    0x6a5b,	/*(橛)*/
    0x6a35,	/*(樵)*/
    0x6a8e,	/*(檎)*/
    0x6a79,	/*(橹)*/
    0x6a3d,	/*(樽)*/
    0x6a28,	/*(樨)*/
    0x6a58,	/*(橘)*/
    0x6a7c,	/*(橼)*/
    0x6a91,	/*(檑)*/
    0x6a90,	/*(檐)*/
    0x6aa9,	/*(檩)*/
    0x6a97,	/*(檗)*/
    0x6aab,	/*(檫)*/
    0x7337,	/*(猷)*/
    0x7352,	/*(獒)*/
    0x6b81,	/*(殁)*/
    0x6b82,	/*(殂)*/
    0x6b87,	/*(殇)*/
    0x6b84,	/*(殄)*/
    0x6b92,	/*(殒)*/
    0x6b93,	/*(殓)*/
    0x6b8d,	/*(殍)*/
    0x6b9a,	/*(殚)*/
    0x6b9b,	/*(殛)*/
    0x6ba1,	/*(殡)*/
    0x6baa,	/*(殪)*/
    0x8f6b,	/*(轫)*/
    0x8f6d,	/*(轭)*/
    0x8f71,	/*(轱)*/
    0x8f72,	/*(轲)*/
    0x8f73,	/*(轳)*/
    0x8f75,	/*(轵)*/
    0x8f76,	/*(轶)*/
    0x8f78,	/*(轸)*/
    0x8f77,	/*(轷)*/
    0x8f79,	/*(轹)*/
    0x8f7a,	/*(轺)*/
    0x8f7c,	/*(轼)*/
    0x8f7e,	/*(轾)*/
    0x8f81,	/*(辁)*/
    0x8f82,	/*(辂)*/
    0x8f84,	/*(辄)*/
    0x8f87,	/*(辇)*/
    0x8f8b,	/*(辋)*/
    0x8f8d,	/*(辍)*/
    0x8f8e,	/*(辎)*/
    0x8f8f,	/*(辏)*/
    0x8f98,	/*(辘)*/
    0x8f9a,	/*(辚)*/
    0x8ece,	/*(軎)*/
    0x620b,	/*(戋)*/
    0x6217,	/*(戗)*/
    0x621b,	/*(戛)*/
    0x621f,	/*(戟)*/
    0x6222,	/*(戢)*/
    0x6221,	/*(戡)*/
    0x6225,	/*(戥)*/
    0x6224,	/*(戤)*/
    0x622c,	/*(戬)*/
    0x81e7,	/*(臧)*/
    0x74ef,	/*(瓯)*/
    0x74f4,	/*(瓴)*/
    0x74ff,	/*(瓿)*/
    0x750f,	/*(甏)*/
    0x7511,	/*(甑)*/
    0x7513,	/*(甓)*/
    0x6534,	/*(攴)*/
    0x65ee,	/*(旮)*/
    0x65ef,	/*(旯)*/
    0x65f0,	/*(旰)*/
    0x660a,	/*(昊)*/
    0x6619,	/*(昙)*/
    0x6772,	/*(杲)*/
    0x6603,	/*(昃)*/
    0x6615,	/*(昕)*/
    0x6600,	/*(昀)*/
    0x7085,	/*(炅)*/
    0x66f7,	/*(曷)*/
    0x661d,	/*(昝)*/
    0x6634,	/*(昴)*/
    0x6631,	/*(昱)*/
    0x6636,	/*(昶)*/
    0x6635,	/*(昵)*/
    0x8006,	/*(耆)*/
    0x665f,	/*(晟)*/
    0x6654,	/*(晔)*/
    0x6641,	/*(晁)*/
    0x664f,	/*(晏)*/
    0x6656,	/*(晖)*/
    0x6661,	/*(晡)*/
    0x6657,	/*(晗)*/
    0x6677,	/*(晷)*/
    0x6684,	/*(暄)*/
    0x668c,	/*(暌)*/
    0x66a7,	/*(暧)*/
    0x669d,	/*(暝)*/
    0x66be,	/*(暾)*/
    0x66db,	/*(曛)*/
    0x66dc,	/*(曜)*/
    0x66e6,	/*(曦)*/
    0x66e9,	/*(曩)*/
    0x8d32,	/*(贲)*/
    0x8d33,	/*(贳)*/
    0x8d36,	/*(贶)*/
    0x8d3b,	/*(贻)*/
    0x8d3d,	/*(贽)*/
    0x8d40,	/*(赀)*/
    0x8d45,	/*(赅)*/
    0x8d46,	/*(赆)*/
    0x8d48,	/*(赈)*/
    0x8d49,	/*(赉)*/
    0x8d47,	/*(赇)*/
    0x8d4d,	/*(赍)*/
    0x8d55,	/*(赕)*/
    0x8d59,	/*(赙)*/
    0x89c7,	/*(觇)*/
    0x89ca,	/*(觊)*/
    0x89cb,	/*(觋)*/
    0x89cc,	/*(觌)*/
    0x89ce,	/*(觎)*/
    0x89cf,	/*(觏)*/
    0x89d0,	/*(觐)*/
    0x89d1,	/*(觑)*/
    0x726e,	/*(牮)*/
    0x729f,	/*(犟)*/
    0x725d,	/*(牝)*/
    0x7266,	/*(牦)*/
    0x726f,	/*(牯)*/
    0x727e,	/*(牾)*/
    0x727f,	/*(牿)*/
    0x7284,	/*(犄)*/
    0x728b,	/*(犋)*/
    0x728d,	/*(犍)*/
    0x728f,	/*(犏)*/
    0x7292,	/*(犒)*/
    0x6308,	/*(挈)*/
    0x6332,	/*(挲)*/
    0x63b0,	/*(掰)*/
    0x643f,	/*(搿)*/
    0x64d8,	/*(擘)*/
    0x8004,	/*(耄)*/
    0x6bea,	/*(毪)*/
    0x6bf3,	/*(毳)*/
    0x6bfd,	/*(毽)*/
    0x6bf5,	/*(毵)*/
    0x6bf9,	/*(毹)*/
    0x6c05,	/*(氅)*/
    0x6c07,	/*(氇)*/
    0x6c06,	/*(氆)*/
    0x6c0d,	/*(氍)*/
    0x6c15,	/*(氕)*/
    0x6c18,	/*(氘)*/
    0x6c19,	/*(氙)*/
    0x6c1a,	/*(氚)*/
    0x6c21,	/*(氡)*/
    0x6c29,	/*(氩)*/
    0x6c24,	/*(氤)*/
    0x6c2a,	/*(氪)*/
    0x6c32,	/*(氲)*/
    0x6535,	/*(攵)*/
    0x6555,	/*(敕)*/
    0x656b,	/*(敫)*/
    0x724d,	/*(牍)*/
    0x7252,	/*(牒)*/
    0x7256,	/*(牖)*/
    0x7230,	/*(爰)*/
    0x8662,	/*(虢)*/
    0x5216,	/*(刖)*/
    0x809f,	/*(肟)*/
    0x809c,	/*(肜)*/
    0x8093,	/*(肓)*/
    0x80bc,	/*(肼)*/
    0x670a,	/*(朊)*/
    0x80bd,	/*(肽)*/
    0x80b1,	/*(肱)*/
    0x80ab,	/*(肫)*/
    0x80ad,	/*(肭)*/
    0x80b4,	/*(肴)*/
    0x80b7,	/*(肷)*/
    0x80e7,	/*(胧)*/
    0x80e8,	/*(胨)*/
    0x80e9,	/*(胩)*/
    0x80ea,	/*(胪)*/
    0x80db,	/*(胛)*/
    0x80c2,	/*(胂)*/
    0x80c4,	/*(胄)*/
    0x80d9,	/*(胙)*/
    0x80cd,	/*(胍)*/
    0x80d7,	/*(胗)*/
    0x6710,	/*(朐)*/
    0x80dd,	/*(胝)*/
    0x80eb,	/*(胫)*/
    0x80f1,	/*(胱)*/
    0x80f4,	/*(胴)*/
    0x80ed,	/*(胭)*/
    0x810d,	/*(脍)*/
    0x810e,	/*(脎)*/
    0x80f2,	/*(胲)*/
    0x80fc,	/*(胼)*/
    0x6715,	/*(朕)*/
    0x8112,	/*(脒)*/
    0x8c5a,	/*(豚)*/
    0x8136,	/*(脶)*/
    0x811e,	/*(脞)*/
    0x812c,	/*(脬)*/
    0x8118,	/*(脘)*/
    0x8132,	/*(脲)*/
    0x8148,	/*(腈)*/
    0x814c,	/*(腌)*/
    0x8153,	/*(腓)*/
    0x8174,	/*(腴)*/
    0x8159,	/*(腙)*/
    0x815a,	/*(腚)*/
    0x8171,	/*(腱)*/
    0x8160,	/*(腠)*/
    0x8169,	/*(腩)*/
    0x817c,	/*(腼)*/
    0x817d,	/*(腽)*/
    0x816d,	/*(腭)*/
    0x8167,	/*(腧)*/
    0x584d,	/*(塍)*/
    0x5ab5,	/*(媵)*/
    0x8188,	/*(膈)*/
    0x8182,	/*(膂)*/
    0x8191,	/*(膑)*/
    0x6ed5,	/*(滕)*/
    0x81a3,	/*(膣)*/
    0x81aa,	/*(膪)*/
    0x81cc,	/*(臌)*/
    0x6726,	/*(朦)*/
    0x81ca,	/*(臊)*/
    0x81bb,	/*(膻)*/
    0x81c1,	/*(臁)*/
    0x81a6,	/*(膦)*/
    0x6b24,	/*(欤)*/
    0x6b37,	/*(欷)*/
    0x6b39,	/*(欹)*/
    0x6b43,	/*(歃)*/
    0x6b46,	/*(歆)*/
    0x6b59,	/*(歙)*/
    0x98d1,	/*(飑)*/
    0x98d2,	/*(飒)*/
    0x98d3,	/*(飓)*/
    0x98d5,	/*(飕)*/
    0x98d9,	/*(飙)*/
    0x98da,	/*(飚)*/
    0x6bb3,	/*(殳)*/
    0x5f40,	/*(彀)*/
    0x6bc2,	/*(毂)*/
    0x89f3,	/*(觳)*/
    0x6590,	/*(斐)*/
    0x9f51,	/*(齑)*/
    0x6593,	/*(斓)*/
    0x65bc,	/*(於)*/
    0x65c6,	/*(旆)*/
    0x65c4,	/*(旄)*/
    0x65c3,	/*(旃)*/
    0x65cc,	/*(旌)*/
    0x65ce,	/*(旎)*/
    0x65d2,	/*(旒)*/
    0x65d6,	/*(旖)*/
    0x7080,	/*(炀)*/
    0x709c,	/*(炜)*/
    0x7096,	/*(炖)*/
    0x709d,	/*(炝)*/
    0x70bb,	/*(炻)*/
    0x70c0,	/*(烀)*/
    0x70b7,	/*(炷)*/
    0x70ab,	/*(炫)*/
    0x70b1,	/*(炱)*/
    0x70e8,	/*(烨)*/
    0x70ca,	/*(烊)*/
    0x7110,	/*(焐)*/
    0x7113,	/*(焓)*/
    0x7116,	/*(焖)*/
    0x712f,	/*(焯)*/
    0x7131,	/*(焱)*/
    0x7173,	/*(煳)*/
    0x715c,	/*(煜)*/
    0x7168,	/*(煨)*/
    0x7145,	/*(煅)*/
    0x7172,	/*(煲)*/
    0x714a,	/*(煊)*/
    0x7178,	/*(煸)*/
    0x717a,	/*(煺)*/
    0x7198,	/*(熘)*/
    0x71b3,	/*(熳)*/
    0x71b5,	/*(熵)*/
    0x71a8,	/*(熨)*/
    0x71a0,	/*(熠)*/
    0x71e0,	/*(燠)*/
    0x71d4,	/*(燔)*/
    0x71e7,	/*(燧)*/
    0x71f9,	/*(燹)*/
    0x721d,	/*(爝)*/
    0x7228,	/*(爨)*/
    0x706c,	/*(灬)*/
    0x7118,	/*(焘)*/
    0x7166,	/*(煦)*/
    0x71b9,	/*(熹)*/
    0x623e,	/*(戾)*/
    0x623d,	/*(戽)*/
    0x6243,	/*(扃)*/
    0x6248,	/*(扈)*/
    0x6249,	/*(扉)*/
    0x793b,	/*(礻)*/
    0x7940,	/*(祀)*/
    0x7946,	/*(祆)*/
    0x7949,	/*(祉)*/
    0x795b,	/*(祛)*/
    0x795c,	/*(祜)*/
    0x7953,	/*(祓)*/
    0x795a,	/*(祚)*/
    0x7962,	/*(祢)*/
    0x7957,	/*(祗)*/
    0x7960,	/*(祠)*/
    0x796f,	/*(祯)*/
    0x7967,	/*(祧)*/
    0x797a,	/*(祺)*/
    0x7985,	/*(禅)*/
    0x798a,	/*(禊)*/
    0x799a,	/*(禚)*/
    0x79a7,	/*(禧)*/
    0x79b3,	/*(禳)*/
    0x5fd1,	/*(忑)*/
    0x5fd0,	/*(忐)*/
    0x603c,	/*(怼)*/
    0x605d,	/*(恝)*/
    0x605a,	/*(恚)*/
    0x6067,	/*(恧)*/
    0x6041,	/*(恁)*/
    0x6059,	/*(恙)*/
    0x6063,	/*(恣)*/
    0x60ab,	/*(悫)*/
    0x6106,	/*(愆)*/
    0x610d,	/*(愍)*/
    0x615d,	/*(慝)*/
    0x61a9,	/*(憩)*/
    0x619d,	/*(憝)*/
    0x61cb,	/*(懋)*/
    0x61d1,	/*(懑)*/
    0x6206,	/*(戆)*/
    0x8080,	/*(肀)*/
    0x807f,	/*(聿)*/
    0x6c93,	/*(沓)*/
    0x6cf6,	/*(泶)*/
    0x6dfc,	/*(淼)*/
    0x77f6,	/*(矶)*/
    0x77f8,	/*(矸)*/
    0x7800,	/*(砀)*/
    0x7809,	/*(砉)*/
    0x7817,	/*(砗)*/
    0x7818,	/*(砘)*/
    0x7811,	/*(砑)*/
    0x65ab,	/*(斫)*/
    0x782d,	/*(砭)*/
    0x781c,	/*(砜)*/
    0x781d,	/*(砝)*/
    0x7839,	/*(砹)*/
    0x783a,	/*(砺)*/
    0x783b,	/*(砻)*/
    0x781f,	/*(砟)*/
    0x783c,	/*(砼)*/
    0x7825,	/*(砥)*/
    0x782c,	/*(砬)*/
    0x7823,	/*(砣)*/
    0x7829,	/*(砩)*/
    0x784e,	/*(硎)*/
    0x786d,	/*(硭)*/
    0x7856,	/*(硖)*/
    0x7857,	/*(硗)*/
    0x7826,	/*(砦)*/
    0x7850,	/*(硐)*/
    0x7847,	/*(硇)*/
    0x784c,	/*(硌)*/
    0x786a,	/*(硪)*/
    0x789b,	/*(碛)*/
    0x7893,	/*(碓)*/
    0x789a,	/*(碚)*/
    0x7887,	/*(碇)*/
    0x789c,	/*(碜)*/
    0x78a1,	/*(碡)*/
    0x78a3,	/*(碣)*/
    0x78b2,	/*(碲)*/
    0x78b9,	/*(碹)*/
    0x78a5,	/*(碥)*/
    0x78d4,	/*(磔)*/
    0x78d9,	/*(磙)*/
    0x78c9,	/*(磉)*/
    0x78ec,	/*(磬)*/
    0x78f2,	/*(磲)*/
    0x7905,	/*(礅)*/
    0x78f4,	/*(磴)*/
    0x7913,	/*(礓)*/
    0x7924,	/*(礤)*/
    0x791e,	/*(礞)*/
    0x7934,	/*(礴)*/
    0x9f9b,	/*(龛)*/
    0x9ef9,	/*(黹)*/
    0x9efb,	/*(黻)*/
    0x9efc,	/*(黼)*/
    0x76f1,	/*(盱)*/
    0x7704,	/*(眄)*/
    0x770d,	/*(眍)*/
    0x76f9,	/*(盹)*/
    0x7707,	/*(眇)*/
    0x7708,	/*(眈)*/
    0x771a,	/*(眚)*/
    0x7722,	/*(眢)*/
    0x7719,	/*(眙)*/
    0x772d,	/*(眭)*/
    0x7726,	/*(眦)*/
    0x7735,	/*(眵)*/
    0x7738,	/*(眸)*/
    0x7750,	/*(睐)*/
    0x7751,	/*(睑)*/
    0x7747,	/*(睇)*/
    0x7743,	/*(睃)*/
    0x775a,	/*(睚)*/
    0x7768,	/*(睨)*/
    0x7762,	/*(睢)*/
    0x7765,	/*(睥)*/
    0x777f,	/*(睿)*/
    0x778d,	/*(瞍)*/
    0x777d,	/*(睽)*/
    0x7780,	/*(瞀)*/
    0x778c,	/*(瞌)*/
    0x7791,	/*(瞑)*/
    0x779f,	/*(瞟)*/
    0x77a0,	/*(瞠)*/
    0x77b0,	/*(瞰)*/
    0x77b5,	/*(瞵)*/
    0x77bd,	/*(瞽)*/
    0x753a,	/*(町)*/
    0x7540,	/*(畀)*/
    0x754e,	/*(畎)*/
    0x754b,	/*(畋)*/
    0x7548,	/*(畈)*/
    0x755b,	/*(畛)*/
    0x7572,	/*(畲)*/
    0x7579,	/*(畹)*/
    0x7583,	/*(疃)*/
    0x7f58,	/*(罘)*/
    0x7f61,	/*(罡)*/
    0x7f5f,	/*(罟)*/
    0x8a48,	/*(詈)*/
    0x7f68,	/*(罨)*/
    0x7f74,	/*(罴)*/
    0x7f71,	/*(罱)*/
    0x7f79,	/*(罹)*/
    0x7f81,	/*(羁)*/
    0x7f7e,	/*(罾)*/
    0x76cd,	/*(盍)*/
    0x76e5,	/*(盥)*/
    0x8832,	/*(蠲)*/
    0x9485,	/*(钅)*/
    0x9486,	/*(钆)*/
    0x9487,	/*(钇)*/
    0x948b,	/*(钋)*/
    0x948a,	/*(钊)*/
    0x948c,	/*(钌)*/
    0x948d,	/*(钍)*/
    0x948f,	/*(钏)*/
    0x9490,	/*(钐)*/
    0x9494,	/*(钔)*/
    0x9497,	/*(钗)*/
    0x9495,	/*(钕)*/
    0x949a,	/*(钚)*/
    0x949b,	/*(钛)*/
    0x949c,	/*(钜)*/
    0x94a3,	/*(钣)*/
    0x94a4,	/*(钤)*/
    0x94ab,	/*(钫)*/
    0x94aa,	/*(钪)*/
    0x94ad,	/*(钭)*/
    0x94ac,	/*(钬)*/
    0x94af,	/*(钯)*/
    0x94b0,	/*(钰)*/
    0x94b2,	/*(钲)*/
    0x94b4,	/*(钴)*/
    0x94b6,	/*(钶)*/
    0x94b7,	/*(钷)*/
    0x94b8,	/*(钸)*/
    0x94b9,	/*(钹)*/
    0x94ba,	/*(钺)*/
    0x94bc,	/*(钼)*/
    0x94bd,	/*(钽)*/
    0x94bf,	/*(钿)*/
    0x94c4,	/*(铄)*/
    0x94c8,	/*(铈)*/
    0x94c9,	/*(铉)*/
    0x94ca,	/*(铊)*/
    0x94cb,	/*(铋)*/
    0x94cc,	/*(铌)*/
    0x94cd,	/*(铍)*/
    0x94ce,	/*(铎)*/
    0x94d0,	/*(铐)*/
    0x94d1,	/*(铑)*/
    0x94d2,	/*(铒)*/
    0x94d5,	/*(铕)*/
    0x94d6,	/*(铖)*/
    0x94d7,	/*(铗)*/
    0x94d9,	/*(铙)*/
    0x94d8,	/*(铘)*/
    0x94db,	/*(铛)*/
    0x94de,	/*(铞)*/
    0x94df,	/*(铟)*/
    0x94e0,	/*(铠)*/
    0x94e2,	/*(铢)*/
    0x94e4,	/*(铤)*/
    0x94e5,	/*(铥)*/
    0x94e7,	/*(铧)*/
    0x94e8,	/*(铨)*/
    0x94ea,	/*(铪)*/
    0x94e9,	/*(铩)*/
    0x94eb,	/*(铫)*/
    0x94ee,	/*(铮)*/
    0x94ef,	/*(铯)*/
    0x94f3,	/*(铳)*/
    0x94f4,	/*(铴)*/
    0x94f5,	/*(铵)*/
    0x94f7,	/*(铷)*/
    0x94f9,	/*(铹)*/
    0x94fc,	/*(铼)*/
    0x94fd,	/*(铽)*/
    0x94ff,	/*(铿)*/
    0x9503,	/*(锃)*/
    0x9502,	/*(锂)*/
    0x9506,	/*(锆)*/
    0x9507,	/*(锇)*/
    0x9509,	/*(锉)*/
    0x950a,	/*(锊)*/
    0x950d,	/*(锍)*/
    0x950e,	/*(锎)*/
    0x950f,	/*(锏)*/
    0x9512,	/*(锒)*/
    0x9513,	/*(锓)*/
    0x9514,	/*(锔)*/
    0x9515,	/*(锕)*/
    0x9516,	/*(锖)*/
    0x9518,	/*(锘)*/
    0x951b,	/*(锛)*/
    0x951d,	/*(锝)*/
    0x951e,	/*(锞)*/
    0x951f,	/*(锟)*/
    0x9522,	/*(锢)*/
    0x952a,	/*(锪)*/
    0x952b,	/*(锫)*/
    0x9529,	/*(锩)*/
    0x952c,	/*(锬)*/
    0x9531,	/*(锱)*/
    0x9532,	/*(锲)*/
    0x9534,	/*(锴)*/
    0x9536,	/*(锶)*/
    0x9537,	/*(锷)*/
    0x9538,	/*(锸)*/
    0x953c,	/*(锼)*/
    0x953e,	/*(锾)*/
    0x953f,	/*(锿)*/
    0x9542,	/*(镂)*/
    0x9535,	/*(锵)*/
    0x9544,	/*(镄)*/
    0x9545,	/*(镅)*/
    0x9546,	/*(镆)*/
    0x9549,	/*(镉)*/
    0x954c,	/*(镌)*/
    0x954e,	/*(镎)*/
    0x954f,	/*(镏)*/
    0x9552,	/*(镒)*/
    0x9553,	/*(镓)*/
    0x9554,	/*(镔)*/
    0x9556,	/*(镖)*/
    0x9557,	/*(镗)*/
    0x9558,	/*(镘)*/
    0x9559,	/*(镙)*/
    0x955b,	/*(镛)*/
    0x955e,	/*(镞)*/
    0x955f,	/*(镟)*/
    0x955d,	/*(镝)*/
    0x9561,	/*(镡)*/
    0x9562,	/*(镢)*/
    0x9564,	/*(镤)*/
    0x9565,	/*(镥)*/
    0x9566,	/*(镦)*/
    0x9567,	/*(镧)*/
    0x9568,	/*(镨)*/
    0x9569,	/*(镩)*/
    0x956a,	/*(镪)*/
    0x956b,	/*(镫)*/
    0x956c,	/*(镬)*/
    0x956f,	/*(镯)*/
    0x9571,	/*(镱)*/
    0x9572,	/*(镲)*/
    0x9573,	/*(镳)*/
    0x953a,	/*(锺)*/
    0x77e7,	/*(矧)*/
    0x77ec,	/*(矬)*/
    0x96c9,	/*(雉)*/
    0x79d5,	/*(秕)*/
    0x79ed,	/*(秭)*/
    0x79e3,	/*(秣)*/
    0x79eb,	/*(秫)*/
    0x7a06,	/*(稆)*/
    0x5d47,	/*(嵇)*/
    0x7a03,	/*(稃)*/
    0x7a02,	/*(稂)*/
    0x7a1e,	/*(稞)*/
    0x7a14,	/*(稔)*/
    0x7a39,	/*(稹)*/
    0x7a37,	/*(稷)*/
    0x7a51,	/*(穑)*/
    0x9ecf,	/*(黏)*/
    0x99a5,	/*(馥)*/
    0x7a70,	/*(穰)*/
    0x7688,	/*(皈)*/
    0x768e,	/*(皎)*/
    0x7693,	/*(皓)*/
    0x7699,	/*(皙)*/
    0x76a4,	/*(皤)*/
    0x74de,	/*(瓞)*/
    0x74e0,	/*(瓠)*/
    0x752c,	/*(甬)*/
    0x9e20,	/*(鸠)*/
    0x9e22,	/*(鸢)*/
    0x9e28,	/*(鸨)*/
    0x9e29,	/*(鸩)*/
    0x9e2a,	/*(鸪)*/
    0x9e2b,	/*(鸫)*/
    0x9e2c,	/*(鸬)*/
    0x9e32,	/*(鸲)*/
    0x9e31,	/*(鸱)*/
    0x9e36,	/*(鸶)*/
    0x9e38,	/*(鸸)*/
    0x9e37,	/*(鸷)*/
    0x9e39,	/*(鸹)*/
    0x9e3a,	/*(鸺)*/
    0x9e3e,	/*(鸾)*/
    0x9e41,	/*(鹁)*/
    0x9e42,	/*(鹂)*/
    0x9e44,	/*(鹄)*/
    0x9e46,	/*(鹆)*/
    0x9e47,	/*(鹇)*/
    0x9e48,	/*(鹈)*/
    0x9e49,	/*(鹉)*/
    0x9e4b,	/*(鹋)*/
    0x9e4c,	/*(鹌)*/
    0x9e4e,	/*(鹎)*/
    0x9e51,	/*(鹑)*/
    0x9e55,	/*(鹕)*/
    0x9e57,	/*(鹗)*/
    0x9e5a,	/*(鹚)*/
    0x9e5b,	/*(鹛)*/
    0x9e5c,	/*(鹜)*/
    0x9e5e,	/*(鹞)*/
    0x9e63,	/*(鹣)*/
    0x9e66,	/*(鹦)*/
    0x9e67,	/*(鹧)*/
    0x9e68,	/*(鹨)*/
    0x9e69,	/*(鹩)*/
    0x9e6a,	/*(鹪)*/
    0x9e6b,	/*(鹫)*/
    0x9e6c,	/*(鹬)*/
    0x9e71,	/*(鹱)*/
    0x9e6d,	/*(鹭)*/
    0x9e73,	/*(鹳)*/
    0x7592,	/*(疒)*/
    0x7594,	/*(疔)*/
    0x7596,	/*(疖)*/
    0x75a0,	/*(疠)*/
    0x759d,	/*(疝)*/
    0x75ac,	/*(疬)*/
    0x75a3,	/*(疣)*/
    0x75b3,	/*(疳)*/
    0x75b4,	/*(疴)*/
    0x75b8,	/*(疸)*/
    0x75c4,	/*(痄)*/
    0x75b1,	/*(疱)*/
    0x75b0,	/*(疰)*/
    0x75c3,	/*(痃)*/
    0x75c2,	/*(痂)*/
    0x75d6,	/*(痖)*/
    0x75cd,	/*(痍)*/
    0x75e3,	/*(痣)*/
    0x75e8,	/*(痨)*/
    0x75e6,	/*(痦)*/
    0x75e4,	/*(痤)*/
    0x75eb,	/*(痫)*/
    0x75e7,	/*(痧)*/
    0x7603,	/*(瘃)*/
    0x75f1,	/*(痱)*/
    0x75fc,	/*(痼)*/
    0x75ff,	/*(痿)*/
    0x7610,	/*(瘐)*/
    0x7600,	/*(瘀)*/
    0x7605,	/*(瘅)*/
    0x760c,	/*(瘌)*/
    0x7617,	/*(瘗)*/
    0x760a,	/*(瘊)*/
    0x7625,	/*(瘥)*/
    0x7618,	/*(瘘)*/
    0x7615,	/*(瘕)*/
    0x7619,	/*(瘙)*/
    0x761b,	/*(瘛)*/
    0x763c,	/*(瘼)*/
    0x7622,	/*(瘢)*/
    0x7620,	/*(瘠)*/
    0x7640,	/*(癀)*/
    0x762d,	/*(瘭)*/
    0x7630,	/*(瘰)*/
    0x763f,	/*(瘿)*/
    0x7635,	/*(瘵)*/
    0x7643,	/*(癃)*/
    0x763e,	/*(瘾)*/
    0x7633,	/*(瘳)*/
    0x764d,	/*(癍)*/
    0x765e,	/*(癞)*/
    0x7654,	/*(癔)*/
    0x765c,	/*(癜)*/
    0x7656,	/*(癖)*/
    0x766b,	/*(癫)*/
    0x766f,	/*(癯)*/
    0x7fca,	/*(翊)*/
    0x7ae6,	/*(竦)*/
    0x7a78,	/*(穸)*/
    0x7a79,	/*(穹)*/
    0x7a80,	/*(窀)*/
    0x7a86,	/*(窆)*/
    0x7a88,	/*(窈)*/
    0x7a95,	/*(窕)*/
    0x7aa6,	/*(窦)*/
    0x7aa0,	/*(窠)*/
    0x7aac,	/*(窬)*/
    0x7aa8,	/*(窨)*/
    0x7aad,	/*(窭)*/
    0x7ab3,	/*(窳)*/
    0x8864,	/*(衤)*/
    0x8869,	/*(衩)*/
    0x8872,	/*(衲)*/
    0x887d,	/*(衽)*/
    0x887f,	/*(衿)*/
    0x8882,	/*(袂)*/
    0x88a2,	/*(袢)*/
    0x88c6,	/*(裆)*/
    0x88b7,	/*(袷)*/
    0x88bc,	/*(袼)*/
    0x88c9,	/*(裉)*/
    0x88e2,	/*(裢)*/
    0x88ce,	/*(裎)*/
    0x88e3,	/*(裣)*/
    0x88e5,	/*(裥)*/
    0x88f1,	/*(裱)*/
    0x891a,	/*(褚)*/
    0x88fc,	/*(裼)*/
    0x88e8,	/*(裨)*/
    0x88fe,	/*(裾)*/
    0x88f0,	/*(裰)*/
    0x8921,	/*(褡)*/
    0x8919,	/*(褙)*/
    0x8913,	/*(褓)*/
    0x891b,	/*(褛)*/
    0x890a,	/*(褊)*/
    0x8934,	/*(褴)*/
    0x892b,	/*(褫)*/
    0x8936,	/*(褶)*/
    0x8941,	/*(襁)*/
    0x8966,	/*(襦)*/
    0x897b,	/*(襻)*/
    0x758b,	/*(疋)*/
    0x80e5,	/*(胥)*/
    0x76b2,	/*(皲)*/
    0x76b4,	/*(皴)*/
    0x77dc,	/*(矜)*/
    0x8012,	/*(耒)*/
    0x8014,	/*(耔)*/
    0x8016,	/*(耖)*/
    0x801c,	/*(耜)*/
    0x8020,	/*(耠)*/
    0x8022,	/*(耢)*/
    0x8025,	/*(耥)*/
    0x8026,	/*(耦)*/
    0x8027,	/*(耧)*/
    0x8029,	/*(耩)*/
    0x8028,	/*(耨)*/
    0x8031,	/*(耱)*/
    0x800b,	/*(耋)*/
    0x8035,	/*(耵)*/
    0x8043,	/*(聃)*/
    0x8046,	/*(聆)*/
    0x804d,	/*(聍)*/
    0x8052,	/*(聒)*/
    0x8069,	/*(聩)*/
    0x8071,	/*(聱)*/
    0x8983,	/*(覃)*/
    0x9878,	/*(顸)*/
    0x9880,	/*(颀)*/
    0x9883,	/*(颃)*/
    0x9889,	/*(颉)*/
    0x988c,	/*(颌)*/
    0x988d,	/*(颍)*/
    0x988f,	/*(颏)*/
    0x9894,	/*(颔)*/
    0x989a,	/*(颚)*/
    0x989b,	/*(颛)*/
    0x989e,	/*(颞)*/
    0x989f,	/*(颟)*/
    0x98a1,	/*(颡)*/
    0x98a2,	/*(颢)*/
    0x98a5,	/*(颥)*/
    0x98a6,	/*(颦)*/
    0x864d,	/*(虍)*/
    0x8654,	/*(虔)*/
    0x866c,	/*(虬)*/
    0x866e,	/*(虮)*/
    0x867f,	/*(虿)*/
    0x867a,	/*(虺)*/
    0x867c,	/*(虼)*/
    0x867b,	/*(虻)*/
    0x86a8,	/*(蚨)*/
    0x868d,	/*(蚍)*/
    0x868b,	/*(蚋)*/
    0x86ac,	/*(蚬)*/
    0x869d,	/*(蚝)*/
    0x86a7,	/*(蚧)*/
    0x86a3,	/*(蚣)*/
    0x86aa,	/*(蚪)*/
    0x8693,	/*(蚓)*/
    0x86a9,	/*(蚩)*/
    0x86b6,	/*(蚶)*/
    0x86c4,	/*(蛄)*/
    0x86b5,	/*(蚵)*/
    0x86ce,	/*(蛎)*/
    0x86b0,	/*(蚰)*/
    0x86ba,	/*(蚺)*/
    0x86b1,	/*(蚱)*/
    0x86af,	/*(蚯)*/
    0x86c9,	/*(蛉)*/
    0x86cf,	/*(蛏)*/
    0x86b4,	/*(蚴)*/
    0x86e9,	/*(蛩)*/
    0x86f1,	/*(蛱)*/
    0x86f2,	/*(蛲)*/
    0x86ed,	/*(蛭)*/
    0x86f3,	/*(蛳)*/
    0x86d0,	/*(蛐)*/
    0x8713,	/*(蜓)*/
    0x86de,	/*(蛞)*/
    0x86f4,	/*(蛴)*/
    0x86df,	/*(蛟)*/
    0x86d8,	/*(蛘)*/
    0x86d1,	/*(蛑)*/
    0x8703,	/*(蜃)*/
    0x8707,	/*(蜇)*/
    0x86f8,	/*(蛸)*/
    0x8708,	/*(蜈)*/
    0x870a,	/*(蜊)*/
    0x870d,	/*(蜍)*/
    0x8709,	/*(蜉)*/
    0x8723,	/*(蜣)*/
    0x873b,	/*(蜻)*/
    0x871e,	/*(蜞)*/
    0x8725,	/*(蜥)*/
    0x872e,	/*(蜮)*/
    0x871a,	/*(蜚)*/
    0x873e,	/*(蜾)*/
    0x8748,	/*(蝈)*/
    0x8734,	/*(蜴)*/
    0x8731,	/*(蜱)*/
    0x8729,	/*(蜩)*/
    0x8737,	/*(蜷)*/
    0x873f,	/*(蜿)*/
    0x8782,	/*(螂)*/
    0x8722,	/*(蜢)*/
    0x877d,	/*(蝽)*/
    0x877e,	/*(蝾)*/
    0x877b,	/*(蝻)*/
    0x8760,	/*(蝠)*/
    0x8770,	/*(蝰)*/
    0x874c,	/*(蝌)*/
    0x876e,	/*(蝮)*/
    0x878b,	/*(螋)*/
    0x8753,	/*(蝓)*/
    0x8763,	/*(蝣)*/
    0x877c,	/*(蝼)*/
    0x8764,	/*(蝤)*/
    0x8759,	/*(蝙)*/
    0x8765,	/*(蝥)*/
    0x8793,	/*(螓)*/
    0x87af,	/*(螯)*/
    0x87a8,	/*(螨)*/
    0x87d2,	/*(蟒)*/
    0x87c6,	/*(蟆)*/
    0x8788,	/*(螈)*/
    0x8785,	/*(螅)*/
    0x87ad,	/*(螭)*/
    0x8797,	/*(螗)*/
    0x8783,	/*(螃)*/
    0x87ab,	/*(螫)*/
    0x87e5,	/*(蟥)*/
    0x87ac,	/*(螬)*/
    0x87b5,	/*(螵)*/
    0x87b3,	/*(螳)*/
    0x87cb,	/*(蟋)*/
    0x87d3,	/*(蟓)*/
    0x87bd,	/*(螽)*/
    0x87d1,	/*(蟑)*/
    0x87c0,	/*(蟀)*/
    0x87ca,	/*(蟊)*/
    0x87db,	/*(蟛)*/
    0x87ea,	/*(蟪)*/
    0x87e0,	/*(蟠)*/
    0x87ee,	/*(蟮)*/
    0x8816,	/*(蠖)*/
    0x8813,	/*(蠓)*/
    0x87fe,	/*(蟾)*/
    0x880a,	/*(蠊)*/
    0x881b,	/*(蠛)*/
    0x8821,	/*(蠡)*/
    0x8839,	/*(蠹)*/
    0x883c,	/*(蠼)*/
    0x7f36,	/*(缶)*/
    0x7f42,	/*(罂)*/
    0x7f44,	/*(罄)*/
    0x7f45,	/*(罅)*/
    0x8210,	/*(舐)*/
    0x7afa,	/*(竺)*/
    0x7afd,	/*(竽)*/
    0x7b08,	/*(笈)*/
    0x7b03,	/*(笃)*/
    0x7b04,	/*(笄)*/
    0x7b15,	/*(笕)*/
    0x7b0a,	/*(笊)*/
    0x7b2b,	/*(笫)*/
    0x7b0f,	/*(笏)*/
    0x7b47,	/*(筇)*/
    0x7b38,	/*(笸)*/
    0x7b2a,	/*(笪)*/
    0x7b19,	/*(笙)*/
    0x7b2e,	/*(笮)*/
    0x7b31,	/*(笱)*/
    0x7b20,	/*(笠)*/
    0x7b25,	/*(笥)*/
    0x7b24,	/*(笤)*/
    0x7b33,	/*(笳)*/
    0x7b3e,	/*(笾)*/
    0x7b1e,	/*(笞)*/
    0x7b58,	/*(筘)*/
    0x7b5a,	/*(筚)*/
    0x7b45,	/*(筅)*/
    0x7b75,	/*(筵)*/
    0x7b4c,	/*(筌)*/
    0x7b5d,	/*(筝)*/
    0x7b60,	/*(筠)*/
    0x7b6e,	/*(筮)*/
    0x7b7b,	/*(筻)*/
    0x7b62,	/*(筢)*/
    0x7b72,	/*(筲)*/
    0x7b71,	/*(筱)*/
    0x7b90,	/*(箐)*/
    0x7ba6,	/*(箦)*/
    0x7ba7,	/*(箧)*/
    0x7bb8,	/*(箸)*/
    0x7bac,	/*(箬)*/
    0x7b9d,	/*(箝)*/
    0x7ba8,	/*(箨)*/
    0x7b85,	/*(箅)*/
    0x7baa,	/*(箪)*/
    0x7b9c,	/*(箜)*/
    0x7ba2,	/*(箢)*/
    0x7bab,	/*(箫)*/
    0x7bb4,	/*(箴)*/
    0x7bd1,	/*(篑)*/
    0x7bc1,	/*(篁)*/
    0x7bcc,	/*(篌)*/
    0x7bdd,	/*(篝)*/
    0x7bda,	/*(篚)*/
    0x7be5,	/*(篥)*/
    0x7be6,	/*(篦)*/
    0x7bea,	/*(篪)*/
    0x7c0c,	/*(簌)*/
    0x7bfe,	/*(篾)*/
    0x7bfc,	/*(篼)*/
    0x7c0f,	/*(簏)*/
    0x7c16,	/*(簖)*/
    0x7c0b,	/*(簋)*/
    0x7c1f,	/*(簟)*/
    0x7c2a,	/*(簪)*/
    0x7c26,	/*(簦)*/
    0x7c38,	/*(簸)*/
    0x7c41,	/*(籁)*/
    0x7c40,	/*(籀)*/
    0x81fe,	/*(臾)*/
    0x8201,	/*(舁)*/
    0x8202,	/*(舂)*/
    0x8204,	/*(舄)*/
    0x81ec,	/*(臬)*/
    0x8844,	/*(衄)*/
    0x8221,	/*(舡)*/
    0x8222,	/*(舢)*/
    0x8223,	/*(舣)*/
    0x822d,	/*(舭)*/
    0x822f,	/*(舯)*/
    0x8228,	/*(舨)*/
    0x822b,	/*(舫)*/
    0x8238,	/*(舸)*/
    0x823b,	/*(舻)*/
    0x8233,	/*(舳)*/
    0x8234,	/*(舴)*/
    0x823e,	/*(舾)*/
    0x8244,	/*(艄)*/
    0x8249,	/*(艉)*/
    0x824b,	/*(艋)*/
    0x824f,	/*(艏)*/
    0x825a,	/*(艚)*/
    0x825f,	/*(艟)*/
    0x8268,	/*(艨)*/
    0x887e,	/*(衾)*/
    0x8885,	/*(袅)*/
    0x8888,	/*(袈)*/
    0x88d8,	/*(裘)*/
    0x88df,	/*(裟)*/
    0x895e,	/*(襞)*/
    0x7f9d,	/*(羝)*/
    0x7f9f,	/*(羟)*/
    0x7fa7,	/*(羧)*/
    0x7faf,	/*(羯)*/
    0x7fb0,	/*(羰)*/
    0x7fb2,	/*(羲)*/
    0x7c7c,	/*(籼)*/
    0x6549,	/*(敉)*/
    0x7c91,	/*(粑)*/
    0x7c9d,	/*(粝)*/
    0x7c9c,	/*(粜)*/
    0x7c9e,	/*(粞)*/
    0x7ca2,	/*(粢)*/
    0x7cb2,	/*(粲)*/
    0x7cbc,	/*(粼)*/
    0x7cbd,	/*(粽)*/
    0x7cc1,	/*(糁)*/
    0x7cc7,	/*(糇)*/
    0x7ccc,	/*(糌)*/
    0x7ccd,	/*(糍)*/
    0x7cc8,	/*(糈)*/
    0x7cc5,	/*(糅)*/
    0x7cd7,	/*(糗)*/
    0x7ce8,	/*(糨)*/
    0x826e,	/*(艮)*/
    0x66a8,	/*(暨)*/
    0x7fbf,	/*(羿)*/
    0x7fce,	/*(翎)*/
    0x7fd5,	/*(翕)*/
    0x7fe5,	/*(翥)*/
    0x7fe1,	/*(翡)*/
    0x7fe6,	/*(翦)*/
    0x7fe9,	/*(翩)*/
    0x7fee,	/*(翮)*/
    0x7ff3,	/*(翳)*/
    0x7cf8,	/*(糸)*/
    0x7d77,	/*(絷)*/
    0x7da6,	/*(綦)*/
    0x7dae,	/*(綮)*/
    0x7e47,	/*(繇)*/
    0x7e9b,	/*(纛)*/
    0x9eb8,	/*(麸)*/
    0x9eb4,	/*(麴)*/
    0x8d73,	/*(赳)*/
    0x8d84,	/*(趄)*/
    0x8d94,	/*(趔)*/
    0x8d91,	/*(趑)*/
    0x8db1,	/*(趱)*/
    0x8d67,	/*(赧)*/
    0x8d6d,	/*(赭)*/
    0x8c47,	/*(豇)*/
    0x8c49,	/*(豉)*/
    0x914a,	/*(酊)*/
    0x9150,	/*(酐)*/
    0x914e,	/*(酎)*/
    0x914f,	/*(酏)*/
    0x9164,	/*(酤)*/
    0x9162,	/*(酢)*/
    0x9161,	/*(酡)*/
    0x9170,	/*(酰)*/
    0x9169,	/*(酩)*/
    0x916f,	/*(酯)*/
    0x917d,	/*(酽)*/
    0x917e,	/*(酾)*/
    0x9172,	/*(酲)*/
    0x9174,	/*(酴)*/
    0x9179,	/*(酹)*/
    0x918c,	/*(醌)*/
    0x9185,	/*(醅)*/
    0x9190,	/*(醐)*/
    0x918d,	/*(醍)*/
    0x9191,	/*(醑)*/
    0x91a2,	/*(醢)*/
    0x91a3,	/*(醣)*/
    0x91aa,	/*(醪)*/
    0x91ad,	/*(醭)*/
    0x91ae,	/*(醮)*/
    0x91af,	/*(醯)*/
    0x91b5,	/*(醵)*/
    0x91b4,	/*(醴)*/
    0x91ba,	/*(醺)*/
    0x8c55,	/*(豕)*/
    0x9e7e,	/*(鹾)*/
    0x8db8,	/*(趸)*/
    0x8deb,	/*(跫)*/
    0x8e05,	/*(踅)*/
    0x8e59,	/*(蹙)*/
    0x8e69,	/*(蹩)*/
    0x8db5,	/*(趵)*/
    0x8dbf,	/*(趿)*/
    0x8dbc,	/*(趼)*/
    0x8dba,	/*(趺)*/
    0x8dc4,	/*(跄)*/
    0x8dd6,	/*(跖)*/
    0x8dd7,	/*(跗)*/
    0x8dda,	/*(跚)*/
    0x8dde,	/*(跞)*/
    0x8dce,	/*(跎)*/
    0x8dcf,	/*(跏)*/
    0x8ddb,	/*(跛)*/
    0x8dc6,	/*(跆)*/
    0x8dec,	/*(跬)*/
    0x8df7,	/*(跷)*/
    0x8df8,	/*(跸)*/
    0x8de3,	/*(跣)*/
    0x8df9,	/*(跹)*/
    0x8dfb,	/*(跻)*/
    0x8de4,	/*(跤)*/
    0x8e09,	/*(踉)*/
    0x8dfd,	/*(跽)*/
    0x8e14,	/*(踔)*/
    0x8e1d,	/*(踝)*/
    0x8e1f,	/*(踟)*/
    0x8e2c,	/*(踬)*/
    0x8e2e,	/*(踮)*/
    0x8e23,	/*(踣)*/
    0x8e2f,	/*(踯)*/
    0x8e3a,	/*(踺)*/
    0x8e40,	/*(蹀)*/
    0x8e39,	/*(踹)*/
    0x8e35,	/*(踵)*/
    0x8e3d,	/*(踽)*/
    0x8e31,	/*(踱)*/
    0x8e49,	/*(蹉)*/
    0x8e41,	/*(蹁)*/
    0x8e42,	/*(蹂)*/
    0x8e51,	/*(蹑)*/
    0x8e52,	/*(蹒)*/
    0x8e4a,	/*(蹊)*/
    0x8e70,	/*(蹰)*/
    0x8e76,	/*(蹶)*/
    0x8e7c,	/*(蹼)*/
    0x8e6f,	/*(蹯)*/
    0x8e74,	/*(蹴)*/
    0x8e85,	/*(躅)*/
    0x8e8f,	/*(躏)*/
    0x8e94,	/*(躔)*/
    0x8e90,	/*(躐)*/
    0x8e9c,	/*(躜)*/
    0x8e9e,	/*(躞)*/
    0x8c78,	/*(豸)*/
    0x8c82,	/*(貂)*/
    0x8c8a,	/*(貊)*/
    0x8c85,	/*(貅)*/
    0x8c98,	/*(貘)*/
    0x8c94,	/*(貔)*/
    0x659b,	/*(斛)*/
    0x89d6,	/*(觖)*/
    0x89de,	/*(觞)*/
    0x89da,	/*(觚)*/
    0x89dc,	/*(觜)*/
    0x89e5,	/*(觥)*/
    0x89eb,	/*(觫)*/
    0x89ef,	/*(觯)*/
    0x8a3e,	/*(訾)*/
    0x8b26,	/*(謦)*/
    0x9753,	/*(靓)*/
    0x96e9,	/*(雩)*/
    0x96f3,	/*(雳)*/
    0x96ef,	/*(雯)*/
    0x9706,	/*(霆)*/
    0x9701,	/*(霁)*/
    0x9708,	/*(霈)*/
    0x970f,	/*(霏)*/
    0x970e,	/*(霎)*/
    0x972a,	/*(霪)*/
    0x972d,	/*(霭)*/
    0x9730,	/*(霰)*/
    0x973e,	/*(霾)*/
    0x9f80,	/*(龀)*/
    0x9f83,	/*(龃)*/
    0x9f85,	/*(龅)*/
    0x9f86,	/*(龆)*/
    0x9f87,	/*(龇)*/
    0x9f88,	/*(龈)*/
    0x9f89,	/*(龉)*/
    0x9f8a,	/*(龊)*/
    0x9f8c,	/*(龌)*/
    0x9efe,	/*(黾)*/
    0x9f0b,	/*(鼋)*/
    0x9f0d,	/*(鼍)*/
    0x96b9,	/*(隹)*/
    0x96bc,	/*(隼)*/
    0x96bd,	/*(隽)*/
    0x96ce,	/*(雎)*/
    0x96d2,	/*(雒)*/
    0x77bf,	/*(瞿)*/
    0x96e0,	/*(雠)*/
    0x928e,	/*(銎)*/
    0x92ae,	/*(銮)*/
    0x92c8,	/*(鋈)*/
    0x933e,	/*(錾)*/
    0x936a,	/*(鍪)*/
    0x93ca,	/*(鏊)*/
    0x938f,	/*(鎏)*/
    0x943e,	/*(鐾)*/
    0x946b,	/*(鑫)*/
    0x9c7f,	/*(鱿)*/
    0x9c82,	/*(鲂)*/
    0x9c85,	/*(鲅)*/
    0x9c86,	/*(鲆)*/
    0x9c87,	/*(鲇)*/
    0x9c88,	/*(鲈)*/
    0x7a23,	/*(稣)*/
    0x9c8b,	/*(鲋)*/
    0x9c8e,	/*(鲎)*/
    0x9c90,	/*(鲐)*/
    0x9c91,	/*(鲑)*/
    0x9c92,	/*(鲒)*/
    0x9c94,	/*(鲔)*/
    0x9c95,	/*(鲕)*/
    0x9c9a,	/*(鲚)*/
    0x9c9b,	/*(鲛)*/
    0x9c9e,	/*(鲞)*/
    0x9c9f,	/*(鲟)*/
    0x9ca0,	/*(鲠)*/
    0x9ca1,	/*(鲡)*/
    0x9ca2,	/*(鲢)*/
    0x9ca3,	/*(鲣)*/
    0x9ca5,	/*(鲥)*/
    0x9ca6,	/*(鲦)*/
    0x9ca7,	/*(鲧)*/
    0x9ca8,	/*(鲨)*/
    0x9ca9,	/*(鲩)*/
    0x9cab,	/*(鲫)*/
    0x9cad,	/*(鲭)*/
    0x9cae,	/*(鲮)*/
    0x9cb0,	/*(鲰)*/
    0x9cb1,	/*(鲱)*/
    0x9cb2,	/*(鲲)*/
    0x9cb3,	/*(鲳)*/
    0x9cb4,	/*(鲴)*/
    0x9cb5,	/*(鲵)*/
    0x9cb6,	/*(鲶)*/
    0x9cb7,	/*(鲷)*/
    0x9cba,	/*(鲺)*/
    0x9cbb,	/*(鲻)*/
    0x9cbc,	/*(鲼)*/
    0x9cbd,	/*(鲽)*/
    0x9cc4,	/*(鳄)*/
    0x9cc5,	/*(鳅)*/
    0x9cc6,	/*(鳆)*/
    0x9cc7,	/*(鳇)*/
    0x9cca,	/*(鳊)*/
    0x9ccb,	/*(鳋)*/
    0x9ccc,	/*(鳌)*/
    0x9ccd,	/*(鳍)*/
    0x9cce,	/*(鳎)*/
    0x9ccf,	/*(鳏)*/
    0x9cd0,	/*(鳐)*/
    0x9cd3,	/*(鳓)*/
    0x9cd4,	/*(鳔)*/
    0x9cd5,	/*(鳕)*/
    0x9cd7,	/*(鳗)*/
    0x9cd8,	/*(鳘)*/
    0x9cd9,	/*(鳙)*/
    0x9cdc,	/*(鳜)*/
    0x9cdd,	/*(鳝)*/
    0x9cdf,	/*(鳟)*/
    0x9ce2,	/*(鳢)*/
    0x977c,	/*(靼)*/
    0x9785,	/*(鞅)*/
    0x9791,	/*(鞑)*/
    0x9792,	/*(鞒)*/
    0x9794,	/*(鞔)*/
    0x97af,	/*(鞯)*/
    0x97ab,	/*(鞫)*/
    0x97a3,	/*(鞣)*/
    0x97b2,	/*(鞲)*/
    0x97b4,	/*(鞴)*/
    0x9ab1,	/*(骱)*/
    0x9ab0,	/*(骰)*/
    0x9ab7,	/*(骷)*/
    0x9e58,	/*(鹘)*/
    0x9ab6,	/*(骶)*/
    0x9aba,	/*(骺)*/
    0x9abc,	/*(骼)*/
    0x9ac1,	/*(髁)*/
    0x9ac0,	/*(髀)*/
    0x9ac5,	/*(髅)*/
    0x9ac2,	/*(髂)*/
    0x9acb,	/*(髋)*/
    0x9acc,	/*(髌)*/
    0x9ad1,	/*(髑)*/
    0x9b45,	/*(魅)*/
    0x9b43,	/*(魃)*/
    0x9b47,	/*(魇)*/
    0x9b49,	/*(魉)*/
    0x9b48,	/*(魈)*/
    0x9b4d,	/*(魍)*/
    0x9b51,	/*(魑)*/
    0x98e8,	/*(飨)*/
    0x990d,	/*(餍)*/
    0x992e,	/*(餮)*/
    0x9955,	/*(饕)*/
    0x9954,	/*(饔)*/
    0x9adf,	/*(髟)*/
    0x9ae1,	/*(髡)*/
    0x9ae6,	/*(髦)*/
    0x9aef,	/*(髯)*/
    0x9aeb,	/*(髫)*/
    0x9afb,	/*(髻)*/
    0x9aed,	/*(髭)*/
    0x9af9,	/*(髹)*/
    0x9b08,	/*(鬈)*/
    0x9b0f,	/*(鬏)*/
    0x9b13,	/*(鬓)*/
    0x9b1f,	/*(鬟)*/
    0x9b23,	/*(鬣)*/
    0x9ebd,	/*(麽)*/
    0x9ebe,	/*(麾)*/
    0x7e3b,	/*(縻)*/
    0x9e82,	/*(麂)*/
    0x9e87,	/*(麇)*/
    0x9e88,	/*(麈)*/
    0x9e8b,	/*(麋)*/
    0x9e92,	/*(麒)*/
    0x93d6,	/*(鏖)*/
    0x9e9d,	/*(麝)*/
    0x9e9f,	/*(麟)*/
    0x9edb,	/*(黛)*/
    0x9edc,	/*(黜)*/
    0x9edd,	/*(黝)*/
    0x9ee0,	/*(黠)*/
    0x9edf,	/*(黟)*/
    0x9ee2,	/*(黢)*/
    0x9ee9,	/*(黩)*/
    0x9ee7,	/*(黧)*/
    0x9ee5,	/*(黥)*/
    0x9eea,	/*(黪)*/
    0x9eef,	/*(黯)*/
    0x9f22,	/*(鼢)*/
    0x9f2c,	/*(鼬)*/
    0x9f2f,	/*(鼯)*/
    0x9f39,	/*(鼹)*/
    0x9f37,	/*(鼷)*/
    0x9f3d,	/*(鼽)*/
    0x9f3e,	/*(鼾)*/
    0x9f44,	/*(齄)*/
    0x000a,	/*(
)*/
    0x0000,    /*End indicator*/
};


lv_font_t lv_font_simfang = 
{
    .unicode_first = 19968,	/*First Unicode letter in this font*/
    .unicode_last = 59412,	/*First Unicode letter in this font*/
    .h_px = 21,				/*Font height in pixels*/
	  .glyph_bitmap = "/hz6888.bin",	/*Bitmap of glyphs*/
    .glyph_dsc = glyph_dsc,		/*Description of glyphs*/
    .unicode_list = unicode_list,	/*List of unicode characters*/
    .get_bitmap = ex_lv_font_get_bitmap_sparse,	/*Function pointer to get glyph's bitmap*/
    .get_width = lv_font_get_width_sparse,	/*Function pointer to get glyph's width*/
    .bpp = 4,				/*Bit per pixel*/
    .next_page = NULL,		/*Pointer to a font extension*/
};


#endif /*USE_LV_FONT_SIMFANG*/