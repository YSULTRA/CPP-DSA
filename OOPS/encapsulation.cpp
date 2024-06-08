#include <iostream>
using namespace std;

class Employee
{

private:
  string name;
  int salary;

public:
  void setSalary(int x)
  {
    salary = x;
  }

  int getSalary()
  {
    return salary;
  }

  void setName(string n)
  {
    name = n;
  }

  string getName()
  {
    return name;
  }
};

int main()
{

  Employee emp1;

  emp1.setName("Yash");
  emp1.setSalary(10000000);

  cout << "Emp Name: " << emp1.getName() << "  Emp Salary: " << emp1.getSalary() << endl;
  return 0;
}