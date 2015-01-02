#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<cmath>
#include<map>
#include<algorithm>
using namespace std;
int a,b;
vector<vector<long long> > M;
int val(int n,int l)
{
    if(M[n][l]!=-1)  return M[n][l];
    if(n==0) return 1;
    if((l*(l+1))/2<n) return 0;
    if((l*(l+1))/2==n) return 1;
    long long ans=0;

    for(int i=l;i>(sqrt(1+8*n)-1)/2&&i<n;i--)
    ans+=val(n-i,i-1);

    return ans;

}
int main()
{
    int n;
    cin>>n;
    M=vector<vector<long long> >(n+1,vector<long long>(n+1,-1));
    cout<<val(n,n-1);

}
