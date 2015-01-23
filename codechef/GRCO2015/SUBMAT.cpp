#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int A[101][101],M[101][101];

int main()
{
    int i,j,s,ans,T,m,n;
//freopen("input.txt","r",stdin);
    scanf("%d",&T);
    while(T--){

    scanf("%d%d",&m,&n);
    ans=0;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
        scanf("%d",&A[i][j]);
        if(A[i][j]==1){M[i][j]=1;if(ans==0)ans=1;}
        else M[i][j]=0;
        }

    if(ans==0){printf("0\n");continue;}

    for(s=2;s<=min(m,n);s++)
    {
        for(i=s-1;i<m;i++)
        for(j=s-1;j<n;j++)
        {
            if(A[i][j]==1&&M[i-1][j-1]>=s-1&&M[i][j-1]>=s-1&&M[i-1][j]>=s-1){
                M[i][j]=s;
                ans=s;
            }
        }

        if(ans!=s)break;
    }

    printf("%d\n",ans);

    }
}/* cout<<"\nsize:"<<s<<"\n";
        for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
            cout<<M[i][j]<<" ";
        cout<<"\n";}*/


