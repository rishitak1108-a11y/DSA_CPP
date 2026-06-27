// Program to implement a stack using array
#include<iostream>
using namespace std;

class StackX
{
    public:
    int top;
    int st[10];
    StackX()
    {
        top = -1;
    }

    void push(int value)
    {
        if(top >= 10)
        {
            cout<<"Stack is Full !!!"<<endl;
            return;
        }
        else
        {
            top++;
            st[top] = value;
        }
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack is Empty!!!"<<endl;
            return;
        }
        else
        {
            st[top] = 0;
            top--;
        }
    }

    int topElement()
    {
        if(top == -1)
        {
            return 0;
        }
        return st[top];
    }

    int size()
    {
        return top + 1;
    }

    void print()
    {
        for(int i = 0; i < 10; i++)
        {
            cout<<st[i]<<"\t";
        }
        cout<<endl;
    }
};
int main()
{
    StackX *sobj = new StackX();
    sobj->push(1);
    sobj->print();

    sobj->push(2);
    sobj->print();

    sobj->push(3);
    sobj->print();

    sobj->pop();
    sobj->print();

    cout<<sobj->topElement()<<endl;

    cout<<sobj->size()<<endl;

    delete sobj;

    return 0;
}