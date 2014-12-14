#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<algorithm>
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
int fact(int a)
{
    if(a<1) return 1;
    return a*fact(a-1);
}
int main()
{
    int n;
    si(n);

    int i;
    set<int> S;
    vector<int> A(n,0);

    /*pair < set<int>::iterator , bool > ret;

    map<int,int> M;
    map<int,int> ::iterator k;
    //pair < map<int,int> ::iterator , bool > it;
*/
    f(i,n)
    {
        si(A[i]);
/*        ret=S.insert(A[i]);

        if(!ret.second)
        {
            k=M.find(A[i]);

            if(k==M.end())
                M.insert(pair<int,int>(A[i],1));
            else
                M[A[i]]=M[A[i]]+1;
        }*/

    }

    sort(A.begin(),A.end());
    vector<pair<int,int> > V;

    for(int i=1;i<n;i++)
    {
        if(A[i]==A[i-1])
        {
            int r=2;
            for(int j=i+1;j<n;j++)
            {if(A[j]==A[i]) r++;else break;}

            V.push_back(pair<int,int> (i-1,r));

            i+=(r-1);
        }


    }

    cout<<V.size();
    pair<int,int> p=*V.begin();
    int k=0;
    for(int i=0;i<n;)
    {
        cout<<A[i]<<" ";
        if(A[i]==p.first)
        {

        }

    }

    /*
if(M.size()>1||(M.size()==1&&M.begin()->second>2))
{
    int ans=1;
    printf("YES\n");
    cout<<S.size()<< "  " <<M.size()<<"\n";
    for(k=M.begin();k!=M.end();k++)
    {
        cout<<k->first<< "  " <<k->second<<"\n";
        ans*=fact(k->second+1);
    }
    cout<<ans<<"\n";

    for(int )



}
else
printf("NO\n");

*/

}
