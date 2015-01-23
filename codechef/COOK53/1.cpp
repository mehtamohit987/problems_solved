#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T,N,a,ans;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&N);
    scanf("%d",&a);scanf("%d",&a);
    ans=1;
    for(int i=1;i<N;i++){scanf("%d",&a);scanf("%d",&a);ans=ans^(i+1);}
    printf("%d\n",ans);
    }
}
