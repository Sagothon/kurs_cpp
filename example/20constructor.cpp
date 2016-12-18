#include <iostream>
using namespace std;

class Rectangle{
  public:
		
		Rectangle()
		{
			width = 0;
			height = 0;
			cout<<"Calling c-tor without parameters"<<endl;
		}
		
		Rectangle(double w, double h)
			: height(h), width(w)
		{
			cout<<"Calling c-tor with parameters"<<endl;
		}

		Rectangle(double h)
			: width(0.0)
		{
			height=h;
			cout<<"Calling c-tor with one parameter"<<endl;
		}
		
		Rectangle(const Rectangle& c)
		{
			width = c.width;
			height = c.height;
			cout<<"Calling copy c-tor"<<endl;
		}
		
		Rectangle& operator=(const Rectangle& c)
		{
			this->width = c.width;
			this->height = c.height;
			cout<<"Calling copy operator"<<endl;
		}
	
	private:
		double width;
		double height;
};

Rectangle function(Rectangle c)
{
  cout<<"Calling function"<<endl;
	return c;
}

int main() {
	//compile with flag -Wall in gcc
	Rectangle r1(1,2);
	Rectangle r2;
	Rectangle r3(3);

	cout<<"------------------"<<endl;
	function(r3);

	cout<<"------------------"<<endl;
	Rectangle r4 = r3;
	Rectangle r5(r3);

	cout<<"------------------"<<endl;
	Rectangle r6;
	r6 = r3;
	
  return 0;
}

