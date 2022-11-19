/*C++ to find the number and sum of all integer between 100 and 200 which are divisible by 9.

Sample Output:
108 117 126 135 144 153 162 171 180 189 198
The sum : 1683*/
#include <iostream>
using namespace std;
int main()
{
  int sum = 0;
  for (int i = 100; i < 200; i++)
  {
    if (i % 9 == 0)
    {
      sum = sum + i;
      cout << i << "\t";
    }
  }
  cout << "\nSum : " << sum;
}