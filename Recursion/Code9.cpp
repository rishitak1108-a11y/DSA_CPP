// Program to reverse an array using recursion using one pointer
#include<iostream>
using namespace std;
void reverseArray(int arr[], int i, int n)
{
    if(i >= n / 2)
    return;
    swap(arr[i], arr[n - i - 1]);
    reverseArray(arr, i + 1, n);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverseArray(arr, 0, 5);
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}