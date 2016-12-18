#include <iostream>
#include <fstream>
#include <string>
#include "napis.h"
using namespace std;

napis::napis() {
	this->nap = NULL;
}

napis::napis(const char *p) {

		int dlugosc = 0;
		while(true) {
			if (p[dlugosc] == NULL) {
				dlugosc += 1; //miejsce na nulla
				break;
			}
			else
				dlugosc += 1;
		}

		nap = new char[dlugosc];
		
		for (int i = 0; i < dlugosc; i++) {
			nap[i] = p[i];
		}
	}

napis::napis(const napis &n) {

	
	int dlugosc = 0;

	while(true) {
		if (n.nap[dlugosc] == NULL) {
				dlugosc += 1; //miejsce na nulla
				break;
			}
			else
				dlugosc += 1;
		}
			

			this->nap = new char [dlugosc];

			for (int i = 0; i < dlugosc; i++) {
				this->nap[i] = n.nap[i];
		}
		cout<<"kopiowanko"<<endl;
};

napis::~napis() {
	delete[] nap;
};

void napis::operator +(napis &n) {
	
	string str(this->nap);
	string str2(n.nap);
	string str3 = str + str2;
	cout<<str3;
	int dlugosc = str.length();
	char *n_tab = new char[dlugosc];
	strcpy( n_tab, str.c_str() );
	
	delete[] nap;
	this->nap = n_tab;
	
};

void napis::operator = (const napis&a)
{
    int dlugosc = 0;
    while(1)
    {
        if(a.nap[dlugosc]==NULL)
        {
            dlugosc+=1;
            break;
        }
        else
        {
            dlugosc++;
        }
    }

    nap = new char[dlugosc];
    int i = 0;
    for(i; i<dlugosc; i++)
    {
        nap[i]=a.nap[i];
    }
}


void napis::wypisz() {

	for (int i = 0;i<licz_dlugosc(); i++) {
			cout<<nap[i];
		}
		cout<<endl;
	};

int napis:: licz_dlugosc() {

		int counter = 0;

		while(true) {
			if (nap[counter] == NULL) {
				return counter;
				break;
			}
			else
				counter += 1;
		}
	}

