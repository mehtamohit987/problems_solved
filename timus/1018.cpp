#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<cmath>
#include<map>
#include<algorithm>
using namespace std;
int N,Q;
vector<int> G;
vector<vector<int> > E;
int dfs(int a,int p)
{
	if(G[a]!=-1)return G[a];
	int x;
	(p!=-1)?G[a]=E[p][a]:G[a]=0;
	for (int i = 0; i < N; ++i)
	{
		if (i!=a&&i!=p&&E[a][i]!=-1)
		{

			x=dfs(i,a);
			if(x!=-1)
			G[a]+=x;
		}
	}
	cout<<"G["<<a+1<<"]="<<G[a]<<"\n";
	return G[a];
}
int main()
{
    freopen("input.txt","r",stdin);
    scanf("%d%d",&N,&Q);
    int a,b,w,ans;
    G=vector<int>(N,-1);
    E=vector<vector<int> >  (N,vector<int> (N,-1));

    for (int i = 0; i < N-1; ++i)
    {
    	/* code */
    	scanf("%d%d%d",&a,&b,&w);

    	E[a-1][b-1]=E[b-1][a-1]=w;
    }

    ans=dfs(0,-1);
    sort(G.begin(),G.end());

    for(int i=0;i<N&&i<(N-1-Q);i++)ans-=G[i];

    printf("%d",ans);

}
