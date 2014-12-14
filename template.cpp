#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
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
int l=(int)pow(10,7);
vector<int> stor(l,0);
int m=(pow(10,9)+7);

/*int factU(int n,int a,int b,int c)
{
    int i,ans=1;
    for(i=a+1;i<=n;i++)

    ans=(ans*i)% m;


    if(b>c)
    {
        int temp=b;
        b=c;
        c=temp;
    }

    for(i=1;i<=b;i++)
    ans/=(i*i);

    for(;i<=c;i++)
    ans/=i;

    return ans;


}*/
int fact(int n)
{
    if(n<=1)
    return 1;
    if(n<l&&stor[n]!=0)
    return stor[n];

    return ((n%m)*fact(n-1))%m;
}



int main()
{

    int T,N,s,a,b,c,ans;
    si(T);

    while(T--)
    {
        si(N);s=0;
        for(a=1;a<=N-2;a++)
        for(b=1;b<=N-a-1;b++)
        {
            c=N-a-b;
           // ans=factU(N,a,b,c);

            ans=fact(N)/fact(a)/fact(b)/fact(c);
            s=(s+ans)%m;
        }

        cout<<s<<"\n";
    }

}
