#include <iostream>
using namespace std;

int main()
{
  int a = 24;

  if (a > 20) // condition fulfilled here
  {
    cout << "Love" << endl;
  }
  else if (a == 24) // this will not execute because if condition satisfied
  {
    cout << "Lovely" << endl;
  }
  else
  {
    cout << "User" << endl;
  }
  cout << a; // print the value of a
}