#include <iostream>

using namespace std ;

//algorithm eucliden gcd(a,b) = gcd(a-b,b);

  int gcdFinder(int a , int b) {


  if(a ==0) {
    return b;
  }
  if(b ==0) {
    return a ;
  }
  while(a != b) {
    if(a >b) {
        a = a-b ;
    }
    else {
        b = b-a;
    }
  }
  return a;

  }

int main() {










   int a = 24 ;
   int b = 72 ;

   cout << "Gcd of a and b is :"   <<             gcdFinder(a,b) ;









}