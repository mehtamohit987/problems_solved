#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

#include <string>
#include <cstring>

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

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<bool> vb;
typedef vector<vector<bool> > vvb;
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a)*(b/gcd(a,b));
}
int main() {

    int T,n,i,j;
    bool flag;

  //  freopen("input.in","rt",stdin);
    si(T);
    while(T--)
    {
    si(n);

    vector <int> A(n,0);
    for(i=0;i<n;i++)
    si(A[i]);

    int ans=0,l;
    for(i=0;i<n-1;i++)
    {
        flag=true;
        l=A[i];
        for(j=i+1;j<n;j++)
        {
            if(gcd(l,A[j])!=1)
            {flag=false;break;}

            l=lcm(A[j],l);
        }
        if(flag) {ans=max(ans,n-i);break;}
        else
        {ans=max(ans,j-i);}
    }
    if(ans>1)
    cout<<ans<<"\n";
    else
    cout<<-1<<"\n";
   }
	return 0;
}
