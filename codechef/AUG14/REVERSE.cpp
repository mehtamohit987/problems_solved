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

vector <vector<bool> > G;
vector<bool> vis;
vector<int> dist;
int N,M;

void update_dist(int s)
{
    int i,v;
    queue<int> q;

    fill(vis.begin(),vis.end(),false);

    q.push(s);
    vis[s]=true;
    dist[s]=0;

    while(!q.empty())
    {
        v=q.front();
        q.pop();

        f(i,N)
        {
            if(G[v][i]&&!vis[i]&&dist[i]>dist[v]+1)
            {dist[i]=dist[v]+1;q.push(i);vis[i]=true;}
        }
    }


}

int main()
{

    int x,y,i,v,res=INT_MAX;
    si(N);
    si(M);
    G=vector <vector<bool> >(N,vector<bool>(N,false));
    vis=vector<bool>(N,false);
    dist=vector<int>(N,INT_MAX);

    f(i,M)
    {si(x);si(y);G[x-1][y-1]=true;}


    queue<int> Q,R;

    Q.push(0);R.push(0);
    vis[0]=true;
    while(!Q.empty())
    {
        v=Q.front();
        Q.pop();
        f(i,N)
        {
            if(G[v][i]&&!vis[i])
            {Q.push(i);R.push(i);vis[i]=true;}
        }
    }

    update_dist(N-1);

    while(!R.empty())
    {

        cout<<(v=R.front());
        R.pop();

        res=min(res,dist[v]);

    }

    if(res==INT_MAX)
    printf("-1");
    else
    pi(res);

}
