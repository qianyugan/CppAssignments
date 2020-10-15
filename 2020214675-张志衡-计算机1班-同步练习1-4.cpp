#include <iostream>

using namespace std;

int main() {
  int a = 10, b = 20;
  int *p = &a, *q = &b;
  *p = *p ** q;
  int &ra = a;
  ra = a;
  int *&rt = q;
  *rt = 30;
  cout << "a=" << a << "\nb=" << b << "\n*p="
    << *p << "\n*q=" << *q << "\nra=" << ra << "\n*rt=" << *rt << endl;
  return 0;
}

/*
a=200
b=30
*p=200
*q=30
ra=200
*rt=30

[Process completed - press Enter]
*/