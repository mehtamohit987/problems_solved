#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int mod=1000000007;
int main()
{
    int T,N,K;unsigned long long ans;
    freopen("input.txt","r",stdin);
    scanf("%d",&T);

    while(T--){
    scanf("%d%d",&K,&N);
    if(N==1){printf("%d\n",1);continue;}
    if(N==2){printf("%d\n",K);continue;}

    ans=K;
    for(int i=4;i<=N;i++){
        ans=(ans*ans);
        if(ans>=mod)ans%=mod;
    }


    //ans=pow(K,pow(2,N-3));
    printf("%d\n",(int)ans);
    }

}
