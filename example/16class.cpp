#include <iostream>  
using namespace std;

class Rectangle
{
  private:
  //protected:
    double width, height;
  public:
    double area() { return width * height; }
    void set(double w, double h) { width = w; height = h; }
    friend class Ruler;
};

class Ruler
{
  public:
    double getWidth(const Rectangle &rect) { return rect.width; }
    double getHeight(Rectangle rect) { return rect.height; }
};

int main() {
  Rectangle square;
  Ruler rul;

  //quiz - co sie skompiluje?
  //cout << square.width << endl;
  //cout << square.area() << endl;
  cout << rul.getWidth(square) << endl;
  cout << rul.getHeight(square) << endl;
  return 0;
}
