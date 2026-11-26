/*
	- Given an binary array nums and an integer k, return true if all 1's are at least k places away from each other, otherwise return false.
	
	- Example:
		Input: nums = [1,0,0,0,1,0,0,1], k = 2
		Output: true
		Explanation: Each of the 1s are at least 2 places away from each other.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{	
	public:
		bool kLengthApart(vector<int>& nums, int k)
		{
			vector <int> index;

			for(int i = 0; i<nums.size(); i++)
			{
				if(nums[i] == 1)
				{
					index.push_back(i);
				}
			}

			for(int i = 1; i< index.size(); i++)
			{
				if (index[i] - index[i-1] - 1 < k)
				{
					return false;
				}
			}
        	return true;
    	}

};

int main()
{
	Solution S1;
	int checkLengthApart = 2;
	vector <int> nums {1, 0, 0, 0, 1, 0, 0, 1};

	//vector <int> nums {1, 0, 0, 1, 0, 1};
	bool result = S1.kLengthApart(nums, checkLengthApart);

	cout <<"Output is = "<<result <<endl;

    return 0;
}