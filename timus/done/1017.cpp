#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<cmath>
#include<map>
#include<algorithm>
#include<cstring>
using namespace std;
int n;
long long M[501][501];
long long val(int n,int l)
{
    long long &d=M[n][l];
    if(d!=-1)  return d;
    if(n==0) {d=1;return d;}
    if(l==0) {d=0;return d;}
    d=0;
    for(int i=(l<n?l:n);i>0&&n-i>=0;i--)
    d+=val(n-i,i-1);
    return d;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    scanf("%d",&n);
    memset(M,-2,sizeof(M));
    cout<<M[10][10];
    //printf("%lld",val(n,n)-1);

}
