#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  vector<vector<int>> ans;

  // Sort the intervals based on the starting times
  sort(intervals.begin(), intervals.end());

  // Start with the first interval
  ans.push_back(intervals[0]);

  for (int i = 1; i < intervals.size(); i++)
  {
    // If the current interval overlaps with the last interval in ans, merge them
    if (intervals[i][0] <= ans.back()[1])
    {
      ans.back()[1] = max(ans.back()[1], intervals[i][1]);
    }
    else
    {
      // Otherwise, add the current interval to the result
      ans.push_back(intervals[i]);
    }
  }

  // Print the merged intervals
  for (const vector<int> &interval : ans)
  {
    cout << "[" << interval[0] << ", " << interval[1] << "] ";
  }

  return 0;
}
