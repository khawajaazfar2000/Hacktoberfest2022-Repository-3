// C++ program to add three numbers
// with the help of above designed
// algorithm
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	// Variables to take the input of
	// the 3 numbers
	int num1, num2, num3;

	// Variable to store the resultant sum
	int sum;

	// Take the 3 numbers as input
	cout << "Enter the 1st number: ";
	cin >> num1;
	cout << " " << num1 << endl;

	cout << "Enter the 2nd number: ";
	cin >> num2;
	cout << " " << num2 << endl;

	cout << "Enter the 3rd number: ";
	cin >> num3;
	cout << " " << num3;

	// Calculate the sum using + operator
	// and store it in variable sum
	sum = num1 + num2 + num3;

	// Print the sum
	cout << "\nSum of the 3 numbers is: "
		<< sum;

	return 0;
}

// This code is contributed by shivanisinghss2110
