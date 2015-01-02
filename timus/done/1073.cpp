#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#include<climits>
using namespace std;
vector<int> V;

int val(int N)
{
    if(V[N]!=-1) return V[N];

    if(N-pow(int(sqrt(N)),2)==0) {V[N]=1;return V[N];}
    int m=INT_MAX;

    for(int i=int(sqrt(N));i>=1;i--)
        m=min(m,val(N-i*i));

    V[N]=m+1;
    return V[N];
}

int main()
{
    int N;

    cin>>N;
    V=vector<int> (N+1,-1);

    cout<<val(N);
}
