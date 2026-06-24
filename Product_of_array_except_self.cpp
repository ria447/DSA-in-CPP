#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> nums) 
{
    vector<int> ans_arr(nums.size(), 1);    
    vector<int> prefix(nums.size(), 1);
    vector<int> suffix(nums.size(), 1);

    int n = nums.size(), pre_product = 1, suf_product = 1;

    for(int i = 0; i < n; i++)
    {
        prefix[i] *= pre_product;
        pre_product *= nums[i];
    }

    for(int j = n - 1; j >= 0; j--)
    {
        suffix[j] *= suf_product;
        suf_product *= nums[j];
    }

    for(int k = 0; k < n; k++)
    {
        ans_arr[k] = prefix[k] * suffix[k];
    }

    return ans_arr;
}

int main()
{
    vec<int> nums = {1,2,3,4};
    vec<int> output = productExceptSelf(nums);
    for(int i = 0; i < nums.size(); i++)
      {
         cout << output[i] << ' ';
      }

    return 0;
}
