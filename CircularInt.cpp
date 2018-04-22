#include <iostream>
#include <string>
#include "CircularInt.hpp"

using namespace std;
	
	CircularInt::CircularInt(int x1, int y1){}
	CircularInt CircularInt::operator+ (const CircularInt &circ){
		CircularInt ans = *this;		
		return ans;
	}
	 CircularInt operator+ ( CircularInt &circ, const int &x){
		CircularInt ans = circ;
		return ans; 
	}
	 CircularInt operator+ (const int &x ,const CircularInt &circ){
		CircularInt ans = circ;
		return ans; 
	}
	 CircularInt operator- (const int &x ,const CircularInt &circ){
		CircularInt ans = circ;
		int temp = ans.num;
		return ans; 
	}
	CircularInt CircularInt::operator* (const int &x){
		CircularInt ans = *this;	
		return ans;
	}
	CircularInt& CircularInt::operator*= (const int &x){
		*this = *this * x;
		return *this; 
	}
	 CircularInt operator- (const CircularInt &circ) {
		CircularInt ans = circ;
		return ans;
	}
	CircularInt CircularInt::operator- (const int &x){
		CircularInt ans = *this;
		return ans; 
	}
	 CircularInt operator/ (const CircularInt &circ, const int &x) {
		CircularInt ans = circ;
		return ans; 	
	}
	CircularInt& CircularInt::operator+= (const int &x){
		*this = *this + x;
		return *this; 
	}
	CircularInt& CircularInt::operator++ (){
		(*this)+=1;
		return *this; 
	}
	CircularInt CircularInt::operator++ (int){
		CircularInt ans = *this;		
		return ans; 
	}
	ostream& CircularInt::operator<<(ostream &ost) { 
		return ost;
	}
	
	ostream &operator<<(ostream &ost ,  CircularInt &m1) { 
		return ost;
	}
	
	void CircularInt::add(int x){	
	}
	void CircularInt::minus(int x){
	}
	void CircularInt::fix(){
	}


	ostream &operator<<(ostream &ost, const CircularInt &r){
	 return ost;
	}
