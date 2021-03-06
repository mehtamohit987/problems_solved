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

int val(int N)
{
    if(N<=0) { return 1;}
    if(N==1) { return K-1;}

    //it=M.find(make_pair(N,x));

    //if(it!=M.end()) return it->second;

    //if(x)    M[make_pair(N,x)]=(K-1)*valid(N-1,true)+valid(N-1,false);
    //else     M[make_pair(N,x)]=(K-1)*valid(N-1,true);

    return (K-1)*val(N-1) + ( (N>=2) ? (K-1)*val(N-2) : 0 );
    //return M[make_pair(N,x)];
}

int iter(int N)
{
    int a,b,temp;
    a=1;
    b=K-1;
    for(int i=2;i<=N;i++)
    {   temp=b;
        b = (K-1)*b + (K-1)*a;
        a=temp;
    }
    return b;
}

int main()
{
    int N;

    cin>>N>>K;

    cout<<valid(N,true)<< val(N)<<iter(N);
}
