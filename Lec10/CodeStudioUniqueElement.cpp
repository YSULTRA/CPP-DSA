int findUnique(int *arr, int size)
{
  // Write your code here
  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    ans = ans ^ arr[i];
  }
  return ans;
}
/*
Xor of same elements give zero
so doing xor of array will give unique element as it is not cancelled term*/