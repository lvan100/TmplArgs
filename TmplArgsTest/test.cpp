#include <string>
#include <iostream>
using namespace std;

int max(int a, int b) { return a>b?a:b; }
int max(int a, int b, int c) { return max(a,b)>max(b,c)?max(a,b):max(b,c); }

template<typename _T> void debug(_T a, std::string b) { cout<<a<<b<<endl; }
template<typename _T, typename _T1> void debug(_T a, _T1 b, std::string c) { cout<<a<<b<<c<<endl; }

// template<typename _T> struct Debug {
// 	_T _a;
// 	Debug(_T a) : _a(a) {}
// 	void debug(std::string s) { cout<<_a<<s; }
// };
// template<typename _T, typename _T1> struct Debug {
// 	_T _a;
// 	_T1 _b;
// 	Debug(_T a, _T1 b) : _a(a), _b(b) {}
// 	void debug(std::string s) { cout<<_a<<_b<<s; }
// };

template<typename _T> struct Debug0 {
	_T _a;
	Debug0(_T a) : _a(a) {}
	void debug(std::string s) { cout<<_a<<s; }
};
template<typename _T, typename _T1> struct Debug1 {
	_T _a;
	_T1 _b;
	Debug1(_T a, _T1 b) : _a(a), _b(b) {}
	void debug(std::string s) { cout<<_a<<_b<<s; }
};

#include "Debug.h"

int main(int argc, char* argv[])
{
	cout<<max(2,3)<<endl;
	cout<<max(3,4,5)<<endl;

	debug("debug:", "ok");
	debug(2,3,"2+3=5");

	Debug<void(int)> a;
	a.debug(3,"0");
	Debug<void(int,string)> b;
	b.debug(3, "4", "0");

	return 0;
}

