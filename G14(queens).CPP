#include<iostream.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
int s[10][10];
void display(int m[],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  s[i][m[i]]=1;
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    cout<<s[i][j]<<"\t";
    cout<<"\n";
    }
    getch();
    exit(0);
}
int place(int m[],int k)
{
  int i;
  for(i=0;i<k;i++)
   if(m[i]==m[k] || (abs(m[i]-m[k])==abs(i-k)))
    return 0;
    return 1;
}
void main()
{
 int m[10],n,k;
   clrscr();
 cout<<"Enter the number of Queens\n";
 cin>>n;
 cout<<"The solution for the n queens problem is \n";
 n--;
 for(m[0]=0,k=0;k>=0;m[k]+=1)
  {
   while(m[k]<=n &&place(m,k)==0)
    m[k]+=1;
    if(m[k]<=n)
     if(k==n)
     display(m,n+1);
    else
     k++,m[k]=-1;
    else
     k--;
   }
}
