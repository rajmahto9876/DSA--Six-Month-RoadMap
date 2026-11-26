#include <iostream>

using namespace std;

static int num = 1234351;

static int revNum(int num)
{
	int rem = 0;
	int sum = 0;

	while(num!=0)
	{
		rem = num %10;
		sum = sum*10 + rem;
		num = num/10;
	}
	return sum;
}

int main()
{
	int revN = revNum(num);
	cout <<"Org Number " <<num <<endl;
	cout <<"Rev Number " <<revN <<endl;
	if(num == revN)
	{
		cout <<"It is Palindrome" <<endl;
	}
	else
	{
		cout <<"Not Palindrome" <<endl;
	}
	return 0;
}