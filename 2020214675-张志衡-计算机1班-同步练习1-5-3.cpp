#include <iostream>

using namespace std;

int main() {
  double a, b, c, d, m, m1, m2, n, n1, n2;
  cin >> a >> b >> c >> d;

  m1 = a > b ? a : b;
  m2 = c > d ? c : d;
  m = m1 > m2 ? m1 : m2;

  n1 = a < b ? a : b;
  n2 = c < d ? c : d;
  n = n1 < n2 ? n1 : n2;

  cout << "和为：" << a + b + c + d << "\n平均值为："
    << (a + b + c + d) / 4 << "\n乘积为：" << a * b * c * d
    << "\n最大值为：" << m << "\n最小值为：" << n;
  return 0;
}
/*
1 2 3 4
和为：10
平均值为：2.5
乘积为：24
最大值为：4
最小值为：1
[Process completed - press Enter]
*/