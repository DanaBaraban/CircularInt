#include <iostream>
#include "CircularInt.hpp"

using namespace std;

CircularInt(int x1, int y1);
	
CircularInt :: CircularInt operator+ (const CircularInt &circ){}
CircularInt :: friend CircularInt operator+ ( CircularInt &circ, const int &x){}
CircularInt :: friend CircularInt operator+ (const int &x ,const CircularInt &circ){}
CircularInt :: friend CircularInt operator- (const int &x ,const CircularInt &circ){}
CircularInt :: CircularInt operator* (const int &x){}
CircularInt :: CircularInt& operator*= (const int &x){}
CircularInt :: friend CircularInt operator- (const CircularInt &circ){}
CircularInt :: CircularInt operator- (const int &x){}
CircularInt :: friend CircularInt operator/ (const CircularInt &circ, const int &x){}
CircularInt :: CircularInt& operator+= (const int &x){}
CircularInt :: CircularInt &operator++ (){}
CircularInt :: CircularInt operator++ (int){}
CircularInt :: ostream &operator<<(ostream &os){}
CircularInt :: friend ostream &operator<<(ostream &ost ,  CircularInt &m){}
CircularInt :: friend std::ostream& operator<<(std::ostream& os, CircularInt const& r){}	

CircularInt :: void add(int x){}
CircularInt :: void minus(int x){}
CircularInt :: void fix(){}
