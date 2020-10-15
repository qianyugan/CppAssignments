#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 123;
    int ra = a;
    int *pa = &a;
    cout << setw(5) << dec << a << setw(5) << oct << ra << setw(5) << hex << *pa << endl;
    return 0;
}
/*
  123  173   7b

Process returned 0 (0x0)   execution time : 0.016 s
Press any key to continue.

*/
