#include "plorg.h"

int main(int argc, char const *argv[])
{
	Plorg deflt;
	Plorg Bete("Betel");

	deflt.report();
	Bete.report();

	deflt.reset_CI(89);
	deflt.report();

	return 0;
}
