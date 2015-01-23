#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<cmath>
#include<map>
#include<algorithm>
using namespace std;

string S;int n;
vector<long long> G;
vector<int> V;

vector<vector<bool> >M;
void precal()
{

    for(int i=0;i<n;i++)
    {
        int j=0;
        while(S[i-j]==S[i+j]&&i-j>=0&&i+j<n)
        {/*cout<<"M["<<i-j<<"]"<<i+j<<"\n";*/        M[i-j][i+j]=true;j++;}

        j=1;
        while(S[i-j]==S[i+j-1]&&i-j>=0&&i+j-1<n)
        {/*cout<<"M["<<i-j<<"]"<<i+j-1<<"\n";*/M[i-j][i+j-1]=true;j++;}
    }

}
void iter()
{
    long long mi,x;
    int d=-1;
    bool f;

    G[0]=1;
    for(int i=1;i<n;i++)
    {
        f=false;
        for(int j=i;j>=0;j--)
        {

           // cout<<"i="<<i<<"j="<<j;
           //cout<<"M[j][i]="<<M[j][i];
            if(M[j][i]){
            x=(j>0)?G[j-1]+1:1;
            if(!f||x<mi){
                mi=x;
                d=j;
                f=true;
            }
           //cout<<"mi="<<mi<<"\n";
            }
        }//cout<<"\n";
        V[i]=d;
        G[i]=mi;//cout<<"\n";
    }

}
void print(int a)
{
    if(a<0)return;
    if(V[a]>0)print(V[a]-1);
    if(V[a]!=0)cout<<" ";
    for(int i=V[a];i<=a;i++)
    cout<<S[i];

}
int main()
{
    freopen("input.txt","r",stdin);
    cin>>S;

    n=S.length();
    G=vector<long long>(n,0);
    V=vector<int>(n,0);
    M=vector<vector<bool> >(n,vector<bool>(n,false));
    precal();

    iter();

    printf("%lld\n",G[n-1]);
    print(n-1);

}
 /*for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    cout<<M[i][j];
    cout<<"\n";}*/

    //printf("%lld\n",palin(0));
/*
long long palin(int s)
{

    if(s>n-1) return 0;
    if(G[s]!=-1) return G[s];

    long long mi,x;
    int d=-1;bool f=false;

    for(int i=s;i<n;i++)
    {
        if(!M[s][i])continue;

        x=palin(i+1);
        if(!f||x+1<mi){
            mi=x+1;
            d=i;
            f=true;
        }
    }
    V[s]=d;
    G[s]=mi;
    return mi;

}*/
  /* for(long long i=0;i<n;)
    {
        for(int j=i;j<=V[i];j++)
        printf("%c",S[j]);

        printf(" ");
        i=(V[i]>i?V[i]:i)+1;
    }
*/
