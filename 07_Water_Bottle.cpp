/*
There are numBottles water bottles that are initially full of water. You can exchange numExchange empty water bottles from the market with one full water bottle. The operation of drinking a full water bottle turns it into an empty bottle.

Given the two integers numBottles and numExchange, return the maximum number of water bottles you can drink.

Example:
	Input: numBottles = 15, numExchange = 4
	Output: 19
	Explanation: You can exchange 4 empty bottles to get 1 full water bottle. 
	Number of water bottles you can drink: 15 + 3 + 1 = 19.

Example:
	Input: numBottles = 9, numExchange = 3
	Output: 13
	Explanation: You can exchange 3 empty bottles to get 1 full water bottle.
	Number of water bottles you can drink: 9 + 3 + 1 = 13.

*/

#include <iostream>
using namespace std;

static int numBottles = 9, numExchange = 3;

int numWaterBottles(int numBottles, int numExchange)
{
    int totalDrank = 0;
    int emptyBottles = 0;

    while (numBottles > 0)
    {
        // Drink all currently full bottles
        totalDrank += numBottles;
        emptyBottles += numBottles;

        // Exchange empty bottles for full bottles
        numBottles = emptyBottles / numExchange;

        // Remaining empty bottles after exchange
        emptyBottles = emptyBottles % numExchange;
    }

    return totalDrank;
}

int main()
{
	cout <<"Output is = "<<numWaterBottles(numBottles, numExchange) <<endl;
	return 0;
}