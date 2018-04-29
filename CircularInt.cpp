#include "CircularInt.hpp"

CircularInt::CircularInt(int x, int y) : first(x), last(y) {
    if(x>y){
        first = y;
        last = x;
    }
    num = first;
    range = last - first + 1;
}

void CircularInt::fix(){
    if(num >= first && num <= last)
        return;
    
    while(num > last )
        num -= range;
    while(num < first )
        num += range;
}

int CircularInt::fix(int n){
    if(n >= first && n <= last)
        return n;
    
    while(n > last )
        n -= range;
    while(n < first )
        n += range;
    
    return n;
}

CircularInt& CircularInt::operator= (int n){
    num = n;
    fix();
    return *this;
}

CircularInt::CircularInt(const CircularInt& clone){
    first = clone.first;
    last = clone.last;
    num = clone.num;
    range = clone.range;
}


CircularInt CircularInt::operator+ (const CircularInt& ci) const{
   CircularInt tmp(*this);
   tmp.num += ci.num;
   tmp.fix();
   return tmp;
}

CircularInt CircularInt::operator- (const CircularInt& ci) const{ // ci - ci
    CircularInt tmp(*this);
    tmp.num -= ci.num;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator* (const CircularInt& ci) const{ // ci * ci
    CircularInt tmp(*this);
    tmp.num *= ci.num;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator/ (const CircularInt& ci) { // ci / ci
    int i;
    for(i = first ;i < last; i++){
        // long l = i * ci.num;
        int l = i * ci.num;
        int res = fix(l);
        if(res == num){
            CircularInt tmp(*this);
            tmp.num = i;
            return tmp;
        }
    }
    throw string("There is no Integer x in the range such that x*"+to_string(ci.num) + "="+to_string(num));
}

CircularInt CircularInt::operator% (const CircularInt& ci) const{ // ci % ci
    CircularInt tmp(*this);
    tmp.num %= ci.num;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator^ (const CircularInt& ci) const{
    CircularInt tmp(*this);
    tmp.num ^= ci.num;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator& (const CircularInt& ci) const{ // ci & ci
    CircularInt tmp(*this);
    tmp.num &= ci.num;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator| (const CircularInt& ci) const{ // ci | ci
    CircularInt tmp(*this);
    tmp.num |= ci.num;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator<< (const int n) const{ // ci << int
    CircularInt tmp(*this);
    tmp.num <<= n;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt::operator<< (const CircularInt& ci) const{ // ci << ci
    CircularInt tmp(*this);
    tmp.num <<= ci.num;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator>> (const CircularInt& ci) const{ // ci >> ci
    CircularInt tmp(*this);
    tmp.num >>= ci.num;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt::operator>>(const int n) const{ // ci >> int
    CircularInt tmp(*this);
    tmp.num >>= n;
    tmp.fix();
    return tmp;
}


CircularInt CircularInt::operator* (int n) const{
    CircularInt tmp(*this);
    tmp.num *= n;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator/ (const int n) {
    int i;
    for(i = first; i<last; i++){
        long l = i*n;
        int res = fix(l);
        if(res == num){
            CircularInt tmp(*this);
            tmp.num = i;
            return tmp;
        }
    }
    throw string("There is no Integer x in the range such that x*"+to_string(n) + "="+to_string(num));
}

CircularInt CircularInt::operator% (const int n) const{
    CircularInt tmp(*this);
    tmp.num %= n;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator^ (const int n) const{ // ci ^ int
    CircularInt tmp(*this);
    tmp.num ^= n;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator& (const int n) const{ // ci & int
    CircularInt tmp(*this);
    tmp.num &= n;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator| (const int n) const{ // ci | int
    CircularInt tmp(*this);
    tmp.num |= n;
    tmp.fix();
    return tmp;
}

        
CircularInt& CircularInt::operator+= (const CircularInt& ci){ // ci += ci
    num += ci.num;
    fix();
    return *this;
}

CircularInt& CircularInt::operator-= (const CircularInt& ci){ // ci -= ci
    num -= ci.num;
    fix();
    return *this;
}

CircularInt& CircularInt::operator*= (const CircularInt& ci){ // ci *= ci
    num *= ci.num;
    fix();
    return *this;
}

CircularInt& CircularInt::operator/= (const CircularInt& ci){ // ci /= ci
    *this = *this / ci.num;
    return *this;
}

CircularInt& CircularInt::operator%= (const CircularInt& ci){ // ci %= ci
    num %= ci.num;
    fix();
    return *this;
    
}

CircularInt& CircularInt::operator^= (const CircularInt& ci){ // ci ^= ci
    num ^= ci.num;
    fix();
    return *this;
}

CircularInt& CircularInt::operator&= (const CircularInt& ci){ // ci &= ci
    num &= ci.num;
    fix();
    return *this;
}
        
CircularInt& CircularInt::operator|= (const CircularInt& ci){ // ci |= ci
    num |= ci.num;
    fix();
    return *this;
}

CircularInt& CircularInt::operator<<= (const CircularInt& ci){ // ci <<= ci
    num <<= ci.num;
    fix();
    return *this;
}

CircularInt& CircularInt::operator>>= (const CircularInt& ci){ // ci >>= ci
    num >>= ci.num;
    fix();
    return *this;
}

CircularInt& CircularInt::operator+= (const int n){
    num += n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator-= (const int n){
    num -= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator*= (const int n){
    num *= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator/= (const int n){
    *this = *this / n;
    return *this;
}

CircularInt& CircularInt::operator%= (const int n){
    num %= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator^= (const int n){ // ci ^= int
    num ^= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator&= (const int n){ // ci &= int
    num &= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator|= (const int n){ // ci|= int
    num |= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator<<= (const int n){ // ci <<= int
    num <<= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator>>= (const int n){ // ci >>= int
    num >>= n;
    fix();
    return *this;
}

/* prefix -- -> --(a) */
CircularInt& CircularInt::operator-- (){
    (this->num)--;
    fix();
    return *this;
}
CircularInt operator+ (int n, const CircularInt& ci){
    return ci+n;
}


const CircularInt CircularInt::operator++ (int flag_for_postfix_increment){
    CircularInt tmp(*this); 
    ++(this->num);
    this->fix();
    return tmp; //returns the copy
    
}
CircularInt& CircularInt::operator++ (){
    (this->num)++;
    fix();
    return *this;
}


const CircularInt CircularInt::operator-- (int flag_for_postfix_discrement){
    CircularInt tmp(*this); 
    --(this->num);
    this->fix();
    return tmp; //returns the copy
    
}

CircularInt CircularInt::operator+ (int n) const{
    CircularInt tmp(*this);
    tmp.num += n;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator- (int n) const{
    CircularInt tmp(*this);
    tmp.num -= n;
    tmp.fix();
    return tmp;
}

const CircularInt CircularInt::operator- () const{
    CircularInt tmp(*this);
    tmp.num = tmp.last - tmp.num;
    tmp.fix();
    return tmp;
}
CircularInt operator- (int n, const CircularInt& ci){
    CircularInt tmp(ci);
    tmp.num = n - tmp.num;
    tmp.fix();
    return tmp;
}

const CircularInt CircularInt::operator~ () const{ // ~ci
    CircularInt tmp(*this);
    tmp.num = ~tmp.num;
    tmp.fix();
    return tmp;
}





CircularInt operator* (int n, const CircularInt& ci){ // int * hour
    return ci*n;
} 


CircularInt operator/ (int n, CircularInt& ci){ // int / hour
    int i;
    for(i = ci.first; i<ci.last; i++){
        long l = i*ci.num;
        int res = ci.fix(l);
        if(res == n){
            CircularInt tmp(ci);
            tmp.num = i;
            return tmp;
        }
    }
    throw string("There is no Integer x in the range such that x*"+to_string(ci.num) + "="+to_string(n));
} 


CircularInt operator% (int n, const CircularInt& ci){ // int % ci
    CircularInt tmp(ci);
    tmp.num = n % tmp.num;
    tmp.fix();
    return tmp;
} 

CircularInt operator^ (int n, const CircularInt& ci){ // int ^ ci
    CircularInt tmp(ci);
    tmp.num = n ^ tmp.num;
    tmp.fix();
    return tmp;
}

CircularInt operator& (int n, const CircularInt& ci){ // int & ci
    CircularInt tmp(ci);
    tmp.num = n & tmp.num;
    tmp.fix();
    return tmp;
}

CircularInt operator| (int n, const CircularInt& ci){ // int | ci
    CircularInt tmp(ci);
    tmp.num = n | tmp.num;
    tmp.fix();
    return tmp;
}

CircularInt operator<< (int n, const CircularInt& ci){ // int << ci
    CircularInt tmp(ci);
    tmp.num = n << tmp.num;
    tmp.fix();
    return tmp;
}

CircularInt operator>> (int n, const CircularInt& ci){ // int >> ci
    CircularInt tmp(ci);
    tmp.num = n >> tmp.num;
    tmp.fix();
    return tmp;
}
        
const bool CircularInt::operator==(const CircularInt& ci) const{
    return num == ci.num;
}

const bool CircularInt::operator!=(const CircularInt& ci) const{
    return num != ci.num;
}

const bool CircularInt::operator<(const CircularInt& ci) const{
    return num < ci.num;
}

const bool CircularInt::operator<=(const CircularInt& ci) const{
    return num <= ci.num;
}

const bool CircularInt::operator>(const CircularInt& ci) const{
    return num > ci.num;
}

const bool CircularInt::operator>=(const CircularInt& ci) const{
    return num >= ci.num;
}

const bool CircularInt::operator==(const int n) const{
    return num == n;
}

const bool CircularInt::operator!=(const int n) const{
    return num != n;
}

const bool CircularInt::operator<(const int n) const{
    return num < n;
}

const bool CircularInt::operator<=(const int n) const{
    return num <= n;
}

const bool CircularInt::operator>(const int n) const{
    return num > n;
}

const bool CircularInt::operator>=(const int n) const{
    return num >= n;
}
  
const bool operator==(const int n, const CircularInt& ci) {
    return n == ci.num;
}

const bool operator!=(const int n, const CircularInt& ci) {
    return n != ci.num;
}

const bool operator<(const int n, const CircularInt& ci) {
    return n < ci.num;
}

const bool operator<=(const int n, const CircularInt& ci) {
    return n <= ci.num;
}

const bool operator>(const int n, const CircularInt& ci) {
    return n > ci.num;
}

const bool operator>=(const int n, const CircularInt& ci) {
    return n >= ci.num;
}
        
ostream& operator<< (ostream& os, const CircularInt& ci){
    return os << ci.num;
}

istream& operator>> (istream& is, CircularInt& ci){
     int tmp;
    is >> tmp;
    if(tmp > ci.last || tmp < ci.first)
        throw string("There is no Integer "+to_string(tmp) + " in the range");
	ci.num = tmp;
	return is;
}
