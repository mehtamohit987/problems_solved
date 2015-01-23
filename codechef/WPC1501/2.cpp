#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int T,K;unsigned long long  N,x,r,ans;
    //freopen("input.txt","r",stdin);
    scanf("%d",&T);

    while(T--){
    scanf("%lld%d",&N,&K);
    if(K==1){printf("%lld\n",N);continue;}
    ans=0;
    while(N>0){r=(N%K);N=N/K;ans+=r;}
    printf("%lld\n",ans);
    }
}
/* while(N>0)
    {
        x=(float)log(N)/log(K);
        y=pow(K,x);
        l=N/y;
        N-=(l*y);
        ans+=l;
    }
  */
