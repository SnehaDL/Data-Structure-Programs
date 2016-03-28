/*thirteen A program*/
#include<iostream.h>
#include<conio.h>
int min(int,int);
int a[10][10],n;
void floyd();
void main()
{
 int i,j;
 clrscr();
 cout<<"enter the no. of vertices\n";
 cin>>n;
 cout<<"enter the cost matrix\n";
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   cin>>a[i][j];
  cout<<"the cost matrix is\n";
 for(i=1;i<=n;i++)
 {
  cout<<"|\t";
  for(j=1;j<=n;j++)
  {
   cout<<a[i][j]<<"\t";
  }
  cout<<"|"<<endl;
 }
 floyd();
 getch();
}
int min(int x,int y)
{
 int c=x<y?x:y;
 return c;
}
void floyd()
{
 int i,j,k;
 for(k=1;k<=n;k++)
 {
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
    a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
   }
  }
 }
 cout<<"all pairs shortest path matrix is\n";
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