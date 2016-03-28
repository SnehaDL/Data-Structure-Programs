/*twelth program*/
#include<iostream.h>
#include<conio.h>
int c[10][10],n;
void prims();
void main()
{
 int i,j;
 clrscr();
 cout<<"enter the no. of vertices\n";
 cin>>n;
 cout<<"enter the cost matrix\n";
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
   cin>>c[i][j];
 }
 cout<<"the minimum spanning tree is\n";
 prims();
 getch();
}
void prims()
{
 int elec[10],i,j,ne=0,mincost=0;
 int u,v,min;
 for(i=1;i<=n;i++)
  elec[i]=0;
 elec[1]=1;
 while(ne!=n-1)
 {
  min=999;
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
    if(elec[i]==1)
    {
     if(c[i][j]<min)
     {
      min=c[i][j];
      u=i;
      v=j;
     }
    }
   }
  }
  if(elec[v]!=1)
  {
   cout<<u<<"--->"<<v<<"="<<min<<endl;
   elec[v]=1;
   ne=ne+1;
   mincost=mincost+min;
  }
  c[u][v]=c[v][u]=999;
 }
 cout<<"mincost="<<mincost;
}