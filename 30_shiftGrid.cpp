/*
	- Given a 2D grid of size m x n and an integer k. You need to shift the grid k times.
	- In one shift operation:
		Element at grid[i][j] moves to grid[i][j + 1].
		Element at grid[i][n - 1] moves to grid[i + 1][0].
		Element at grid[m - 1][n - 1] moves to grid[0][0].
		Return the 2D grid after applying shift operation k times.
	
	Example:
		Input: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 1
		Output: [[9,1,2],[3,4,5],[6,7,8]]
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
	    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k)
	    {
	    	int m = grid.size();
	        int n = grid[0].size();
	        int total = m * n;

	        k = k%total;   // shifting by a full cycle changes nothing

	        vector<vector<int>> result(m, vector<int>(n));

	        for (int i = 0; i < m; i++)
	        {
	            for (int j = 0; j < n; j++)
	            {
	                int p = (i * n + j + k) % total;   // new flat position
	                result[p / n][p % n] = grid[i][j];
	            }
	        }
	        return result;
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
    int k = 1;

    vector < vector <int>>grid { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    cout <<"Original Grid" <<endl;
    S1.print(grid);

    vector < vector <int>>new_grid = S1.shiftGrid(grid, k);

    cout <<"Shifted Grid" <<endl;
    S1.print(new_grid);

    return 0;
}