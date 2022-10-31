Sum of the series[9 + 99 + 999 + 9999 ...]

#include <iostream>
    using namespace std;
int main()
{
  int n, sum = 0, t = 9;
  cout << "Enter the value of n:";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + t;
    cout << t << " ";
    t = t * 10 + 9;
  }
  cout << "\nSum : " << sum;
}

/*
Enter the value of n:5
9 99 999 9999 99999
Sum : 111105
*/