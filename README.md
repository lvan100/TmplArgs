# TmplArgs

我们可以通过函数重载为同名函数实现不同参数个数的版本，如：

	int max(int a, int b) { return a>b?a:b; }
	int max(int a, int b, int c)
	{ return max(a,b)>max(b,c)?max(a,b):max(b,c); }

我们还可以通过使用函数模板来扩展函数对参数类型的定制，如：

	template<typename _T>
	void debug(_T a, std::string b) { cout<<a<<b<<endl; }
	template<typename _T, typename _T1>
	void debug(_T a, _T1 b, std::string c) { cout<<a<<b<<c<<endl; }

然而这种规则对于类模板却并不是（至少现在不是）奏效的。如：

	template<typename _T> struct Debug {
		_T _a;
		Debug(_T a) : _a(a) {}
		void debug(std::string s) { cout<<_a<<s; }
	};
	template<typename _T, typename _T1> struct Debug {
		_T _a;
		_T1 _b;
		Debug(_T a, _T1 b) : _a(a), _b(b) {}
		void debug(std::string s) { cout<<_a<<_b<<s; }
	};

上面的代码是不符合编译器（VS2010）规则的。也就是说我们没有办法为同名的类模板实现不同参数的版本。
那么我们有没有办法突破这个限制呢？是的，通过 TmplArgs 库，我们便获得了这种能力。

虽然 TmplArgs 的使用难度已经降到了最低，但是它仍然不完美：<br/>
首先，我们需要实现类模板的宏定义式，如 DebugBase.h。<br/>
然后，我们需要实现类模板的通用形式，如 Debug.h。<br/>
最后，我们还需要将参数规则写成函数指针的形式。<br/>


下面这段代码就是使用 TmplArgs 后对上面的 Debug 模板的改写：

	Debug<void(int)> a;
	a.debug(3,"0");
	Debug<void(int,string)> b;
	b.debug(3, "4", "0");
