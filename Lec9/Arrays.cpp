#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
  int max = INT_MIN;
  for (int i = 0; i < size; ++i)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}
int getMin(int arr[], int size)
{
  int min = INT_MAX;
  for (int i = 0; i < size; ++i)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}
int main()
{
  int n;
  cout << "Enter a Size of Array : ";
  cin >> n;

  int arr[100];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "The Max Element of Array is :" << getMax(arr, n) << endl;
  cout << "The Min Element of Array is :" << getMin(arr, n) << endl;
}