#include <iostream>
#include <string>
#include "CircularInt.hpp"
using namespace std;

CircularInt :: CircularInt (int x1, int y1){
    this -> first = x1;
    this -> last = y1;
    num = first;
    range = last - first + 1;
}
CircularInt CircularInt :: operator+ (const CircularInt &circ){
    CircularInt ans = *this;
    ans.add(circ.num);
    return ans;
}
CircularInt operator+ ( CircularInt &circ, const int &x){
    CircularInt ans = circ;
    ans.add(x);
    return ans;
}
CircularInt operator+ (const int &x ,const CircularInt &circ){
    CircularInt ans = circ;
    ans.add(x);
    return ans;
}
CircularInt operator- (const CircularInt &circ){
    CircularInt ans = circ;
    ans.num = -ans.num;
    ans.fix();
    return ans;
}
CircularInt operator- (const int &x ,const CircularInt &circ){
    CircularInt ans = circ;
    int y = ans.num;
    ans.num = x;
    ans.minus(y);
    return ans;
}
CircularInt CircularInt :: operator- (const int &x){
    CircularInt ans = *this;
    ans.minus(x);
    return ans;
}
CircularInt CircularInt :: operator* (const int &x){
    CircularInt ans = *this;
    ans.num *= x;
    ans.fix();
    return ans;
}
CircularInt& CircularInt :: operator*= (const int &x){
    *this = *this * x;
    fix();
    return *this;
}
CircularInt& CircularInt :: operator+= (const int &x){
    CircularInt ans = *this;
    ans.add(x);
    return ans;
}
CircularInt& CircularInt :: operator++ (){
    (*this) += 1;
    return *this;
}
CircularInt CircularInt :: operator++ (int){
    CircularInt ans = *this;
    (*this) += 1;
    return ans;
}
// ostream &operator<<(ostream &ost){
//     ost << num;
//     return ost;
// }
std::ostream &operator<<(ostream &ost, CircularInt &m){
    ost << m.num;
    return ost;
}
std::ostream& operator<<(std::ostream& ost, CircularInt const& r){
    ost << r.num;
    return ost;
}
const bool CircularInt :: operator< (const CircularInt &circ) const{
    return num < circ.num;
}
const bool CircularInt :: operator<= (const CircularInt &circ) const{
    return num <= circ.num;
}
const bool CircularInt :: operator> (const CircularInt &circ) const{
    return num > circ.num;
}
const bool CircularInt :: operator>= (const CircularInt &circ) const{
    return num >= circ.num;
}
const bool CircularInt :: operator< (const int n) const{
    return num < n;
}
const bool CircularInt :: operator<= (const int n) const{
    return num <= n;
}
const bool CircularInt :: operator> (const int n) const{
    return num > n;
}
const bool CircularInt :: operator>= (const int n) const{
    return num >= n;
}
const bool CircularInt :: operator== (const CircularInt &circ) const{
    return num == circ.num;
}
const bool CircularInt :: operator!= (const CircularInt &circ) const{
    return num != circ.num;
}
const bool CircularInt :: operator== (const int n) const{
    return num == n;
}
const bool CircularInt :: operator!= (const int n) const{
    return num != n;
}
const bool operator< (const int n, const CircularInt &circ) {
    return n < circ.num;
}
const bool operator<= (const int n, const CircularInt &circ) {
    return n <= circ.num;
}
const bool operator> (const int n, const CircularInt &circ) {
    return n > circ.num;
}

