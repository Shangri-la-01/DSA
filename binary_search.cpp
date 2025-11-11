#include <iostream>
using namespace std;

int binary_search(int a[], int n, int x);

int main()
{
    int a[20];
    int n, x;
    cout << "How many elements: ";
    cin >> n;

    cout << "Enter " << n << " elements (in sorted order): ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to be searched: ";
    cin >> x;

    int p = binary_search(a, n, x);

    if (p == -1)
        cout << "Element is not found";
    else
        cout << "Element is found at location: " << p;

    return 0;
}

int binary_search(int a[], int n, int x)
{
    int first = 0, last = n - 1;
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] < x)
            first = mid + 1;
        else
            last = mid - 1;
    }
    return -1;
}