#include<iostream>
#include<cstdio>
using namespace std;
int A[100][100],dp[100][100];
int sumitr(int i, int j)
{
    if(i==0)
        dp[i][j]=A[i][j];
    else if(dp[i][j]==0)
    {
        if(j>0) dp[i][j]=max(sumitr(i-1,j-1),sumitr(i-1,j))+A[i][j];
        else    dp[i][j]=sumitr(i-1,j)+A[i][j];
    }
    return dp[i][j];
}
int main()
{
    int n,r,i,j,ans=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&r);
        for(i=0;i<r;i++)
        for(j=0;j<=i;j++)
            scanf("%d",&A[i][j]);
        for(j=0;j<r;j++)
            ans=max(ans,sumitr(r-1,r-j-1));
        printf("%d\n",ans);

    }
}
