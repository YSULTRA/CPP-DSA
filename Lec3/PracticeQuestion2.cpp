#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Enter a character: " << endl;
  cin >> ch;
  int ASCII_Value = ch;

  if (ASCII_Value >= 97 && ASCII_Value <= 122)
  {
    cout << ch << " is an LowerCase " << endl;
  }
  else if (ASCII_Value >= 65 && ASCII_Value <= 90)
  {
    cout << ch << " is an UpperCase Alphabet" << endl;
  }
  else if (ASCII_Value >= 48 && ASCII_Value <= 57)
  {
    cout << ch << " is an Numerics From 0-9" << endl;
  }
  else
  {
    cout << ch << " Ascii Value of Ch is " << ASCII_Value << endl;
  }
}