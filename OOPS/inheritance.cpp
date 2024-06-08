#include <iostream>
using namespace std;

class Vehicle // base class
{
public:
  string brand = "ford";

  void honk()
  {
    cout << "Honk" << endl;
  }
};

class Car : public Vehicle
{
public:
  string model = "Mustang";
};

int main()
{
  Car myCar;
  myCar.honk();
  cout << myCar.model << endl;
  cout << myCar.brand << endl;

  return 0;
}