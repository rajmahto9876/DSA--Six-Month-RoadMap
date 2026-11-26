/*
   - Given two numbers, hour and minutes, return the smaller angle (in degrees) formed between the hour and the minute hand.
    - Answers within 10-5 of the actual value will be accepted as correct.

    Example 1:
        Input: hour = 12, minutes = 30
        Output: 165

    Example 2:
        Input: hour = 3, minutes = 15
        Output: 7.5
*/

#include <iostream>
#include <string>

using namespace std;

class Solution
{
    public:
        // 12hr = 360 -> 30.0 per hr
        const float angle_bw_hr             = 30.0;

        // 1hr = 60 min = 360 -> 6.0 per min
        const float angle_by_min_hand_in_hr = 6.0;

        // 1hr = 60 min = 30.0 -> 0.5 per min of drift by hour hand
        const float drift                   = 0.5;
        double angleClock(int hour, int minutes)
        {
            double hr_hand_angle  = (hour%12)*30 + minutes * drift;
            
            double min_hand_angle = minutes * angle_by_min_hand_in_hr;

            double diff_angle = abs(hr_hand_angle - min_hand_angle);

            return min(diff_angle, 360 - diff_angle);
        }
};

int main()
{
    Solution S1;
    int hr = 12;
    int min = 30;

    double new_result = S1.angleClock(hr, min);
    cout <<"Output is = " << new_result <<endl;
    
    return 0;
}