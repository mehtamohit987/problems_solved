#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int mod=1000000007;

int main()
{
    int N,Z,ans;
    //freopen("input.txt","r",stdin);
    char A[101][101];
    scanf("%d%d",&N,&Z);

    for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
        scanf("%c",&A[i][j])

    for(int i=0;i<N;i++)
    for(int j=i;j<N;j++)
    {
        set S;
        for(int k=0;k<N;k++)
        {
            //valid column k
            set X;
            for(int l=i;l<=j;l++)


        }
    }

    printf("%d\n",ans);
    }

}
