/*
	Given an integer num, return the number of digits in num that divide num.
	An integer val divides nums if nums % val == 0.

	Example 1:
		Input: num = 7
		Output: 1
		Explanation: 7 divides itself, hence the answer is 1.

	Example 2:
		Input: num = 1248
		Output: 4
		Explanation: 1248 is divisible by all of its digits, hence the answer is 4.
*/

#include <iostream>

using namespace std;

static int num  = 1248;
int countDigits(int num) 
{
	int count = 0;
	int rem = 0;
	int n = num;

	while(n>0)
	{
		rem = n%10;
		if(n%rem == 0)
		{
			count++;
		}
		n = n/10;
	}

	return count;    
}

int main()
{
	int cntDigits = 0;
	cntDigits = countDigits(num);
	cout << " Output Was = "<< cntDigits <<endl;
	return 0;
}
