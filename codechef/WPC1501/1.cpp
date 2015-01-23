#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int T,e,o;
    scanf("%d",&T);

    while(T--){
    scanf("%d%d",&e,&o);
    printf("%d\n",( (3*e-2*o)%5==0 ? abs(3*e-2*o)/5:-1 ) );
    }
}
