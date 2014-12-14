#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{


    int n,a,i,j;
    vector<int> B;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        B.push_back(a);
    }

    cout<<"intputted";
    sort(B.begin(),B.end());
    i=0;
    while(i+1<n&&B[i]==B[i+1])j++;
    j=0;
    while(j+1<n&&B[n-j-1]==B[n-j-2])j++;

    printf("%d ",B[n-1]-B[0]);
    printf("%d",(i+1)*(j+1));
}
