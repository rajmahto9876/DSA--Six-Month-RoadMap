/*
	- Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
	
	- Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

	Example 1:
		Input: x = 123
		Output: 321
	
	Example 2:
		Input: x = -123
		Output: -321
	
	Example 3:
		Input: x = 120
		Output: 21
*/

#include <iostream>
#include <climits>

using namespace std;

/*

	Note:
	Why the limits are 7 and -8 ?
		INT_MAX = 2147483647, so INT_MAX / 10 = 214748364 with last digit 7. 
		If rev equals 214748364, the next digit can be at most 7. Likewise INT_MIN = -2147483648, so the last allowed negative digit is -8.


		- In C++11 and later, % keeps the sign of the dividend, so -123 % 10 == -3. That's why one loop handles both signs without special-casing.

		- 1534236469 reverses to 9646324351, which exceeds INT_MAX, so it correctly returns 0.
		Time is O(number of digits), space is O(1), and no 64-bit type is needed.
*/
class Solution
{
    public:
        int reverse(int num)
        {
            int rev = 0;

            while (num != 0)
            {
                int digit = num % 10;
                num /= 10;

                // Positive overflow check
                if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                {
                    return 0;
                }
                // Negative overflow check
                if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                {
                    return 0;
                }

                rev = rev * 10 + digit;
            }

            return rev;
        }
};

int main()
{
    Solution S1;
    int tests[] = {123, -123, 120, 1534236469, -2147483648, 0};

    for (int n : tests)
    {
        cout << n << " -> " << S1.reverse(n) << endl;
    }

    return 0;
}