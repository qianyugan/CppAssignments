#include <iostream>

using namespace std;

int main() {
  int ct = 0;
  int a, b;
  while (ct <= 10) {
    a = ct * ct;
    b = ct * ct * ct;
    cout << ct << " * " << ct << " = " << "\t" << a << "\t\t" << ct << " ^ 3"
      << " = " << "\t" << b << "\n";
    ct++;
  }
  return 0;
}

/*
0 * 0 =         0               0 ^ 3 =         0
1 * 1 =         1               1 ^ 3 =         1
2 * 2 =         4               2 ^ 3 =         8
3 * 3 =         9               3 ^ 3 =         27
4 * 4 =         16              4 ^ 3 =         64
5 * 5 =         25              5 ^ 3 =         125
6 * 6 =         36              6 ^ 3 =         216
7 * 7 =         49              7 ^ 3 =         343
8 * 8 =         64              8 ^ 3 =         512
9 * 9 =         81              9 ^ 3 =         729
10 * 10 =       100             10 ^ 3 =        1000

[Process completed - press Enter]
*/