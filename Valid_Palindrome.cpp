#include <iostream>
#include <string>
using namespace std;

bool isAlphanumeric(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
      return 1;
    if (ch >= '0' && ch <= '9')
      return 1;
    else
      return 0;
}
bool isPalindrome(string s) 
{
    // Two-Pointer Approach
    int st = 0, end = s.length() - 1;
    while (st <= end)
    {
        if(!isAlphanumeric(s[st]))
        {
            st++;
            continue;
        }
        if(!isAlphanumeric(s[end]))
        {
            end--;
            continue;
        }
        else
        {
            if(tolower(s[st]) != tolower(s[end]))
                return false;
            else
            {
                st++;
                end--;
            }
        }
            
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    output = isPalindrome(s);
    cout << output << endl;
    return 0;
}
