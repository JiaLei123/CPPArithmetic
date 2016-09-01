//============================================================================
// Name        : CopyConstructure.cpp
// Author      : jialei
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;


class Person
{
 public:
  Person(char *pN)
  {
   cout <<"Constructing "<<endl;
   pName = new char(strlen(pN)+1);
   if (pName!=0)
   {
    strcpy(pName,pN);
   }
  }

  Person(Person& p)
  {
	  cout<<"Copying" <<"into block\n";
	  pName = new char[sizeof(p.pName)];
	  if(pName != 0)
	  {
		  strcpy(pName, p.pName);
	  }
  }

  ~Person()
  {
   cout << "Destructing" << endl;
   pName[0]='\0';
   delete   pName;

  }

 protected:
  char *pName;
} ;


int main() {
	cout << "!!!start!!!" << endl; // prints !!!Hello World!!!
	 Person p1("Randy");
	 Person p2=p1;               //��Person  p2 (p1);
}
