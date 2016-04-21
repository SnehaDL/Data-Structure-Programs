#include<stdio.h>
#include<conio.h>
int b(int);
int b(int n)
{
    if(n==0)
     return 10000;
    else if(n==1)
     return 10500;
     else
     {
         return (b(n-1)+(b(n-2)*20/100))-((b(n-1)+(b(n-2)*20/100))*10/100);
         }
        
    }
    
    
int main()
{
    int result;
    int n;
    printf("Enter the year to get population:");
    scanf("%d",&n);
    result=b(n);
    printf("%d",result);  
    getch();  
    }

