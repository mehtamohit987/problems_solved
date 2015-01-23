#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<cmath>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    if((s%2)!=0){cout<<"0";return 0;}
    s/=2;


    vector<vector<long long> > M=vector<vector<long long> > (n+1,vector<long long>(s+1,0));

    for(int i=1;i<=s;i++)
    M[0][i]=0;

    for(int i=0;i<=n;i++)
    M[i][0]=1;



    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            long long ans=0;
            for(int k=0;k<10&&k<=j;k++)
                ans+=M[i-1][j-k];
            M[i][j]=ans;
        }
    }
//cout<<pow(M[n][s],2);
    printf("%lld",(long long)pow(M[n][s],2));
}
