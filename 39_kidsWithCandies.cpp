/*
	- There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.
	- Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.
	- Note that multiple kids can have the greatest number of candies.

	Example 1:
		Input: candies = [2,3,5,1,3], extraCandies = 3
		Output: [true,true,true,false,true] 
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;


class Solution
{	
	public:
		int max_val(int a, int b)
		{
			return (a>b)? a:b;
		}

		int max_func_vector(const vector< int >&candies)
		{
			int max_num = INT_MIN;
			for(int i = 0;i<candies.size();i++)
			{
				max_num = max_val(max_num, candies[i]);
			}

			return max_num;
		}

		vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
		{
        	vector<bool> new_arr;

        	int max_val = max_func_vector(candies);
        	for(int i = 0;i<candies.size();i++)
        	{
        		if((candies[i]+ extraCandies)>= max_val)
        		{
        			new_arr.push_back(true);
        		}
        		else
        		{
        			new_arr.push_back(false);
        		}
        	}

        	return new_arr;
    	}
};

int main()
{
	Solution S1;
	int extraCandies = 3;
	vector <int> nums {2, 3, 5, 1, 3};
	//vector <int> nums {5, 0, 1, 2, 3, 4};
	vector< bool > result = S1.kidsWithCandies(nums, extraCandies);

	cout <<"Output is = "<<endl;
	for(int i = 0; i<result.size(); i++)
	{
		cout << result[i] <<" ";
	}

	cout <<endl;

    return 0;
}