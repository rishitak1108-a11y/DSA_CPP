// Program to print factorial of N number using recursion, parameterized and functional
#include<iostream>
using namespace std;
void parameterized(int i, int n)
{
    if(n == 0)
    {
        cout<<"1"<<endl;
        return;
    }
    if(i == 1)
    {
        cout<<n<<endl;
        return;
    }
    parameterized(i - 1, n * (i - 1));
}
int functional(int n)
{
    if(n == 0 || n == 1)
    return 1;
    return n * functional(n - 1);
}
int main()
{
    int no = 0;
    cout<<"Enter number: "<<endl;
    cin>>no;
    parameterized(no, no);
    cout<<functional(no)<<endl;
    return 0;
}