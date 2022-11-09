/*
Program in C++ to display the n terms of odd natural number and their sum.
Enter a number:5
1       3       5       7       9
Sum of Even Numbers:25
*/
#include <iostream>
using namespace std;
int main()
{
  int n, sum = 0;
  cout << "Enter a number:";
  cin >> n;
  for (int i = 1; i <= n * 2; i++)
  {
    if (i % 2 != 0)
    {
      sum = sum + i;
      cout << i << "\t";
    }
  }
  cout << "\nSum of Even Numbers:" << sum;
}
