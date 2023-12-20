// Problem  Search In Rotated Sorted Array
int getPivot(vector<int> &arr, int n)
{
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;

  while (start < end)
  {
    if (arr[mid] >= arr[0]) // if mid is greater then start then it is in the above subarry
    {
      start = mid + 1; // increment start to move it toward pivot
    }
    else
    {
      end = mid; // mid is already in the pivot subarry, incrementing it will move it to upper subarray so dont do this
    }
    mid = start + (end - start) / 2;
  }
  return start; // or end, as they will be equal at this point
}

int binarySearch(vector<int> &arr, int s, int e, int key)
{
  int start = s;
  int end = e;
  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] > key)
    {
      end = mid - 1;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}
int search(vector<int> &arr, int n, int k)
{
  // Write your code here.
  // Return the position of K in ARR else return -1.
  int pivot = getPivot(arr, n);
  if (k >= arr[pivot] && k <= arr[n - 1]) // if target is greater then equal pivot so it should be in the right subarray
  {
    return binarySearch(arr, pivot, n - 1, k);
  }
  else
  {
    return binarySearch(arr, 0, pivot - 1, k);
  }
}
