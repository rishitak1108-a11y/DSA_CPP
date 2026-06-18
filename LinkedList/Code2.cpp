// Program to find the length of a linked list 
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

int countLL(Node* head)
{
    int iCnt = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    return iCnt;
}

void print(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    int iRet = 0;
    vector<int> arr = {12, 5, 8, 7};
    Node* pRet = new Node();
    pRet = convertArr2LL(arr);
    print(pRet);
    iRet = countLL(pRet);
    cout<<iRet<<endl;

    delete pRet;
    return 0;
}