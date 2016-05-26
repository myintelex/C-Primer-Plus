#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream infile;
	infile.open("abc.txt");
	int i = 0;
	if(!infile.is_open())
	{
		return -1;
	}
	while(!infile.eof())
	{
		cout << (char )infile.get();
		i++;
	}
	printf("the file has %d char\n", i--);

	return 0;
}
