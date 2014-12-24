#include<iostream>
#include<map>
#include<algorithm>

using namespace std;
int K;
map < pair<int,bool> , int  > M;
map < pair<int,bool> , int  > :: iterator it;
int valid(int N, bool x)
{

    if(N==1) { M[make_pair(N,x)]=K-1; return K-1;}

    it=M.find(make_pair(N,x));

    if(it!=M.end()) return it->second;

    if(x)    M[make_pair(N,x)]=(K-1)*valid(N-1,true)+valid(N-1,false);
    else     M[make_pair(N,x)]=(K-1)*valid(N-1,true);

    return M[make_pair(N,x)];
}

int main()
{
    int N;

    cin>>N>>K;

    cout<<valid(N,true);
}
