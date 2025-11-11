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
class queue
{
    private:
    node *front;
    node *rear;
    public:
    queue()
    {
        front = NULL;
        rear = NULL;
    }
    int empty()
    {
        if (front==NULL)
        return(1);
        else return(0);
    }
    void enqueue(int x)
    {
        node *p=new node(x);
        if(front==NULL)
        {
            front = p;
            rear = p;
        }
        else
        {
            rear ->next=p;
            rear = p;
        }
    }
    int dequeue(void)
    {
        int x = front->data;
        node *p= front;
        front = front->next;
        delete p;
        return(x);
    }
    int peek()
    { 
        return(front->data);
    }
    void display()
    {
        node *q = front;
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
    queue q; 
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    if(!q.empty())
    {
        x=q.dequeue();
        cout<<endl<<"\tRemoved"<<x <<endl;
    }
    q.display();
    x = q.peek();
    cout<<"\tFront element is"<<x <<endl;
}

/*PS C:\Users\Students\OneDrive\Omkar Gunjal> cd "c:\Users\Students\OneDrive\Omkar Gunjal\" ; if ($?) { g++ Queue_Linklist.cpp -o Queue_Linklist } ; if ($?) { .\Queue_Linklist }


10
20
30
40
Removed10


20
30
40
Front element is20 */