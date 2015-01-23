#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int A[100005];
int main()
{
    int i,T,N;long long L,f;
    scanf("%d",&T);

    while(T--){

    scanf("%d",&N);

    for(i=0;i<N;i++)
    scanf("%d",&A[i]);

    L=0;
    for(i=0;i<N;i++)
        L+=A[i];
    f=0;
    for(i=0;i<N;i++)
    {
        if((L-A[i]-f)==f){printf("%d\n",A[i]);break;}

        f+=A[i];
    }

    if(i==N)printf("%s\n","NO EQUILIBRIUM");
    }
}
