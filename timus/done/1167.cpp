#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<cmath>
#include<map>
#include<algorithm>
#include<cstring>

using namespace std;
int A[501];
int M[501][501];
int val(int n,int k)
{
    int &d=M[n][k];
    if(d!=-1)  return d;

    if(k==0&&n!=0) {d=-2;return d;}

    if(n==0&&k!=0) {d=-2;return d;}

    int a,b,c;
    if(k==1)
    {
        a=b=0;

        for (int i = 0; i < n; ++i)
            if(A[i]==1)a++;else b++;
        //cout<<"HELLLELE\na="<<a<<"b="<<b;
        d=(a*b);
        return d;
    }

    //d=INT_MAX;
    a=b=0;
    for (int i = 1; i <= n-k+1; ++i)
    {
        if(A[n-i]==1)a++;else b++;

        //cout<<"HELLLELE\na="<<a<<"b="<<b;
        c=val(n-i,k-1);

        if(c!=-2)
            if(d==-1)d=c;else d=min(d,a*b+c);
    }

    return d;
}
int main()
{
    memset(M,-1,sizeof(M));
    //freopen("input.txt", "r", stdin);

    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)scanf("%d",&A[i]);



    printf("%d",val(n,k));
    //cout<<n<<k<<"\n";

}
