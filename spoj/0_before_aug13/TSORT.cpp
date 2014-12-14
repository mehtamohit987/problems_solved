#include<iostream>
#include<cstdio>
using namespace std;
void merge(int A[],int low, int middle, int high)
{
    int i,j,k;
	int *B;
	B=new int[high-low+1];
    i=low;
    j=middle+1;
    k=0;
    while((i<=middle)&&(j<=high))
    {
        if(A[i]<=A[j])
        {
            B[k]=A[i];
            i++;k++;
        }
        else
        {
            B[k]=A[j];
            j++;k++;
        }
    }

    while(i<=middle)
    {
        B[k]=A[i];
        i++;k++;
    }
    while(j<=high)
    {
        B[k]=A[j];
        j++;k++;
    }


    for(k=0;k<(high-low+1);k++)
        A[low+k]=B[k];

    delete []B;

}
void mergesort(int A[],int low, int high)
{
    int middle=0;
    if(low<high)
    {
        middle=(low+high)/2;
        mergesort(A,low,middle);
        mergesort(A,middle+1,high);
        merge(A,low,middle,high);
    }
}
int main()
{
    int i=0;
    int t,*N;
    scanf("%d",&t);


	N=new int[t];

    for(i=0;i<t;i++)
    scanf("%d",(N+i));

    mergesort(N,0,t-1);

    for(i=0;i<t;i++)
        printf("%d\n",*(N+i));

    delete []N;
}
