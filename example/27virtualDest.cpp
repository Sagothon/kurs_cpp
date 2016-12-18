#include <iostream>
//#include <iostream>
using namespace std;

class Pojemnik{
	public:
	 /*virtual*/  void napelnij(int){cout<<"napelniam Pojemnik, ale jak?"<<endl;}
	 /*virtual*/ ~Pojemnik(){ cout << "Dest poj" << endl; }
};

class Wiadro: public Pojemnik{
	public:
		Wiadro(){x = new int; cout << "Const wiadro" << endl;}
		~Wiadro()  {delete x; cout << "Dest wiadro" << endl;}
		void napelnij(int ile_litrow)
		{
			*x = ile_litrow;
			cout<<"napelniam Wiadro"<<endl;
		}
		int* x;
};

int main()
{
	Pojemnik* a= new Wiadro();
	a->napelnij(5);
	
	delete a;
	cout<<sizeof(Pojemnik)<<endl;
	return 0;
}