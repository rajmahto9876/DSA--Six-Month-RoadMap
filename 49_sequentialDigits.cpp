/*
    - An integer has sequential digits if and only if each digit in the number is one more than the previous digit.
    - Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.

    Example 1:
        Input: low = 100, high = 300
        Output: [123,234]

    Example 2:
        Input: low = 1000, high = 13000
        Output: [1234,2345,3456,4567,5678,6789,12345]
*/

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;
class Solution
{
    public:
        bool checkSequential(int num)
        {
            deque <int> dq;
            int rem = 0;
            while(num!= 0)
            {
                rem = num%10;
                dq.push_front(rem);
                num = num/10;
            }

            for(int i = 0;i<dq.size()-1;i++)
            {
                if((dq[i] + 1)!= dq[i + 1])
                {
                    return false;
                }
            }
            return true;
        }

        vector<int> sequentialDigits(int low, int high)
        {
            vector <int> temp_arr;
            for(int i = low; i<=high; i++)
            {
                if(checkSequential(i))
                {
                    temp_arr.push_back(i);
                }
            }
            return temp_arr;
        }

        vector<int> sequentialDigits_better(int low, int high)
        {
            // create numbers 123456789
            vector<int> res;
            int num = 0;
            for (int start = 1; start <= 8; start++)
            {
                num = start;
                for (int next = start + 1; next <= 9; next++)
                {
                    num = num * 10 + next;
                    if (num > high)
                    {
                        break;
                    }

                    if (num >= low)
                    {
                        res.push_back(num);
                    }
                }
            }

            sort(res.begin(), res.end());
            return res;
        }
};

int main()
{
    Solution S1;
    int low  = 1000;
    int high = 13000;

    vector <int> result = S1.sequentialDigits_better(low, high);

    cout <<"Output is = " << endl;

    for(int i = 0;i<result.size(); i++)
    {
        cout <<result[i] <<" ";
    }

    cout<< endl;
    
    return 0;
}