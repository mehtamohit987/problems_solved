#include<iostream>
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
    int T,N,M,K,i,j,sum,quo,rem,ans;
    char S[50];
    int num[50];
    scanf("%d",&T);
    while(T>0)
    {
        scanf("%d",&N);
        scanf("%d",&M);
        scanf("%d",&K);
				 sum=0;	
        for(i=0;i<N;i++)
        {
            num[i]=0;
         scanf("%s",&S);
            for(j=0;j<M;j++)
                if(S[j]=='*')
                		num[i]++;
        
        			sum+=num[i];
        }
				 
       mergesort(num,0,N-1);
				
				 
				 quo=K/N;
				 rem=K%N;
				 if(quo%2==0)
				 {
				 		ans=sum;
				 		for(i=0;i<rem;i++)
					 		ans+=(M-2*num[i]);
				 }
				 else
				 {
				 		ans=N*M-sum;
				 		for(i=0;i<rem;i++)
					 		ans+=(2*num[N-1-i]-M);
				 }
				 	
				 printf("%d\n",ans);
        T--;
    }
}
