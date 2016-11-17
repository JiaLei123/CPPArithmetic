//============================================================================
// Name        : QuickSort.cpp
// Author      : jialei
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;
//void QuickSort(int R[], int low, int high);
//int Partition(int R[], int i, int j);
int Partition(int R[], int i, int j)
{
	int tmp = R[i];
	while(i<j)
	{
		//从高往低走
		while(i<j && R[j]>= tmp)
		{
			j--;
		}

		if(i<j)
		{
			R[i++] = R[j];
		}

		//从低往高走
		while(i<j && R[i] <= tmp)
		{
			i++;
		}

		if(i<j)
		{
			R[j--] = R[i];
		}
		R[i] = tmp;
	}
	return i;
}

void QuickSort(int R[], int low, int high)
{
	int pivotpos;
	if(low < high)
	{
		pivotpos = Partition(R, low, high);
		QuickSort(R, low, pivotpos - 1);
		QuickSort(R, pivotpos + 1, high);
	}
}

int main() {

	cout << "!!!Hello World, Let's Start!!!" << endl; // prints !!!Hello World!!!
	int a;
	cin>>a;
	int array[] = {45, 63, 23, 56, 67, 89, 90, 21, 11};
	int len = sizeof(array)/sizeof(int);
	cout << "The original array is " <<endl;
	for(int i = 0; i < len; i ++)
	{
		cout << array[i]<< ", ";
	}
	cout << endl;

	QuickSort(array, 0, len -1);

	cout<<"After sort"<<endl;
	for(int i = 0; i < len; i ++)
	{
		cout << array[i]<< ", ";
	}
	cout << endl;

	return 0;
}






