#include<stdio.h>
#include<conio.h>
struct subset
{
   char name[5];
   int length;
   int elements[15];   
           
      }s[10];
main()
{
      int n,i,ns,x[20],sl,max[10],key,j,k,count,big,bigindex,xcount,select[10];
      printf("Enter number of elements:");
      scanf("%d",&sl);
      printf("Enter elements:");
      for(i=0;i<sl;i++)
      {
        scanf("%d",&x[i]);
      }
      printf("Enter number of subsets:");
      scanf("%d",&ns);
      
      for(i=0;i<ns;i++)
      {
         printf("Enter Subset name:");
         scanf("%s",&s[i].name);
        
         printf("Enter length for %s:",s[i].name);
         scanf("%d",&s[i].length);
         
         printf("Enter Elements in %s:",s[i].name);
         
      for(j=0;j<s[i].length;j++)
      {
        scanf("%d",&s[i].elements[j]);
      }
      }
      
      for(i=0;i<ns;i++)
      {
         printf("Subset:%s\t",&s[i].name);
        
         
         
      for(j=0;j<s[i].length;j++)
      {
        printf("%d\t",s[i].elements[j]);
      }
      printf("\n");
      }
      
      //works so far
      
     /* for(i=0;i<ns;i++)
      {
        max[i]=0;
        for(j=0;j<s[i].length;j++)
        {
         key=s[i].elements[j];
                  for(k=0;k<sl;k++)
                  {
                   if(x[k]==key)
                       {
                          max[i]++;                      
                       }
                   }
        }
        printf("Max:%d\t",max[i]);
      }*/
      
      xcount=0;
      count=0;
      while(xcount!=sl)
      {
        for(i=0;i<ns;i++)
        {
        max[i]=0;
        for(j=0;j<s[i].length;j++)
        {
         key=s[i].elements[j];
                  for(k=0;k<sl;k++)
                  {
                   if(x[k]==key)
                       {
                          max[i]++;                      
                       }
                   }
        }
        //printf("Max:%d\t",max[i]);
      }
        
        
        
        
      big=max[0];
      bigindex=0;
        xcount=0;
      for(i=0;i<sl-1;i++)
      {   
         
          if(max[i]>big)
          {
                      big=max[i];
                      bigindex=i;
                      
                      
            }
       }
          //printf("BigIndex:%d",bigindex);
           
           select[count]=bigindex;
           count++;
         
         for(i=0;i<sl;i++)
         {
               for(k=0;k<sl;k++)
               {
               if(x[k]==s[bigindex].elements[i])
                       {
                          x[k]=0;                      
                                             }           
                }          
                          
           }
         for(i=0;i<sl;i++)
          {
          if(x[i]==0)
            {
            xcount++;
            }
                    
          }
       }      
       printf("Set Cover\n");
        for(i=0;i<count;i++)
          {
           printf("%s\t",s[select[i]].name);
                        
                        }
       
       
       /*
       printf("X:");
       for(i=0;i<sl;i++)
      {
        printf("%d\t",x[i]);
      }
         */         
      getch();

}
