/*
 * templateFunction.h
 *
 *  Created on: 2016Äê11ÔÂ5ÈÕ
 *      Author: JiaLei
 */

#ifndef TEMPLATEFUNCTION_H_
#define TEMPLATEFUNCTION_H_

namespace templateDemo {

class templateFunction {
public:
	templateFunction();
	virtual ~templateFunction();
	template <class T> void myfunction(T &a, T &b);

};




} /* namespace std */
#endif /* TEMPLATEFUNCTION_H_ */
