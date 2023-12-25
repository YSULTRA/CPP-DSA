#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // creating a vector
  vector<int> vec1;

  // adding elements in vector
  vec1.push_back(1);
  vec1.push_back(2);
  vec1.push_back(3);
  vec1.push_back(4);

  // at(i) access element at index i
  cout << vec1.at(2) << endl;

  // front() get element at first
  cout << vec1.front() << endl;

  // back() get element at back
  cout << vec1.back() << endl;

  // swap() exchanges the elements between two vectors.
  vector<int> vec2 = {9, 8, 7, 6};
  vec1.swap(vec2);
  cout << vec1.front() << endl;

  // empty() wether vector is empty
  cout << vec1.empty() << endl;

  // insert() insert at index i
  // vec1.insert(iterator,88, 2);
  cout << vec1.at(2) << endl;

  // size return number of elements in vector
  cout << vec1.size() << endl;

  // capacity return capacity of vector
  cout << vec1.capacity() << endl;

  // pop_back remove element
  vec1.pop_back();
  vec1.pop_back();
  for (int i = 0; i < vec1.size(); i++)
  {
    cout << vec1.at(i) << " ";
  }
}