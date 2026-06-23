// Program to print name N times using recursion
#include<iostream>
using namespace std;

void printName(int i, int n)
{
    if(i > n)
    {
        return;
    }
    cout<<"Snowy Owl"<<endl;
    printName(i + 1, n);
}

int main()
{
    int n = 0;
    cout<<"Enter value: "<<endl;
    cin>>n;
    printName(1, n);
    return 0;
}