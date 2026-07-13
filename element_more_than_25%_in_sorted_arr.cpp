#include <iostream>
#include <vector> 
#include <map>

int findSpecialInteger(vector<int> arr) 
{
    map<int, int> m;
    int n = arr.size();
  
    for (int i: arr)
    {
        if (m.find(i) != m.end())
            m[i]++;
        else
            m.emplace(i, 1);
    }  

    for(auto p: m)
    {
        if (p.second > n / 4)
            return p.first;
    }

    return 0;
}

int main()
{
    int arr = [1,2,2,6,6,6,6,7,10];
    int output = findSpecialInteger(vector<int> arr);
    cout << output << endl;
    return 0;
}

//output : 6
