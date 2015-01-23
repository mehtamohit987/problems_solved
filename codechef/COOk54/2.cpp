#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int N,M;
vector<vector <int> > V;
int fun(int a,int b)
{
    if(a>=N||b>=M||a<0||b<0)return 0;

    if(V[a][b]!=-1) return V[a][b];

    if(a==N-1&&b==M-1){V[a][b]=1;return 1;}

    int x=0;
    x+=fun(a+1,b);
    x+=fun(a,b+1);

    V[a][b]=x;
    return x;
}
int main()
{
    int T,x;
    float ans;
    scanf("%d",&T);

    while(T--){
    scanf("%d",&N);
    scanf("%d",&M);
    V=vector<vector <int> > (N,vector <int> (M,-1)) ;

    x=fun(0,0);//cout<<x<<"\n";
    ans=0.0;
    for(int i=0;i<N;i++)
    for(int j=0;j<M;j++)
    {
        //cout<<ans<<" ";
        if(i==0&&j==0){ans++;}
        else if(i==N-1&&j==M-1){ans++;}
        else
        ans+=((float)V[i][j]/x);
    }
    printf("%f\n",ans);
    V.clear();

    }
}
