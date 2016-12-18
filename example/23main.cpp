#include "array.h"
#include <iostream>

// Jakie metody klasy wywolaja sie w ktorej linii?


int main( int, char ** ) {
	int initTab[] = {1,2,3};
	Array tab( initTab, sizeof(initTab)/sizeof(initTab[0]) );
    

	for (int i=0; i<tab.getLength()*3; i++) {
		tab[i] *= tab[i];
		std::cout << tab[i] << std::endl;
	}
    
    Array nowa = tab;
    
    if(nowa == tab)
    {
     std::cout << "Dwie klasy Array sa takie same" << std::endl;
    }
    nowa[0] = 8;
    if(nowa != tab)
    {
     std::cout << "juz nie" << std::endl;
     
    }
    
    
    
	
	return 0;
}
