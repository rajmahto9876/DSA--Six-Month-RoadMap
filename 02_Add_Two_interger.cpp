#include <iostream>

using namespace std;

static int sum(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	cout <<"Sum of Num is "<< sum(3, 5) <<endl;
	return 0;
}