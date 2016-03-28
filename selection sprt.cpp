
#include<iostream.h>
#include<dos.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void selsort(int [],int);
void main()
{
 int a[1000],i,n;
 clrscr();
 clock_t start,end;
 cout<<"enter the no. of elememnts\n";
 cin>>n;
 cout<<"array before sorting\n";
 for(i=0;i<n;i++)
 {
 a[i]=rand()%100;
 cout<<a[i]<<" ";
 }
 cout<<"\n";
 start=clock();
 selsort(a,n);
 end=clock();
 cout<<"the sorted array is\n";
 for(i=0;i<=n-1;i++)
  cout<<a[i]<<" ";
  cout<<"\n";
  cout<<"time taken is"<<(end-start)/CLK_TCK;
 getch();
}
void selsort(int a[],int n)
{
 delay(100);
 int i,j,min,temp;
 for(i=0;i<=n-2;i++)
 {
  min=i;
  for(j=i+1;j<=n-1;j++)
  {
   if(a[j]<a[min])
   min=j;
  }
  temp=a[i];
  a[i]=a[min];
  a[min]=temp;
 }
}
