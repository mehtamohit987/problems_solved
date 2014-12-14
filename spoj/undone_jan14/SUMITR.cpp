#include<iostream>
#include<cmath>
using namespace std;
int A[100][100]={0};
int dp[100][100]={0};
int main()
{
	int n,a,i,j,m=0;
	
	scanf("%d",&n);

	while(n>0)
	{
		scanf("%d",&a);
		for(i=0;i<a;i++)
		{
			for(j=0;j<=i;j++)
			{
				scanf("%d",&A[i][j]);
			
				if(i==0&&j==0)
					dp[i][j]=A[i][j];
				else if(i>=1&&j>=1)
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+A[i][j];
				else
					dp[i][j]=dp[i-1][j]+A[i][j];
				
			}
			
		}
		
		for(j=0;j<a;j++)
			m=max(m,dp[a-1][j]);
		
		n--;
		
		printf("%d\n",m);
	}

}