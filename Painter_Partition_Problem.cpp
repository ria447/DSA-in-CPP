#include <iostream>
#include <vector>
using namespace std;

// using binary search method

bool isValid(vector<int> Lengths, int n, int m, int max_Allocated_length)
{
    int painter = 1, length = 0;
    for (int i = 0; i < n; i++)
    {
        if (Lengths[i] > max_Allocated_length)
            return false;
        if (length + Lengths[i] <= max_Allocated_length)
            length += Lengths[i];
        else
        {
            painter++;
            length = Lengths[i];
        }
    }
    if(painter <= m)
        return true;
    else
        return false;
}

int lengthsallocated(vector<int> Lengths, int n, int m)
{
    int st = 0, end = 0, ans = -1;
    
    for(int i = 0; i < n; i++)
    {
        end += Lengths[i];
    }

    while(st <= end)
    {
        int mid = st + (end - st) / 2;
        if(isValid(Lengths, n, m, mid))
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
    vector<int> Lengths = {40, 30, 10, 20};
    int n = 4, m = 2;
    int output = lengthsallocated(Lengths, n, m);
    cout << output << endl;
    return 0;
}

//output = 60
