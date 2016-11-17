//============================================================================
// Name        : templateDemo.cpp
// Author      : jialei
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#define _CRTDBG_MAP_ALLOC

#include <iostream>
#include <stdlib.h>
#include "templateFunction.h"

using namespace std;
using namespace templateDemo;

template <class T> void myfunction(T &a, T &b){
	T c = a;
	a = b;
	b = c;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	templateFunction * function = new templateFunction();
	templateFunction function1;
	double a = 0;
	double b = 0;
	cin>>a;
	cin>>b;
	cout << a << ", ";
	cout << b << " ";
	cout<<endl;

	myfunction(a, b);
	//function->myfunction(a, b);
	//function1.myfunction(a, b);
	cout << a << ", ";
	cout << b << " ";
	cout<<endl;


	return 0;

}
