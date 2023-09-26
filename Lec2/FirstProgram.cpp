#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World";
  cout << "\n";

  int a = 5;
  char ch = 'y';
  bool isvalid = false;

  cout << a << " " << ch << " " << isvalid << endl;
  cout << ch << endl;
  cout << isvalid << endl;
  /*
  sizeof() gives the space in bits for datatype
  int 4
  char 1
  float 4
  bool 1
  double 8*/
  cout << sizeof(bool);

  int x = 'x';
  cout << x << endl; // x will print the ASCII Value of x

  char abc = 85;
  cout << abc << endl; // abc will store the character of ASCII Value 85
}