#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
int N,M;
vector< vector<float> > V;
vector<vector<bool> > E;

float mini(int N, int M)
{
    if(N==0&&M==0) return 0;

    if(V[N][M]!=-1) return V[N][M];

    float res=INT_MAX;
    if(N>0)res=min(res,100+mini(N-1,M));
    if(M>0)res=min(res,100+mini(N,M-1));
    if(N>0&&M>0&&E[N][M])res=min(res,(float)(100*sqrt(2)+mini(N-1,M-1)));

    V[N][M]=res;
    return res;

}

float iter()
{
    vector<vector<float> > P=vector< vector<float> > (N+1,vector<float>(M+1,-1));
    P[0][0]=0;
    for(int i=1;i<=N;i++)
    P[i][0]=P[i-1][0]+100;


    for(int i=1;i<=M;i++)
    P[0][i]=P[0][i-1]+100;

    for(int i=1;i<=N;i++)
        for(int j=1;j<=M;j++)
            {
                P[i][j]=min(100+P[i-1][j],100+P[i][j-1]);
                if(E[i][j]) P[i][j]=min((float)(100*sqrt(2)+P[i-1][j-1]),P[i][j]);
            }

    return P[N][M];
}
int main()
{
    int K,a,b;
    cin>>N>>M>>K;
    V=vector< vector<float> > (N+1,vector<float>(M+1,-1));
    E=vector<vector<bool> > (N+1,vector<bool> (M+1,false));
    for(int i=0;i<K;i++)
    {cin>>a>>b;E[a][b]=true;}

    cout<<(int)(mini(N,M)+0.5);
    cout<<"\n"<<(int)(iter()+0.5);

}
