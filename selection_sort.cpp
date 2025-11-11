#include<iostream>
using namespace std;
void selection_sort(int a[],int n);

int main()
{
int a[20]; int n;
cout<<"How mant elements?";
cin>>n;
cout<<"Enter unsorted list";
for (int i=0;i<n;i++)
cin>>a[i];
cout<<"Original unsorted list is";
for(int i=0;i<n;i++)
cout<<"\t"<<a[i];
selection_sort(a,n);
cout<<"\n"<<"Sorted List:";
for(int i=0;i<n;i++)
cout<<"\t"<<a[i];
return(0);
}
void selection_sort(int a[],int n)
{
    int minIndex;
for(int i=0;i<n-1;i++)
{
minIndex=i;
for(int j=i+1;j<n;j++)
{
if(a[j]<a[minIndex])
{
minIndex=j;
}
{
int temp=a[i];
a[i]=a[minIndex];
a[minIndex]=temp;
}
}
}
}

/*How mant elements?5
Enter unsorted list22
33
44
11
66
Original unsorted list is       22      33      44      11      66
Sorted List:    22      33      44      11      66
PS C:\Users\Students\OneDrive\Omkar Gunjal>*/