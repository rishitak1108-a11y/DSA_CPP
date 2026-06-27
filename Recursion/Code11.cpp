// Program to return the nth fibonacci number using recursion
#include<iostream>
using namespace std;

int fibonacciNum(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    return fibonacciNum(n - 1) + fibonacciNum(n - 2);
}
int main()
{
    int no = 0, iRet = 0;
    cout<<"Enter number: "<<endl;
    cin>>no;
    iRet = fibonacciNum(no);
    cout<<iRet<<endl;

    return 0;
}