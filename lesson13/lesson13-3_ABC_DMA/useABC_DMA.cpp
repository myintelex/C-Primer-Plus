#include <iostream>
#include <cstring>
#include "abc_dma.h"

const int CLIENTS = 4;

int main(int argc, char const *argv[])
{
	using std::cin;
	using std::cout;
	using std::endl;

	ABC *ptr[CLIENTS];
	char  flags;

	char tempname[40];
	int templevel;
	char templabel[40];
	int temprating;
	char tempcolor[40];
	char tempstyle[40];

	for(int i = 0; i < CLIENTS; i++)
	{
		cout << "Enter clinet`s name: ";
		cin.getline(tempname, 40);
		cout << "Enter client`s level: ";
		cin>>templevel;
		cout << "Enter 1 for label; 2 for color; 3 for style: ";
		while(cin>>flags && (flags != '1' && flags != '2' && flags != '3'))
			cout << "Enter either 1/2/3: ";
		while(cin.get() != '\n')
			continue;
		switch(flags)
		{
		case '1':
			cout << "Enter clinet`s label: ";
			cin.getline(templabel, 40);
			cout << "Enter client`s rating: ";
			cin>>temprating;
			while(cin.get() != '\n')
				continue;
			ptr[i] = new baseDMA(templabel, tempname, templevel, temprating);
			break;
		case '2':
			cout << "Enter clinet`s color: ";
			cin.getline(tempcolor, 40);
			ptr[i] = new lackDMA(tempcolor, tempname, templevel);
			break;
		case '3':
			cout << "Enter clinet`s style: ";
			cin.getline(tempstyle, 40);
			ptr[i] = new hasDMA(tempstyle, tempname, templevel);
			break;
		}


	}
	cout << endl;
	for(int i = 0; i < CLIENTS; i++)
	{
		ptr[i]->display();
		cout << endl;
	}

	for(int i = 0; i < CLIENTS; i++)
	{
		delete ptr[i];
	}

	cout << "Done.\n";

	return 0;
}