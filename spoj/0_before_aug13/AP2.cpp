#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long long n,a1,d,a3,an_2,sum;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%lld",&a3);
        scanf("%lld",&an_2);
        scanf("%lld",&sum);


        n=2*sum/(a3+an_2);
        printf("%lld\n",n);

        d=(an_2-a3)/(n-5);
        a1=((a3+an_2)-(n-1)*d)/2;

        for(int i=0;i<n;i++)
            printf("%lld ",a1+i*d);
        printf("\n");
        t--;
    }

}
