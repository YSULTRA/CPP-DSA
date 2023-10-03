#include <iostream>
using namespace std;

int countSetBits(int n)
{
  int count = 0;
  while (n != 0)
  {
    if (n & 1 == 1)
    {
      count++;
    }
    n = n >> 1;
  }
  return count;
}

int main()
{
  int a, b;
  cout << "Enter Value of A: ";
  cin >> a;
  cout << "Enter Value of B: ";
  cin >> b;
  cout << "Set Bits in A is " << countSetBits(a) << " Set Bits in B is " << countSetBits(b) << " Total Set Bits : " << countSetBits(a) + countSetBits(b) << endl;
}