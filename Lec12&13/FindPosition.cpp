#include <iostream>
#include <vector>
using namespace std;

int FindPosition(vector<int> &vec, int Key) // Binary Search Function
{
  int start = 0;                          // initialize start with 0 index
  int end = vec.size() - 1;               // end will be one less than the size of vector
  int middle = start + (end - start) / 2; // calculating initial middle of the vector

  while (start <= end)
  {
    if (vec[middle] == Key)
    {
      return middle; // key found, return the position
    }
    else if (vec[middle] > Key) // key is smaller than middle --> search in the left segment of the vector
    {
      end = middle - 1;
    }
    else // key is larger than middle --> search in the right segment of the vector
    {
      start = middle + 1;
    }

    middle = start + (end - start) / 2; // modify the middle for the new start and end
  }

  // If the key is not found, return the position where it would be inserted
  vec.insert(vec.begin() + start, Key);
  return start;
}

double findMedian(vector<int> &a1, vector<int> &a2)
{
  for (int i = 0; i < a2.size(); i++)
  {
    FindPosition(a1, a2[i]);
  }

  if (a1.size() % 2 == 0)
  {
    return (a1[a1.size() / 2 - 1] + a1[a1.size() / 2]) / 2.0;
  }
  else
  {
    return a1[a1.size() / 2];
  }
}

int main()
{
  vector<int> a1 = {1, 2, 3, 5};
  vector<int> a2 = {4, 6};

  double median = findMedian(a1, a2);

  cout << "Median: " << median << endl;

  return 0;
}
