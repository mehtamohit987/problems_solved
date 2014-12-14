/*		
	Mohit Mehta
	2K11/SE/042
    Program 21: Write a program to implement quick sort.
*/
#include<stdio.h>
#include<conio.h>
#define MAX 25
void display(int arr[],int n);
void quick_sort(int arr[],int left,int right);
int partition(int arr[],int left,int right);

int main()
{
    int arr[MAX];
    int n=0,i=0;
    
    
	system("cls");
	
    
	do
	{
	    printf("Enter the number of values you want to enter in the array : ");
	    scanf("%d",&n);

	    if(n>MAX||n<1)
		printf("Oopss..\nEither you enterd number greater than the maximum number of variables for the array or less than one \nTry again...\n");

	}while(n>MAX||n<1);

	printf("Enter the array elements :\nPosition\t:\tValue\n");

	for(i=0;i<n;i++)
	{
	    printf("%d\t\t:\t",i+1);
	    scanf("%d",&arr[i]);
	}
	
 
    display(arr,n);  
    quick_sort(arr,0,n-1);
 
    getch();

}   //end of main function

void display(int arr[],int n)
{	int i;
	printf("\n\nDisplaying the array :\n");
	printf("Position\t:\tValue\n");
	for(i=0;i<n;i++)
	    printf("%d\t\t:\t%d\n",(i+1),arr[i]);

}   //end of display function

void quick_sort(int arr[],int left, int right)
{
     int index=partition(arr,left,right);
     
     if(left<index-1)
     {
        //sort last half
        quick_sort(arr,left,index-1);
     }
     if(index<right)
     {
        //sort right half
        quick_sort(arr,index,right);
     }

}

int partition(int arr[],int left,int right)
{
    int temp,pivot=arr[(left+right)/2]; //Pick pivot point
    while(left<=right)
    {
       //Find element on left that should be on right
       while(arr[left]<pivot)
       left++;
       //Find element on right that should be on left
       while(arr[right]>pivot)
       right++;
       //Swap elements, and move left and right indices
       if(left<=right)
       {
          temp=arr[left];
          arr[left]=arr[right];
          arr[right]=temp;
          left++;
          right--;
       }
    }
 
    return left;
}  
          
        
