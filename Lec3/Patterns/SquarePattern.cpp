#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the Width of Square: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}