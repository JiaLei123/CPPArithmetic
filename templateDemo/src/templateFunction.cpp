/*
 * templateFunction.cpp
 *
 *  Created on: 2016��11��5��
 *      Author: JiaLei
 */

#include "templateFunction.h"

namespace templateDemo {

templateFunction::templateFunction() {
	// TODO Auto-generated constructor stub

}

templateFunction::~templateFunction() {
	// TODO Auto-generated destructor stub
}

template <class T> void templateFunction::myfunction(T &a, T &b){
	T c = a;
	a = b;
	b = c;
}

} /* namespace std */


