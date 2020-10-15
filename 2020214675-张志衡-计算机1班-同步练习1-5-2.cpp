#include <iostream>

using namespace std;

int main()
{
    int x, y, z, f;
    x = y = z = 1;
    f = --x || y-- &&  z++;
    cout << "x=" << x <<endl;
    cout << "y=" << y <<endl;
    cout << "z=" << z <<endl;
    cout << "f=" << f <<endl;
    return 0;
}
/*
x=0
y=0
z=2
f=1

Process returned 0 (0x0)   execution time : 0.031 s
Press any key to continue.
*/
