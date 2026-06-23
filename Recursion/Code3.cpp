// Program to print numbers from N to 1 using recusrion
#include<iostream>
using namespace std;
void printNumber(int i, int n)
{
    if(i < 1)
    {
        return;
    }
    cout<<i<<"\t";
    printNumber(i - 1, n);
}
int main()
{
    int n = 0;
    cout<<"Enter no : "<<endl;
    cin>>n;
    printNumber(n, n);
    return 0;
}