#include<iostream>
#include<map>
using namespace std;
#define int64 long long

map<int64,int64> m;
map<int64,int64> :: iterator it;

int64 maxx(int64 a,int64 b)
{
    if(a>=b)
    return a;
    else
    return b;
}
int64 max_val(int64 n)
{
    int64 G;
    if(n==0)
    return 0;
    it=m.find(n);
    if(it==m.end())
    {
        G=maxx(max_val(n/2)+max_val(n/3)+max_val(n/4),n);
        m.insert(it,pair<int64,int64>(n,G));
        return G;
    }
    else
    return (*it).second;
}
int main()
{
    int64 n,i,K;

    while(cin>>n)
    {
        m.clear();
        K=max_val(n);
        printf("%lld\n",K);
    }

}
