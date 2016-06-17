#include <iostream>
#include "golf.h"

int main(int argc, char const *argv[])
{
	Golf ann("Ann Birdfree", 24);

	Golf andy;
	andy.setgolf();

	ann.showgolf();
	andy.showgolf();

	andy.sethandicap(56);
	andy.showgolf();

	return 0;
}