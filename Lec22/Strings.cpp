#include <iostream>
#include <string>
using namespace std;

int main()
{
  string greet = "hello hi ";

  cout << greet.size() << endl;
  cout << greet.length() << endl;
  cout << greet + "Yash Singh" << endl;
  cout << greet.substr(0, 6) << endl;
  cout << greet.find("hi") << endl;
  cout << greet.replace(0, 5, "My Name is") << endl;
  cout << greet.append("SuperMan") << endl;
  cout << greet.at(0);
}