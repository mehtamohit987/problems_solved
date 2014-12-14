#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<limits.h>


using namespace std;
int n,k=4;
string S[1001];

vector<vector<bool> >vis;
vector<vector<int> > paths;
int x_ch[]={1,0,-1,0};
int y_ch[]={0,1,0,-1};
bool dfs(int a, int b, bool f)
{
    int i,a1,b1;
    pair<int,int> P;
    stack<pair<int,int> > stk;

    vis.clear();
    vis=vector<vector<bool> >(n,vector<bool> (n,false));

    stk.push(pair<int,int>(a,b));

    if(f==true) k=2;

//cout<<k;
    while(!stk.empty())
    {

        P=stk.top();
        stk.pop();
        a1=P.first;
        b1=P.second;
        vis[a1][b1]=true;

        if(a1==n-1&&b1==n-1)
        return true;

        for(i=0;i<k;i++)
        if(a1+x_ch[i]<n&&a1+x_ch[i]>=0&&b1+y_ch[i]>=0&&b1+y_ch[i]<n&&!vis[a1+x_ch[i]][b1+y_ch[i]]&&S[a1+x_ch[i]][b1+y_ch[i]]!='#')
        {
            if(a1+x_ch[i]==n-1&&b1+y_ch[i]==n-1)
                return true;
            else
                stk.push(pair<int,int>((a1+x_ch[i]),(b1+y_ch[i])));

        }

    }

    return false;
}


int main()
{

    int i,j,k;
    long long MOD=(2LL<<30)-1;
    bool possible=false;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        cin>>S[i];
    }

    if(dfs(0,0,false))
    {
        if(dfs(0,0,true))
        {

        paths=vector<vector<int> >(n+2,vector<int>(n+2,0));
        for(i=n-1;i>=0;i--)
        {
            for(j=n-1;j>i;j--)
            {
                if(S[j][i]!='#')
                {
                    if(j+1>n-1)
                        paths[j][i]=(paths[j][i+1]!=-1?paths[j][i+1]:0);
                    else
                        paths[j][i]=((long long)(paths[j+1][i]!=-1?paths[j+1][i]:0)+(long long)(paths[j][i+1]!=-1?paths[j][i+1]:0))%MOD;

                }
                else
                paths[j][i]=-1;
            }
            for(k=n-1;k>i;k--)
            {
                if(S[i][k]!='#')
                {
                    if(k+1>n-1)
                        paths[i][k]=(paths[i+1][k]!=-1?paths[i+1][k]:0);
                    else
                        paths[i][k]=((long long)(paths[i][k+1]!=-1?paths[i][k+1]:0)+(long long)(paths[i+1][k]!=-1?paths[i+1][k]:0))%MOD;
                }
                else
                paths[i][k]=-1;
            }

            if(i+1<=n-1)
            {
                if(S[i][i]!='#')
                    paths[i][i]=((long long)(paths[i+1][i]!=-1?paths[i+1][i]:0)+(long long)(paths[i][i+1]!=-1?paths[i][i+1]:0))%MOD;
                else
                    paths[i][i]=-1;
            }
            else
                paths[i][i]=1LL;

        }


        if(paths[0][0]>0)
        cout<<paths[0][0]<<"\n";

        }
        else
        cout<<"THE GAME IS A LIE";


    }
    else
    cout<<"INCONCEIVABLE";



}
