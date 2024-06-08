#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class MyClass // class
{
public:    // access modifiers
  int num; // attributes
  string name;

  void method() // method function defined inside the class
  {
    cout << "Hello World" << endl;
  }
  void myMethod();
};

void MyClass::myMethod()
{
  cout << "hello from outside class" << endl;
}

int main()
{
  MyClass obj;

  obj.name = "Yash";
  obj.num = 4;

  MyClass obj2;

  obj2.name = "Mahesh";
  obj2.num = 5;

  cout << obj.name << " " << obj.num << endl;
  cout << obj2.name << " " << obj2.num << endl;

  obj.method();
  obj.myMethod();

  return 0;
}