#include<iostream>
using namespace std;
int main()
{
    int N,i,*arr,*cur,sum,share,ans,withdrawn;
    scanf("%d",&N);
    while(N!=-1)
    {
        arr=new int[N];
        sum=share=ans=withdrawn=0;
        for(i=0;i<N;i++)
        {
            scanf("%d",arr+i);
            sum+=*(arr+i);
        }

        if(sum%N==0)
        {
            share=sum/N;
            for(i=0;i<N;i++)
            {
                if(*(arr+i)<share)
                {
                    withdrawn=share-*(arr+i);
                    ans=ans+withdrawn;
                    *(arr+i)=share;
                }
                else
                {
                    withdrawn=withdrawn-(*(arr+i)-share);
                    *(arr+i)=share;
                }
            }

            printf("%d\n",ans);

        }
        else
            printf("-1\n");

        scanf("%d",&N);
    }
}
