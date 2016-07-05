#include <iostream>
using std::cout;
#include "stonewt.h"

int main(int argc, char const *argv[])
{
	Stonewt incognito = 275;
	Stonewt wolfe(285.7, Stonewt::FPOUND);
	Stonewt taft(21, 8, Stonewt::IPOUND);

	cout << "The celebrity weighted " << incognito;
	cout << "The detetive weighted " << wolfe;
	cout << "The President weighted " << taft;
	
	incognito = 276.8;
	taft = 325;

	cout << "After dinner, The celebrity weighted " << incognito;
	cout << "After dinner, The President weighted " << wolfe;
	cout << "After dinner, The President add the detetive weighted " << wolfe + taft;
	cout << "After dinner, The President plud the detetive weighted " << taft - wolfe;
	cout << "After dinner, The President mul 2 weighted " << 2*taft;
	cout << "After dinner, The President mul 2 weighted " << taft * 2;

	return 0;
}