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

    int i,T,N,A[1000],B[1000];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        for(i=0;i<N;i++)
            scanf("%d",&A[i]);

        mergesort(A,0,N-1);

        int c=0;B[0]=0;
        for(i=0;i<N;i++)
        {
            if(A[i]==c)
            B[c]++;
            else
            {
                c++;i--;
                B[c]=0;

            }

        }


        bool res=true;

        for(i=0;i<(N/2);i++)
        if(B[i]+B[N-i-1]!=2)
            res=false;

        if(N%2!=0)
            if(B[N/2]!=1) res=false;

        if(res==true)
            printf("YES\n");
        else
            printf("NO\n");


    }


}
