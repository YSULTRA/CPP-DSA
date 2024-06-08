#include <iostream>
#include <vector>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> nums = {2, 2, 2, 1, 2, 2, 1, 2, 2, 2};
  int k = 2;
  int n = nums.size();
  int left = 0;
  int oddcount = 0;
  int score = 0;
  for (int i = 0; i < n; i++)
  {
    if (nums[i] % 2)
    {
      oddcount++;
    }

    while (oddcount > k)
    {
      if (nums[left] % 2)
      {
        oddcount--;
        ;
      }
      left++;
    }
    score += (i - left + 1);
  }
  cout << score << endl;

  return 0;
}