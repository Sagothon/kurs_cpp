#include <iostream>;
using namespace std;


class ford {
public:
	virtual void wypisz() = 0;
};

class focus: public ford {
public:
	void wypisz() {
		cout<<"focus"<<endl;
	}
};

class mondeo: public ford {
public:
	void wypisz() {
		cout<<"mondeo"<<endl;
	}
};


class fabryka {
public:
	ford *produkuj(int x) {
		if (x == 0) return new focus;
		if (x == 1) return new mondeo;
	}
};




int main() {

	fabryka *fab = new fabryka;
	ford *f;
	f = fab->produkuj(1);
	f->wypisz();
	f = fab->produkuj(0);
	f->wypisz();


	system("pause");
	return 0;
}