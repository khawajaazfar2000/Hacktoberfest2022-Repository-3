#include <iostream>
using namespace std;
void pny();
int sum(int a, int b,int c);
int main()
{
	int count = 100;
	int result = 0; //initializing variable 
	result = sum(10, 20);
	count = sum(12,29) + count;
	cout<<"The result is : "  << result <<endl;
	cout<<"The result for count is : "  << count <<endl;
	return 0;
}
int sum(int x , int y)
{
	return x+y;
}
