/*Sample Output:
Enter a number: 5
1 3 5 7 9
Sum of the odd numbers : 25*/
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
      cout << i << "\t";
      sum = sum + i;
    }
  }
  cout << "\nSum of the odd numbers: " << sum;
}