#include<iostream>
#include<vector>
using namespace std;
vector<bool> M(100001,false),A(long(100001*100001),false);
int N;
bool check(int i,int a)
{
	int j;
	if(M[i]==true)
		return true;
	
	if(A[(i-1)*N+a]==true)
	{
		M[i]=true;
		return true;
	}

	for(j=2;j<=N;j++)
	{
		if(A[(i-1)*N+j]==true)
			if(check(j,a)==true)
			{
				M[i]=true;
				return true;
			}
	}
}
int main()
{
	int T,m,i,j,S1,S2,count=-1;
	scanf("%d",&T);
	while(T>0)
	{
		scanf("%d",&N);
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d%d",&S1,&S2);
			A[(S1-1)*N+S2]=A[(S2-1)*N+S1]=true;
		}
		
		for(j=1;(j<=N)&&(M[j]==false);j++)
		{
			for(i=1;i<=N;i++)
				check(i,j);
			
			count++;
					
		}
		
		printf("%d",count);

		T--;
     }
}