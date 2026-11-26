#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
	Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

	For example:
	A -> 1
	B -> 2
	C -> 3
	...
	Z -> 26
	AA -> 27
	AB -> 28

	Example 1:
	Input: columnNumber = 1
	Output: "A"
	
	Example 2:
	Input: columnNumber = 28
	Output: "AB"
	
	Example 3:
	Input: columnNumber = 701
	Output: "ZY"
*/

class Solution
{
	public:
	    string convertToTitle(int columnNumber) 
	    {
	        string result = "";

	        while (columnNumber > 0) {
	            columnNumber--;  // Adjust for 1-based numbering
	            int remainder = columnNumber % 26;
	            result += ('A' + remainder);
	            columnNumber /= 26;
	        }

	        reverse(result.begin(), result.end());
	        return result;
	    }
};

int main()
{
	int num = 27;
	Solution s1;
	string str = s1.convertToTitle(num);

	cout <<"Ecxel Column" << num << " into string is "<< str <<endl;
	return 0;
}