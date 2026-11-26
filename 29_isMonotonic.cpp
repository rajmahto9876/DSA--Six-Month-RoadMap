/*
	- An array is monotonic if it is either monotone increasing or monotone decreasing.
	- An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].
	- Given an integer array nums, return true if the given array is monotonic, or false otherwise.

	Example 1:
		Input: nums = [1,2,2,3]
		Output: true

	Example 2:
		Input: nums = [6,5,4,4]
		Output: true
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
	    bool isMonotonic(vector<int>& nums)
	    {
	    	bool increasing = true;
	        bool decreasing = true;

	        for (size_t i = 1; i < nums.size(); i++)
	        {
	            if (nums[i] > nums[i - 1])
	            {
	                decreasing = false;
	            }

	            if (nums[i] < nums[i - 1])
	            {
	                increasing = false;
	            }
	        }

	        return increasing || decreasing;
	    }
};

int main()
{
    Solution S1;

    vector < int >nums {6, 5, 5, 4};

  	bool ret_int = S1.isMonotonic(nums);

    cout <<"Output is " <<ret_int <<endl;

    return 0;
}