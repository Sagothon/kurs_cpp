#include <iostream>
using namespace std;

void printArray(int[], int);

int main()
{
  int table[4] = {0, 1, 2, 3};
  //int table[123];
  printArray(table, 123);
  
  //table[123] = 5;
  //table[9999999] = 5;

  return 0;
}

void printArray ( int array[], int len )
{
  for (int i = -5; i < len; ++i)
  //for (int i = 0; i < len; ++i)
    cout << "array[" << i << "] = " << array[i] << endl;
}