// C++ program to sort array
// in ascending order using
// Brute-force approach
// using bubble sort
#include <bits/stdc++.h>
using namespace std;

void sort(int num[], int len);
void swapNums(int nums[],
			int first, int second);

// Driver code
int main()
{
	// Initializing arrya
	int nums[] = {1, 12, 6, 8, 10};
	int size_nums = (sizeof(nums) /
					sizeof(nums[0]));

	cout << "Before sorting the array is: \n";
	for (int i = 0; i < size_nums; i++)
		cout << nums[i] << " ";
	cout << "\n\n";

	sort(nums, size_nums);

	cout << "After sorting the array is: \n";

	for (int i = 0; i < size_nums; i++)
		cout << nums[i] << " ";
	cout << "\n";
	return 0;
}

// Sort function
void sort(int num[], int len)
{
	bool isSwapped;

	/**
	* Here we are running n-1 steps,
	for each step, max item will
	come at the last respective
	index and swap element if the
	element is smaller than the
	previous one.
	**/
	for (int i = 0; i < len; i++)
	{
		isSwapped = false;
		for (int j = 1; j < len - i; j++)
		{
			if (num[j] < num[j - 1])
			{
				swapNums(num, j, (j - 1));
				isSwapped = true;
			}
		}
		if (!isSwapped)
		{
			break;
		}
	}
}

// Swaps two numbers in array
void swapNums(int nums[],
			int first, int second)
{
	int curr = nums[first];
	nums[first] = nums[second];
	nums[second] = curr;
}
