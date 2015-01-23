#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int T,N,a,ans;
    scanf("%d",&T);
    vector<int> A;
    while(T--){
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {scanf("%d",&a);A.push_back(a);}
    ans=0;sort(A.begin(),A.end());
    int i=N-1;
    for(;i>0;i-=4)
    ans+=   (A[i]+A[i-1]);
    if(i==0) ans+=A[0];
    printf("%d\n",ans);
    A.clear();
    }
}
