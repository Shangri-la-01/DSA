#include <iostream>
using namespace std;

int linear_search(int a[], int n, int x);

int main()
{
    int a[20];
    int n, x;
    cout << "How many elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to be searched: ";
    cin >> x;

    int p = linear_search(a, n, x);
    if (p == -1)
        cout << "Element is not found";
    else
        cout << "Element is found at location: " << p;

    return 0;
}

int linear_search(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return i;
    }
    return -1;
}