const bool operator>= (const int n, const CircularInt &circ) {
    return n >= circ.num;
}
CircularInt operator% (int n, const CircularInt &circ){
    CircularInt tmp(circ);
    tmp.num = n % tmp.num;
    tmp.fix();
    return tmp;
}
CircularInt operator^ (int n, const CircularInt &circ){
    CircularInt tmp(circ);
    tmp.num = n ^ tmp.num;
    tmp.fix();
    return tmp;
}
CircularInt operator& (int n, const CircularInt &circ){
    CircularInt tmp(circ);
    tmp.num = n & tmp.num;
    tmp.fix();
    return tmp;
}
CircularInt operator| (int n, const CircularInt &circ){
    CircularInt tmp(circ);
    tmp.num = n | tmp.num;
    tmp.fix();
    return tmp;
}
CircularInt operator<< (int n, const CircularInt &circ){
    CircularInt tmp(circ);
    tmp.num = n << tmp.num;
    tmp.fix();
    return tmp;
}
CircularInt operator>> (int n, const CircularInt &circ){
    CircularInt tmp(circ);
    tmp.num = n >> tmp.num;
    tmp.fix();
    return tmp;
}
const CircularInt CircularInt :: operator~ () const{
    CircularInt tmp(*this);
    tmp.num = ~tmp.num;
    tmp.fix();
    return tmp;
}
CircularInt& CircularInt :: operator/= (const int n){
    *this = *this / n;
    return *this;
}
CircularInt& CircularInt :: operator%= (const int n){
    num %= n;
    fix();
    return *this;
}
CircularInt& CircularInt :: operator^= (const int n){
    num ^= n;
    fix();
    return *this;
}
CircularInt& CircularInt :: operator&= (const int n){
    num &= n;
    fix();
    return *this;
}
CircularInt& CircularInt :: operator|= (const int n){
    num |= n;
    fix();
    return *this;
}
CircularInt& CircularInt :: operator<<= (const int n){
    num <<= n;
    fix();
    return *this;
}
CircularInt& CircularInt :: operator>>= (const int n){
    num >>= n;
    fix();
    return *this;
}
CircularInt& CircularInt :: operator/= (const CircularInt &circ){
    *this = *this / circ.num;
    return *this;
}
CircularInt& CircularInt :: operator%= (const CircularInt &circ){
    num %= circ.num;
    fix();
    return *this;
}
CircularInt& CircularInt :: operator^= (const CircularInt &circ){
    num ^= circ.num;
    fix();
    return *this;
}
CircularInt& CircularInt :: operator&= (const CircularInt &circ){
    num &= circ.num;
    fix();
    return *this;
}     
CircularInt& CircularInt :: operator|= (const CircularInt &circ){
    num |= circ.num;
    fix();
    return *this;
}
CircularInt& CircularInt :: operator<<= (const CircularInt &circ){
    num <<= circ.num;
    fix();
    return *this;
}
CircularInt& CircularInt :: operator>>= (const CircularInt &circ){
    num >>= circ.num;
    fix();
    return *this;
}
CircularInt CircularInt :: operator/ (const int n) {
    int i;
    for(i = first; i < last; i++){
        long l = i*n;
        int ans = fix(l);
        if(ans == num){
            CircularInt tmp(*this);
            tmp.num = i;
            return tmp;
        }
    }
    throw string("There is no Integer x in the range such that x*"+to_string(n) + "="+to_string(num));
}
CircularInt CircularInt :: operator% (const int n) const{
    CircularInt tmp(*this);
    tmp.num %= n;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt :: operator^ (const int n) const{
    CircularInt tmp(*this);
    tmp.num ^= n;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt :: operator& (const int n) const{
    CircularInt tmp(*this);
    tmp.num &= n;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt :: operator| (const int n) const{
    CircularInt tmp(*this);
    tmp.num |= n;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt :: operator<< (const int n) const{
    CircularInt tmp(*this);
    tmp.num <<= n;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt :: operator>>(const int n) const{
    CircularInt tmp(*this);
    tmp.num >>= n;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt :: operator/ (const CircularInt &circ){
    int i;
    for(i = first ;i < last; i++){
        int l = i * circ.num;
        int ans = fix(l);
        if(ans == num){
            CircularInt tmp(*this);
            tmp.num = i;
            return tmp;
        }
    }
    throw string("There is no Integer x in the range such that x*"+to_string(circ.num) + "="+to_string(num));
}
CircularInt CircularInt :: operator% (const CircularInt &circ) const{
    CircularInt tmp(*this);
    tmp.num %= circ.num;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt :: operator^ (const CircularInt &circ) const{
    CircularInt tmp(*this);
    tmp.num ^= circ.num;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt :: operator& (const CircularInt &circ) const{
    CircularInt tmp(*this);
    tmp.num &= circ.num;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt :: operator| (const CircularInt &circ) const{
    CircularInt tmp(*this);
    tmp.num |= circ.num;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt :: operator<< (const CircularInt &circ) const{
    CircularInt tmp(*this);
    tmp.num <<= circ.num;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt :: operator>> (const CircularInt &circ) const{
    CircularInt tmp(*this);
    tmp.num >>= circ.num;
    tmp.fix();
    return tmp;
}
CircularInt operator/ (int n, CircularInt &circ){
    int i;
    for(i = circ.first; i < circ.last; i++){
        long l = i * circ.num;
        int ans = circ.fix(l);
        if(ans == n){
            CircularInt tmp(circ);
            tmp.num = i;
            return tmp;
        }
    }
    throw string("There is no Integer x in the range such that x*"+to_string(circ.num) + "="+to_string(n));
}
void CircularInt :: add(int x){
    num += x;
    fix();
}
void CircularInt :: minus(int x){
    num -= x;
    fix();
}
void CircularInt :: fix(){
    if(num >= first && num <= last)
        return;
    
    while(num > last)
        num -= range;
    while(num < first)
        num += range;
}
int CircularInt :: fix(int n){
    if(n >= first && n <= last)
        return n;
    
    while(n > last )
        n -= range;
    while(n < first)
        n += range;
    
    return n;
}
