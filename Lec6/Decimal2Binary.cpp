#include <iostream>
using namespace std;
#include <math.h>

int main()
{
  int n;
  cout << "Enter The Decimal Number Here:";
  cin >> n;
  /*
  5=101
  10=1010
  1=001
  &=001*/
  int ans = 0, i = 0;
  while (n != 0)
  {
    int bit = n & 1;
    ans = (bit * pow(10, i)) + ans;
    n = n >> 1;
    i++;
  }
  cout << "The Ans: " << ans << endl;
}