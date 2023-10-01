#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter Number Of Terms For Series:";
  cin >> n;

  int a = 0;
  int b = 1;
  cout << a << " " << b << " ";
  for (int i = 1; i <= n; i++)
  {
    int next = a + b;
    cout << next << " ";
    // swap values of variables to get the next term in series.
    a = b;
    b = next;
  }
}