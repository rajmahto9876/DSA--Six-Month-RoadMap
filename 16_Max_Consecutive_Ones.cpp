/*
	- Given a binary array nums, return the maximum number of consecutive 1's in the array.

	Example 1:
		Input: nums = [1,1,0,1,1,1]
		Output: 3
		Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

	Example 2:
		Input: nums = [1,0,1,1,0,1]
		Output: 2
*/

#include <iostream>

using namespace std;

#define ARRAY_SIZE	6
int nums[ARRAY_SIZE] = {1,0,1,1,0,1};

int max_num(int a, int b)
{
	return (a>b)? a: b;
}

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
	int count = 0;
	int i = 0;
	int maxCount = 0;

	for(i = 0; i<numsSize; i++)
	{
		if( nums[i] == 1)
		{
			count++;
		}
		else
		{
			count = 0;
		}

		maxCount = max_num(count, maxCount);
	}

	return maxCount;
}

int main()
{
	int count = 0;
	count = findMaxConsecutiveOnes(nums, ARRAY_SIZE);
	cout << "Consecutive 1's Are = " <<count << endl;
	return 0;
}