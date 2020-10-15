#include <iostream>

using namespace std;

int main() {
  double f, c;
  cout << "输入摄氏温度C：";
  cin >> c;
  f = 9.0 / 5 * c + 32;
  cout << "摄氏温度 C=" << c << "\n" << "华氏温度 F=" << f;
  return 0;
}

/*

输入摄氏温度C：26.5
摄氏温度 C=26.5
华氏温度 F=79.7
[Process completed - press Enter]

*/