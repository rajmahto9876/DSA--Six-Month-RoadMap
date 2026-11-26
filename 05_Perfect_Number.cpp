/*
	A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.
	Given an integer n, return true if n is a perfect number, otherwise return false.

	Example 1:
		Input: num = 28
		Output: true
		Explanation: 28 = 1 + 2 + 4 + 7 + 14
		1, 2, 4, 7, and 14 are all divisors of 28.

	Example 2:
		Input: num = 7
		Output: false
*/
#include <iostream>
using namespace std;

int checkPerfectNumber(int num)
{
	int sum = 0;
	int divisor = 1;

	while(divisor<=num/2)
	{
		if(num%divisor == 0)
		{
			sum = sum + divisor;
		}
		divisor++;
	}
	return sum;
}

int main()
{
	const int num = 7;
	if(checkPerfectNumber(num) == num)
	{
		cout <<"It is Perfect Number" << endl;
	}
	else
	{
		cout <<"Not Perfect " <<endl;
	}
	return 0;
}