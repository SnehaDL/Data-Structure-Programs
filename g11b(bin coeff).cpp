/*eleven B program*/
#include<iostream.h>
#include<conio.h>
int n,r;
void bincoeff();
void main()
{
clrscr();
cout<<"enter n\n";
cin>>n;
cout<<"enter r\n";
cin>>r;
bincoeff();
getch();
}
void bincoeff()
{
int c[100][100],i,j;
for(i=0;i<=n;i++)
{
for(j=0;j<=r;j++)
{
if(i>=j)
{
if(j==0||i==j)
c[i][j]=1;
else
c[i][j]=c[i-1][j]+c[i-1][j-1];
}
}
}
cout<<"the binomial coefficient is"<<c[n][r];
}
