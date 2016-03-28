/*sixth program*/
#include<iostream.h>
#include<conio.h>
void dijkstra(int,int);
int cost[10][10],vis[10],dist[10];
void main()
{
 int i,j,src,n;
 clrscr();
 cout<<"enter the no. of nodes\n";
 cin>>n;
 cout<<"enter the cost matrix\n";
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
 cin>>cost[i][j];
 cout<<"enter the source\n";
 cin>>src;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
 cout<<cost[i][j]<<"\t";
 cout<<endl<<endl;
 }
 dijkstra(n,src);
 cout<<"the shortest distance from"<<src<<"to all other nodes are\n";
 for(j=1;j<=n;j++)
  cout<<dist[j]<<endl;
 getch();
}
void dijkstra(int n,int src)
{
 int count=0,j,min,u;
 for(j=1;j<=n;j++)
  dist[j]=cost[src][j];
 for(j=1;j<=n;j++)
  vis[j]=0;
 dist[src]=0;
 vis[src]=1;
 while(count!=n-1)
 {
  min=9999;
  for(j=1;j<=n;j++)
  {
   if(dist[j]<min&&vis[j]!=1)
   {
    min=dist[j];
    u=j;
   }
  }
  vis[u]=1;
  for(j=1;j<=n;j++)
  {
   if(dist[u]+cost[u][j]<dist[j]&&vis[j]!=1)
   dist[j]=dist[u]+cost[u][j];
  }
  count++;
 }
}