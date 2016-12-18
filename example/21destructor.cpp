#include <iostream>
using namespace std;

class Rectangle{
  public:
		
		Rectangle(double w, double h)
			: width(w), height(h)
		{
			cout<<"Calling constructor with parameters for ( " << width << ", " << height << " )"<<endl;
		}

		Rectangle(const Rectangle& c)
		{
			width = c.width;
			height = c.height;
			cout<<"Calling copy constructor for ( " << width << ", " << height << " )"<<endl;
		}

		~Rectangle()
		{
			cout<<"Calling destructor for ( " << width << ", " << height << " )"<<endl;
		}

	private:
		double width;
		double height;
};

void function(Rectangle c)
{
  cout<<"Calling function"<<endl;
}

int main() {
	Rectangle outer(1,2);
	{
		cout<<"{"<<endl;
		Rectangle inner(100,100);
		cout<<"}"<<endl;
	}

	cout<<"------------------"<<endl;
	function( outer );
	cout<<"------------------"<<endl;
  return 0;
}

