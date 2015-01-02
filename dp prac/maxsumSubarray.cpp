#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define si(a) scanf("%d",&a)
#define sf(a) scanf("%f",&a)
#define sc(a) scanf("%c",&a)
#define ss(a) scanf("%s",&a)
#define f(i,n) for(i=0;i<n;i++)
#define pi(a) printf("%d",a)
#define pf(a) printf("%f",a)
#define pc(a) printf("%c",a)
#define ps(a) printf("%s",a)
//maximum sum subarray or maximum contiguous subsequence
uisng namespace std;
int n;
vector<int> A;
vector<int> cache;

int main()
{
    scanf("%d",&n);
    A=vector<int>(n);
    cache=vector<int>(n,-1);
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);

    cout<<maxsumSubarray(0,n-1);
}
