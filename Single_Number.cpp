#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> nums) 
{
      int answer = 0;                                           // Let n be a number. n ^ 0 = n and n ^ n = 0
      for (int i: nums)
      {
          answer = answer ^ i;
      }
      return answer;
}

int main()
{
    vector<int> nums = {2,2,1};
    int value = singleNumber(nums);
    return value;
}

// output = 1
