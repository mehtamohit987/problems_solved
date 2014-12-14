#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
long long a,m,res;
char b[251];
void csquare()
{
    int i,n;
    res=1;
    scanf("%lld",&a);
    scanf("%s",&b);
    scanf("%lld",&m);
    n=strlen(b);
    i=n-1;
    while(i>=0)
    {
        if(b[i]=='1')
            res=(res*a)%m;
        if(b[i]=='2')
            res=(((res*a)%m)*a)%m;
        a=(((a*a)%m)*a)%m;
        i--;
    }
    res=res%m;
    printf("%lld\n",res);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        csquare();
        t--;
    }

}
