#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) 
{
    // using two pointer approach
    int left = 0, right = height.size() - 1;
    int max_area = INT_MIN, width, h; 
    int area;

    while(left < right)
    {
        h = min(height[left], height[right]);
        width = right - left;
        area = h * width;
        max_area = max(max_area, area);
        if(height[left] < height[right])
            left++;
        else
            right--;
    }
    return max_area;
}

int main()
{
   vector<int> height = {1,8,6,2,5,4,8,3,7};
   int result = maxArea(height);
   return result;
}

//output = 49
