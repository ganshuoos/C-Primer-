//outfile.cpp -- writing to a file
#include<iostream>
#include<fstream>

int main(int argc, char const *argv[])
{
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;					//create object for output
	outFile.open("carinfo.txt");		//associate with a file

	cout << "Enter the make and model of automobile : ";
	cin.getline(automobile, 50);
	cout << "Enter the model year : ";
	cin >> year;
	cout << "Enter the original asking price : ";
	cin >> a_price;
	d_price = 0.913*a_price;

	//display information on screen with cout
	cout << fixed;						//一般方式输出浮点数
	cout.precision(2);					//设定输出值以新的浮点数精度值显示
	cout.setf(ios_base::showpoint);
	cout << "Make and model : " << automobile << endl;
	cout << "Year : " << year << endl;
	cout << "Was asking $ " << a_price << endl;
	cout << "Now asking $ " << d_price << endl;

	//now do exact same things using outFile instead of cout 
	 outFile << fixed;
	 outFile.precision(2);
	 outFile.setf(ios_base::showpoint);
	outFile << "Make and model : " << automobile << endl;
	outFile << "Year : " << year << endl;
	outFile << "Was asking $ " << a_price << endl;
	outFile << "Now asking $ " << d_price << endl;

	outFile.close();
	return 0;
}
