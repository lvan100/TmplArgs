/*
 * 作者：梁欢（lvan100@yeah.net）
 * 博客：http://blog.163.com/lvan100@yeah/
 * 授权：您可以使用这份文档进行任何用途，但原作者不承担任何责任。
 */


#if _ArgNum_Max_ != 10
#	error bad number of arguments
#endif


//////////////////////////////////////////////////////////////////////////
// 0

// 模板参数（右侧）列表 
#define TmplArgList0	

// 模板参数（完整）列表 class _ResultType
#define TmplList0		TmplResultType

// 函数参数				
#define TmplArgT0		

// 函数参数列表			
#define TmplArgTList0	TmplArgT0

// 模板参数变量			
#define TmplArgOT0		

// 模板参数变量列表		
#define TmplArgOTList0	TmplArgOT0

// 函数参数变量			
#define TmplArgOV0		

// 函数参数变量列表		
#define TmplArgOVList0	TmplArgOV0

// 函数指针				_ResultType()
#define TmplFuncPtr0	TmplResult(TmplArgOVList0)


//////////////////////////////////////////////////////////////////////////
// 1

// 模板参数（右侧）列表 class _T0
#define TmplArgList1	TmplArgType(0)

// 模板参数（完整）列表 class _ResultType , class _T0
#define TmplList1		TmplResultType , TmplArgList1

// 函数参数				_T0 arg0
#define TmplArgT1		TmplArg(0) TmplArgV(0)

// 函数参数列表			_T0 arg0
#define TmplArgTList1	TmplArgT1

// 模板参数变量			_T0
#define TmplArgOT1		TmplArg(0)

// 模板参数变量列表		_T0
#define TmplArgOTList1	TmplArgOT1

// 函数参数变量			arg0
#define TmplArgOV1		TmplArgV(0)

// 函数参数变量列表		arg0
#define TmplArgOVList1	TmplArgOV1

// 函数指针				_ResultType(_T0)
#define TmplFuncPtr1	TmplResult(TmplArgOTList1)


//////////////////////////////////////////////////////////////////////////
// 2

// 模板参数（右侧）列表 class _T0 , class _T1
#define TmplArgList2	TmplArgList1 , TmplArgType(1)

// 模板参数（完整）列表 class _ResultType , class _T0 , class _T1
#define TmplList2		TmplResultType , TmplArgList2

// 函数参数				_T1 arg1
#define TmplArgT2		TmplArg(1) TmplArgV(1)

// 函数参数列表			_T0 arg0 , _T1 arg1
#define TmplArgTList2	TmplArgTList1 , TmplArgT2

// 模板参数变量			_T1
#define TmplArgOT2		TmplArg(1)

// 模板参数变量列表		_T0 , _T1
#define TmplArgOTList2	TmplArgOTList1 , TmplArgOT2

// 函数参数变量			arg1
#define TmplArgOV2		TmplArgV(1)

// 函数参数变量列表		arg0 , arg1
#define TmplArgOVList2	TmplArgOVList1 , TmplArgOV2

// 函数指针				_ResultType(_T0, _T1)
#define TmplFuncPtr2	TmplResult(TmplArgOTList2)


//////////////////////////////////////////////////////////////////////////
// 3

// 模板参数（右侧）列表 class _T0 , class _T1 , class _T2
#define TmplArgList3	TmplArgList2 , TmplArgType(2)

// 模板参数（完整）列表 class _ResultType , class _T0 , class _T1 , class _T2
#define TmplList3		TmplResultType , TmplArgList3

// 函数参数				_T2 arg2
#define TmplArgT3		TmplArg(2) TmplArgV(2)

// 函数参数列表			_T0 arg0 , _T1 arg1 , _T2 arg2
#define TmplArgTList3	TmplArgTList2 , TmplArgT3

// 模板参数变量			_T2
#define TmplArgOT3		TmplArg(2)

// 模板参数变量列表		_T0 , _T1 , _T2
#define TmplArgOTList3	TmplArgOTList2 , TmplArgOT3

// 函数参数变量			arg2
#define TmplArgOV3		TmplArgV(2)

// 函数参数变量列表		arg0 , arg1 , arg2
#define TmplArgOVList3	TmplArgOVList2 , TmplArgOV3

// 函数指针				_ResultType(_T0, _T1, _T2)
#define TmplFuncPtr3	TmplResult(TmplArgOTList3)


//////////////////////////////////////////////////////////////////////////
// 4

// 模板参数（右侧）列表 class _T0 , class _T1 , class _T2 , class _T3
#define TmplArgList4	TmplArgList3 , TmplArgType(3)

// 模板参数（完整）列表 class _ResultType , class _T0 , class _T1 , class _T2 , class _T3
#define TmplList4		TmplResultType , TmplArgList4

// 函数参数				_T3 arg3
#define TmplArgT4		TmplArg(3) TmplArgV(3)

// 函数参数列表			_T0 arg0 , _T1 arg1 , _T2 arg2 , _T3 arg3
#define TmplArgTList4	TmplArgTList3 , TmplArgT4

