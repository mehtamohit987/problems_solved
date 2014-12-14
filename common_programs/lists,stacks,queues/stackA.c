/*
	 Mohit Mehta
	 2k11/SE/042
     Program 6 : Write a program to implement a stack as an array containing integer values
*/
#include<stdio.h>
#include<conio.h>
#define max 100
int Stack[max];
int top=-1;

void push(int data)                 // To insert an elementin the stack
{
	if(top==max-1)
	printf("\nOverflow..Process Stopped...\n");
	else
	{
	 Stack[++top]=data;
     printf("\nPushed !!\n");
    }
}
void pop()                           //to delete an element from the stack
{
	int data=0;
	if(top==-1)
		printf("\nUnderflow...");
	else
	{
    	printf("\nDeleted element is : %d",Stack[top--]);
        printf("\nData is popped.");
     }

}

void display()		     //to display the stack
{   int i;
	for(i=top;i>=0;i--)
	printf("%d\n",Stack[i]);
}

int main()
{
	int d,ch,ans;
    system("cls");
	printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
	printf("          OPERATIONS PEREFORMED \n");
	printf("              ON A STACK        \n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");

	do
	{

		printf("               MENU\n");
		printf("             1.  PUSH\n");
		printf("             2.  POP \n");
		printf("	     3.	DISPLAY\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: {
                    printf("\nEnter the Data to be pushed: ");
					scanf("%d",&d);
					push(d);
					break;
				}

			case 2:{
                    pop();
                    break;
				}

			case 3: {
					printf("\nThe present stack is : \n");
					display();
					break;

				}

			default:  {      printf("\nInvalid Option!!\n");  }


		}

        printf("\n\nDo you want to again perform these tasks. If yes, press  1 else any other key: ");
		scanf("%d",&ans);

	}while(ans==1);


getch();

}
