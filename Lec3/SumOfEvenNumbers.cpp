#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter The Number " << endl;
  cin >> num;

  int sumOfEvens = 0;
  int i = 1;
  while (i <= num)
  {
    if (i % 2 == 0)
    {
      sumOfEvens = sumOfEvens + i;
    }
    i += 1;
  }
  cout << "The Sum Of Even Numbers :" << sumOfEvens << endl;
}