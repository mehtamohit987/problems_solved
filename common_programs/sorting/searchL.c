/*		
	Mohit Mehta
	2K11/SE/042
    Program 15: Write a program to implement linear search.
*/
#include<stdio.h>
#include<conio.h>
#define MAX 25
int A[MAX];
int m=0;

void getdata();
void display();
void linear_search();

int main()
{
	int ans,flag=0;
	system("cls");
	getdata();
    linear_search();  
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

void linear_search()
{    int ind[25],i,j=0,v;
     printf("\nEnter the element you  want to search : ");
     scanf("%d",&v);
     
     for(i=0;i<m;i++)
       if(A[i]==v)
         ind[j++]=i;
     printf("\nThe given element was found %d times at the positions :",j);
     
     for(i=0;i<j-1;i++)
          printf("%d and",ind[i]+1);
     
     printf(" %d",ind[j-1]+1);
}    //end of linear_search function
