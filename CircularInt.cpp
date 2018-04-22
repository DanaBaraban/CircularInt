#include <iostream>
#include <string>
using namespace std;
#include "CircularInt.hpp"

CircularInt :: CircularInt (int x1, int y1){}
	
CircularInt CircularInt :: operator+ (const CircularInt &circ){}
CircularInt operator+ ( CircularInt &circ, const int &x){}
CircularInt operator+ (const int &x ,const CircularInt &circ){}
CircularInt operator- (const int &x ,const CircularInt &circ){}
CircularInt CircularInt :: operator* (const int &x){}
CircularInt& CircularInt :: operator*= (const int &x){}
CircularInt operator- (const CircularInt &circ){}
CircularInt CircularInt :: operator- (const int &x){}
CircularInt operator/ (const CircularInt &circ, const int &x){}
CircularInt& CircularInt :: operator+= (const int &x){}
CircularInt& CircularInt :: operator++ (){}
CircularInt CircularInt :: operator++ (int){}
ostream& CircularInt :: operator<<(ostream &os){}
ostream& CircularInt :: operator<<(ostream &ost ,  CircularInt &m){}
std::ostream& CircularInt :: operator<<(std::ostream& os, CircularInt const& r){}	

void CircularInt :: add(int x){}
void CircularInt :: minus(int x){}
void CircularInt :: fix(){}
