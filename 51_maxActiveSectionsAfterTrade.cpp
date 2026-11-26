/*
	- You are given an integer n. Your task is to compute the GCD (greatest common divisor) of two values:
	- sumOdd: the sum of the smallest n positive odd numbers.
	- sumEven: the sum of the smallest n positive even numbers.

	Return the GCD of sumOdd and sumEven.

	Example 1:
		Input: n = 4
		Output: 4

		Explanation:
			Sum of the first 4 odd numbers sumOdd = 1 + 3 + 5 + 7 = 16
			Sum of the first 4 even numbers sumEven = 2 + 4 + 6 + 8 = 20
			Hence, GCD(sumOdd, sumEven) = GCD(16, 20) = 4.

	Example 2:
		Input: n = 5
		Output: 5

		Explanation:
			Sum of the first 5 odd numbers sumOdd = 1 + 3 + 5 + 7 + 9 = 25
			Sum of the first 5 even numbers sumEven = 2 + 4 + 6 + 8 + 10 = 30
			Hence, GCD(sumOdd, sumEven) = GCD(25, 30) = 5.

	Constraints:
		1 <= n <= 1000

*/


#include <iostream>
#include <numeric> // For std::gcd (C++17)

using namespace std;

class Solution
{
    public:
    	int sumEven(int num)
    	{
    		int sum = 0;
    		int count = 0;
    		int i = 1;

    		while(count!= num)
    		{
    			if(i%2 == 0)
    			{
    				count++;
    				sum = sum + i;
    			}
    			i++;
    		}
    		return sum;
    	}

    	int sumOdd(int num)
    	{
    		int sum = 0;
    		int count = 0;
    		int i = 1;

    		while(count!= num)
    		{
    			if(i%2!= 0)
    			{
    				count++;
    				sum = sum + i;
    			}
    			i++;
    		}
    		return sum;
    	}

        int gcdOfOddEvenSums(int nums)
        {
        	int sumOfEven = sumEven(nums);
        	int sumOfOdds = sumOdd(nums);

        	cout <<"Even Sum = " <<sumOfEven <<" Odd Sum = "<<sumOfOdds <<endl; 
        	
        	while (sumOfOdds!= 0)
        	{
			    int temp = sumOfOdds;
			    sumOfOdds = sumOfEven % sumOfOdds;   // leftover after fitting b into a
			    sumOfEven = temp;    // the old b becomes the new big number
			}
			return sumOfEven;
    	}
};

int main()
{
    Solution S1;
    int num = 4;

    int result = S1.gcdOfOddEvenSums(num);

    cout <<"Output is = " << result <<endl;    
    return 0;
}