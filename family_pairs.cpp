#include<stdio.h>
#include<conio.h>
main()
{ 
int d[5][5],i,j,n,p,q,temp=10;
printf("Enter number of pairs:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
       printf("Enter distance between m%d,f%d:",i+1,j+1);
       scanf("%d",&d[i][j]);
        
                     }
}      
printf("Given Distances\n"); 
 for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
       printf("Between m%d,f%d:%d\n",i+1,j+1,d[i][j]);
       
        
                     }
}                   
  i=0;    
while(i<n)
{
    for(j=0;j<n;j++)
    {
       if(d[i][j]<=temp)
       {
          temp=d[i][j];
          p=i;
          q=j;        
        }
                     }
       i++;
}       
printf("Best Combination\n Male:%d\t Female:%d\t Distance:%d",p+1,q+1,temp);
getch();
      
      
      }
