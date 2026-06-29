#include <iostream>
#include <vector>
using namespace std;

//using binary search method

bool isValid(int mid, vector<int> Pages, int m)
    {
        int stu = 1, max_Allocated_pages = mid, pages = 0;

        for (int i = 0; i < Pages.size(); i++)
        {
            if (Pages[i] > max_Allocated_pages)
                return false;
            if (pages + Pages[i] <= max_Allocated_pages)
                pages += Pages[i];
            else
            {
                stu++;
                pages = Pages[i];
            }
        }
        if (stu <= m)
            return true;
        else
            return false;
    }

int bookAllocation(vector<int> Pages, int m)
{
    int st = 0, end = 0, ans = -1;

    for(int i = 0; i < Pages.size(); i++)
        end += Pages[i];

    
    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(mid, Pages, m))
        {
            ans = mid;
            end = mid - 1;
        }
        else
            st = mid + 1;
    }

    return ans;
}

int main()
{
    vector<int> Pages = {15, 17, 20};
    int m = 2;
    int output = bookAllocation(Pages, m);
    cout << output << endl;
    return 0;
}

//output = 6
