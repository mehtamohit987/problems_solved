#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

map < pair<int,bool> , long long  > M;
map < pair<int,bool> , long long > :: iterator it;


long long Calc(int N, bool x)
{

    if(N==1) {M[make_pair(N,x)]=2; return M[make_pair(N,x)];}

    it=M.find(make_pair(N,x));

    if(it!=M.end()) return it->second;

    if(x)    M[make_pair(N,x)]=Calc(N-1,false)+Calc(N-1,true);
    else     M[make_pair(N,x)]=Calc(N-1,true);

    return M[make_pair(N,x)];
}
long long cal(int i)
{

if(i<=0) return 0;
if(i==1) return 2;

return cal(i-1) + cal(i-2);

}

int main()
{
    int N;
    cin>>N;

    cout<<cal(N)<<Calc(N,false);
}
