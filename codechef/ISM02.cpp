#include<iostream>
#include<iomanip>
#include<cstdio>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
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

    int i,j,k,T,N,M;
    freopen("input.in","r",stdin);
    si(k);
    while(k--)
    {
        si(T);
        si(N);
        si(M);
        vector<vector<int> > G(N,vector<int>(M,0));
        f(i,N)
        f(j,M)
        si(G[i][j]);

        vector<vector<int> > dp(N,vector<int>(M,0));



        for(i=N-1;i>=0;i--)
        for(j=M-1;j>=0;j--)
        {
            dp[i][j]=G[i][j]+( i<N-1?min(dp[i+1][j],min((j<M-1?dp[i+1][j+1]:INT_MAX),(j>0?dp[i+1][j-1]:INT_MAX)) ) : 0 );
        }
        int mi=INT_MAX;
        for(i=0;i<N;i++)
        if(dp[0][i]<mi) mi=dp[0][i];
    f(i,N){
    f(j,N)
    {
      cout<<setw(2)<<G[i][j]<<" ";
        }cout<<"\n";}
        cout<<"\n\n";
    cout<<"\n";
    f(i,N){
    f(j,N)
    {
      cout<<setw(2)<<dp[i][j]<<" ";
        }cout<<"\n";}
        cout<<"\n\n";
cout<<mi;
        if(mi<T)cout<<"YES\n";
        else cout<<"NO\n";

    }

}
