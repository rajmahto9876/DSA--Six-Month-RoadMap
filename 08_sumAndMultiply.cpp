/*

You are given an integer n. Form a new integer x by concatenating all the non-zero digits of n in their original order. If there are no non-zero digits, x = 0.
Let sum be the sum of digits in x.
Return an integer representing the value of x * sum.

Input: n = 10203004
Output: 12340

Explanation:
	The non-zero digits are 1, 2, 3, and 4. Thus, x = 1234.
	The sum of digits is sum = 1 + 2 + 3 + 4 = 10.
	Therefore, the answer is x * sum = 1234 * 10 = 12340.
*/

#include <iostream>
#include <math.h>

using namespace std;

long long sumAndMultiply(int n) 
{
	int rem = 0;
	int sum = 0;
	int num_sum = 0;
	int i = 0;

	while(n>0)
	{
		rem = n%10;
		if(rem!= 0)
		{
			num_sum = num_sum + (rem*(pow(10,i)));
			sum = sum + rem;
			i++;
		}
		n = n/10;
	}
	return num_sum * sum;  
}

int main()
{
	int n = sumAndMultiply(1203004);
	cout <<"Output is = "<< n <<endl;
	return 0;
}