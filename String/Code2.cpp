// Program to find the length of longest substring withoud repeating characters
#include<iostream>
#include<vector>
using namespace std;
class Solution2
{
    public:
    // Brute Force Approach
    int longestSubstring1(string s)
    {
        int len = 0;
        for(int i = 0; i < s.size(); i++)
        {
            vector<int> hash(256, 0);
            for(int j = i; j < s.size(); j++)
            {
                // Already visited character, repeating char
                if(hash[s[j]] == 1)
                {
                    break;
                }
                len = max(len, j - i + 1);
                hash[s[j]] = 1;
            }
        }
        return len;
    }

    // Optimal approach using 2 pointers, sliding window
    int longestSubstring2(string s)
    {
        int l = 0, r = 0, len = 0;
        vector<int> hash(256, -1);
        while(r < s.size())
        {
            // Already visited char, repeating
            if(hash[s[r]] != -1)
            {
                if(hash[s[r]] >= l)
                {
                    l = hash[s[r]] + 1;
                }
            }
            len = max(len, r - l + 1);
            hash[s[r]] = r;
            r++;
        }
        return len;
    }
};
int main()
{
    string str = "cadbzabcd";
    int iRet = 0;
    Solution2 *sobj = new Solution2();
    
    iRet = sobj->longestSubstring1(str);
    cout<<iRet<<endl;

    iRet = sobj->longestSubstring2(str);
    cout<<iRet<<endl;

    delete sobj;
    return 0;
}