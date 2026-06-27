// Program to print all subsequences using recursion
#include<iostream>
#include<vector>
using namespace std;

void printSubseq(int arr[], int i, int n, int index, vector<int> &a)
{
    if(index >= n)
    {
        for(int i = 0; i < a.size(); i++)
        {
            cout<<a[i]<<"\t";
        }
        cout<<endl;
        return;
    }
    a.push_back(arr[i]);
    printSubseq(arr, i + 1, n, index + 1, a);
    a.pop_back();
    printSubseq(arr, i + 1, n, index + 1, a);
}
int main()
{
    int arr[3] = {3, 2, 1};
    vector<int> ans;
    printSubseq(arr, 0, 3, 0, ans);
    return 0;
}