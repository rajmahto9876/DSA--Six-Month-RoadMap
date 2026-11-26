/*
    - Given an integer n, return the number of prime numbers that are strictly less than n.

    Example 1:
        Input: n = 10
        Output: 4
        Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
    
    Example 2:
        Input: n = 0
        Output: 0

    Example 3:
        Input: n = 1
        Output: 0
*/

#include <iostream>
#include <climits>

using namespace std;

class Solution
{
    public:
        int count = 0;
        int is_not_divisble = true;
        
        int countPrimes(int n)
        {
            if (n <= 2)
            {
                return 0;
            }

            for(int i = 2; i<n; i++)
            {
                is_not_divisble = true;
                for (int j = 2; j < i; ++j)
                {
                   if(i%j == 0)
                   {    is_not_divisble = false;
                        break;
                   }
                }

                if(is_not_divisble == true)
                {
                    count++;
                }
            }
            return count;
        }
};

int main()
{
    Solution S1;
    int ret = S1.countPrimes(10);

    cout <<"Output is = " <<ret <<endl;
    return 0;
}