/*tenth program*/
#include<stdio.h>
#include<conio.h>
#define m 30
void subset(int n,int d,int s[]);
void main()
{
 int i,n,d,s[m];
 clrscr();
 printf("\nEnter number of elements : ");
 scanf("%d",&n);
 printf("\nEnter the set in increasing order\n");
 for(i=0;i<n;i++)
  scanf("%d",&s[i]);
 printf("\nEnter the sum of subset d = ");
 scanf("%d",&d);
 subset(n,d,s);
 getch();
}
void subset(int n,int d,int s[])
{
int i,k,sum=0,selected[m],found=0;
for(i=0;i<n;i++)
 selected[i]=0;
 k=0;
 selected[k]=1;
 while(1)
  {
   if(k<n && selected[k]==1)
    {
     if(sum+s[k]==d)
      {
       found=1;
       printf("\n\nSolution is : \n\n");
       for(i=0;i<n;i++)
	{
	 if(selected[i]==1)
	  printf("%d\t",s[i]);
	 }
	selected[k]=0;
      }
     else if(sum+s[k]<d)
      sum+=s[k];
     else
      selected[k]=0;
    }
   else
    {
     k--;
     while(k>=0 && selected[k]==0)
      {
       k--;
      }
      if(k<0)
       break;
      selected[k]=0;
      sum-=s[k];
     }
     k++;
     selected[k]=1;
    }
    if(!found)
     printf("\nSolution does not exist");
}
