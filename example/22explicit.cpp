#include <iostream>
using namespace std;

class Square{
  public:
// 		explicit Square(double x)
		explicit Square(double x)
			: a(x)
		{
			cout<<"Calling constructor with parameters for ( " << a << " )"<<endl;
		}

		Square(const Square& c)
		{
			a = c.a;
			cout<<"Calling copy constructor for ( " << a << " )"<<endl;
		}

		~Square()
		{
			cout<<"Calling destructor for ( " << a << " )"<<endl;
		}

		double get()const{return a;}
		
	private:
		double a;
};

void function(Square c)
{
  cout<<"Calling function c.a = " << c.get() <<endl;
}

int main()
{
	//function( 1 );
 	Square s(2);
 	s = 3;


  return 0;
}

