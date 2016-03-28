#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
#include<process.h>
void quick(int *,int,int);
int partition(int*,int,int);
void main()
{
 int a[100],n,r,i;
 clock_t st,end;
 cout<<"\nenter the no of elements\n";
 cin>>n;
 cout<<"\nrandomise the elements\n";
 for(i=0;i<n;i++)
 {
   r=rand()%100;
   a[i]=r;
   cout<<r<<endl;
 }
 st=clock();
 quick(a,0,n-1);
  end=clock();
 cout<<"\nthe sorted elements are\n";
 for(i=0;i<n;i++)
   cout<<a[i]<<endl;

 cout<<"tym taken is\n"<<(end-st)/CLK_TCK;
 getch();
}

void quick(int a[],int low,int high)
{
 int j;
 if(low<high)
 {
 delay(100);
   j=partition(a,low,high);
   quick(a,low,j-1);
   quick(a,j+1,high);
 }
}
int partition(int a[],int low,int high)
{
  int p,k,i,j,temp;
  p=low;
  i=low;
  j=high;
  k=low;
  while(k<high)
  {
   while(a[i]<a[p])
     i++;
   while(a[j]>a[p])
     j--;
     if(i<j)
     {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
     }
     else
     {
      temp=a[p];
      a[p]=a[j];
      a[j]=a[p];
     }
     k++;
   }
   return j;
  }