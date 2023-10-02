#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter The Binary Number Here:";
  cin >> n;
  int ans = 0, i = 0;
  while (n != 0)
  {
    int last_bit = n % 10;
    if (last_bit == 1)
    {
      ans += last_bit * pow(2, i);
    }
    n = n / 10;
    i++;
  }
  cout << "The Binary Ans :" << ans;
}