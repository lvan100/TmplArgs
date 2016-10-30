#include <string>
#include <iostream>
using namespace std;

#include "Debug.h"

void test(int a) {
	cout << a << endl;
}

void test(int a, char* b) {
	cout << a << b << endl;
}

int main(int argc, char* argv[])
{
	Debug<void(int)> d;
	d.callback = test;
	d(10);
	//d("10");

	Debug<void(int, char*)> d2;
	d2.callback = test;
	//d2(10);
	//d2(10,10);
	d2(10, (char*)"10");

	return 0;
}

