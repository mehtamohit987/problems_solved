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
int sumx(int n)
{
    if(n%2==0)
    {
        return (n/2*(2+(n/2-1)*4))/2-(n/2*(6+(n/2-1)*4))/2;
    }
    else
        return ((n+1)/2*(2+((n+1)/2-1)*4))/2-((n/2)*(6+(n/2-1)*4))/2;
}
int sumy(int n)
{
   if(n%2==0)
    {
        return (n/2*(4+(n/2-1)*4))/2-(n/2*(8+(n/2-1)*4))/2;
    }
    else
        return ((n+1)/2*(4+((n+1)/2-1)*4))/2-((n/2)*(8+(n/2-1)*4))/2;
}

int main()
{

    int T,a,b,c,d,c1,d1,k,flag;
    si(T);

    while(T--)
    {
        si(a);
        si(b);
        c=d=k=flag=0;
        while((a>=0?c<=a:c>=a)||(b>=0?d<=b:d>=b))
        {
            c1=c;d1=d;

            if(k%2==1)c=sumx((k+1)/2);
            else d=sumy(k/2);


            if(a>=c1&&a<=c&&b>=d1&&b<=d)
            {flag=1;break;}


            k++;
        }

        if(flag==1)
        printf("YES\n");
        else
        printf("NO\n");

    }

}
