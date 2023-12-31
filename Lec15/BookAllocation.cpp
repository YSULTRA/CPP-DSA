#include <iostream>
#include <vector>
using namespace std;
// Check wether middle is the possible solution

bool isPossible(vector<int> &arr, int n, int m, int middle)
{
  int studentCount = 1; // intially students is one
  int sumofPages = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] + sumofPages <= middle) // if sum of pages and new book is less then middle
    {
      sumofPages += arr[i];
    }
    else
    {
      studentCount++; // increment count of students
      if (studentCount > m || arr[i] > middle)
      {
        return false;
      }
      sumofPages = arr[i];
    }
  }
  return true;
}

int findPages(vector<int> &arr, int n, int m)
{
  int start = 0;
  int sumofPages = 0;
  for (int i = 0; i < n; i++)
  {
    sumofPages += arr[i];
  }
  int end = sumofPages;
  int middle = start + (end - start) / 2;
  int ans = -1;
  while (start <= end)
  {
    if (isPossible(arr, n, m, middle))
    {
      ans = middle;
      end = middle - 1;
    }
    else
    {
      start = middle + 1;
    }
    middle = start + (end - start) / 2;
  }
  return ans;
}

int main()
{
  vector<int> arr = {25, 46, 28, 49, 24};
  cout << findPages(arr, 5, 4) << endl;
  cout << findPages(arr, 5, 4);
}