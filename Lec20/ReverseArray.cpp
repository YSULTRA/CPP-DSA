#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &vector, int m)
{
  int start = m + 1;
  int end = vector.size() - 1;

  while (start <= end)
  {
    swap(vector[start], vector[end]);
    start++;
    end--;
  }
}

void printArray(vector<int> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}

int main()
{
  vector<int> v = {10, 4, 5, 2, 3, 6, 1, 3, 6};
  int m = 3;
  printArray(v);
  cout << endl;
  reverseArray(v, m);
  printArray(v);
}