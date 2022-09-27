#include <iostream>
using namespace std;
int main()
{
  int n, t1, t2;
  cout << "Enter the number of terms:";
  cin >> n;
  t1 = 0;
  t2 = 1;
  cout << t1 << " " << t2 << " ";
  for (int i = 1; i <= n - 2; i++)
  {
    int next = t1 + t2;
    cout << next << " ";
    t1 = t2;
    t2 = next;
  }
}