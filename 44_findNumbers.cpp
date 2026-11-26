/*
    Given an array nums of integers, return how many of them contain an even number of digits.

    Example 1:
        Input: nums = [12,345,2,6,7896]
        Output: 2
    
    Example 2:
        Input: nums = [555,901,482,1771]
        Output: 1 
        Explanation: 
        Only 1771 contains an even number of digits.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
    public:

        int digitsCounts(int nums)
        {
            int count = 0;
            while(nums!= 0)
            {
                count++;
                nums = nums/10;
            }
            return count;
        }

        int findNumbers(vector<int>& nums)
        {
            int count = 0;
            int temp = 0;
            for(int i = 0; i<nums.size(); i++)
            {
                temp = digitsCounts(nums[i]);

                if(temp%2 == 0)
                {
                    count++;
                }
            }
            return count;
        }
};

int main()
{
    Solution S1;
    vector <int > digits { 12, 345, 2, 6, 7896};
    int ret = S1.findNumbers(digits);

    cout <<"Output is = "<< ret;
    cout <<endl;

    return 0;
}