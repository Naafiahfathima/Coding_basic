#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int p, count = 0;
  for (int i = 1; i <= 100; i++)
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
      count++;
      cout << i << " ";
    }
  }
  cout << "The total number of prime numbers are:" << count;
}
