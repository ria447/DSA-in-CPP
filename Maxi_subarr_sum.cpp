#include <iostream>
using namespace std;

int maxSubArray(vector<int> nums) 
{
    //using Kadane's Algorithm
    int max_sum = INT_MIN, current_sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        current_sum += nums[i];
        max_sum = max(max_sum, current_sum);
        if (current_sum < 0)
           current_sum = 0; 
    }
    return max_sum;
}

int main()
{
    vec<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int answer = maxSubArray(nums);
    return answer;
}
