#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

class linkedlist
{
    private:
    node *head;
    public:
    linkedlist()
    {head=NULL;}
    void insert (int x)
    {
        node *p= new node(x);
        if(head == NULL)
        {
            head=p;
        }
        else
        {
            node *q=head;
            while (q->next !=NULL)
            {
                q=q->next;
            }
            q->next=p;
        }
    }
    void remove(int x)
    {
        node *p=NULL;
        node *q=head;
        if (head->data == x)
        { 
            p=head;
            head=head->next;
            delete p;
        }
        else
        {
            while(q!=NULL)
            {
                if(q->next->data==x)
                {
                    p=q->next;
                    q->next=p->next;delete p;
                }
                q=q->next;
            }
        }
    }
    void display(void)
    {
        node *q=head;
        cout << endl;
        while(q!=NULL)
        {
            cout<<q->data<<"->";
            q=q->next;
        }
    }
};
int main()
{
    linkedlist list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
     list.display();
    list.remove(40);
    list.display();
    return(0);
}

/*PS C:\Users\Students\OneDrive\Omkar Gunjal> cd "c:\Users\Students\OneDrive\Omkar Gunjal\" ; if ($?) { g++ link_list.cpp -o link_list } ; if ($?) { .\link_list }
10->20->30->40->
PS C:\Users\Students\OneDrive\Omkar Gunjal>*/