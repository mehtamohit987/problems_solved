#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<set>
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

    int i,N,k,j,c=0;
    si(N);

    vector<vector<int> > A(N,vector<int>(N,0));
    for(i=0;i<N;i++)
    for(j=0;j<N;j++)
    si(A[i][j]);

    f(i,N)
    for(j=i+1;j<N;j++)
    {
        if(A[i][j]!=1)
        f(k,N)
        if(A[i][k]==1&&A[j][k]==1)
        c++;
    }
    cout<<2*c;
}
