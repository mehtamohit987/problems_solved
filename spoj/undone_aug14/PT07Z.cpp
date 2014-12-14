#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<vector<bool> > G;
vector<bool> V;
int n;
int dfs(int v)
{
    int i,c=0;

    if(v==d)
    return 0;

    for(i=0;i<n;i++)
    {
        if(G[v][i]&&!V[i])
        c=max(c,1+dfs(i));
    }
    cout<<"\nproblemsize : "<<v<<" returnign :"<<c;
    return c;
}

int main()
{
int j,i,a,b;
scanf("%d",&n);
G=vector<vector<bool> >(n,vector<bool>(n,false));
for(i=0;i<n-1;i++)
{
    scanf("%d",&a);
    scanf("%d",&b);
    {G[a-1][b-1]=true;G[b-1][a-1]=true;}
}
a=0;
    V=vector<bool> (n,false);

    a=max(a,dfs(i));

}

printf("%d",a);

}
