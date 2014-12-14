/*		
	Mohit Mehta
	2K11/SE/042
    Program 16: Write a program to implement binary search.
*/
#include<stdio.h>
#include<conio.h>
#define MAX 25
int A[MAX];
int m=0;

void getdata();
void display();
void binary_search();

int main()
{

	system("cls");
	getdata();
    binary_search();  
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

void binary_search()
{    int flag1=0,flag2=0,i,v,ind=-1,beg,last,mid;
     
     //ascending order sorted array check
     for(i=0;i<m-1;i++)
     {
       if(A[i]>A[i+1])
       flag1=1;
     } 
     //descending order sorted array check
     for(i=0;i<m-1;i++)
     {
       if(A[i]<A[i+1])
       flag2=1;
     } 
     
     if(flag1!=1)
     {
           printf("\nThe array you entered is in Ascending Order.");
           printf("\nEnter the element you  want to search : ");
           scanf("%d",&v);
           beg=0;last=m-1;
           while(beg<=last) 
           { mid=(beg+last)/2;
             if(A[mid]==v)
             { ind=mid;break;}
             else if(A[mid]<v)
              beg=mid+1;
             else last=mid-1;   
           }

           if(ind==-1)
            printf("\nThe given element was not found.");
            else
             printf("\nThe element was found at the position : %d",ind+1);
     
     
     }   
     if(flag2!=1)
     {
           printf("\nEnter the element you  want to search : ");
           scanf("%d",&v);
           beg=0;last=m-1;
           while(beg<=last) 
           { mid=(beg+last)/2;
             if(A[mid]==v)
             { ind=mid; break; }
             else if(A[mid]>v)
              beg=mid+1;
             else last=mid-1;   
           }

           if(ind==-1)
            printf("\nThe given element was not found.");
           else
            printf("\nThe element was found at the position : %d",ind+1); 
     
     }
     if(flag1==1&&flag2==1)
     {
      printf("\nThe array you provided isn't sorted in either ascending or descending order.");
      printf("\nSo binary search cannot proceed.");
     }
     
}    //end of binary_search function
