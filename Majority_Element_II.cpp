#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> majorityElement(vector<int> nums) 
{
    vector<int> ans;
    unordered_map<int, int> count;
        
    int n = nums.size();

    if (n == 1)
        return nums;

    for(int i = 0; i < n; i++)
    {
        if (count.find(nums[i]) == count.end())
        {
            count.emplace(nums[i], 1);
        }
        else
            count[nums[i]]++;
    }
        
    for (auto p: count)
    {
          if (p.second > (n / 3))
          ans.push_back(p.first);
    }

    return ans;
}

int main()
{
    vector<int> = {3,2,3};
    vector<int> result;
    result = majorityElement(nums);
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
    return 0;
}
