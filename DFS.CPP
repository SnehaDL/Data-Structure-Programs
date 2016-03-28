#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<process.h>
void dfs(int);
int a[10][10],vis[10],n;
void main()
{
  int src,i,j;
  clrscr();
  cout<<"\n enter the no of vertices\n";
  cin>>n;
  cout<<"\nenter adjacency matrix\n";
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
      cin>>a[i][j];
   vis[i]=0;
  }
    cout<<"\nenter the source\n";
    cin>>src;
    cout<<"\n nodes reachable frm source"<<src<<" are \n";
    for(i=src;i<=n;i++)
    {
      src=i;
      for(j=1;j<=n;j++)
	vis[j]=0;
      dfs(src);
      for(j=1;j<=n;j++)
      {
	if (vis[j]==0)
	{
	  cout<<"\nthe graph is not connected\n";
	  getch();
	  exit(0);
	}
     }
    }
    cout<<"\nthe given graph is connected\n";
    getch();
  }
  void dfs(int v)
  {
   int i;
   vis[v]=1;
   cout<<v;
   for(i=1;i<=n;i++)
   {
      if(a[v][i]==1 && vis[i]==0)
	dfs(i);
   }
   getch();
   }

void bfs(int v)
{
int q[10],f=1,r=1,i;
q[r]=v;
vis[v]=1;
while(f<=r)
{
   int u=q[f];
   cout<<u;
   for(i=1;i<=n;i++)
   {
     if(a[u][i]==1 && vis[i]==0)
     {
       r=r+1;
       q[r]=i;
       vis[i]=i;
     }
  }
  f=f+1;
}
}