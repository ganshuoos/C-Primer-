//file1.cpp -- contains functions called in file1.cpp
#include<iostream>
#include"coordin.h"
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	rect rpalce;
	polar ppalce;
	cout << "Enter the x and y values: ";
	while(cin >> rpalce.x >> rpalce.y){
		ppalce = rect_to_polar(rpalce);
		show_polar(ppalce);
		cout << "Next to numbers: " ; 
	}
	cout << "bye! \n";
	return 0;
}

polar rect_to_polar(rect xypos){
	polar answer;
	answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
	answer.angle = atan2(xypos.y,xypos.x);
	return answer;
}

void show_polar(polar dapos){
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance << endl;
	cout << "angle = " << dapos.angle * Rad_to_deg <<" degrees."<< endl;

}
