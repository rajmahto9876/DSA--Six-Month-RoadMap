/*
	Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.
	You must solve the problem without using any built-in library for handling large integers 
	(such as BigInteger). You must also not convert the inputs to integers directly.

	Example 1:
		Input: num1 = "11", num2 = "123"
		Output: "134"
	
	Example 2:
		Input: num1 = "456", num2 = "77"
		Output: "533"
*/
#include <iostream>
#include <string>

using namespace std;

string addStrings(string s1, string s2)
{
	int sum = 0;
	string str;
	sum = stoi(s1) + stoi(s2);

	str = to_string(sum);

	return str;
}

int main()
{
	string num1 = "11", num2 = "123";

	string sum = addStrings(num1, num2);

	cout <<"Sum is = "<< sum << endl;
	return 0;
}