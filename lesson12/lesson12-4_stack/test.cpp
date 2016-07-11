#include <iostream>
#include <cctype>
#include "stack.h"

int main(int argc, char const *argv[])
{
	using namespace std;
	customer cus;
	Stack st;
	char ch;
	cout << "Please input 'A' to add a customer ,\n"
		<< " 'p' to delete a customer, or input 'Q' to quit" <<endl;
	while(cin >> ch && toupper(ch) != 'Q')
	{
		while(cin.get() != '\n')
			continue;
		if(!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch(ch)
		{
		case 'A'	:
		case 'a':
			cout << "Enter the customer fullname: ";
			cin >> cus.fullname;
			cout << "Enter the customer payment: ";
			cin >> cus.payment;
			if(st.isfull())
				cout << "stack already full \n";
			else
				st.push(cus);
			break;
		case 'P':
		case 'p':
			if(st.isempty())
				cout << "stack already empty\n";
			else
			{
				st.pop(cus);
				cout << "customer :  " << cus.fullname << "  poped\n";
			}
			break;

		}

		st.show_stack();
		cout << "Please input 'A' to add a customer ,\n"
		<< " 'p' to delete a customer, or input 'Q' to quit" <<endl;
	}

	cout << "Bye\n";
	return 0;
}
