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

int main() {

    int T,n,i,j,k;
    string c;

    //freopen("input.in","rt",stdin);
    si(T);
    while(T--)
    {
    si(n);

    vvb A(n,vb(n,false));
    vvb B(n,vb(n,true));
    for(i=0;i<n;i++)
    {
    cin>>c;
    for(j=0;j<n;j++)
    {if(c[j]=='#')A[i][j]=true;}
    }

    int ans=0;

    for(j=n-1;j>=0;j--)
    {
        for(i=n-1;i>=0;i--)
        {
            if(!A[i][j])
            {

                if(j+1<n&&B[i][j+1]){B[i][j]=false;break;}
                if(B[i][j]) ans++;
            }
        }
    }
    if(ans>1)
    cout<<ans<<"\n";
    else
    cout<<-1<<"\n";
   }
	return 0;
}
