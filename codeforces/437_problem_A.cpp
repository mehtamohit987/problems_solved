#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
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
int main(int argc, char const *argv[])
{
	string s;
	std::vector<int> a(4),b;
	int c,d,res=0;
	for (int i = 0; i < 4; ++i)
	{
		/* code */
		cin>>s;cout<<s<<"\n";
		a[i]=(s.length()-2);
	}
	for (int i = 0; i < 4; ++i)
	{
		cout<<a[i]<<"\n";
		c=d=0;
		/* code */
		for (int j = 0; i < 4; ++i)
		{
			/* code */
			if(j!=i&&a[i]==2*a[j])
				c++;
		}

		for (int j = 0; i < 4; ++i)
		{
			/* code */
			if(j!=i&&(float)a[i]==(float)a[j]/2)
				d++;
		}

		if(c==3||d==3)
		{
			b.push_back(i);
			res++;
		}

	}

	if (res==1)
	{
		cout<<b[0];
		/* code */

	}
	else
		cout<<"-1";
	return 0;
}
