#include <iostream>
using namespace std;

class Car
{
public:
  string brand;
  string model;
  int year;

  Car(string x, string y, int z) // constructors
  {
    brand = x;
    model = y;
    year = z;
    cout << "Object Created" << endl;
  }
};

int main()
{

  Car *car1 = new Car("Swift", "XLSI", 2005);

  cout << car1->brand << " " << car1->model << " " << car1->year << endl;
  return 0;
}