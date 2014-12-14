#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define si(a) scanf("%d",&a)
#define sf(a) scanf("%f",&a)
#define sc(a) scanf("%c",&a)
#define ss(a) scanf("%s",&a)
#define sll(a) scanf("%lld",&a)
#define f(i,n) for(i=0;i<n;i++)
#define pi(a) printf("%d",a)
#define pf(a) printf("%f",a)
#define pc(a) printf("%c",a)
#define ps(a) printf("%s",a)
#define pll(a) printf("%lld",a)

int main()
{

    long long T,i,N,q;
    sll(N);
    sll(T);


    while(T--)
    {

        sll(q);
        if(q<N+2)
        printf("0");
        else if(q>=N+2&&q<=2*N+1)
        pll(q-N-1);
        else if(q>=2*N+2&&q<=3*N)
        pll(3*N+1-q);
        else
        printf("0");

        printf("\n");

    }

}
