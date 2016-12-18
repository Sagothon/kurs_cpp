#include <iostream>

using namespace std;

class Figure
{
public:
	Figure(){};
	Figure(double w, double h) : w(w), h(h) {};
	double w,h;
	virtual double area() = 0;
};

class Rect : public Figure
{
public:
	Rect() : Figure(2,3) {};
	double area()
	{
		return w * h;
	}
};

class Tri : public Figure
{
public:
	Tri() : Figure(2,3) {};
	double area()
	{
		return 0.5 * w * h;
	}
};

class Elli : public Figure
{
public:
	Elli() : Figure(2,3) {};
	double area()
	{
		return 3.14 * w * h;
	}
};

int main()
{
	Figure *ptr = nullptr;
	//cout << "Area 1: " << ptr->area() << endl;
	//delete ptr;
	Rect rect;
	Tri tri;
	Elli elli;
	ptr = &rect;
	cout << "Area 2: " << ptr->area() << endl;
	ptr = &tri;
	cout << "Area 3: " << ptr->area() << endl;
	ptr = &elli;
	cout << "Area 4: " << ptr->area() << endl;
	return 0;
}