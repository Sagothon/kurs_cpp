#include <iostream>
using namespace std;

int main()
{
  int i=5;
//   int i=0;
  cout<<"While instruction"<<endl;
  while( i>0)
  {
    cout<<i<<endl;
    i--;
  }
  
  cout<<"Do - while instruction"<<endl;
  i=5;
//   i=0;
  do
  {
    cout<<i<<endl;
    i--;
  }while(i>0);
  
 return 0;
}
