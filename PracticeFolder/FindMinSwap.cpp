#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int swap = 0;
  int x = 0;
  vector<int> nums = {7, 16, 14, 17, 6, 9, 5, 3, 18};
  vector<int> array = nums;
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << " ";
  }
  sort(nums.begin(), nums.end());
  cout << endl;
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << " ";
  }
  for (int i = 0; i < nums.size(); i++)
  {
    if (array[i] != nums[i])
    {
      swap++;
      int temp = array[i];
      array[i] = array[distance(nums.begin(), find(nums.begin(), nums.end(), array[i]))];
      array[distance(nums.begin(), find(nums.begin(), nums.end(), temp))] = temp;
    }
  }
  cout << endl
       << "No of Swaps " << swap << endl;
}