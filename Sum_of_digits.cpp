#include <iostream>
using namespace std;
int main()
{
  int n, q, r, sum = 0;
  cout << "Enter the value of n:";
  cin >> n;
  while (r != 0)
  {
    q = n / 10;
    r = n % 10;
    sum = sum + r;
    n = q;
  }
  cout << "The sum of the digits: " << sum;
}