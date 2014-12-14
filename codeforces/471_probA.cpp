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

int main()
{

    vector<int> A(9,0);
    int i,c;
    bool l4,b2;

    f(i,6)
    {si(c);A[c-1]++;}

    f(i,9)
    {
        if(A[i]==4) l4=true;
        else if(A[i]==2) b2=true;
    }

    if(l4&&b2)ps("Elephant");
    else if(l4)ps("Bear");
    else ps("Alien");
    printf("\n");
}
