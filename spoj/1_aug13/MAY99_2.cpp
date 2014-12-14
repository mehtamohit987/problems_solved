#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,i,num;
    char* A;
    long long n,x,m;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%lld",&n);
        x=0;
        i=num=0;
        while(n>x)
            x=x+(long long)(pow(5.0,++i));

        num=i;
        A=new char[num];
        x=x-(long long)(pow(5.0,i));

        n=n-x;

        for(i=0;i<num;i++)
        {
            m=(n-1)%(long long)(pow(5.0,i+1));
            if(m<(long long)(pow(5.0,i)))
            A[num-i-1]='m';
            else if(m>=1*(long long)(pow(5.0,i))&&m<2*(long long)(pow(5.0,i)))
            A[num-i-1]='a';
            else if(m>=2*(long long)(pow(5.0,i))&&m<3*(long long)(pow(5.0,i)))
            A[num-i-1]='n';
            else if(m>=3*(long long)(pow(5.0,i))&&m<4*(long long)(pow(5.0,i)))
            A[num-i-1]='k';
            else if(m>=4*(long long)(pow(5.0,i))&&m<5*(long long)(pow(5.0,i)))
            A[num-i-1]='u';
        }

        for(i=0;i<num;i++)
            printf("%c",A[i]);

        printf("\n");
        t--;
    }
}
