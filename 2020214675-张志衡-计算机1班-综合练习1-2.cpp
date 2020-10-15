#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= b && a <= c){
        cout << "Min is " << a;
    }else{
        if(b <= a && b <= c){
            cout << "Min is " << b;
        }else{
            if(c <= a && c <= b){
                cout << "Min is " << c;
            }
        }
    }
    return 0;
}

/*
1 2 3
Min is 1
Process returned 0 (0x0)   execution time : 2.168 s
Press any key to continue.
*/
