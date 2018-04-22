#include <iostream>
#include <string>
using namespace std;
#pragma once


class CircularInt{
	public:
	int num;
	int first;
	int last;
	
	CircularInt(int x1, int y1);
	
	CircularInt operator+ (const CircularInt &circ);
	friend CircularInt operator+ ( CircularInt &circ, const int &x);
	friend CircularInt operator+ (const int &x ,const CircularInt &circ);
	friend CircularInt operator- (const int &x ,const CircularInt &circ);
	CircularInt operator* (const int &x);
	CircularInt& operator*= (const int &x);
	friend CircularInt operator- (const CircularInt &circ);
	CircularInt operator- (const int &x);
	friend CircularInt operator/ (const CircularInt &circ, const int &x);
	CircularInt& operator+= (const int &x);
	CircularInt &operator++ ();
	CircularInt operator++ (int);
	ostream &operator<<(ostream &os);
	
	friend ostream &operator<<(ostream &ost ,  CircularInt &m);
	
	void add(int x);
	void minus(int x);
	void fix();
	
	friend std::ostream& operator<<(std::ostream& os, CircularInt const& r);
};
