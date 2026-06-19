// Program to reverse a singly ll(Optimal Approach, iterative)
#include<iostream>
#include<vector>
using namespace std;
class ListNode
{
    public:
    int val;
    ListNode* next;
    ListNode()
    {
        val = 0;
        next = nullptr;
    }
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
    ListNode(int x, ListNode* next)
    {
        val = x;
        next = next;
    }
    ListNode* convertArr2Ll(vector<int> &arr);
    void print(ListNode* head);
    friend class Solution5;
};

ListNode* convertArr2Ll(vector<int> &arr)
{
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for(int i = 1; i < arr.size(); i++)
    {
        ListNode* newn = new ListNode(arr[i]);
        temp->next = newn;
        temp = newn;
    }
    return head;
}

void print(ListNode* head)
{
    while(head != NULL)
    {
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

class Solution5
{
    public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* temp = new ListNode();
        ListNode* prev = new ListNode();
        ListNode* front = new ListNode();
        temp = head;
        prev = NULL;
        while(temp != NULL)
        {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
};
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    ListNode* pRet = new ListNode();
    Solution5* sobj = new Solution5();
    pRet = convertArr2Ll(nums);
    print(pRet);
    pRet = sobj->reverseList(pRet);
    print(pRet);

    delete sobj;
    delete pRet;

    return 0;
}