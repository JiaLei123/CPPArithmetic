//============================================================================
// Name        : CovertString.cpp
// Author      : jialei
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int num = -12345 , i = 0, j = 0, flag = 0, begin, end;
	char str[] = "I come from tianjing.", tmp;
	j = strlen(str)-1;
	cout << str << endl;
	while(j>i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}

	cout << str << endl;

	i = 0;

	while(str[i])
	{
		if(str[i] != ' ')
		{
			begin = i;
			while(str[i] && str[i] != ' ')
			{
				i++;
			}
			i = i-1;
			end = i;
		}

		while(end > begin)
		{
			tmp = str[begin];
			str[begin] = str[end];
			str[end] = tmp;
			begin++;
			end --;
		}
		i++;
	}

	cout << str << endl;

	return 0;
}
