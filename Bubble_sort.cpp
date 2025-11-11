#include<iostream>
using namespace std;
void bubble_sort(int a[],int n);

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
bubble_sort(a,n);
cout<<"\n"<<"Sorted List:";
for(int i=0;i<n;i++)
cout<<"\t"<<a[i];
return(0);
}
void bubble_sort(int a[],int n)
{
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
int temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}

/*How mant elements?5          
Enter unsorted list55
66
11
44
99 
Original unsorted list is       55      66      11      44      99
Sorted List:    11      44      55      66      99
PS C:\Users\Students\OneDrive\Omkar Gunjal>*/