/*
	Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

	Specifically, ans is the concatenation of two nums arrays.
		Return the array ans.
	Example:
		Input: nums = [1,2,1]
		Output: [1,2,1,1,2,1]
		Explanation: The array ans is formed as follows:
		- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
		- ans = [1,2,1,1,2,1]
*/

#include <iostream>

using namespace std;

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#define ARRAY_SIZE  		3
int orgArray[ARRAY_SIZE] = {1, 2, 1};

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* newArray = new int [numsSize * 2];

    if(newArray == NULL)
    {
    	*returnSize = 0;
    	return NULL;
    }

    int i = 0, j = 0;

    for(i = 0; i<numsSize; i++)
    {
    	newArray[i] = nums[i];
    	newArray[i + numsSize] = nums[i];
    }

    *returnSize = numsSize*2;

    return newArray; 
}

int main()
{
	int rSize = 0;
	int *newArray = getConcatenation(orgArray, ARRAY_SIZE, &rSize);

	if(newArray!= NULL)
	{
		cout <<"[";
		for(int i = 0; i<rSize; i++)
		{
			cout <<newArray[i] <<",";
		}

		cout <<"]" <<endl;

		delete[] newArray;
	}
	return 0;
}