#include <iostream>
#include "CircularInt.hpp"

using namespace std;

CircularInt(int x1, int y1);
	
CircularInt :: operator+ (const CircularInt &circ){}
friend CircularInt operator+ ( CircularInt &circ, const int &x){}
friend CircularInt operator+ (const int &x ,const CircularInt &circ){}
friend CircularInt operator- (const int &x ,const CircularInt &circ){}
CircularInt :: operator* (const int &x){}
CircularInt& :: operator*= (const int &x){}
friend CircularInt operator- (const CircularInt &circ){}
CircularInt :: operator- (const int &x){}
friend CircularInt operator/ (const CircularInt &circ, const int &x){}
CircularInt& :: operator+= (const int &x){}
CircularInt& :: operator++ (){}
CircularInt :: operator++ (int){}
CircularInt :: ostream &operator<<(ostream &os){}
friend ostream &operator<<(ostream &ost ,  CircularInt &m){}
friend std::ostream& operator<<(std::ostream& os, CircularInt const& r){}	

CircularInt :: void add(int x){}
CircularInt :: void minus(int x){}
CircularInt :: void fix(){}
