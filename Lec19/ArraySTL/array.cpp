#include <iostream>
#include <array>
using namespace std;

int main()
{
  // creating a basic array
  int basic[3] = {1, 2, 3};

  // creating array using STL
  array<int, 4> a = {1, 2, 3, 4};

  // accessing element stored at index i in O(1)
  for (int i = 0; i < 4; i++)
  {
    cout << "The Element At Index --> " << i << " is --> " << a[i] << endl;
  }

  // using at(i) also used to access the element stored at index i.
  for (int i = 0; i < 4; i++)
  {
    cout << "The Element At Index --> " << i << " is --> " << a.at(i) << endl;
  }

  // front() return the first element of the array
  cout << "The Front Element --> " << a.front() << endl;

  // back() return the last element of the array
  cout << "The Last Element --> " << a.back() << endl;

  // size() tell us the number of elements of the array
  cout << "The Size of Array --> " << a.size() << endl;

  // fill(element) inserts given value at every index
  a.fill(10);
  for (int i = 0; i < 4; i++)
  {
    cout << "The Element At Index --> " << i << " is --> " << a[i] << endl;
  }
}