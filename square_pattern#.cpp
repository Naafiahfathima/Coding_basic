/*
Print a pattern like square with # character:
--------------------------------------------------
Input the number of characters for a side: 4
# # # #
# # # #
# # # #
# # # #
*/

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the value for n:";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "#";
    }
    cout << "\n";
  }
}