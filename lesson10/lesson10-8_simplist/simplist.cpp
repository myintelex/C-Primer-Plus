#include "simplist.h"
bool Simplist::add(const Item &ite)
{
	items[top++] = ite;
}
void Simplist::visit(void (*pf)(Item &))
{
	for(int i = 0; i < top; i++)
	{
		(*pf)(items[i]);
	}
}
