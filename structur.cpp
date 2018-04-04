//structur.cpp -- a simple structure
#include<iostream>

struct inflatable						//structure declaration
{
	char name[20];
	float volume;
	double price;
};

int main(int argc, char const *argv[])
{
	using namespace std;
	inflatable guest = 
	{
		"Glorious Gloria",				//name value
		1.88,							//volume value
		29.99							//price value
	};
	//guest is a structure variable of type inflatable
	//It's initialized to tje indicated values
	
	inflatable pal =
	{
		"Audacious Arther",
		3.12,
		32.99
	};
	//NOTE:some implementation require using
	//static inflatable guest =
	
	cout << "Expand your guest list with "<<guest.name;
	cout << " and "<< guest.name << "!\n";
	cout << " You can have both for $ ";
	cout << guest.price + pal.price << "!\n";
	
	return 0;
}

