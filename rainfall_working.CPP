#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct sort
{
	  char name[20];
	  int wa;
};

struct tree
{
	   char name[20];
	   int wa;
	   struct tree *left;
	   struct tree *right;
};

int index;

int binary_search(sort s[10],char n[20],int low,int max)
{
	 int i;
	 i=(low+max)/2;
	 if(strcmp(s[i].name ,n)==0)
	 {
						 index=i;
						 return (s[i].wa);
	 }

	 else
	 {
			 if(strcmp(n,s[i].name)<0)
								  binary_search(s,n,0,i);
			 else
								  binary_search(s,n,i+1,max);
	 }
}

struct tree *create(sort s[10],char n[20],int no)
{
	   int temp;
	   temp=index;
	   struct tree *root,*p;
	   fflush(stdin);
	   root=(struct tree*)malloc(sizeof(struct tree));
	   strcpy(root->name,s[index].name);
	   root->wa=s[index].wa;
	   root->left=NULL;
	   root->right=NULL;
	   p=root;

	   while(temp!=0)
	   {
					 temp--;
					 p->left=(struct tree*)malloc(sizeof(struct tree));
					 p=p->left;
					 strcpy(p->name,s[temp].name);
					 p->wa=s[temp].wa;
					 p->left=NULL;
					 p->right=NULL;
	   }
	   p=root;
	   temp=index;

	   while(temp!=(no-1))
	   {
					 temp++;
					 p->right=(struct tree*)malloc(sizeof(struct tree));
					 p=p->right;
					 p->wa=s[temp].wa;
					 strcpy(p->name,s[temp].name);
					 p->left=NULL;
					 p->right=NULL;
	   }
	   return root;
}

void preorder(struct tree *p)
{
	 if(p!=NULL)
	 {
				printf("\n%s->%d",p->name,p->wa);
				preorder(p->left);
				preorder(p->right);
	 }
}

main()
{
	  int i,no;
	  char n[20];
	  struct sort s[10];
	  struct tree *root;

	  printf("Enter the no of cities whose record needed to be kept:");
	  scanf("%d",&no);

	  for(i=0;i<no;i++)
	  {
					  printf("\nEnter city name #%d:",(i+1));
					  scanf("%s",&s[i].name);
					  printf("Enter its rainfall (in mms):");
					  scanf("%d",&s[i].wa);
	  }

	  printf("\nEnter the city to be searched:");
	  scanf("%s",&n);

	  printf("\nCity is found having rainfall %d mms",binary_search(s,n,0,no));
	 
	  root=create(s,n,no);
	  preorder(root);
	  getch();
}
