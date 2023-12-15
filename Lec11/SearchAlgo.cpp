#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <array>
using namespace std;

int main()
{
  int array[7] = {1, 2, 3, 4, 5, 6, 7};

  for (int i = 0; i < sizeof(array) / sizeof(int); i++)
  {
    cout << "Element at index " << i << " is: " << array[i] << endl;
  }
}