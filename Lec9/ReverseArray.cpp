#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

void reverseArray(int arr[], int size)
{
  int start = 0;
  int end = size - 1;
  int temp;

  while (start <= end)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

int main()
{
  int size;
  cout << "Enter the size of the Array :";
  cin >> size;

  int arr[100]; // max array size assumed 100

  for (int i = 0; i < size; i++)
  {
    cout << "enter element " << i + 1 << ": ";
    cin >> arr[i];
  }

  printArray(arr, size);
  cout << endl;
  reverseArray(arr, size);
  printArray(arr, size);
}