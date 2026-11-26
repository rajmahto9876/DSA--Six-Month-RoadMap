/*
	Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
	Return the array in the form [x1,y1,x2,y2,...,xn,yn].

	Example 1:
		Input: nums = [2,5,1,3,4,7], n = 3
		Output: [2,3,5,4,1,7] 
		Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
	public:
		vector<int> shuffle(const vector<int>& nums)
		{
			if (nums.size() % 2 != 0)
			{
				cout << "Not Possible to shuffle" << endl;
				return {};
			}

			int n = nums.size() / 2;
			vector<int> new_vector;
			new_vector.reserve(nums.size());

			for (int i = 0; i < n; i++)
			{
				new_vector.push_back(nums[i]);      // x_i
				new_vector.push_back(nums[i + n]);  // y_i
			}
			return new_vector;
		}

		void print(const vector<int>& nums)
		{
			for (int temp : nums)
			{
				cout << temp << ", ";
			}
			cout << endl;
		}
};

int main()
{
	Solution s;
	vector<int> nums = {2, 5, 1, 3, 4, 7};
	s.print(s.shuffle(nums));   // 2, 3, 5, 4, 1, 7,
	return 0;
}