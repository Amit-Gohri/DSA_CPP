#include <iostream>
#include <typeinfo>
using namespace std;

int main(){

  const  int a = 2;
    // int& ra = a;
//   double *p;
//   p = (double *)0x61ff04;
  const int &rac = 12.98765;
  cout << &rac;

  return 0;
}