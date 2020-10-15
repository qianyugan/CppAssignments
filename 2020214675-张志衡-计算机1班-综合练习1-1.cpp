#include <iostream>

using namespace std;

int main()
{
    double x,y;
    cin >> x >> y;
    if (x <= 2 && x >= -2 && y <= 2 && y >= -2){
        cout << "true";
    }else{
        cout << "false";
    }
    return 0;
}

/*
1 2
true
Process returned 0 (0x0)   execution time : 3.401 s
Press any key to continue.
*/
