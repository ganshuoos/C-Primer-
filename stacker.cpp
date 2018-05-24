//stack.cpp -- testing the Stack class
#include<iostream>
#include<cctype>
#include"stack.h"
#include"stack.cpp"

int main(int argc, char const *argv[])
{
	using namespace std;
	Stack st;
	char ch;
	unsigned long po;
	cout << "Please enter A to add a purchase order , \n" << "P to process a PO , or Q to quit.\n";
	while( cin >> ch && toupper(ch) != 'Q' ){
		while( cin.get() != '\n'){
			continue;
		}
		if (!isalpha(ch))
		{
			/* code */
			cout << '\a';
			continue;
		}
		switch(ch){
			case'A':
			case'a':	cout << "Enter a PO number to add: ";
						cin >> po;
						if (st.isfull())
						{
							/* code */
							cout << "stack already full\n";
						}
						else 
							st.push(po);
						break;
			case'p':
			case'P':	if (st.isempty())
						{
							/* code */
							cout << "stack already empty\n";
						}
						else
						{
							st.pop(po);
							cout << "PO #" << po << " popped\n";
						}
						break;
		}
		cout << "Please enter A to add a purchase order, \n" << "P to process a PO, or Q to quit.\n";
	}
	cout << "Bye\n";
	return 0;
}

