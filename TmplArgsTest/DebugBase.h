#define _DEBUG_BASE	_CLASS_NAME_(_debug)

#if _ArgNum_ == 0
#define PRINT_ARG0	""
#elif _ArgNum_ == 1
#define PRINT_ARG1	PRINT_ARG0<<TmplArgOV1
#elif _ArgNum_ == 2
#define PRINT_ARG2	PRINT_ARG1<<TmplArgOV2
#elif _ArgNum_ == 3
#define PRINT_ARG3	PRINT_ARG2<<TmplArgOV3
#elif _ArgNum_ == 4
#define PRINT_ARG4	PRINT_ARG3<<TmplArgOV4
#elif _ArgNum_ == 5
#define PRINT_ARG5	PRINT_ARG4<<TmplArgOV5
#elif _ArgNum_ == 6
#define PRINT_ARG6	PRINT_ARG5<<TmplArgOV6
#elif _ArgNum_ == 7
#define PRINT_ARG7	PRINT_ARG6<<TmplArgOV7
#elif _ArgNum_ == 8
#define PRINT_ARG8	PRINT_ARG7<<TmplArgOV8
#elif _ArgNum_ == 9
#define PRINT_ARG9	PRINT_ARG8<<TmplArgOV9
#elif _ArgNum_ == 10
#define PRINT_ARG10	PRINT_ARG9<<TmplArgOV10
#endif

#define PRINT_ARG	_YNAME_(PRINT_ARG, _ArgNum_)

template<Sim_TmplArgList COMMA typename _INT = int> struct _DEBUG_BASE {
	void debug(Sim_TmplArgTList COMMA std::string s) { cout<<PRINT_ARG<<s<<endl; }
};

template<Sim_TmplList>
struct _Get_Base_Impl<Sim_TmplFuncPtr>
{
	typedef _DEBUG_BASE<Sim_TmplArgOTList> _Type;
};

#undef PRINT_ARG

#undef _DEBUG_BASE