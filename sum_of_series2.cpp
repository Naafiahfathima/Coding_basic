// Calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
#include <iostream>
using namespace std;
int main()
{
  int n, sum = 0;
  cout << "Enter the number of Terms: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    sum += i * i;
    cout << i << "*" << i << " = " << i * i << "\n";
  }
  cout << "The sum of the above series is :" << sum;
}