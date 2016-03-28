/*first program*/
#include<iostream.h>
#include<dos.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int binsearch(int [],int,int,int);
void sort(int [],int);
int linsearch(int [],int,int,int);
void main()
{
 int a[2000],i,n,key,ans,choice;
 clock_t start,end;
 clrscr();
 cout<<"enter the no. of elements \n";
 cin>>n;
 for(i=0;i<n;i++)
 {
 a[i]=rand()%100;
 cout<<a[i]<<"\t";
 }
 cout<<"\n";
 cout<<"enter the key to be searched\n";
 cin>>key;
  for(i=0;i<n-1;i++)
 {
 cout<<a[i];
 cout<<"\t";
 }
 cout<<"\n";
 cout<<"enter the type of search to be performed\n";
 cout<<"1.binary,2.linear\n";
 cin>>choice;
 switch(choice)
 {
 case 1:sort(a,n);
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	start=clock();
	ans=binsearch(a,0,n-1,key);
	if(ans==-1)
	cout<<"not found\n";
	else cout<<"found\n";
	end=clock();
	cout<<"the time was:\n"<<(end-start)/CLK_TCK;
	getch();
	break;
case 2:start=clock();
       ans=linsearch(a,0,n-1,key);
       if(ans==-1)
       cout<<"key not found\n";
       else
       cout<<"key found\n";
       end=clock();
	cout<<"the time was:\n"<<(end-start)/CLK_TCK;
       getch();
       break;
default:exit(0);
 }
 }
int binsearch(int a[],int low,int high,int key)
{
 delay(100);
 int mid;
 if(low>high)
 return -1;
 mid=(low+high)/2;
 if(key==a[mid])
 return 0;
 else if(key<a[mid])
 return binsearch(a,low,mid-1,key);
 else
 return binsearch(a,mid+1,high,key);
}
int linsearch(int a[],int i,int high,int key)
{
delay(100);
 if(i>high)
 return -1;
 if(key==a[i])
 return 0;
 else
 return linsearch(a,i+1,high,key);
}
void sort(int a[],int n)
{
int temp,i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j+1]<a[j])
{
temp=a[j+1];
a[j+1]=a[j];
a[j]=temp;
}
}
}
}