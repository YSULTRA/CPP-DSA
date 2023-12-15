#include <iostream>
using namespace std;

int FirstOccurrence(int array[], int size, int Key) // Binary Search Function
{
  int start = 0;                          // intialize start with 0 index
  int end = size - 1;                     // end will be one less then size of array
  int middle = start + (end - start) / 2; // calcualting initial middle of the array
  int ans = -1;
  while (start <= end)
  {
    if (array[middle] == Key) // Key found in array
    {
      ans = middle;
      end = middle - 1;
    }

    else if (array[middle] > Key) // key is smaller then middle --> search in left segment of Array
    {
      end = array[middle] - 1;
    }
    else if (array[middle] < Key) // key is larger then middle --> search in the right segment of Array
    {
      start = middle + 1;
    }

    middle = start + (end - start) / 2; // modify the middle for new start and end
  }
  return ans; // if not found return -1
}
int LastOccurrence(int array[], int size, int Key) // Binary Search Function
{
  int start = 0;      // intialize start with 0 index
  int end = size - 1; // end will be one less then size of array
  int middle = start + (end - start) / 2;
  int ans = -1; // calcualting initial middle of the array

  while (start <= end)
  {
    if (array[middle] == Key) // Key found in array
    {
      ans = middle;
      start = start + 1;
    }

    else if (array[middle] > Key) // key is smaller then middle --> search in left segment of Array
    {
      end = array[middle] - 1;
    }
    else if (array[middle] < Key) // key is larger then middle --> search in the right segment of Array
    {
      start = middle + 1;
    }

    middle = start + (end - start) / 2; // modify the middle for new start and end
  }
  return ans; // if not found return -1
}

int main()
{
  int arrary[10] = {0, 0, 0, 1, 1, 2, 2, 2, 3, 3};
  cout << FirstOccurrence(arrary, 10, 1) << endl;
  cout << LastOccurrence(arrary, 10, 1);
}