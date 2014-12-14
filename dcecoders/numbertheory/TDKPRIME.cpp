#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<bool> A(10000000,true);
long long P[500000];
void build_sieve()
{
    int count=0;
    long long i,j;
    P[++count]=2;
    for(i=4;i<=(long long)(10000000);i=(long long)(i+2))
        A.at(i)=false;

    P[++count]=3;
    for(i=6;i<=(long long)(10000000);i=(long long)(i+3))
        A.at(i)=false;

    for(i=5;(long long)(i*i)<=(long long)(10000000);)
    {
        if(A.at(i)==true)
        {
            P[++count]=(long long)(i);

            for(j=(long long)(i*i);j<=(long long)(10000000);j=(long long)(j+2*i))
                A.at(i)=false;
        }
        if(count>500000)
            break;

        if(i%6==2)
            i=(long long)(i+4);
        else
            i=(long long)(i+2);

    }

}
void nth_prime(int K)
{
    printf("%lld\n",P[K-1]);
}
int main()
{
    int Q,K;
    bool flag=false;
    scanf("%d",&Q);
    while(Q>0)
    {
        scanf("%d",&K);
        if(flag==false)
            build_sieve();

        flag=true;
        nth_prime(K);
        Q--;
    }
}
