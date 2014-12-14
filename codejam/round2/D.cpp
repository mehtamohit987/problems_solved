/*

    Mohit Mehta
    @zapper123

*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<map>
#include<cstring>
#include<cmath>
#include<string>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<bool> vb;
typedef vector<vector<bool> > vvb;
//vector<string> v;
static unsigned long long k=0;
unsigned long long K=0;
bool func(int c1,int c2,string a, int i, int n)
{

	if(i==2*n)
    {
        k++;
        if(k==K)
        {cout<<a<<"\n";
        return true;}
        return false;
    }
		//v.push_back(a);
	if(c1<c2)return false;
	if(c1>n) return false;

	if(c1<n)
	{ a[i]='('; if(func(c1+1,c2,a,i+1,n)) return true; }
	if(c2<c1)
	{ a[i]=')'; if(func(c1,c2+1,a,i+1,n)) return true; }

    return false;
}

int main()
{
	freopen("D-large.in", "r", stdin);
	freopen("result.txt", "w", stdout);
	int n,T,cn=0;

	scanf("%d",&T);

	while(T--)
	{
        cn++;

        k=0;
		//v.clear();
		scanf("%d",&n);
		scanf("%llu",&K);
		string a(2*n,'a');



        while()


        printf("Case #%d: ",cn);
		bool b=func(0,0,a,0,n);

		if(!b)
        cout<<"Doesn't Exist!\n";
		//sort(v.begin(),v.end());



        //if(k<=v.size())
		//cout<<v[k-1]<<"\n";
		//else
		//cout<<"Doesn't Exist!\n";
	}
}
