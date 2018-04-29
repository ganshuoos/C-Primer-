//ruler.cpp -- using recursion to subdivide a ruler
#include<iostream>
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);

int main(int argc, char const *argv[])
{
	char ruler[Len];
	int i;
	for (int i = 0; i < Len-2; ++i)
	 {
	 	/* code */
	 	ruler[i] = ' ';
	 } 
	 ruler[Len-1] = '\0';
	 int max = Len-2;
	 int min = 0;
	 ruler[min] = ruler[max] = '|';
	 std::cout << ruler << std::endl;
	 for (int i = 1; i <= Divs; ++i)
	 {
	 	/* code */
	 	subdivide(ruler,min,max,i);
	 	std::cout << ruler << std::endl;
	 	for (int j = 0; j < Len-2; ++j)
	 	{
	 		/* code */
	 		ruler[j] = ' ';
	 	}
	 }
	return 0;
}
void subdivide(char ar[], int low, int high, int level){
	if (level == 0)
	{
		/* code */
		return ;
	}
	int mid = (high + low)/2;
	ar[mid] = '|';
	subdivide(ar,low,mid,level-1);
	subdivide(ar,mid,high,level-1);
}