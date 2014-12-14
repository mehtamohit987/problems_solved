#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,num;
    bool *A;
    long long k,x,m;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%lld",&k);
        x=0;
        i=num=0;
        while(k>x)
            x=x+(long long)(pow(2.0,++i));

        num=i;
        A=new bool[num];
        x=x-(long long)(pow(2.0,i));

        k=k-x;

        for(i=0;i<num;i++)
        {
            m=(k-1)%(long long)(pow(2.0,i+1));
            if(m>=(long long)(pow(2.0,i)))
            A[num-i-1]=true;
            else
            A[num-i-1]=false;
        }

        for(i=0;i<num;i++)
            if(A[i]==false)
                printf("5");
            else
                printf("6");

        printf("\n");
        n--;
    }
}
