// Program to find largest element in an array using brute force
#include<iostream>
#include<vector>
using namespace std;

class Solution1
{
    // Using sorting algorithm, QuickSort, T.C = O(nlogn), n-> size of array
    public:
    int sort(vector<int>& arr, int low, int high)
    {
        int pivot = 0, i = 0, j = 0, temp = 0;
        pivot = arr[low];
        i = low;
        j = high;

        while(i < j)
        {
            while(arr[i] <= pivot && i <= high - 1)
            {
                i++;
            }
            while(arr[j] > pivot && j >= low + 1)
            {
                j--;
            }
            if(i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
        return j;
    }

    void quickSort(vector<int>& arr, int low, int high)
    {
        int partition = 0;
        if(low < high)
        {
            partition = sort(arr, low, high);
            quickSort(arr, low, partition - 1);
            quickSort(arr, partition + 1, high);
        }
    }

    int maxElement(vector<int>& arr)
    {
        int low = 0, high = 0, n = 0;
        n = arr.size();
        high = n - 1;
        quickSort(arr, low, high);
        return arr[n - 1];
    }
};

int main()
{
    vector<int> nums = {3, 2, 1, 5, 2};
    int iRet = 0;
    Solution1* sobj = new Solution1();
    iRet = sobj->maxElement(nums);
    cout<<iRet<<endl;
    delete sobj;
    return 0;
}