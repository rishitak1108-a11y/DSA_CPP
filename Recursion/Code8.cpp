// Program to reverse an array using recursion, two pointer approach
#include<iostream>
using namespace std;

void reverseArray(int arr[], int i, int j)
{
    if(i >= j)
    return;
    swap(arr[i], arr[j]);
    reverseArray(arr, i + 1, j - 1);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverseArray(arr, 0, 5 - 1);
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}