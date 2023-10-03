#include <iostream>
using namespace std;

int AP(int n)
{
  return ((3 * n) + 7);
}

int main()
{
  int n;
  cout << "Enter the Value of N :";
  cin >> n;
  cout << "Your Ans is : " << AP(n) << endl;
}