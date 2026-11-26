/*
	- You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the ith bank.
	- Return the wealth that the richest customer has.
	- A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

	Example 1:
		Input: accounts = [[1,2,3],[3,2,1]]
		Output: 6
		Explanation:
		1st customer has wealth = 1 + 2 + 3 = 6
		2nd customer has wealth = 3 + 2 + 1 = 6
		Both customers are considered the richest with a wealth of 6 each, so return 6.

	Example 2:
		Input: accounts = [[1,5],[7,3],[3,5]]
		Output: 10
		Explanation: 
		1st customer has wealth = 6
		2nd customer has wealth = 10 
		3rd customer has wealth = 8
		The 2nd customer is the richest with a wealth of 10.
		
	Example 3:
		Input: accounts = [[2,8,7],[7,1,3],[1,9,5]]
		Output: 17
*/

#include <iostream>
#include <vector>

using namespace std;


class Solution
{
	public:
		int max_func(int a, int b)
		{
			return (a>b)? a:b;
		}

	    int maximumWealth(vector<vector<int>>& accounts)
	    {
	    	int max_wealth = 0;
	    	vector <int> max_sum(accounts.size());

	    	for(int i = 0;i<accounts.size();i++)
	    	{
	    		max_sum[i] = 0;
	    		for(int j = 0; j<accounts[i].size(); j++)
	    		{
	    			max_sum[i] = max_sum[i] + accounts[i][j];
	    		}
	    	}

	    	for(int i = 0;i<max_sum.size(); i++)
	    	{
	    		max_wealth = max_func(max_wealth, max_sum[i]);
	    	}

        	return max_wealth;
    	}

    	void print(vector<vector<int>>& grid)
    	{
    		cout <<"Grid:" <<endl;

    		for(int i = 0; i<grid.size(); i++)
    		{
    			for(int j = 0; j<grid[i].size(); j++)
    			{
    				cout << grid[i][j] <<" ";
    			}
    			cout <<endl;
    		}
    	}
};

int main()
{
    Solution S1;
    vector < vector <int>>grid { {2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
    //vector < vector <int>>grid { {1, 2, 3}, {3, 2, 1}};

    cout <<"Original Grid" <<endl;
    S1.print(grid);

  	int ret_int = S1.maximumWealth(grid);

    cout <<"Output is " <<ret_int <<endl;

    return 0;
}