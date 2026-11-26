/*
    - For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).
    - Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2

    Example 1:
        Input: str1 = "ABCABC", str2 = "ABC"
        Output: "ABC"

    Example 2:
        Input: str1 = "ABABAB", str2 = "ABAB"
        Output: "AB"

    Example 3:
        Input: str1 = "LEET", str2 = "CODE"
        Output: ""

    Example 4:
        Input: str1 = "AAAAAB", str2 = "AAA"
        Output: ""
*/

#include <iostream>
#include <string>

using namespace std;

class Solution
{
    public:
        string gcdOfStrings(string str1, string str2)
        {
            if (str1.size() < str2.size())
            {
                return gcdOfStrings(str2, str1);
            }

            if (str2.empty()) 
            {
                return str1;
            }
            
            if (str1.compare(0, str2.size(), str2) != 0)
            {
                return "";
            }
            
            return gcdOfStrings(str1.substr(str2.size()), str2);
        }
};

int main()
{
    Solution S1;
    string str1 = "ABCABC", str2 = "ABC";

    string new_str = S1.gcdOfStrings(str1, str2);
    cout <<"Output is = " << new_str <<endl;
    
    return 0;
}