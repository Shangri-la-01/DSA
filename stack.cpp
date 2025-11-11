#include<iostream>
using namespace std;
const int MAX=5;
class stack
{
private:
    int a[MAX];
    int top;
public:
    stack()
    {
        top = -1;
    }
    void push (int x)
    {
        top++;
        a[top]=x;
    }
    int pop (void)
    {
        int x = a[top];
        top--;
        return(x);
    }
    int peek(void)
    {
        return (a[top]);
    }
    int full(void)
    {
        if (top == MAX-1)
        {
        cout<<"stack full";
        return(1);
        }
        else return(0);
    }
    int empty(void)
    {
        if (top == -1)
        return(1);
        else return(0);
    }
    void display(void)
    {
        for(int i = top; i>=0; i--)
        cout << endl << a[i];
    }
};
int main()
{
    int x;
    stack s;
   if(!s.full())
   s.push(10);
   if(!s.full())
   s.push(20);
   if(!s.full())
   s.push(30);
   if(!s.full())
   s.push(40);
   if(!s.full())
   s.push(50);
   if(!s.full())
   s.push(60);
   s.display();
   if(!s.empty())
   {
    x = s.pop();
    cout << "REMOVED" << x << endl;
   }
   s.display();
   x = s.peek();
   cout << "TOP ELEMENT IS" << x ;
   return(0);   
}
   /*C:\Users\Students\OneDrive\Omkar Gunjal> cd "c:\Users\Students\OneDrive\Omkar Gunjal\" ; if ($?) { g++ stack.cpp -o stack } ; if ($?) { .\stack }
stack full
50
40
30
20
10REMOVED50

40
30
20
10TOP ELEMENT IS40
PS C:\Users\Students\OneDrive\Omkar Gunjal>*/