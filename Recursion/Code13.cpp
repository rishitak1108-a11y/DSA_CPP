// Program to print all the subsequences with sum K
#include<iostream>
#include<vector>
using namespace std;

void printSubseq(int i, int n, int arr[], int sum, int s, vector<int>& ds)
{
    if(i == n)
    {
        if(s == sum)
        {
            for(int i = 0; i < ds.size(); i++)
            {
                cout<<ds[i]<<"\t";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    printSubseq(i + 1, n, arr, sum, s, ds);
    ds.pop_back();
    s -= arr[i];
    printSubseq(i + 1, n, arr, sum, s, ds);
}
int main()
{
    int a[3] = {1, 2, 1};
    int k = 2;
    vector<int> d;
    printSubseq(0, 3, a, k, 0, d);
    return 0;
}