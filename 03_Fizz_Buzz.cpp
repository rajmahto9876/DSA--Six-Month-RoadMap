#include <iostream>
#include <string>
using namespace std;

/*
	Given an integer n, return a string array answer (1-indexed) where:
	answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
	answer[i] == "Fizz" if i is divisible by 3.
	answer[i] == "Buzz" if i is divisible by 5.
	answer[i] == i (as a string) if none of the above conditions are true.

	Input: n = 15
	Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]

*/

const string typeString[3] = {"Fizz", "Buzz", "FizzBuzz"};

void printFizzBuzz(int n)
{
	if((n%3 == 0) && (n%5 == 0))
	{
		cout <<"FizzBuzz";
	}
	else if(n%3 == 0)
	{
		cout <<"Fizz";
	}
	else if(n%5 == 0)
	{
		cout <<"Buzz";
	}
	else
	{
		string str = std::to_string(n);
		cout << str;
	}

	cout <<",";
}

int main()
{
	const int n = 15;
	
	for(int i = 1; i<=n; i++)
	{
		printFizzBuzz(i);
	}
	cout <<endl;
	return 0;
}