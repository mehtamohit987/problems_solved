#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,N,N1,K,x,ans;

    char S[12];
    scanf("%d",&T);
    while(T>0)
    {
    x=0;
    scanf("%d%d",&N,&K);
    N1=N;
    while(N1>1)
    {

        N1=N1/2;
        x++;
    }

    if(N==1)
    {x=1;}

    if(K<=x)
        ans=0;
    else if(K<=N)
        ans=pow(2,K-x);
    else
        ans=pow(2,N);

    printf("%d\n",ans);

    T--;

    }
    return 0;
}
