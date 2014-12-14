/*

    Mohit Mehta
    @zapper123

*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<map>
#include<cstring>
#include<cmath>
#include<string>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef <vector<int> > vvi;
typedef vector<bool> vb;
typedef <vector<bool> > vvb;

#define rep(i,m) for(int i=0;i<(int)(m);i++)
#define rep2(i,n,m) for(int i=n;i<(int)(m);i++)
#define For(it,c) for(__typeof(c.begin()) it=c.begin();it!=c.end();++it)


void recir(int split, int parts)
{
	ll sum=0;

	for(int i=0;i<=split;i++)
	{
		for(int j=0;j<split-i+1;j++)
		R[j][parts]=i+1;

		rec(split-i,parts-1);
	}
}


int i,j,T,M,N,ans,sum;

int main()

	freopen("A-small-attempt0.in", "r", stdin);
	freopen("result.txt", "w", stdout);
	scanf("%d",&T);
	while(T--)
	{
	sum=0;ans=0;
	scanf("%d",&M);	scanf("%d",&N);
	i=0;
	rep(i,N-M+1)
	{
		sum+=M*fact(N)/fact(N-M+1);
		rep(i,)
	}


	}
}
