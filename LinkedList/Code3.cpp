// Program to delete a node from singly ll
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
    Node(int no)
    {
        data = no;
        next = nullptr;
    }
    Node(int no, Node* next1)
    {
        data = no;
        next = next1;
    }
    Node* convertArr2LL(vector<int> & arr);
    Node* removeHead(Node* head);
    Node* removeTail(Node* head);
    Node* removePosition(Node* head, int k);
    int lengthLL(Node* head);
    void print(Node* head);
};

Node* Node :: convertArr2LL(vector<int> &arr)
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

void Node :: print(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int Node :: lengthLL(Node* head)
{
    int icnt = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        icnt++;
        temp = temp->next;
    }
    return icnt;
}

Node* Node :: removeHead(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    else
    {
        Node* temp = new Node();
        temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return head;
    }
}
Node* Node :: removeTail(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }
    else
    {
        Node* temp = NULL;
        temp = head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        return head;
    }
}
Node* Node :: removePosition(Node* head, int k)
{
    int len = lengthLL(head);
    if(k <= 0 || k > len)
    {
        return NULL;
    }
    else if(k == 1)
    {
        return removeHead(head);
    }
    else if(k == len)
    {
        return removeTail(head);
    }
    else
    {
        int i = 1;
        Node* temp = new Node();
        Node* del = new Node();
        temp = head;
        while(i < k - 1)
        {
            temp = temp->next;
            i++;
        }
        del = temp->next;
        temp->next = del->next;
        del->next = NULL;
        delete del;
        return head;
    }
}
int main()
{
    vector<int> arr = {12, 5, 7, 8, 3, 11, 2, 1, 10};
    Node* pRet = new Node();
    Node* nobj = new Node();
    pRet = nobj->convertArr2LL(arr);
    nobj->print(pRet);
    //Delete tail node of ll
    pRet = nobj->removeTail(pRet);
    nobj->print(pRet);
    // Delete head of ll
    pRet = nobj->removeHead(pRet);
    nobj->print(pRet);
    // Delete at position
    pRet = nobj->removePosition(pRet, 5);
    nobj->print(pRet);

    delete pRet;

    return 0;
}