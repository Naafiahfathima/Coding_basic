/*Program in C++ to display the n terms of even natural number and their sum.
Enter a number:5
2       4       6       8       10
Sum of Even Numbers:30
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
    if (i % 2 == 0)
    {
      sum = sum + i;
      cout << i << "\t";
    }
  }
  cout << "\nSum of Even Numbers:" << sum;
}