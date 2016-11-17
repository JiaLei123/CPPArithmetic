//============================================================================
// Name        : swapDemo.cpp
// Author      : jialei
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swap(char *x, char *y)
{
	char *temp;
	temp = x;
	x = y;
	y = temp;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	char *ap = "Hello";
	char *bp = "how are you";

	cout<< "ap: "<<ap<<endl;
	cout<< "bp: "<<bp<<endl;

	swap(ap, bp);
	cout<< "swap ap,bp"<<endl;
	cout<< "ap: "<<ap<<endl;
	cout<< "bp: "<<bp<<endl;

	return 0;
}



