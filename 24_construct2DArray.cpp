/*
	- You are given a 0-indexed 1-dimensional (1D) integer array original, and two integers, m and n. You are tasked with creating a 2-dimensional (2D) array with  m rows and n columns using all the elements from original.

	- The elements from indices 0 to n - 1 (inclusive) of original should form the first row of the constructed 2D array, the elements from indices n to 2 * n - 1 (inclusive) should form the second row of the constructed 2D array, and so on.

	- Return an m x n 2D array constructed according to the above procedure, or an empty 2D array if it is impossible.
	- Example:
		Input: original = [1,2,3,4], m = 2, n = 2
		Output: [[1,2],[3,4]]
		Explanation: The constructed 2D array should contain 2 rows and 2 columns.
		The first group of n=2 elements in original, [1,2], becomes the first row in the constructed 2D array.
		The second group of n=2 elements in original, [3,4], becomes the second row in the constructed 2D array.

*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n)
    {
        if ((long long)m * n != (long long)original.size())
        {
            return {};
        }

        vector<vector<int>> result(m, vector<int>(n));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                result[i][j] = original[i * n + j];
            }
        }
        return result;
    }
};

int main()
{
    vector<int> my_vector { 1, 2, 3, 4 };
    int m = 2, n = 2;
    Solution S1;

    vector<vector<int>> ret_vector = S1.construct2DArray(my_vector, m, n);

    cout << "Constructed 2D Array is:" << endl;
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