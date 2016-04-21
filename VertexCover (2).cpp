#include<stdio.h>
#include<conio.h>
main()
{
      int i,j,m,e[10][10],c[10][10];
      int p,q,count,mcount,v[10],vcount=0;;
      printf("Enter no. of Vertices:");
      scanf("%d",&m);
      mcount=m*m;
      for(i=0;i<m;i++)
      {
         for(j=0;j<m;j++)
         {
            printf("Enter edge value betweeen %d & %d:",i+1,j+1);
            scanf("%d",&e[i][j]);
            }                  
                         } 
                         
           for(i=0;i<m;i++)
           {
         for(j=0;j<m;j++)
         {
                  c[i][j]=0;                
                    }                  
                         
         }
                         
                              
         printf("Adjacency Matrix\n");
                         
         for(i=0;i<m;i++)
         {
         for(j=0;j<m;j++)
         {
            printf("%d\t",e[i][j]);
            
            } printf("\n");              
                         }      
                         
      count=0;
      while(count<mcount)
      {
          count=0;
         for(i=0;i<m;i++)
         {
         for(j=0;j<m;j++)
         {
            if(e[i][j]==1)
              {p=i;
              q=j;
              }
            }              
                         }      
       v[vcount]=p+1;
       vcount++;
       v[vcount]=q+1;
       vcount++;
       c[p][q]=1;
       for(j=0;j<m;j++)
         {
            e[p][j]=0;
            e[q][j]=0;
            }
       for(j=0;j<m;j++)
         {
            e[j][p]=0;
            e[j][q]=0;            
            }
         
          for(i=0;i<m;i++)
         {
         for(j=0;j<m;j++)
         {
            if(e[i][j]==0)
              {
                          count++;
              }
            }               
         }  
            
      }
     /* printf("Vertex Cover Matrix\n");
      for(i=0;i<m;i++)
         {
         for(j=0;j<m;j++)
         {
            printf("%d\t",c[i][j]);
            
            } printf("\n");              
                         } */
      printf("Vertex cover\n");
      for(i=0;i<vcount;i++)
      {
            
            printf("%d\t",v[i]);
           
                         }
      
          
      getch();
      }
