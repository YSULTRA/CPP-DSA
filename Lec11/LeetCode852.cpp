class Solution
{
public:
  int peakIndexInMountainArray(vector<int> &arr)
  {
    int start = 0;
    int end = arr.size() - 1;
    int middle = start + (end - start) / 2;

    while (start <= end)
    {

      if (arr[middle] > arr[middle + 1] && arr[middle] > arr[middle - 1])
      {
        return middle;
      }
      else if (arr[middle] < arr[middle - 1])
      {
        end = middle;
      }
      else if (arr[middle] < arr[middle + 1])
      {
        start = middle + 1;
      }
      middle = start + (end - start) / 2;
    }
    return -1;
  }
};