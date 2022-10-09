#include <iostream>
using namespace std;


void pny();
int sum(int x, int y);
int main()
{
	int result;
	result =sum(10, 20);
	cout<<"Result is "  <<result;


	return 0;
}


int sum(int x , int y)
{
	return x+y;
}
