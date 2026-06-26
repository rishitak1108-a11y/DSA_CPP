// Program to check if a string is palindrome or not using recursion
#include<iostream>
using namespace std;
bool palindromeCheck(string s, int i, int n)
{
    if(i >= n / 2)
    return true;

    if((char)s[i] != (char)s[n - i -1])
    {
        return false;
    }
    return palindromeCheck(s, i + 1, n);
}
int main()
{
    bool bRet = 0;
    string str = "hello";
    bRet = palindromeCheck(str, 0, str.length());
    cout<<bRet<<endl;
    return 0;
}