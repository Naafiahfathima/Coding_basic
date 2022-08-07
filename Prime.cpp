#include <iostream>
using namespace std;
int main()
{
  int n, p = 0;
  cout << "Input a number to check prime or not:";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      p++;
    }
  }
  if (p == 2)
  {
    cout << "The entered number is a prime number";
  }
  else
  {
    cout << "The entered number is not a prime number";
  }
}