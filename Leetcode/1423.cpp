#include <iostream>
#include <vector>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> cardPoints = {9, 7, 7, 9, 7, 7, 9};
  int k = 7;

  int n = cardPoints.size();
  int i = 0;
  int j = n - 1;

  int score = 0;

  while (k--)
  {
    if (cardPoints[i] == cardPoints[j])
    {
      if (cardPoints[j - 1] > cardPoints[i + 1])
      {
        score += cardPoints[j];
        j--;
      }
      else if (cardPoints[j - 1] == cardPoints[i + 1])
      {
        score += cardPoints[i];
        i++;
        j--;
      }
      else
      {
        score += cardPoints[i];
        i++;
      }
    }
    else
    {
      if (cardPoints[i] > cardPoints[j])
      {
        score += cardPoints[i];
        i++;
      }
      else
      {

        score += cardPoints[j];
        j--;
      }
    }
  }

  cout << score << endl;

  return 0;
}