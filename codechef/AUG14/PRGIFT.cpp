#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define si(a) scanf("%d",&a)
#define sf(a) scanf("%f",&a)
#define sc(a) scanf("%c",&a)
#define ss(a) scanf("%s",&a)
#define f(i,n) for(i=0;i<n;i++)
#define p(a) printf(a);
#define pi(a) printf("%d",a)
#define pf(a) printf("%f",a)
#define pc(a) printf("%c",a)
#define ps(a) printf("%s",a)

int main()
{

    int T,n,k,i,A[51],ev,b;
    si(T);

    while(T--)
    {
        si(n);si(k);ev=0;
        f(i,n)
        {
            si(A[i]);
            if((A[i]%2==0))ev++;
        }

        if(ev>=k)
        printf("YES\n");
        else printf("NO\n");

    }

}
