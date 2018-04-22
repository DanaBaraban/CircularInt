#include <iostream>
#include <string>
using namespace std;
#include "CircularInt.hpp"

CircularInt :: CircularInt (int x1, int y1){}
	
CircularInt CircularInt :: operator+ (const CircularInt &circ){CircularInt ans=circ; return ans;}
CircularInt operator+ ( CircularInt &circ, const int &x){CircularInt ans=circ; return ans;}
CircularInt operator+ (const int &x ,const CircularInt &circ){CircularInt ans=circ; return ans;}
CircularInt operator- (const int &x ,const CircularInt &circ){CircularInt ans=circ; return ans;}
CircularInt CircularInt :: operator* (const int &x){int ans=x; return ans;}
CircularInt& CircularInt :: operator*= (const int &x){int ans=x; return ans;}
CircularInt operator- (const CircularInt &circ){CircularInt ans=circ; return ans;}
CircularInt CircularInt :: operator- (const int &x){int ans=x; return ans;}
CircularInt operator/ (const CircularInt &circ, const int &x){CircularInt ans=circ; return ans;}
CircularInt& CircularInt :: operator+= (const int &x){int ans=x; return ans;}
CircularInt& CircularInt :: operator++ (){return *this;}
CircularInt CircularInt :: operator++ (int){int ans; return ans;}
ostream& CircularInt :: operator<<(ostream &os){ostream ans=os; return ans;}
ostream& CircularInt :: operator<<(ostream &ost ,  CircularInt &m){ostream ans=ost; return ans;}
std::ostream& CircularInt :: operator<<(std::ostream& os, CircularInt const& r){CircularInt ans=circ; return ans;}

void CircularInt :: add(int x){}
void CircularInt :: minus(int x){}
void CircularInt :: fix(){}
