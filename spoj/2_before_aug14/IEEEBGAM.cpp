#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int T,N;
    double ans;
    scanf("%d",&T);
    while(T)
    {
        scanf("%d",&N);
        ans=(double)(N-1+((double)1/(N+1)))/N;
        printf("%.8lf\n",ans);
        T--;
    }

}

