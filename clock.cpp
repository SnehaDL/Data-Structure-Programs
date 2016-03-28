/*third program*/
#include<iostream.h>
#include<dos.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void split(int [],int,int);
void combine(int [],int,int,int);
void main()
{
 int a[1000],n,i;
 clock_t start,end;
 clrscr();
 cout<<"enter the no. of elements\n";
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
 split(a,0,n-1);
 end=clock();
 cout<<"the sorted array\n";
 for(i=0;i<=n-1;i++)
 cout<<a[i]<<" ";
 cout<<"\n";
 cout<<"the time taken is"<<(end-start)/CLK_TCK;
 getch();
}
void split(int a[],int low,int high)
{
delay(1);
 int mid;
 if(low<high)
 {
 mid=(low+high)/2;
 split(a,low,mid);
 split(a,mid+1,high);
 combine(a,low,mid,high);
 }
}
void combine(int a[],int low,int mid,int high)
{
delay(1);
 int i,j,k,c[1000],x;
 i=low;
 j=mid+1;
 k=low;
 while(i<=mid&j<=high)
 {
  if(a[i]<a[j])
  {
   c[k]=a[i];
   i++;
  }
  else
  {
   c[k]=a[j];
   ++j;
  }
  k++;
 }
 while(i<=mid)
 {
  c[k]=a[i];
  ++k;
  ++i;
 }
 while(j<=high)
 {
  c[k]=a[j];
  ++k;
  ++j;
 }
 for(x=low;x<=high;x++)
 a[x]=c[x];
}

