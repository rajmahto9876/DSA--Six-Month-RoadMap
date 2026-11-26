/*
	An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5. Given an integer n, return true if n is an ugly number.

	Example 1:
		Input: n = 6
		Output: true
		Explanation: 6 = 2 × 3
	
	Example 2:
		Input: n = 1
		Output: true
		Explanation: 1 has no prime factors.
*/
#include <iostream>
using namespace std;

static int number = 6;

bool isUgly(int num) 
{
	if(num % 2 ==0)
	{
		return 0;
	}

	if(num % 3 == 0)
	{
		return 0;
	}

	if(num % 5 ==0)
	{
		return 0;
	}
 	return 1;   
}

int main()
{
	int isUglyNum = 0;
	isUglyNum = isUgly(number);

	cout << "Output = " << isUglyNum << endl;
	return 0;
}