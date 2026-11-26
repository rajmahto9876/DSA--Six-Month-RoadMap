/*
	- You are given a sorted unique integer array nums. A range [a,b] is the set of all integers from a to b (inclusive). 
	- Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.
	- Each range [a,b] in the list should be output as:
		"a->b" if a != b
		"a" if a == b
	
	- Example 1:
		Input: nums = [0,1,2,4,5,7]
		Output: ["0->2","4->5","7"]
		Explanation: The ranges are:
			[0,2] --> "0->2"
			[4,5] --> "4->5"
			[7,7] --> "7"

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
	public:
	    vector<string> summaryRanges(vector<int>& nums)
	    {
	        vector<string> res;
	        int n = nums.size();
	        int i = 0;

	        while (i < n)
	        {
	            int start = i;
	            // Extend while the next number is exactly +1
	            while (i + 1 < n && (long long)nums[i + 1] == (long long)nums[i] + 1)
	            {
	                i++;
	            }

	            if (start == i)
	            {
	                res.push_back(to_string(nums[start]));
	            }
	            else
	            {
	                res.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
	            }
	            i++;
	        }
	        return res;
	    }

	    void print(const vector<string>& nums)
		{
		    for (auto temp : nums)
		    {
		        cout << temp << ", ";
		    }
		    cout << endl;
		}
};

int main()
{
	vector <int> nums{0, 1, 2, 4, 5, 7};
	vector <string> new_vector;
	Solution S1;

	new_vector = S1.summaryRanges(nums);
	S1.print(new_vector);

	return 0;
}