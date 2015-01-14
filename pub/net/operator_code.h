#ifndef _NET_OPERATOR_CODE_H_
#define _NET_OPERATOR_CODE_H_

enum operatorcode{
	QUICK_LOGIN = 1000, //快速登录
	THIRID_LOGIN = 10001, //第三方登陆
	BD_BIND_PUSH = 1100, //百度推送绑定
	FIND_BROAD = 2100, //推荐综合
	FIND_BUILDING = 2101,//推荐建筑
	FIND_BOOK = 2102,//推荐书籍
	FIND_INTRO = 2103,//推荐介绍
	BUILDING_NEAR = 3100,//获取周围建筑
	BUILDING_SERCH_TYPE = 3101,//根据类似搜索
	BUILDING_SUMMARY = 3102,
	BOOK_SEARCH_TYPE = 4100,//根据条件搜索
	BOOK_SUAMMARY = 4101,//书籍详情
	BOOK_LIST =4102,//书单
	BOOK_WANT_GET = 4103,//获得此书
	BOOK_CHAPTER_LIST = 4104,//获得章节
	ACTIVITY_LIST = 5100,//获取活动
	ACTIVITY_SUMMARY = 5102,//活动详情
	INTRO_SEARCH_TYPE = 6100,//搜索
	INTRO_HIS_THR_SUMMARY = 6101,
	INTOR_ART_SUMMARY = 6102//
};


#endif
