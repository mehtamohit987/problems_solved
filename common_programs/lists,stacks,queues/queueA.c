/*
  Mohit Mehta
  2K11/SE/042
  Program 12: Write a program to implement a queue as an array containing integer values
*/

#include<stdio.h>
#include<conio.h>
#define max 20
int queue[max];
int front=-1,rear=-1;
void insert(int data)
{
	if(rear==max-1)
	printf("\nOverflow!!");

	else
	{
		if(front==-1)
			front=rear=0;

		else
			rear++;
			queue[rear]=data;
			printf("\nInserted !!\n");
	}
}


void del_queue()
{
	if(front==-1)
		printf("\nUnderflow!!");

	else
	{   
        printf("\n The element that is to be deleted is : %d",queue[front]);
        if(front==rear)
			front=rear=-1;
		else
			front=front+1;

        printf("\n Deleted from queue!!  ");
		
	}
}



void display()
{
     int i;
	for(i=front;i<=rear;i++)
	 printf("%d\n",queue[i]);
}

int main()
{
	
	int c,d,ans;
    
    system("cls");

	printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
	printf("          OPERATIONS PEREFORMED \n");
	printf("              ON A QUEUE        \n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");

	do
	{

		printf("               MENU\n");
		printf("             1.  INSERT\n");
		printf("             2.  DELETE \n");
		printf("	     3.	DISPLAY\n");
		printf("\nEnter your choice:");
		scanf("%d",&c);

		switch(c)
		{
			case 1: {
                     printf("Data to be inserted: ");
					 scanf("%d",&d);
                     insert(d);
					 break;
				}

			case 2: {
					 del_queue();
					 break;
				}

			case 3: {
					 printf("\nThe present queue is : \n");
					 display();
					 break;

				}

			default:        printf("\nInvalid Option!!\n");


		}

		printf("\n\nDo you want to again perform these tasks. If yes, press  1 else any other key: ");
		scanf("%d",&ans);

	}while(ans==1);


getch();

}
