//============================================================================
// Name        : itoa.cpp
// Author      : jialei
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
using namespace std;

void int2str(int, char*);
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int num_int;
	cout <<"input number"<<endl;
	cin>>num_int;
	char* p = new char[10];
	int2str(num_int, p);
	cout<<"the string is "<<p<<endl;
	delete p;
	p=NULL;
	return 0;
}

void int2str(int n, char *str)
{
	char* buf = new char[10];
	int temp = n<0?-n:n;
	int i=0, len=0;

	if (str == NULL)
	{return;}

	while(temp)
	{
		buf[i++] = (temp % 10) + '0';
		temp = temp /10;
	}

	len = n<0?++i:i;
	str[i]='\0';
	while(1)
	{
		i--;
		if(buf[len-i-1]== '\0')
		{
			break;
		}
		str[i]=buf[len-i-1];
	}
	if(i==0)
	{
		str[0]='-';
	}


}
