/*
    LC : 1358
    Given a string s consisting only of characters a, b and c. Return the number of substrings containing at least one 
    occurrence of all these characters a, b and c.
*/
#include<iostream>
using namespace std;

class Solution1
{
    public:
    // Brute Force
    int numberOfSubstrings1(string s) 
    {
        int cnt = 0, a = 0, b = 0, c = 0;
        for(int i = 0; i < s.size() - 2; i++)
        {
            for(int j = i + 2; j < s.size(); j++)
            {
                a = 0;
                b = 0;
                c = 0;
                for(int k = i; k <= j; k++)
                {
                    if(s[k] == 'a')
                    {
                        a++;
                    }
                    else if(s[k] == 'b')
                    {
                        b++;
                    }
                    else if(s[k] == 'c')
                    {
                        c++;
                    }
                }
                if(a >= 1 && b >= 1 && c >= 1)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
int main()
{


    return 0;
}