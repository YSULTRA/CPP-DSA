#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    bool swapped = false;
    for (int j = 0; j < size - i; j++)
    {
      if (arr[j] > arr[j + 1]) // compare jth index element with j+1 th index
      {
        swap(arr[j], arr[j + 1]); // swap both if j th element is greater then j+1
        swapped = true;
      }
    }
    if (swapped == false)
    { // already sorted
      break;
    }
  }
}
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[] = {7, 8, 2, 1, 6, -1, 0, 5, 3};
  cout << "Array Without Sort:" << endl;
  printArray(arr, 9);
  bubbleSort(arr, 9);
  cout << endl;
  cout << "Array After Sort:" << endl;
  printArray(arr, 9);
  return 0;
}
/*
Worst Case:O(n^2)
Best Case:O(n)
Avergae Case:O(n^2)

Space Complexity:O(1)
*/