/*
Find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Enter the no of terms:5
1+11+111+1111+11111
Sum of the series:12345
*/
#include <iostream>
using namespace std;
int main()
{
  int n, sum = 0, t = 1;
  cout << "Enter the no of terms:";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + t;
    cout << t;
    t = t * 10 + 1;
    if (i != n)
    {
      cout << "+";
    }
  }
  cout << "\nSum of the series:" << sum;
}