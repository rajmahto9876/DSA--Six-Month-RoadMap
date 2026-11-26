/*
	Given an integer num, return a string of its base 7 representation.
	Example 1:
		Input: num = 100
		Output: "202"

	Example 2:
		Input: num = -7
		Output: "-10"
*/

#include <iostream>
#include <cstring>

using namespace std;

char* convertToBase7(int num)
{
    char *result = (char *)malloc(20 * sizeof(char));

    if (num == 0)
    {
        strcpy(result, "0");
        return result;
    }

    int index = 0;
    int negative = (num < 0);

    if (negative)
    {
        num = -num;
    }

    // Convert decimal to base 7
    int remainder  = 0;
	while (num > 0)
    {
        remainder = num % 7;
        result[index++] = remainder + '0';
        num = num / 7;
    }

    if (negative)
    {
        result[index++] = '-';
    }

    result[index] = '\0';

    // Reverse the result
    int left = 0;
    int right = index - 1;
    char temp;
    while (left < right)
    {
        temp = result[left];
        result[left] = result[right];
        result[right] = temp;

        left++;
        right--;
    }

    return result;
}

int main()
{
	char *str = convertToBase7(100);
	
	cout <<"Conbvert to Base 7 = " << str <<endl;
	
	return 0;
}