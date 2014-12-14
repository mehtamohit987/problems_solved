#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define my long long
int main()
{
    my t,n,m,i,j;
    bool *A;
    scanf("%lld",&t);
    while(t>0)
    {
        scanf("%lld",&n);
        scanf("%lld",&m);

        A=new bool[(int)sqrt(m)/2];
        A[0]=true;  //for 2
        for(i=1;2*i+1<=sqrt(m) ; i++)    //for odd numbers starting from 3 till m
            A[i]=true;

        for(i=1;2*i+1<=(my)(sqrt(sqrt(m)));i=i+1)
            if(A[i]==true)
            for(j=(my)((2*i+1)*(2*i+1)/2);j<=m;j=j+(2*i+1))
                A[j]=false;

        for(i=(my)(n/2);i<=(my)(m/2);i++)
            if(i==0)
                printf("%lld\n",(my)(2));
            else if(A[i]==true)
                printf("%lld\n",(my)(2*i+1));
        t--;cout<<"\n";
    }

}
