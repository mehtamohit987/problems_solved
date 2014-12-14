/*		
	Mohit Mehta
	2K11/SE/042
    Program 19: Write a program to implement insertion sort.
*/
#include<stdio.h>
#include<conio.h>
#define MAX 25
int A[MAX];
int m=0;

void getdata();
void display();
void insertion_sort();

int main()
{
	system("cls");
	getdata();
    insertion_sort();
    display();  
    getch();

}   //end of main function

void getdata()
{
	int i=0;
	do
	{
	    printf("Enter the number of values you want to enter in the array : ");
	    scanf("%d",&m);

	    if(m>MAX||m<1)
		printf("Oopss..\nEither you enterd number greater than the maximum number of variables for the array or less than one \nTry again...\n");

	}while(m>MAX||m<1);

	printf("Enter the array elements :\nPosition\t:\tValue\n");

	for(i=0;i<m;i++)
	{
	    printf("%d\t\t:\t",i+1);
	    scanf("%d",&A[i]);
	}
	
}   //end of getdata function

void display()
{	int i;
	printf("\n\nDisplaying the array :\n");
	printf("Position\t:\tValue\n");
	for(i=0;i<m;i++)
	    printf("%d\t\t:\t%d\n",(i+1),A[i]);

}   //end of display function

void insertion_sort()
{   
    int t,i,j;
    for(i=1;i<=m-1;i++)
    {
       t=A[i];
       for(j=i-1;j>=0;j--)
       {
          if(t<A[j])
            A[j+1]=A[j];
          else
            break;
       }
       A[j+1]=t;
       }
       
}    //end of insertion_sort function