// 模板参数变量			_T3
#define TmplArgOT4		TmplArg(3)

// 模板参数变量列表		_T0 , _T1 , _T2 , _T3
#define TmplArgOTList4	TmplArgOTList3 , TmplArgOT4

// 函数参数变量			arg3
#define TmplArgOV4		TmplArgV(3)

// 函数参数变量列表		arg0 , arg1 , arg2 , arg3
#define TmplArgOVList4	TmplArgOVList3 , TmplArgOV4

// 函数指针				_ResultType(_T0, _T1, _T2, _T3)
#define TmplFuncPtr4	TmplResult(TmplArgOTList4)


//////////////////////////////////////////////////////////////////////////
// 5

// 模板参数（右侧）列表 class _T0 , class _T1 , class _T2 , class _T3 , class _T4
#define TmplArgList5	TmplArgList4 , TmplArgType(4)

// 模板参数（完整）列表 class _ResultType , class _T0 , class _T1 , class _T2 , class _T3 , class _T4
#define TmplList5		TmplResultType , TmplArgList5

// 函数参数				_T4 arg4
#define TmplArgT5		TmplArg(4) TmplArgV(4)

// 函数参数列表			_T0 arg0 , _T1 arg1 , _T2 arg2 , _T3 arg3 , _T4 arg4
#define TmplArgTList5	TmplArgTList4 , TmplArgT5

// 模板参数变量			_T4
#define TmplArgOT5		TmplArg(4)

// 模板参数变量列表		_T0 , _T1 , _T2 , _T3 , _T4
#define TmplArgOTList5	TmplArgOTList4 , TmplArgOT5

// 函数参数变量			arg4
#define TmplArgOV5		TmplArgV(4)

// 函数参数变量列表		arg0 , arg1 , arg2 , arg3 , arg4
#define TmplArgOVList5	TmplArgOVList4 , TmplArgOV5

// 函数指针				_ResultType(_T0, _T1, _T2, _T3, _T4)
#define TmplFuncPtr5	TmplResult(TmplArgOTList5)


//////////////////////////////////////////////////////////////////////////
// 6

// 模板参数（右侧）列表 class _T0 , class _T1 , class _T2 , class _T3 , class _T4 , class _T5
#define TmplArgList6	TmplArgList5 , TmplArgType(5)

// 模板参数（完整）列表 class _ResultType , class _T0 , class _T1 , class _T2 , class _T3 , class _T4 , class _T5
#define TmplList6		TmplResultType , TmplArgList6

// 函数参数				_T5 arg5
#define TmplArgT6		TmplArg(5) TmplArgV(5)

// 函数参数列表			_T0 arg0 , _T1 arg1 , _T2 arg2 , _T3 arg3 , _T4 arg4 , _T5 arg5
#define TmplArgTList6	TmplArgTList5 , TmplArgT6

// 模板参数变量			_T5
#define TmplArgOT6		TmplArg(5)

// 模板参数变量列表		_T0 , _T1 , _T2 , _T3 , _T4 , _T5
#define TmplArgOTList6	TmplArgOTList5 , TmplArgOT6

// 函数参数变量			arg5
#define TmplArgOV6		TmplArgV(5)

// 函数参数变量列表		arg0 , arg1 , arg2 , arg3 , arg4 , arg5
#define TmplArgOVList6	TmplArgOVList5 , TmplArgOV6

// 函数指针				_ResultType(_T0, _T1, _T2, _T3, _T4, _T5)
#define TmplFuncPtr6	TmplResult(TmplArgOTList6)


//////////////////////////////////////////////////////////////////////////
// 7

// 模板参数（右侧）列表 class _T0 , class _T1 , class _T2 , class _T3 , class _T4 , class _T5 , class _T6
#define TmplArgList7	TmplArgList6 , TmplArgType(6)

// 模板参数（完整）列表 class _ResultType , class _T0 , class _T1 , class _T2 , class _T3 , class _T4 , class _T5 , class _T6
#define TmplList7		TmplResultType , TmplArgList7

// 函数参数				_T6 arg6
#define TmplArgT7		TmplArg(6) TmplArgV(6)

// 函数参数列表			_T0 arg0 , _T1 arg1 , _T2 arg2 , _T3 arg3 , _T4 arg4 , _T5 arg5 , _T6 arg6
#define TmplArgTList7	TmplArgTList6 , TmplArgT7

// 模板参数变量			_T6
#define TmplArgOT7		TmplArg(6)

// 模板参数变量列表		_T0 , _T1 , _T2 , _T3 , _T4 , _T5 , _T6
#define TmplArgOTList7	TmplArgOTList6 , TmplArgOT7

// 函数参数变量			arg6
#define TmplArgOV7		TmplArgV(6)

// 函数参数变量列表		arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6
#define TmplArgOVList7	TmplArgOVList6 , TmplArgOV7

