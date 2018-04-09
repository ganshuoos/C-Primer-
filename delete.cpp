//delete.cpp -- using the delete operator
#include<iostream>
#include<cstring>

char* getname(void);

int  main(int argc, char const *argv[])
{
	using namespace std;
	char* name ;
	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete [] name;

	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete [] name;

	return 0;
} 

char* getname ()
{
	using namespace std;
	char temp[80];
	cout << "Enter last name : ";
	cin >> temp ;
	char* pn = new char [strlen(temp) + 1];
	strcpy(pn,temp);
	return pn;
}