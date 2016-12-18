#include <fstream>
#include <string>
#include <iostream>


int main( int, char ** )
{
  {
    std::ofstream f;
    f.open("test.txt", std::ios::out);
    if (f.is_open()) {
      f << 3 << " " << 2 << " " << 1;
    }
    f.close();
  }

  {
    std::ifstream f;
    f.open("test.txt", std::ios::in);
    if (f.is_open()) {
      while ( not f.eof() ) 
      {
        int i = -1;
        f >> i;
        std::cout << i << std::endl;
      }
    }
    f.close();
  }

  return 0;
}
