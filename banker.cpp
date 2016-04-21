 #include<stdio.h>
//global variables.
int Pcurr[3][3]; //max of 3 processes, 3 resources

int Pmax[3][3];
int avl[]={6,4,7};
int avltemp[]={6,4,7};
int maxres[]={6,4,7};
int running[3]; //Which processes are running (this appears to be used as a

boolean)
int i,j, safe=0,count=0;;
main()
{for(i=0;i<3;i++)
running[i]=1; //set all the processes to "running" = true (1)
int ch;
initresources();
while(1) //loop forever
{system("clear"); //calls a command prompt command, this looks like unix clear
screen to manage the output.
count=0;
//extremely excessive logic to determing that you have a process
running.

//should be if(!(running[0]+running[1]+running[2])) to replace 8
lines here for(i=0;i<3;i++)
{if(running[i])
 count++;
}if(count==0)
{printf("\n\n\n\n\nCongratulations! We have completed execution of all processes

successfully without any deadlock!");
getchar();
break;
}//end excessive logic section, begin menu section.

//The following is just a menu for the user to see what is going one at each
iteration.
else
{printf("\nDeadlock Prevention using Banker's Algorithm:\n");
viewresources();
printf("\n1. Request resource(s) for a process\n");
printf("\n2. View Allocated Resources\n"); 


printf("\n3. Exit\n");
printf("\nEnter your choice:\n");
scanf("%d",&ch);
if(ch==1)
{requestresource();
getchar();

}else if(ch==2)
{viewresources();
getchar();
}else if(ch==3)
break;
else 
 printf("\nInvalid Choice, please try again!\n");
}}}//initialization routine, this defines the current "problem" to be tested.
//I do not really understand what values go where.
initresources()
{//for each process, get curr. requirement and max. requirement->check if max.

req....
Pmax[0][0]=3; Pcurr[0][0]=1; avl[0]=3;
Pmax[0][1]=3; Pcurr[0][1]=2; avl[1]=1;
Pmax[0][2]=2; Pcurr[0][2]=2; avl[2]=1;
Pmax[1][0]=1; Pcurr[1][0]=1;
Pmax[1][1]=2; Pcurr[1][1]=0;
Pmax[1][2]=3; Pcurr[1][2]=3;
Pmax[2][0]=1; Pcurr[2][0]=1;
Pmax[2][1]=1; Pcurr[2][1]=1;
Pmax[2][2]=5; Pcurr[2][2]=1;
}
 {//check if it is allocated, will it go to deadlock

int proc, res[3];
printf("\nFor which Process, you need resources?(1-3):\n");
scanf("%d",&proc);
proc--;
if(running[proc])
{printf("\nCurrently this process needs the foll. resources:\n");

printf("R1\tR2\tR3\n");
for(i=0;i<3;i++)
printf("%d\t",Pmax[proc][i]-Pcurr[proc][i]);
for(i=0;i<3;i++)
{loop_3:

printf("\nEnter no. of Resource %d to Allocate to Process %d:\n",i+1,proc+1);
scanf("%d",&res[i]);
if((res[i]>(Pmax[proc][i]-Pcurr[proc][i]))||(res[i]>avl[i]))
{printf("\nInvalid Value!, try again!");
goto loop_3;
}}getchar();
if(allocate(proc,res))
{printf("\nResources successfully allocated.\n");

if(checkcompletion(proc))
printf("\nProcess %d has completed its execution and its resources have been
released.\n",proc+1);
}else
printf("\nResouces cannot be allocated as it may lead to Deadlock!\n");

}else
{printf("\nInvalid Process no.\n");
getchar();
}}///allocate a resource to a process, used in the above routine. T

//his is just management code to mark the appropriate stuff when an allocation is
allowed.
int allocate(int proc, int res[3])
{for(i=0;i<3;i++)
{Pcurr[proc][i]+=res[i];
avl[i]-=res[i];
}if(!checksafe())
{ 