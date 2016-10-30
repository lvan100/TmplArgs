#define _DEBUG_BASE	_CLASS_NAME_(_debug)

template<templateX_cRcTcT> struct _DEBUG_BASE {

	templateX_FuncPtr
	_ptr callback;

	template<class... Arg>
	template_R operator() (Arg... arg) {
		callback(arg...);
	}

};

template<templateX_cRcTcT>
struct _Get_Base_Impl<templateX_Func>
{
	typedef _DEBUG_BASE<templateX_RTT> _Type;
};

#undef _DEBUG_BASE