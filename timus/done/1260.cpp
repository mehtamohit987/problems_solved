#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
vector<int> V;

int val(int N)
{
    if(V[N]!=-1) return V[N];

    if(N==1||N==2) {V[N]=1;return V[N];}
    if(N==3) {V[N]=2;return V[N];}


    V[N]=val(N-1)+val(N-3)+1;
    return V[N];
}

int main()
{
    int N;

    cin>>N;
    V=vector<int> (N+1,-1);

    cout<<val(N);
}
