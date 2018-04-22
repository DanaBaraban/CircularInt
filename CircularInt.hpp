#include <iostream>
#include <string>
#pragma once


class CircularInt{
	public:
	int num;
	int first;
	int last;
	
	CircularInt(int x1, int y1);
	
	CircularInt operator+ (const CircularInt &ci);
	friend CircularInt operator+ ( CircularInt &ci, const int &x);
	friend CircularInt operator+ (const int &x ,const CircularInt &ci);
	friend CircularInt operator- (const int &x ,const CircularInt &ci);
	CircularInt operator* (const int &x);
	CircularInt& operator*= (const int &x);
	friend CircularInt operator- (const CircularInt &ci);
	CircularInt operator- (const int &x);
	friend CircularInt operator/ (const CircularInt &ci, const int &x);
	CircularInt& operator+= (const int &x);
	CircularInt &operator++ ();
	CircularInt operator++ (int);
	//ostream &operator<<(ostream &os);
	
	//friend ostream &operator<<(ostream &os ,  CircularInt &m);
	
	void add(int x);
	void minus(int x);
	void fix();
	
	friend std::ostream& operator<<(std::ostream& os, CircularInt const& r);
};
