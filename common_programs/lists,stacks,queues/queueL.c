/*
	 Mohit Mehta
	 2k11/SE/042
     Program 11 : Write a program to implement a queue as a linked list
*/
#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int value;
	struct node *next;
} *front,*rear;

typedef struct node node;


void insert(int v, int *f);
int delete(int *f);
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
	front=rear=NULL;
	int f=0;		/*Flag to return process status*/
	int c,d,v;
	printf("Options ::\n1.Insert\n2.Delete\n3.Display Queue\n");

	
	do
	{
        label:
		printf("Enter choice : ");
		scanf("%d",&c);
		switch(c)
		{
		
			case 1 : 	printf("Enter element : ");
						scanf("%d",&v);
						insert(v,&f);
						if(!f) printf("Overflow !!\n");
						break;

			case 2 : 	v=delete(&f);
						if(f) printf("Deleted Element: %d\n",v);
						else printf("Underflow !!\n");
						break;

			case 3 : 	display();
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
	
	
void insert(int v, int *f)
{
	node * ele = new_node(v,f); /*Inserts new node at top*/ 
	if(f){
          if(front==NULL)
           front=rear=ele;
          else
           rear->next=ele;
           rear=ele;
          }
}

int delete(int *f)	/*Removes top element*/
{
	if(!front)
	{
		*f=0;
		return 0;
	}
	
	node * ele = front;
	if(front==rear)
	{
	 front=rear=NULL;	
	 int v = ele->value;
     free(ele);			
	 *f=1;
	 return v;
    }
    else
    {
     front=front->next;	
	 int v = ele->value;
     free(ele);			
	 *f=1;
	 return v;
    }
        
}

void display()     
{
     if(front!=NULL)
     {
        node* ele=front;
        while(ele!=NULL)
        {
           printf("%d\n",ele->value);
           ele=ele->next;
        }
     }
     else
     printf("\nEmpty Queue!!\n");
}
