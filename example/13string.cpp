#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
  char nameChar[] = "John Smith";
  string nameString = "John Smith";
    
  if (nameChar == "John Smith") 
    cout << "Char works!" << endl;

  if (nameString == "John Smith")
    cout << "String works!" << endl;

  if(!strcmp(nameChar,"John Smith"))
    cout <<  "Char works with strcmp()!" << endl;

  return 0;
}