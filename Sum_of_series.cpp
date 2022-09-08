// Sum of the series: 1+1/2^2+1/3^3+......1/n^n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double n, sum = 0, a;
  cout << "Enter the value of n:";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    a = 1 / pow(i, i);
    cout << "1/" << i << "^" << i << "=" << a << "\n";
  }
  for (int i = 1; i <= n; i++)
  {
    sum = sum + (1 / pow(i, i));
  }
  cout << "The sum of the series:" << sum;

  return 0;
}