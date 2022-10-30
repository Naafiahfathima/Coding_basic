/*Enter a number:5
1/1+1/2+1/3+1/4+1/5
Sum of the series: 2.28333*/
#include <iostream>
using namespace std;

int main()
{
  float n, sum = 0;
  cout << "Enter a number:";
  cin >> n;
  for (float i = 1; i <= n; i++)
  {

    sum = sum + (1 / i);
    cout << "1/" << i;
    if (i != n)
    {
      cout << "+";
    }
  }
  cout << "\nSum of the series: " << sum;
}