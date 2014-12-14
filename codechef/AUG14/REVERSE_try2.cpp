#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<algorithm>
#include<limits.h>
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

vector <vector<int> > G;
vector<bool> vis;
vector<int> dist;
int N,M;
int main()
{

    int x,y,i,v,res=INT_MAX;
    si(N);
    si(M);
    G=vector <vector<int> >(N,vector<int>(N,INT_MAX));
    vis=vector<bool>(N,false);
    dist=vector<int>(N,INT_MAX);

    f(i,M)
    {si(x);si(y);G[x-1][y-1]=0;G[y-1][x-1]=1;}


    priority_queue<int,vector<int>,greater<int> > Q;

    Q.push(0);
    vis[0]=true;
    dist[0]=0;
    while(!Q.empty())
    {
        v=Q.top();
        Q.pop();
        f(i,N)
        {
            if(G[v][i]!=INT_MAX&&!vis[i]&&dist[i]>dist[v]+G[v][i])
            {dist[i]=dist[v]+G[v][i];Q.push(i);vis[i]=true;}
        }
    }

    res=dist[N-1];
    if(res==INT_MAX)
    printf("-1");
    else
    pi(res);

}
