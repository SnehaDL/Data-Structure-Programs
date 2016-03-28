/*second program*/
#include<iostream.h>
#include<dos.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void buildheap(int [],int);
void heapsort(int [],int);
void heapify(int [],int,int);
void main()
{
int a[3000],i,n;
clock_t start,end;
clrscr();
cout<<"enter no. of elements\n";
cin>>n;
cout<<"array before sorting\n";
for(i=0;i<n;i++)
 {
 a[i]=rand()%100;
 cout<<a[i]<<" ";
 }
 cout<<"\n";
start=clock();
delay(100);
buildheap(a,n);
heapsort(a,n);
end=clock();
cout<<"the sorted array is\n";
for(i=0;i<=n-1;i++)
cout<<a[i]<<" ";
cout<<"\n";
cout<<"the time taken is"<<(end-start)/CLK_TCK;
getch();
}
void buildheap(int a[],int n)
{
int p;
for(p=(n-1)/2;p>=0;p--)
heapify(a,p,n);
}
void heapify(int a[],int p,int n)
{
int item,le,re,de;
item=a[p];
le=2*p+1;
while(le<=n-1)
{
de=le;
re=2*p+2;
if(re<=n-1)
{
if(a[re]>a[de])
{
de=re;
}
}
if(item>a[de])
{
break;
}
else
{
a[p]=a[de];
p=de;
le=2*n+1;
}
}
a[p]=item;
}
void heapsort(int a[],int n)
{
int i,temp;
for(i=n-1;i>=0;i--)
{
temp=a[0];
a[0]=a[i];
a[i]=temp;
buildheap(a,i);
}
}