#include <iostream>
#include <deque>
using namespace std;

int main()
{

  deque<int> deque;

  deque.push_front(1);
  deque.push_back(-1);
  deque.push_front(2);
  deque.push_front(3);
  deque.push_back(-2);
  deque.push_back(-3);

  // push_back will insert element from back in the last
  // push_front will insert element at front in the begin

  for (int i = 0; i < deque.size(); i++)
  {
    cout << deque.at(i) << " ";
  }

  // printing front element
  cout << endl;
  cout << "Front Element --> " << deque.front() << endl;

  // printing back element
  cout << "Back Element --> " << deque.back() << endl;

  deque.pop_back();
  deque.pop_back();

  // removed last two elements
  for (int i = 0; i < deque.size(); i++)
  {
    cout << deque.at(i) << " ";
  }
}