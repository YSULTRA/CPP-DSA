#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the Width of Square: ";
  cin >> n;
  int count = 1;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }
}
