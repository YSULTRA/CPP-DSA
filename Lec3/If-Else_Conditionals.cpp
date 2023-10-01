#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter The Value For Number:" << endl;
  cin >> number;
  // cout << "Your Output is:" << endl;
  // cout << number;
  int number2;
  cout << "Enter The Value For Number 2:" << endl;
  cin >> number2;

  if (number > number2)
  {
    cout << "Number 1 is Greater Then Number 2" << endl;
  }
  else if (number < number2)
  {
    cout << "Number 2 is Greater Then Number 1" << endl;
  }
  else
  {
    cout << "Both Number Are Equal" << endl;
  }
}