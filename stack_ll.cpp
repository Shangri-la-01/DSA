
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
class stack
{
    private:
    node *top;
    public:
    stack()
    {
        top = NULL;
    }
    int empty()
    {
        if (top==NULL)
        return(1);
        else return(0);
    }
    void push(int x)
    {
        node *p=new node(x);
        p->next = top;
        top = p;
    }
    int pop(void)
    {
        int x = top->data;
        node *p= top;
        top = top->next;
        delete p;
        return(x);
    }
    int peek()
    { 
        return(top->data);
    }
    void display()
    {
        node *q = top;
        while(q!=NULL)
        {
            cout<<endl<< q->data;
            q=q->next;
        }
    }
};
int main()
{ 
    int x;
    stack s; 
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    if(!s.empty())
    {
        x=s.pop();
        cout<<endl<<"Removed"<<x<<endl;
    }
    s.display();
    x = s.peek();
    cout<<endl<<"Top element is"<<x<<endl;
}

