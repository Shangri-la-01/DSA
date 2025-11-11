#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
    node *prev;
    node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class doubly_link_list 
{
private:
    node *head;
public:
    doubly_link_list() {
        head = NULL;
    }

    void insert(int x) {
        node *p = new node(x);
        if (head == NULL) {
            head = p;
        } else {
            node *q = head;
            while (q->next != NULL) {
                q = q->next;
            }
            q->next = p;
            p->prev = q;
        }
    }

    void display() {
        node *q = head;
        cout << endl;
        while (q != NULL) {
            cout << q->data << " <-> ";
            q = q->next;
        }
        cout << "NULL";
    }

    void remove(int x) {
        node *q = head;
        while (q != NULL) {
            if (q->data == x) {
                if (q->prev != NULL)
                    q->prev->next = q->next;
                else
                    head = q->next;
                if (q->next != NULL)
                    q->next->prev = q->prev;
                delete q;
                return;
            }
            q = q->next;
        }
    }
};

int main() {
    doubly_link_list list;
    list.insert(5);
    list.insert(10);
    list.insert(15);
    list.insert(20);
    list.insert(4);
    list.display();
    list.remove(10);
    list.remove(20);
    list.display();
    return 0;
}
/*PS C:\Users\Omkar\Vs_code> cd "c:\Users\Omkar\Vs_code\" ; if ($?) { g++ Linklist_doublly.cpp -o Linklist_doublly } ; if ($?) { .\Linklist_doublly }

5 <-> 10 <-> 15 <-> 20 <-> 4 <-> NULL
5 <-> 15 <-> 4 <-> NULL
PS C:\Users\Omkar\Vs_code>*/