// 函数指针				_ResultType(_T0, _T1, _T2, _T3, _T4, _T5, _T6)
#define TmplFuncPtr7	TmplResult(TmplArgOTList7)


//////////////////////////////////////////////////////////////////////////
// 8

// 模板参数（右侧）列表 class _T0 , class _T1 , class _T2 , class _T3 , class _T4 , class _T5 , class _T6 , class _T7
#define TmplArgList8	TmplArgList7 , TmplArgType(7)

// 模板参数（完整）列表 class _ResultType , class _T0 , class _T1 , class _T2 , class _T3 , class _T4 , class _T5 , class _T6 , class _T7
#define TmplList8		TmplResultType , TmplArgList8

// 函数参数				_T7 arg7
#define TmplArgT8		TmplArg(7) TmplArgV(7)

// 函数参数列表			_T0 arg0 , _T1 arg1 , _T2 arg2 , _T3 arg3 , _T4 arg4 , _T5 arg5 , _T6 arg6 , _T7 arg7
#define TmplArgTList8	TmplArgTList7 , TmplArgT8

// 模板参数变量			_T7
#define TmplArgOT8		TmplArg(7)

// 模板参数变量列表		_T0 , _T1 , _T2 , _T3 , _T4 , _T5 , _T6 , _T7
#define TmplArgOTList8	TmplArgOTList7 , TmplArgOT8

// 函数参数变量			arg7
#define TmplArgOV8		TmplArgV(7)

// 函数参数变量列表		arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7
#define TmplArgOVList8	TmplArgOVList7 , TmplArgOV8

// 函数指针				_ResultType(_T0, _T1, _T2, _T3, _T4, _T5, _T6, _T7)
#define TmplFuncPtr8	TmplResult(TmplArgOTList8)


//////////////////////////////////////////////////////////////////////////
// 9

// 模板参数（右侧）列表 class _T0 , class _T1 , class _T2 , class _T3 , class _T4 , class _T5 , class _T6 , class _T7 , class _T8
#define TmplArgList9	TmplArgList8 , TmplArgType(8)

// 模板参数（完整）列表 class _ResultType , class _T0 , class _T1 , class _T2 , class _T3 , class _T4 , class _T5 , class _T6 , class _T7 , class _T8
#define TmplList9		TmplResultType , TmplArgList9

// 函数参数				_T8 arg8
#define TmplArgT9		TmplArg(8) TmplArgV(8)

// 函数参数列表			_T0 arg0 , _T1 arg1 , _T2 arg2 , _T3 arg3 , _T4 arg4 , _T5 arg5 , _T6 arg6 , _T7 arg7 , _T8 arg8
#define TmplArgTList9	TmplArgTList8 , TmplArgT9

// 模板参数变量			_T8
#define TmplArgOT9		TmplArg(8)

// 模板参数变量列表		_T0 , _T1 , _T2 , _T3 , _T4 , _T5 , _T6 , _T7 , _T8
#define TmplArgOTList9	TmplArgOTList8 , TmplArgOT9

// 函数参数变量			arg8
#define TmplArgOV9		TmplArgV(8)

// 函数参数变量列表		arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8
#define TmplArgOVList9	TmplArgOVList8 , TmplArgOV9

// 函数指针				_ResultType(_T0, _T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8)
#define TmplFuncPtr9	TmplResult(TmplArgOTList9)


//////////////////////////////////////////////////////////////////////////
// 10

// 模板参数（右侧）列表 class _T0 , class _T1 , class _T2 , class _T3 , class _T4 , class _T5 , class _T6 , class _T7 , class _T8 , class _T9
#define TmplArgList10	TmplArgList9 , TmplArgType(9)

// 模板参数（完整）列表 class _ResultType , class _T0 , class _T1 , class _T2 , class _T3 , class _T4 , class _T5 , class _T6 , class _T7 , class _T8 , class _T9
#define TmplList10		TmplResultType , TmplArgList10

// 函数参数				_T9 arg9
#define TmplArgT10		TmplArg(9) TmplArgV(9)

// 函数参数列表			_T0 arg0 , _T1 arg1 , _T2 arg2 , _T3 arg3 , _T4 arg4 , _T5 arg5 , _T6 arg6 , _T7 arg7 , _T8 arg8 , _T9 arg9
#define TmplArgTList10	TmplArgTList9 , TmplArgT10

// 模板参数变量			_T9
#define TmplArgOT10		TmplArg(9)

// 模板参数变量列表		_T0 , _T1 , _T2 , _T3 , _T4 , _T5 , _T6 , _T7 , _T8 , _T9
#define TmplArgOTList10	TmplArgOTList9 , TmplArgOT10

// 函数参数变量			arg9
#define TmplArgOV10		TmplArgV(9)

// 函数参数变量列表		arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9
#define TmplArgOVList10	TmplArgOVList9 , TmplArgOV10

// 函数指针				_ResultType(_T0, _T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9)
#define TmplFuncPtr10	TmplResult(TmplArgOTList10)