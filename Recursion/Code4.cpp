// Program to print numbers from 1 to N using bactracking
#include<iostream>
using namespace std;
void printNumber(int i, int n)
{
    if(i < 1)
    {
        return;
    }
    printNumber(i - 1, n);
    cout<<i<<"\t";
}
int main()
{
    int n = 0;
    cout<<"Enter number : "<<endl;
    cin>>n;
    printNumber(n, n);
    return 0;
}