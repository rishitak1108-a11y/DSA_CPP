// Program to reverse a singly ll(Brute force approach)
#include<iostream>
#include<stack>
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
        stack<int> st;
        ListNode* temp = new ListNode();
        temp = head;
        while(temp != NULL)
        {
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp != NULL)
        {
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }
        return head;
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