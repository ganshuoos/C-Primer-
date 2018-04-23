//sumafile.cpp -- functions with an array argument
#include<iostream>
#include<fstream>						//file I/O support
#include<cstdlib>						//support for exit()
const int SIZE = 60;

int main(int argc, char const *argv[])
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;					//object for handling file input

	cout << "Enter name of data file : ";
	cin.getline(filename, SIZE);
	inFile.open(filename);				//asscociate inFile with a file
	if (!inFile.is_open())
	{
		cout << "Could not open the file" << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good()) {
		++count;
		sum += value;
		inFile >> value;
	}

	if (inFile.eof())
	{
		/* code */
		cout << "End of file reached. \n";
	}
	else	if (inFile.fail())
	{
		/* code */
		cout << "Input terminated by data mismatch.\n";
	}
	else
		cout << "Input terminated by unknown reason.\n";

	if (count == 0)
	{
		/* code */
		cout << "No data processed.\n";
	}
	else
	{
		cout << "Items read : " << count << endl;
		cout << "Sum : " << sum << endl;
		cout << "Average : " << sum / count << endl; 
	}

	inFile.close();
	return 0;
}