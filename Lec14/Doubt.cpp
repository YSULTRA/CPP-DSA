#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int main()
{
  std::vector<int> v1 = {1, 1, 2};
  std::set<std::vector<int>> s1;

  // Sort the vector to get unique permutations
  std::sort(v1.begin(), v1.end());

  do
  {
    std::vector<int> v(v1.begin(), v1.end());
    s1.insert(v);
  } while (std::next_permutation(v1.begin(), v1.end()));

  for (const auto &v2 : s1)
  {
    for (const auto &elem : v2)
    {
      std::cout << elem << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
