/*
	- You are given two strings s1 and s2, both of length 4, consisting of lowercase English letters.
	- You can apply the following operation on any of the two strings any number of times:
	- Choose any two indices i and j such that j - i = 2, then swap the two characters at those indices in the string.
	- Return true if you can make the strings s1 and s2 equal, and false otherwise.
	- Example 1:
		Input: s1 = "abcd", s2 = "cdab"
		Output: true
		Explanation: We can do the following operations on s1:
		- Choose the indices i = 0, j = 2. The resulting string is s1 = "cbad".
		- Choose the indices i = 1, j = 3. The resulting string is s1 = "cdab" = s2.

	- Example 2:
		Input: s1 = "abcd", s2 = "dacb"
		Output: false
		Explanation: It is not possible to make the two strings equal.
*/

#include <iostream>
#include <string>

using namespace std;


class Solution
{
	public:
	    bool canBeEqual(string s1, string s2)
	    {
	        if(s1.length()!= s2.length())
	        {
	        	return 0;
	        }

	        int i = 0, j = 2;
	        char temp_char;
	        while(i<s1.length() && j<s1.length())
	        {
	        	if(j - i == 2)
	        	{
	        		temp_char = (char)s1[i];
	        		s1[i] = s1[j];
	        		s1[j] = temp_char;
	        	}

	        	if(s1 == s2)
	        	{
	        		return 1;
	        	}
	        	i++;
	        	j++;
	        }
	        return 0;
	    }
};

int main()
{
	string s1 = "abcd", s2 = "dacb";
	Solution S1;
	int ret = 0;
	
	ret = S1.canBeEqual(s1, s2);
	
	cout << " Check Can Be Equal = " <<ret <<endl;
	return 0;
}