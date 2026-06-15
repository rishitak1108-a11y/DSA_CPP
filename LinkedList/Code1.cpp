// Program to create a singly ll using vector
#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    
    Node()
    {
        data = 0;
        next = nullptr;
    }
    Node(int no, Node* next1)
    {
        data = no;
        next = next1;
    }

    Node(int no)
    {
        data = no;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++)
    {
        Node* newn = new Node(arr[i]);
        temp->next = newn;
        temp = newn;
    }
    return head;
}
int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node* pRet = new Node();
    pRet = convertArr2LL(arr);
    cout<<pRet->data<<endl;
    return 0;
}