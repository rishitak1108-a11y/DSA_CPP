// Program to print number from N to 1 using backtracking
#include<iostream>
using namespace std;
void printNumber(int i, int n)
{
    if(i > n)
    {
        return;
    }
    printNumber(i + 1, n);
    cout<<i<<"\t";
}
int main()
{
    int n = 0;
    cout<<"Enter number: "<<endl;
    cin>>n;
    printNumber(1, n);
    return 0;
}