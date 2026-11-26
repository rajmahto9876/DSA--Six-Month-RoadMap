/*
	- In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.
	- You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.
	- The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were. If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

	Example:
		Input: mat = [[1,2],[3,4]], r = 1, c = 4
		Output: [[1,2,3,4]]

*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int row, int col)
	{
		int total_element = 0;
		for(int i = 0; i < mat.size(); i++)
		{
			total_element = total_element + mat[i].size();
		}
		
		cout <<"Total Elements in Matrix is = " << total_element <<endl;
		if(total_element!= row * col)
		{
			return {};
		}

		int orig_cols = mat[0].size();

        vector < vector < int > > ret_vector(row, vector<int>(col));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                int k = i * col + j;
                ret_vector[i][j] = mat[k / orig_cols][k % orig_cols];
            }
        }
        
        return ret_vector;
    }
};

int main()
{
    vector< vector < int > > my_vector { {1, 2}, {3, 4} };
    int r = 2, c = 2;

    Solution S1;
    vector<vector<int>> ret_vector = S1.matrixReshape(my_vector, r, c);

    cout << "Reshaped 2D Array is:" << endl;
    for (const auto& row : ret_vector)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}