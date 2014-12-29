#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<cmath>
#include<map>
#include<algorithm>
using namespace std;
int N=pow(10,9);
vector<vector<long long> > V (82,vector<long long>(10,-1) );
//1 to 10^9
long long func(int S,int p)
{
    if(p==0) return 0;
    if(p==1){
    if(S/10==0)
        V[S][p]=1;
    else
        V[S][p]=0;
    return V[S][p];

    }
if(V[S][p]!=-1) return V[S][p];

    long long ans=0;

    for(int i=0;i<=9;i++)
        if(S-i>=0)
            ans+=func(S-i,p-1);
    V[S][p]=ans;
    return V[S][p];
}
int main()
{
//S [1,81]
//number of 1,2,3--9 digit no having digit sum as S + if(10^9) also S - if(0) also S

    //freopen("input.txt", "r", stdin);

    int S;
    cin>>S;
    long long ans=0;

    for(int i=1;i<=9;i++)
        ans+=(func(S,i)-func(S,i-1));

    if(S==1)
    ans++;


    cout<<ans;

}

