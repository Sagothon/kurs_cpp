#include <iostream>
using namespace std;

int main()
{
  int color;
  cout << "Color (1: red, 2: blue, 3: green" << endl;
  cin >> color;

  switch (color)
  {
    case 1:
      cout << "You have chosen red." << endl;
      break;
    case 2:
      cout << "You have chosen blue." << endl;
      break;
    case 3:
      cout << "You have chosen green." << endl;
      break;
    default:
      cout << "You have chosen non-color." << endl;
      break;
  }

 return 0;
}
