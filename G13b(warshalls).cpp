/*thirteen B program*/
#include<iostream.h>
#include<conio.h>
int a[10][10],n;
void warshall();
void main()
{
 int i,j;
 clrscr();
 cout<<"enter the no. of vertices\n";
 cin>>n;
 cout<<"enter the adjacency matrix\n";
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   cin>>a[i][j];
  cout<<"the adjacency matrix is\n";
 for(i=1;i<=n;i++)
 {
  cout<<"|\t";
  for(j=1;j<=n;j++)
  {
   cout<<a[i][j]<<"\t";
  }
  cout<<"|"<<endl;
 }
 warshall();
 getch();
}
void warshall()
{
 int i,j,k;
 for(k=1;k<=n;k++)
 {
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
    if(a[i][j]!=1)
    {
     if(a[i][k]==1&&a[k][j]==1)
     a[i][j]=1;
    }
   }
  }
 }
 cout<<"the path matrix is\n";
 for(i=1;i<=n;i++)
 {
  cout<<"|\t";
  for(j=1;j<=n;j++)
  {
   cout<<a[i][j]<<"\t";
  }
  cout<<"|"<<endl;
 }
}