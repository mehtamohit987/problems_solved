#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<map>
#include<algorithm>
using namespace std;
int N;
vector<int> T,S,E;

bool compare (int i,int j){ return (E[i]<E[j]);}
int main()
{

    //freopen("input.txt", "r", stdin);

    cin>>N;
    T=vector<int> (N,0);
    S=vector<int> (N,0);
    E=vector<int> (N,0);

    for(int i=0;i<N;i++)
    {cin>>S[i]>>E[i];T[i]=i;}


    sort(T.begin(),T.end(),compare);

    int k=T[0], ans=1;

    for(int i=1;i<N;i++)
        if(S[T[i]]>=E[k]+1)
        {ans++;k=T[i];}

    cout<<ans;
}
