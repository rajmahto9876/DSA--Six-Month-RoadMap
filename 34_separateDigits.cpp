/*
	- Given an array of positive integers nums, return an array answer that consists of the digits of each integer in nums after separating them in the same order they appear in nums.
	- To separate the digits of an integer is to get all the digits it has in the same order.
	- For example, for the integer 10921, the separation of its digits is [1,0,9,2,1]

	Example 1:
		Input: nums = [13,25,83,77]
		Output: [1,3,2,5,8,3,7,7]
		Explanation: 
		- The separation of 13 is [1,3].
		- The separation of 25 is [2,5].
		- The separation of 83 is [8,3].
		- The separation of 77 is [7,7].
		answer = [1,3,2,5,8,3,7,7]. Note that answer contains the separations in the same order.

		Example 2:
			Input: nums = [7,1,3,9]
			Output: [7,1,3,9]
			Explanation: The separation of each integer in nums is itself.
			answer = [7,1,3,9].
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution
{	
	public:
	int reverse_integer(int x)
	{
		int reversedNumber = 0;
	    int lastDigit = 0;
	    while (x != 0) {
	        lastDigit = x % 10;
	        
	        if (reversedNumber > INT_MAX / 10 || reversedNumber < INT_MIN / 10)
        	{
        		return 0;
        	}

	        reversedNumber = reversedNumber * 10 + lastDigit;
	        x /= 10;
	    }

		return reversedNumber;
	}

	vector<int> separateDigits(vector<int>& nums)
	{
		int temp = 0;
        vector <int> separateDigits_arr;
        for(int i = 0; i<nums.size(); i++)
        {
        	temp = reverse_integer(nums[i]);
        	while(temp!= 0)
        	{
        		separateDigits_arr.push_back(temp%10);
        		temp = temp/10;
        	}
        }

        return separateDigits_arr;
    }
    	
};

int main()
{
    Solution S1;
    
    vector<int> nums = {7,1,3,9};
  	vector<int> ret_int = S1.separateDigits(nums);

    cout <<"Output is = " <<endl;

    for(int i = 0; i<ret_int.size(); i++)
    {
    	cout << ret_int[i] <<" ";
    }
    cout <<endl;

    return 0;
}