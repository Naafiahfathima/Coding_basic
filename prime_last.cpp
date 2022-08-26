#include <iostream>
using namespace std;
int main()
{
  int n, p;
  cout << "Enter a number:";
  cin >> n;
  for (int i = n - 1; i >= 1; i--)
  {
    p = 0;
    for (int j = 1; j <= i; j++)
    {
      if (i % j == 0)
      {
        p++;
      }
    }
    if (p == 2)
    {
      cout << i << " ";
      break;
    }
  }
}