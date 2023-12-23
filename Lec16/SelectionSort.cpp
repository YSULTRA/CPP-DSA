#include <iostream>
#include <vector>

using namespace std;

void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++) // i --> will go till n-1 iteration
  {
    int minIndex = i;                  // assume minIndex --> i intially
    for (int j = i + 1; j < size; j++) // then use inner loop to find the minium element
    {
      if (arr[j] < arr[minIndex]) // found arr[j] smaller then arr[minIndex]
      {
        minIndex = j; // update value here
      }
    }
    swap(arr[minIndex], arr[i]); // swap these
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
  selectionSort(arr, 9);
  cout << endl;
  cout << "Array After Sort:" << endl;
  printArray(arr, 9);
  return 0;
}
/*
Worst Case:O(n^2)
Best Case:O(n^2)
Average Case:O(n^2)

Space Complexity:O(1)

Use Case: for smaller size arrays
*/