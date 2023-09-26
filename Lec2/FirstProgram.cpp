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
}