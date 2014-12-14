#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define si(a) scanf("%d",&a)
#define sf(a) scanf("%f",&a)
#define sc(a) scanf("%c",&a)
#define ss(a) scanf("%s",&a)
#define f(i,n) for(i=0;i<n;i++)
#define pi(a) printf("%d",a)
#define pf(a) printf("%f",a)
#define pc(a) printf("%c",a)
#define ps(a) printf("%s",a)

int main()
{

    int T,i,N,a;
    si(T);

    while(T--)
    {

        si(N);
        set<int> S;

        f(i,N)
        {
           si(a);
           S.insert(a);
        }

        cout<<S.size()<<"\n";
        S.clear();
    }

}
