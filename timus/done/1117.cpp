#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<cmath>
#include<cmath>
#include<map>
#include<algorithm>
using namespace std;
vector<long long> G;

long long fun(int b)
{
    if(b<=1)return 0;
    int x=log2(b);
    if(pow(2,x)==b)
    return G[x-1]+(x-1);
    return fun(pow(2,x))+(x-1) + fun(b-pow(2,x));
}
int main()
{
    int a,b,n,t;
    //    freopen("input.txt","r",stdin);
    cin>>a>>b;
    if(b<a){t=a;a=b;b=t;}

    n=log2(b);
    G=vector<long long>(n+1,0);

    G[0]=0;
    for(int i=1;i<=n;i++)
    G[i]=2*G[i-1]+2*(i-1);

    cout<<fun(b)-fun(a);
}
