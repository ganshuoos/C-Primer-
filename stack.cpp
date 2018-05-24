//stack.cpp -- Stack member functions
#include"stack.h"

Stack::Stack(){
	top = 0;
}

bool Stack::isempty(){
	return top == 0;
}

bool Stack::isfull()const{
	return top == MAX;
}

bool Stack::push(const Item & item){
	if (top < MAX)
	{
		/* code */
		item[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item){
	if (top > 0)
	{
		/* code */
		item = item[top--];
		return true;
	}
	else
		return false;
}

