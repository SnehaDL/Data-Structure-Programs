#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<process.h>
void bfs(int);
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
    bfs(src);
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