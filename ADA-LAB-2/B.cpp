#include <iostream>
#include <vector>
using namespace std;

const int modulo = 1e9 + 7;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int noOfQueries;
  cin >> noOfQueries;

  vector<int> machineOutputs;
  vector<int> dp(1024, 0);
  dp[0] = 1;

  for (int query = 0; query < noOfQueries; ++query)
  {
    int M, x;
    cin >> M >> x;

    if (M == 1)
    {
      machineOutputs.push_back(x);
    }
    else if (M == 2)
    {
      for (int i : machineOutputs)
      {
        for (int j = dp.size() - 1; j >= 0; --j)
        {
          if (dp[j] > 0)
          {
            dp[j | i] += dp[j];
            if (dp[j | i] >= modulo)
              dp[j | i] -= modulo;
          }
        }
      }
      cout << dp[x] << endl;
    }
  }

  return 0;
}
