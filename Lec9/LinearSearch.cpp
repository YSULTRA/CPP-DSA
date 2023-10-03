#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int element)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == element)
    {
      return true;
    }
  }
  return false;
}
/*
0->found
1->not found false*/

int main()
{
  int arr[10] = {-1, 0, 1, 2, 3, 55, -14, 12, 95, 21};
  cout << linearSearch(arr, 10, 9) << endl;
  cout << linearSearch(arr, 10, 2);
}