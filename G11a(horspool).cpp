/*eleven A program*/
#include<iostream.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void horspool(char [],char []);
void main()
{
 char text[300],pattern[10];
 clrscr();
 printf("enter the text\n");
 scanf("%[^\n]",text);
 cout<<"enter the pattern\n";
 scanf("%s",pattern);
 horspool(text,pattern);
 getch();
}
void horspool(char text[],char pattern[])
{
 int m,n,i,j,shift[400];
 n=strlen(text);
 m=strlen(pattern);
 for(i=0;i<=n-1;i++)
  shift[text[i]]=m;
 for(j=0;j<=m-2;j++)
  shift[pattern[j]]=m-1-j;
 for(i=m-1;i<=n-1;i=i+shift[text[i]])
 {
  j=0;
  while(pattern[m-1-j]==text[i-j]&&j<=m-1)
   j++;
  if(j==m)
  {
   cout<<"pattern found\n";
   getch();
   exit(0);
  }
 }
 cout<<"pattern not found\n";
}

