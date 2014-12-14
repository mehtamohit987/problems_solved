/*
	 Mohit Mehta
	 2k11/SE/042
     Program 7 : Write a program to implement a stack as a linked list
*/
#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int value;
	struct node *next;
} *top;

typedef struct node node;


void push(int v, int *f);
int pop(int *f);
int showtop(int *f);
void display();

node * new_node(int v, int *f) /*Returns newly created node*/
{
	node *ele = (node *)malloc(sizeof(node));
	if(ele)
	{
		*f=1;
		ele->value = v;
		ele->next=NULL;
		return ele;
	};
	
	return NULL; /*Returns NULL if memory full*/
}
 
int main()
{
	top=NULL;
	int f=0;		/*Flag to return process status*/
	int c,d,v;
	printf("Options ::\n1.Push\n2.Pop\n3.View top element\n4.Display Stack\n");

	
	do
	{
        label:
		printf("Enter choice : ");
		scanf("%d",&c);
		switch(c)
		{
		
			case 1 : 	printf("Enter element : ");
						scanf("%d",&v);
						push(v,&f);
						if(!f) printf("Overflow !!\n");
						break;

			case 2 : 	v=pop(&f);
						if(f) printf("Deleted Element: %d\n",v);
						else printf("Underflow !!\n");
						break;

			case 3 : 	v=showtop(&f);
						if(f) printf("Top Element : %d\n",v);
						else printf("Empty stack !!\n");
						break;
					
			case 4 :    display();
                        break;
            
            default: printf("\nInvalid Entry..Please try again..\n\n");
                     goto label;
                     
   
		};
		printf("\n");
		
		printf("Do you want to again perform any of the tasks, if yes press '1' else press any other key : ");
		scanf("%d",&d);
		
	}while(d==1);

    getch();


}
	
	
void push(int v, int *f)
{
	node * ele = new_node(v,f); /*Inserts new node at top*/ 
	if(f){ ele->next=top;
	       top=ele;
           }
}
int pop(int *f)	/*Removes top element*/
{
	if(!top)
	{
		*f=0;
		return 0;
	}
	
	node * ele = top;
	top=top->next;		/*Sets next element as top*/
	int v = ele->value;
	free(ele);			/*Deletes previous top element*/
	*f=1;
	return v;
}

int showtop(int *f)	/*Displays top element*/
{
	if(top)
	{
		*f=1;
		return top->value;
	}
	*f=0;
	return 0;
}

void display()             //Displays entire list
{
     if(top!=NULL)
     {
        node* ele=top;
        while(ele!=NULL)
        {
           printf("%d\n",ele->value);
           ele=ele->next;
        }
     }
     else
     printf("\nEmpty Stack!!\n");
}
