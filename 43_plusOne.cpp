/*
    - You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

    - Increment the large integer by one and return the resulting array of digits.

    Example 1:
        Input: digits = [1,2,3]
        Output: [1,2,4]
        Explanation: The array represents the integer 123.
        Incrementing by one gives 123 + 1 = 124.
        Thus, the result should be [1,2,4].
    
    Example 2:
        Input: digits = [4,3,2,1]
        Output: [4,3,2,2]
        Explanation: The array represents the integer 4321.
        Incrementing by one gives 4321 + 1 = 4322.
        Thus, the result should be [4,3,2,2].
*/


#include <iostream>
#include <vector>

using namespace std;

class Solution
{
    public:
        int create_num(const vector<int>& digits)
        {
            int num = 0;

            for(int i = 0; i<digits.size(); i++)
            {
                num = num*10 + digits[i];
            }

            return num;
        }

        vector<int> plusOne(vector<int>& digits)
        {
            int index = digits.size();
            vector <int> new_arr(index);
            int rem = 0;

            int num = create_num(digits);
            num = num + 1;

            while((num!= 0 && index>0))
            {
                rem = num%10;
                new_arr[index-1] = rem;
                num = num/10;
                index--;
            }
            return new_arr;
        }
};

int main()
{
    Solution S1;
    vector <int > digits { 4, 3, 2, 1 };
    vector <int> ret = S1.plusOne(digits);

    cout <<"Output is = "<<endl;

    for(auto temp: ret)
    {
        cout <<temp <<" ";
    }

    cout <<endl;

    return 0;
}