/*
	- You are given a 0-indexed array of strings words and a character x.
	- Return an array of indices representing the words that contain the character x.
	- Note that the returned array may be in any order.

	Example 1:

		Input: words = ["leet","code"], x = "e"
		Output: [0,1]
		Explanation: "e" occurs in both words: "leet", and "code". Hence, we return indices 0 and 1.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> findWordsContaining(vector<string>& words, char x)
    {
    	vector<int> charIndex;
        for (size_t i = 0; i < words.size(); i++)
        {
            if (words[i].find(x) != string::npos)
            {
                charIndex.push_back(i);
            }
        }
        return charIndex;
    }
};


int main()
{
    vector< string > my_vector {"leet", "code", "Raj", "Naveen"};
    static char findchr = 'e'; 
    Solution S1;

    vector<int> ret_vector = S1.findWordsContaining(my_vector, findchr);

    cout << "find Words Containing " << findchr << " are = ";
    for (const auto& temp : ret_vector)
    {
        cout << temp <<", ";
    }

    cout <<endl;
    return 0;
}