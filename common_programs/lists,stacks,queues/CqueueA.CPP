	 /*
	 name- mohit mehta

	 class-12th A

	 machine number-11

	 program no.-18

	 program info.- to write a program to implement a circular queue as an array containing integer values


	 */


#include<iostream.h>
#include<conio.h>

const max=10;

class queue
{
	int cqueue[max];
	int front,rear;

	public:
	queue()
	{
	  front=-1;
	  rear=-1;
	}
	void insert(int data);
	void del_queue();
	void display_queue();

};
void queue::insert(int data)
{
	if((front==rear+1)||((front==-1)&&(rear==max-1)))
	cout<<"Overflow!!"<<endl;

	else
	{
		if(front==-1)
		    {	front=0;
			rear==0;
		     }
		else
		{
		 rear=rear+1;
		}

		       cqueue[rear]=data;

	}
}


void queue::del_queue()
{
	int data;
	if(front==-1)
		cout<<"Underflow!!"<<endl;

	else
	{

		if(front==rear)
		{
			front=-1;
		}
		else
		{
			if(front==max-1)
				front=0;

			else
				front=front+1;

	}

}




void queue::display()
{
	for(int i=front;i!=rear;i++)
	{
		cout<<cqueue[i]<<endl;
		if(i==max-1)
		i=0;

	}

      cout<<cqueue[rear];
      cout<<endl;

}

void main()
{
	clrscr();
	queue q;
	int c;
	char ans;

	cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
	cout<<"          OPERATIONS PEREFORMED "<<endl;
	cout<<"           ON A CIRCULAR QUEUE        "<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

	do
	{

		cout<<"               MENU"<<endl;
		cout<<"             1.  INSERT"<<endl;
		cout<<"             2.  DELETE "<<endl;
		cout<<"	     3.	DISPLAY"<<endl;
		cout<<"\nEnter your choice:";
		cin>>c;

		switch(c)
		{
			case 1: {	cout<<"Data to be inserted: ";
					int d;
					cin>>d;
					q.insert(d);
					cout<<"\nInserted !!"<<endl;
					break;
				}

			case 2: {
					q.del_queue();
					cout<<"\n Deleted from stack!!  ";
					break;
				}

			case 3: {
					cout<<"\nThe present circular queue is : "<<endl;
					q.display();
					break;

				}

			default:        cout<<"\nInvalid Option!!"<<endl;


		}

		cout<<"Do you want to again perform these tasks (y/n)? : ";
		cin>>ans;

	}while(ans!='n');


getch();

}