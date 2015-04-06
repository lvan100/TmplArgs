/*
 * 作者：梁欢（lvan100@yeah.net）
 * 博客：http://blog.163.com/lvan100@yeah/
 * 授权：您可以使用这份文档进行任何用途，但原作者不承担任何责任。
 */


// 定义逗号（,）

#if _ArgNum_ == 0
#define COMMA		
#else
#define COMMA		,
#endif


// 定义类的名称

#ifndef _CLASS_NAME_
#define _CLASS_NAME_(x)		_YNAME_(x, _ArgNum_)
#endif


/*
 * Sim_TmplArgList	 --> class _T0 , class _T1 ... class _T9
 * Sim_TmplList		 --> class _ResultType , class _T0 ... class _T9
 * Sim_TmplArgT		 --> _T9 arg9
 * Sim_TmplArgTList	 --> _T0 arg0 , _T1 arg1 ... _T9 arg9
 * Sim_TmplArgOT	 --> _T9
 * Sim_TmplArgOTList --> _T0 , _T1 ... _T9
 * Sim_TmplArgOV	 --> arg9
 * Sim_TmplArgOVList --> arg0 , arg1 ... arg9
 * Sim_TmplFuncPtr	 --> _ResultType(_T0, _T1 ... _T9)
*/

#define Sim_TmplArgList		_YNAME_(TmplArgList, _ArgNum_)
#define Sim_TmplList		_YNAME_(TmplList, _ArgNum_)
#define Sim_TmplArgT		_YNAME_(TmplArgT, _ArgNum_)
#define Sim_TmplArgTList	_YNAME_(TmplArgTList, _ArgNum_)
#define Sim_TmplArgOT		_YNAME_(TmplArgOT, _ArgNum_)
#define Sim_TmplArgOTList	_YNAME_(TmplArgOTList, _ArgNum_)
#define Sim_TmplArgOV		_YNAME_(TmplArgOV, _ArgNum_)
#define Sim_TmplArgOVList	_YNAME_(TmplArgOVList, _ArgNum_)
#define Sim_TmplFuncPtr		_YNAME_(TmplFuncPtr, _ArgNum_)


/*
 * 将下面的文件替换成你自己的类型定义文档
 */

#include "DebugBase.h"


#undef COMMA
#undef Sim_TmplArgList
#undef Sim_TmplList
#undef Sim_TmplArgT
#undef Sim_TmplArgTList
#undef Sim_TmplArgOT
#undef Sim_TmplArgOTList
#undef Sim_TmplArgOV
#undef Sim_TmplArgOVList
#undef Sim_TmplFuncPtr