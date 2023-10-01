#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the Width of Square: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << n - j + 1 << " ";
    }
    cout << endl;
  }

  cout << "\n Pattern With While Loop \n";

  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << n - j + 1 << " ";
      ++j;
    }
    cout << endl;
    ++i;
  }
}
