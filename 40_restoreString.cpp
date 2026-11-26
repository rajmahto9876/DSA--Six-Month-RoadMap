/*
	- You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.
	- Return the shuffled string.

	Example 1:
	Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
	Output: "leetcode"
	Explanation: As shown, "codeleet" becomes "leetcode" after shuffling.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution
{	
	public:
		string restoreString(string s, vector<int>& indices)
		{
        	string new_str = s;

        	if(s.size()!= indices.size())
        	{
        		return new_str;
        	}

			for(int i = 0;i<indices.size(); i++)
			{
				new_str[indices[i]] = s[i];
			}

        	return new_str;
    	}

};

int main()
{
	Solution S1;
	vector <int> nums {4, 5, 6, 7, 0, 2, 1, 3};
	string str = "codeleet";

	string result = S1.restoreString(str, nums);

	cout <<"Output is = "<< result <<endl;
	
	return 0;
}