// outfunc.cpp -- defining your own function

#include<iostream>
void ganshuoos(int);  				//function prototype for ganshuoos()

int  main(int argc, char const *argv[])
{
	using namespace std;
	ganshuoos(3);					// call the ganshuoos() function
	cout << "Pick an interge:";
	int count;
	cin >> count;
	ganshuoos(count);				// call it again
	cout << "Done!" << endl;

	return 0;
} 

void ganshuoos(int n)				// define the ganshuoos() function
{
	using namespace std;
	cout << "ganshuoos says touch your toes " << n <<" times." <<endl;
 
} 									// void function don't need return statement