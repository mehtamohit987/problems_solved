#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t,n,m,D,H[500],i,num;
	scanf("%d",&t);
	while(t)
	{
		scanf("%d",&n);
		scanf("%d",&m);
		scanf("%d",&D);

		for(i=0;i<n;i++)
		scanf("%d",&H[i]);

		num=0;

		for(i=0;i<n;i++)
			if(H[i]>=D) num++;

		if(num>=m)
			printf("YES\n");
		else
			printf("NO\n");
	}

}
