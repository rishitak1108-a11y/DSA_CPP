// Program to print sum of N numbers using recursion, functional and parameterized
#include<iostream>
using namespace std;
void parameterized(int i, int sum)
{
    if(i < 1)
    {
        cout<<sum<<endl;
        return;
    }
    parameterized(i - 1, sum + i);

}
int functional(int n)
{
    if(n == 0)
    return 0;

    return n + functional(n - 1);
}
int main()
{
    int n = 0;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    parameterized(n, 0);
    cout<<functional(n);
    return 0;
}