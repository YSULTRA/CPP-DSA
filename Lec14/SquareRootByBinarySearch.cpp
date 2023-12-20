// Square Root of a number

#include <iostream>
using namespace std;

long long int findSqRoot(int number)
{
  int start = 0;
  int end = number;
  long long int mid = start + (end - start) / 2;
  long long int ans = -1;
  while (start <= end)
  {
    long long int square = mid * mid;
    if (square == number)
    {
      return mid;
    }
    else if (square < number)
    {
      ans = mid;
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

long double morePrecision(int precision, int number, long long int tempsol)
{
  long double factor = 1;
  long double ans = tempsol;

  for (int i = 0; i < precision; i++)
  {
    factor /= 10;
    for (long double j = ans; j * j < number; j += factor)
    {
      ans = j;
    }
  }
  return ans;
}

int main()
{
  cout << "The Answer is :" << morePrecision(8, 600, findSqRoot(99));
  return 0;
}