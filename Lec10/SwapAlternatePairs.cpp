#include <iostream>
using namespace std;

void swapAlternatePairs(int arr[], int size)
{
  for (int i = 0; i < size; i += 2)
  {
    int temp = arr[i + 1];
    arr[i + 1] = arr[i];
    arr[i] = temp;
  }
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int n;
  cout << "Enter The Size of The Array:";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Array Before Swap" << endl;
  printArray(arr, n);
  cout << "Array After Swap" << endl;
  if (n % 2 == 0)
  {
    swapAlternatePairs(arr, n);
  }
  else
  {
    swapAlternatePairs(arr, n - 1);
  }
  printArray(arr, n);
}