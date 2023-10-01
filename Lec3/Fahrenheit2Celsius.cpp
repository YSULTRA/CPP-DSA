#include <iostream>
using namespace std;

int main()
{
  int numberOfTerms;
  cout << "Enter The Number Of Terms You Want To Print The Table: ";
  cin >> numberOfTerms;

  cout << "Fahrenheit"
       << "   "
       << "Celsius" << endl;

  for (double i = 1; i <= numberOfTerms; i++) // intial temp 1 in Fahrenheit
  {
    double celsius = ((i - 32) * 5) / 9; // calculating temp in celsius
    cout << i << "            " << celsius << endl;
  }
}