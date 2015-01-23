#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int E,F,N;
vector<int> D,W,M;
int func(int a)
{
    if(M[a]!=-2)return M[a];
    if(a==0){M[a]=0; return 0;}
    int m=-1,x;
    for(int i=0;i<N;i++)
    {
        if(a-W[i]>=0){
            x=func(a-W[i]);
            if(x!=-1){if(m!=-1)m=min(m,x+D[i]);else m=x+D[i];}
        }
    }
    M[a]=m;
    return m;
}
int main()
{int T;
    scanf("%d",&T);
    while(T--){scanf("%d%d%d",&E,&F,&N);
    D=vector<int>(N);
    W=vector<int>(N);
    M=vector<int>(F-E+1,-2);

    for(int i=0;i<N;i++)
    scanf("%d%d",&D[i],&W[i]);

    int x=func(F-E);
    if(x==-1)printf("This is impossible.\n");
    else printf("The minimum amount of money in the piggy-bank is %d.\n",x);
}
}
