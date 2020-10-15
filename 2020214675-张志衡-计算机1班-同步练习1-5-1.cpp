#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 2;
    bool x, y;
    cout << (a++) + (b++) << endl;
    cout << a % b << endl;
    x = ! a > b;
    y = a -- && b;
    cout << x << endl;
    cout << y << endl;
    return 0;
}
/*
3
2
0
1

Process returned 0 (0x0)   execution time : 0.031 s
Press any key to continue.
*/
