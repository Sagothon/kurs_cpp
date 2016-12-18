#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>
#include <regex>

using namespace std;

struct book {

	int index;
	string author;
	string title;
	book *next;  // nexty i prevy do zrobienia
	book *prev;

};

void wypisz (book &b) {
	cout<<b.index<<endl;
	cout<<b.author<<endl;
	cout<<b.title<<endl<<endl;

}

void wypisz_serie (book &b) {
	
	book *ptr = &b;
		while(ptr->prev != nullptr) {
			ptr = ptr->prev;
		}
		
		while (ptr != nullptr)
			{
				cout<<ptr->author<<endl;
				cout<<ptr->title<<endl<<endl;

				ptr = ptr->next;
			}
}

void wypisz_wsio(int ilosc, vector<book> &b) {
	for (int i = 1; i<=ilosc; i++) {
		wypisz(b[i]);
	}
}

book szukaj (string &str, vector<book> &books) {

	for (int i = 1; i < books.size(); i++) {

	size_t found = books[i].author.find(str);
	size_t found2 = books[i].title.find(str);
	if (found != string::npos || found2 != string::npos) {
		return books[i];
		break;
		}
	}
}


int main() {
	
	ifstream stream;
	stream.open("ksiazki.txt");

	const short rozmiar = 50;
	char ciag_znak[ rozmiar ];
	char lancuch[ rozmiar ];

	int ilosc;
	vector <book> books;
	
	int book_nr = 0;
	int line = 0;
	int i = 0;
	int index = 0;
	

	while(stream.getline(ciag_znak, rozmiar, '\t')) {

		if (line == 0) {

			string str(ciag_znak);

			ilosc = stoi(str);
			books.resize(ilosc + 1);
			//cout<<ilosc<<endl;
			//cout<<ilosc<<endl;
			//books.reserve(amount_of_books);
			
		}
		
		if (line%5 == 1) {

			//book b;
			//books.push_back(b);
			string str(ciag_znak);
			index = stoi(str);

			books[index].index = index;
		}
		else if (line%5 == 2) {
			books[index].author = ciag_znak;
		}
		else if (line%5 == 3) {
			books[index].title = ciag_znak;
		}
		else if (line%5 == 4) {
			string str(ciag_znak);
			if (stoi(str) == 0) {
				books[index].next = nullptr;
			} else {
				books[index].next = &books[stoi(str)];
			}
		}
		else if (line%5 == 0) {
			string str(ciag_znak);
			if (stoi(str) == 0) {
				books[index].prev = nullptr;
			} else {
			books[index].prev = &books[stoi(str)];
			book_nr += 1;
			}
		}
		
		line += 1;
		i++;
	}
	

	//wypisz(books[1]);
	//wypisz_wsio(ilosc,books);
	//wypisz_serie(books[1]);
	//cout<<books[3].next;

	string input = "Tolkien";
	wypisz_serie(szukaj(input, books));

	system("pause");
	return 0;
};