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
#define pi(a) printf("%d",a)
#define pf(a) printf("%f",a)
#define pc(a) printf("%c",a)
#define ps(a) printf("%s",a)

int main()
{

    int T,n,dig,carry,x;

    si(T);

    while(T--)
    {
        si(n);

        int ans[1000]={0};
        ans[0]=1;dig=1;carry=0;

        for(int i=1;i<=n;i++)
        {


            for(int j=1;j<=dig;j++)
            {

                x=ans[j-1]*i+carry;
                ans[j-1]=x%10;
                carry=x/10;
            }

            while(carry)
            {
                dig++;

                ans[dig-1]=carry%10;
                carry/=10;
            }

        }

        for(int i=dig;i>=1;i--)
        pi(ans[i-1]);

        printf("\n");
    }

}
