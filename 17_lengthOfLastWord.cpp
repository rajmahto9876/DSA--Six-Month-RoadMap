/*
	Given a string s consisting of words and spaces, return the length of the last word in the string. A word is a maximal substring consisting of non-space characters only.
	
	Example 1:
		Input: s = "Hello World"
		Output: 5
		Explanation: The last word is "World" with length 5.
	
	Example 2:
		Input: s = "   fly me   to   the moon  "
		Output: 4
		Explanation: The last word is "moon" with length 4.
*/

#include <iostream>

using namespace std;
const char *str1 = "Hello Worlding";
const char *str2 = "   fly me   to   the moon  ";

int lengthOfLastWord(const char* s)
{
	int length = 0;
    int last_legnth = 0;

    while(*s!= '\0')
    {
    	if( *s == ' ')
    	{
    		s++;
    		length = 0;
    		continue;
    	}
    	length++;
    	last_legnth = length;
    	s++;
    }

    return last_legnth;
}

int main()
{
	int length = lengthOfLastWord(str2);
	cout <<"Length = "<<length <<endl;
	return 0;
}