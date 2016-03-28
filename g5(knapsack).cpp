/*fifth program*/
#include<iostream.h>
#include<conio.h>
int w[10],p[10],n,m;
void knapsack();
int max(int,int);
void main()
{
int i;
clrscr();
cout<<"enter the no. of elements\n";
cin>>n;
cout<<"enter the weights of all elements\n";
for(i=1;i<=n;i++)
cin>>w[i];
cout<<"enter profit of all elements\n";
for(i=1;i<=n;i++)
cin>>p[i];
cout<<"enter knapsack capacity\n";
cin>>m;
knapsack();
}
int max(int x,int y)
{
if(x>y)return x;
else return y;
}
void knapsack()
{
int i,j,v[10][10];
for(i=0;i<=n;i++)
{
for(j=0;j<=m;j++)
{
if(i==0||j==0)
v[i][j]=0;
else if(j-w[i]<0)
v[i][j]=v[i-1][j];
else
v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
}
}
cout<<"output is\n";
for(i=0;i<=n;i++)
{
for(j=0;j<=m;j++)
cout<<v[i][j]<<"\t";
cout<<endl<<endl;
}
cout<<"optimal solutuion is:"<<v[n][m];
getch();
}
