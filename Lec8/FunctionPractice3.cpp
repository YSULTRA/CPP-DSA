#include <iostream>
using namespace std;

int nthFibonaaciSequence(int n)
{
  int a = 0;
  int b = 1;

  int next;
  for (int i = 2; i < n; i++)
  {
    next = a + b;
    a = b;
    b = next;
  }
  return b;
}

int main()
{
  int n;
  cout << "Enter Value of N :";
  cin >> n;
  cout << nthFibonaaciSequence(n);
}