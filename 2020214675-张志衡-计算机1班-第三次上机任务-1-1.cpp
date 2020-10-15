#include <iostream>

using namespace std;

int main()
{
    int a, s = 0;
    cin >> a;
    while (a) {
    s = s * 10 + a % 10;
    a = a / 10;
  }
  cout << s;
    return 0;
}
/*
12345
54321
Process returned 0 (0x0)   execution time : 2.636 s
Press any key to continue.
*/
