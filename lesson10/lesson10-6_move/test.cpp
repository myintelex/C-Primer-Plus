#include "move.h"

int main(int argc, char const *argv[])
{
	Move one;
	Move two;
	one.showmove();
	two.showmove();
	two.reset(5, 6);
	two.showmove();
	one = one.add(two);
	one.showmove();
	return 0;
}
