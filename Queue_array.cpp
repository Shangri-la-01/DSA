#include <iostream>
using namespace std;

const int MAX = 5;

class queue 
{
private:
    int a[MAX];
    int front;
    int rear;
public:
    queue()
    {
        front = -1;
        rear = -1;
    }

    int empty(void)
    {
        return (front == -1 && rear == -1);
    }

    int full(void)
    {
        return (rear == MAX - 1);
    }

    void enqueue(int x)
    {
        if (full()) {
            cout << "Queue is full, cannot enqueue " << x << "\n";
            return;
        }

        if (empty())
        {
            front = 0;
            rear = 0;
            a[rear] = x;
        }
        else
        {
            rear++;
            a[rear] = x;
        }
    }

    int dequeue(void)
    {
        if (empty()) {
            cout << "Queue is empty, cannot dequeue\n";
            return -1;
        }

        int x = a[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
        return x;
    }

    int peek(void)
    {
        return a[front];
    }

    void display(void)
    {
        cout << "\nQueue elements: ";
        for (int i = front; i <= rear; i++)
            cout << "\t" << a[i];
        cout << "\n";
    }
};

int main()
{
    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    if (!q.empty())
    {
        int x = q.dequeue();
        cout << "\tElement Removed: " << x << "\n";
    }

    q.display();

    int frontElement = q.peek();
    if (frontElement != -1)
        cout << "\tFront Element is = " << frontElement << "\n";

    return 0;
}

/*PS C:\Users\Students\OneDrive\Omkar Gunjal> cd "c:\Users\Students\OneDrive\Omkar Gunjal\" ; if ($?) { g++ Queue_array.cpp -o Queue_array } ; if ($?) { .\Queue_array }

Queue elements:         10      20      30      40      50
        Element Removed: 10

Queue elements:         20      30      40      50
        Front Element is = 20*/