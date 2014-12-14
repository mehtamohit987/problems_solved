#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,n;
    int flag,i;
    char S[12];
    scanf("%d",&T);
    while(T>0)
    {flag=1;
    scanf("%s",&S);
    n=strlen(S);
    for(i=0;i<n;i++)
    {
        if(flag==0)
            break;
        else if(S[i]!=S[n-i-1])
        {        flag=0; }

    }
    T--;

    if(flag==1) printf("YES\n");
    else    printf("NO\n");
    }
    return 0;
}
