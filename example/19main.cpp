#include "chest.h"
#include <iostream>

using namespace std;

int main() {
	Item item[3];
	Chest chest[3];
	chest[0].set(&item[1]);
	chest[1].set(&item[2]);
	chest[2].set(&item[0]);

	for(int c = 0; c<3;c++)
	{
		for(int i=0; i<3; i++)
		{
			bool belong = item[i].doIBelong(chest[c]);
			if ( belong )
			{
				cout<<"Item "<<i<<" belongs to chest "<<c<<endl;
				break;
			}
		}
	}

	return 0;
}


