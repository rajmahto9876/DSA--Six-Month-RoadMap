/*
	- There is a robot starting at the position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.
	- You are given a string moves that represents the move sequence of the robot where moves[i] represents its ith move. Valid moves are 'R' (right), 'L' (left), 'U' (up), and 'D' (down).
	- Return true if the robot returns to the origin after it finishes all of its moves, or false otherwise.
	- Note: The way that the robot is "facing" is irrelevant. 'R' will always make the robot move to the right once, 'L' will always make it move left, etc. Also, assume that the magnitude of the robot's movement is the same for each move.

	Example 1:
		Input: moves = "UD"
		Output: true
		Explanation: The robot moves up once, and then down once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return true.

	Example 2:
		Input: moves = "LL"
		Output: false
		Explanation: The robot moves left twice. It ends up two "moves" to the left of the origin. We return false because it is not at the origin at the end of its moves.

*/

#include <iostream>
#include <vector>

using namespace std;

#define LEFT			0
#define RIGHT			0

#define UP				1
#define DOWM			1

class Solution
{	
	
	public:
		bool judgeCircle(string moves)
		{
			vector<int> weigths(2);
        	int ret = 0;
        	int i = 0;
        	while(moves[i]!= '\0')
        	{
        		switch(moves[i])
        		{
	        		case 'L':
	        			weigths[LEFT] = weigths[LEFT] + 1;
	        			break;

	        		case 'R':
	        			weigths[RIGHT] = weigths[RIGHT] - 1;
	        			break;

	        		case 'U':
	        			weigths[UP] = weigths[UP] + 1;
	        			break;

	        		case 'D':
	        			weigths[DOWM] = weigths[DOWM] - 1;
	        			break;
        		}
	        	i++;
        	}

        	if((weigths[LEFT] == 0) && (weigths[UP] == 0))
        	{
        		return true;
        	}
        
        	return false;
    	}
    	
};

int main()
{
    Solution S1;
    string moves = "LL";
  	int ret_int = S1.judgeCircle(moves);

    cout <<"Output is " <<ret_int <<endl;

    return 0;
}