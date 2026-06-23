// Program to print numbers from 1 to N using recursion
#include<iostream>
using namespace std;
void printNumber(int i, int n)
{
    if(i > n)
    {
        return;
    }
    cout<<i<<"\t";
    printNumber(i + 1, n);
}
int main()
{
    int n = 0;
    cout<<"Enter no : "<<endl;
    cin>>n;
    printNumber(1, n);
    return 0;
}