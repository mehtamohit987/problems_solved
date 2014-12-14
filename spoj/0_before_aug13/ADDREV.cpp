#include<iostream>
#include<cstdio>
int reverse(int a)
{
    int rev=0;
    while(a>0)
        {
            rev=(rev*10)+a%10;
            a=a/10;
        }
    return rev;
}
int main()
{
    int N;
    int a,b,c,reva,revb,revc;
    scanf("%d",&N);

    while(N>0)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        reva=revb=0;
        reva=reverse(a);
        revb=reverse(b);
        revc=reva+revb;
        c=reverse(revc);
        printf("%d\n",c);
        N--;
    }
}
