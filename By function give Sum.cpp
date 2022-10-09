#include <iostream>
using namespace std;
void pny();
int sum(int x, int y);
int main()
{
	int result = 0; //initializing variable 
	result = sum(10, 20);
	cout<<"The result is : "  << result <<endl;
	return 0;
}
int sum(int x , int y)
{
	return x+y;
}
