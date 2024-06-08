#include <iostream>
#include <vector>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> nums = {0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1};

  int k = 3;
  int n = nums.size();
  int maxLength = 0;

  for (int i = 0; i < n; i++)
  {
    int bitsFlipped = 0;
    int length = 0;
    for (int j = i; (j < n && bitsFlipped <= k); j++)
    {
      if (nums[j] == 0)
      {
        bitsFlipped++;
      }
      if (bitsFlipped <= k)
      {
        length++;
      }
    }
    maxLength = max(maxLength, length);
  }

  cout << "Maximum length of subarray with at most " << k << " zeros flipped: " << maxLength << endl;

  return 0;
}
