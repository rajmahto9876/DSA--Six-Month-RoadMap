/*
	You are given an integer n. Define its mirror distance as: abs(n - reverse(n)) where reverse(n) is the integer formed by reversing the digits of n.
	Return an integer denoting the mirror distance of n
	abs(x) denotes the absolute value of x.

	Input: n = 25
	Output: 27

	Explanation:
		reverse(25) = 52.
		Thus, the answer is abs(25 - 52) = 27.
*/

#include <iostream>
#include <cmath>

using namespace std;

static int num = 25;

int mirrorDistance(int n)
{
	int rem = 0;
	int sum = 0;

	while(n > 0)
	{
		rem = n % 10;
		sum = sum *10 + rem;
		n = n/10;
	}

	return sum;
}

int main()
{
	int mirrorDistanceNum = abs(num - mirrorDistance(num));
	
	cout <<" Mirror Distance = " <<mirrorDistanceNum <<endl;
	return 0;
}