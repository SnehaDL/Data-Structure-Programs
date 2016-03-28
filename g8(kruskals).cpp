/*eighth program*/
#include<iostream.h>
#include<conio.h>
int c[10][10],n;
void kruskal();
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
 kruskal();
 getch();
}
void kruskal()
{
 int parent[10],mincost=0,ne=0;
 int min,a,b,u,v,i,j;
 for(i=1;i<=n;i++)
  parent[i]=0;
 while(ne!=n-1)
 {
  min=999;
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
    if(c[i][j]<min)
    {
     min=c[i][j];
     a=u=i;
     b=v=j;
    }
   }
  }
  while(parent[u]!=0)
   u=parent[u];
  while(parent[v]!=0)
   v=parent[v];
  if(u!=v)
  {
   cout<<a<<"--->"<<b<<"="<<min<<endl;
   parent[v]=u;
   ne=ne+1;
   mincost=mincost+min;
  }
  c[a][b]=c[b][a]=9999;
 }
 cout<<"mincost="<<mincost;
}

