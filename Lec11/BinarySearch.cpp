#include <iostream>
using namespace std;

int BinarySearchAlgorithm(int array[], int size, int Key) // Binary Search Function
{
  int start = 0;                          // intialize start with 0 index
  int end = size - 1;                     // end will be one less then size of array
  int middle = start + (end - start) / 2; // calcualting initial middle of the array

  while (start <= end)
  {
    if (array[middle] == Key) // Key found in array
    {
      return middle; // return the index of key
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
  return -1; // if not found return -1
}

int main()
{
  int testArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int index1 = BinarySearchAlgorithm(testArray, 10, 2);
  cout << "The Index of 2 is :" << index1 << endl;
  int index2 = BinarySearchAlgorithm(testArray, 10, 8);
  cout << "The Index of 8 is :" << index2 << endl;
  int index3 = BinarySearchAlgorithm(testArray, 10, 90);
  cout << "The Index of 90 is :" << index3 << endl;
}