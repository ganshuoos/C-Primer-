//nested.cpp -- nested.cpp loops and 2-D array
#include<iostream>
const int Cities = 5;
const int Years = 4;
int main(int argc, char const *argv[])
{
	using namespace std;
	const char* cities[Cities] = 
	{
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};
	int maxtemps[Years][Cities] =
	{
		{95,99,86,100,104},
		{95,97,90,106,102},
		{96,100,940,107,105},
		{97,102,89,108,104}
	};

	cout << "Maxinum temperatures for 2002 - 2005 \n\n";
	for (int city = 0; city < Cities; ++city)
	{
		/* code */
		cout << cities[city] << " : \t";
		for (int year = 0; year < Years; ++year)
		{
			/* code */
			cout<<maxtemps[year][city] << "\t";
		}
		cout << endl;
	}
	return 0;
}
