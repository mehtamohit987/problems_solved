/*		
	Mohit Mehta
	2K11/SE/042
    Program 20: Write a program to implement merge sort.
*/
#include <stdio.h>
#include<conio.h>

#define MAX 100
 
void mergesort(int a[], int low, int high,int n);
void merge(int array[],int low, int middle, int high,int n);
int main()
{
    int array[MAX],n;
    int i = 0;
 
    /* reading the elements form the users*/
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("Enter the elements to be sorted:\n");
    for(i = 0; i < n; i++ )
     scanf("%d",&array[i]);
 
    /* array before mergesort */
    printf("Before sorting:");
    for(i = 0; i < n; i++)
    printf(" %d", array[i]);
 
    printf("\n");
 
    mergesort(array, 0, n - 1,n);
 
    /* array after mergesort */
    printf("After Mergesort:");
    for(i = 0; i < n; i++)
    printf(" %d", array[i]);
 
    printf("\n");
    getch();
    return 0;
}
 
void mergesort(int array[], int low, int high,int n)
{
     int middle;
    if(low<high)
    {
                middle=(low+high)/2;
                mergesort(array,low,middle,n); //Sort left half
                mergesort(array,middle+1,high,n); //Sort right half
                merge(array,low,middle,high,n);  //Merge them
    }
}

void merge(int array[],int low, int middle, int high,int n)
{
     int helper[n],i;
     int helperLeft,helperRight,current,remaining;
     //Copy both halves into a helper array
     for(i=low;i<=high;i++)
     {
             helper[i]=array[i];
     }
     
     helperLeft=low;
     helperRight=middle+1;
     current=low;
     
     /*Iterate through the helper array. Compare the left and right half, copying back
     the smaller element from the two halves into the orignal array.*/
     
     while(helperLeft<=middle&&helperRight<=high)
     {
         if(helper[helperLeft]<=helper[helperRight])
         {
             array[current]=helper[helperLeft];
             helperRight++;
         }
         else
         {
             //If right element is smaller than left element
             array[current]=helper[helperRight];
             helperRight++;
         }
         current++;
     }
     
     //Copy the rest of the left side of the array into the target array             
     
     remaining=middle-helperLeft;
     for(i=0;i<=remaining;i++)
     {
             array[current+i]=helper[helperLeft+1];
     }
}
