#include <iostream>
#include <fstream>
#include <string>
#include "napis.h"
using namespace std;

int main() {

	char str[] = "trolololo";

	napis *n = new napis(str);
	n->wypisz();
	napis *y = new napis(*n);
	
	y->wypisz();

	napis a(str);
	napis b(str);
	a.wypisz();
	//a+b; 
	a = b;
	a.wypisz();
	
	//cout<<y->licz_dlugosc();
	
	
	
	napis z();
	

	ifstream stream;
	stream.open("Source.cpp");
	const short rozmiar = 50;
	char ciag_znak[ rozmiar ];
	char lancuch[ rozmiar ];

	while(stream.getline(ciag_znak, rozmiar)) {

		string str1(ciag_znak);
		string str2(ciag_znak);
		
			

		size_t found = str2.find("//");
		size_t found2 = str2.find("\"//\"");

	if (found != string::npos && found2 == string::npos) {
		char * tablica = new char[ str2.size() + 1 ];
		strcpy( tablica, str2.c_str() );
		napis napi(tablica);
		napi.wypisz();
		delete[]tablica;
			}	
	}
	
	system("pause");
	return 0;
};