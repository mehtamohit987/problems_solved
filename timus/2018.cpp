#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<cmath>
#include<map>
#include<algorithm>
using namespace std;
int a,b;
vector<int> M;
int val(int n)
{
    if(n<1)  return 0;
    if(n==1) return 2;
    if(n==2) return 2+(a>1?1:0)+(b>1?1:0);

    return 2*val(n-1)-val(n-a-1)-val(n-b-1);

}
int main()
{
    int n;
    cin>>n>>a>>b;
    M=vector<int>(n,-1);
    cout<<val(n);

}
