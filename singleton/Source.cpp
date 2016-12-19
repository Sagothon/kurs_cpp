#include <iostream>
using namespace std;

class global {

	int m;
	static global *instance;

	global() {
		this->m = 10;
	}

public:
	void set(int x) {
		this->m = x;
	}
	int get() {
		return this->m;
	}

	static global *get_instance() {

		if (!instance) {
			instance = new global();
		}
		return instance;
	}
};

global *global::instance = NULL;

/*int main() {

	cout<< global::get_instance()->get()<<endl;
	global::get_instance()->set(12);
	cout<< global::get_instance()->get()<<endl;


	system("pause");
	return 0;
} */