#include<stdio.h>
nthfibo(int n)
{
    if(n<=1)
    return 1;

    return nthfibo(n-1)+nthfibo(n-2);
}
void main()
{
    int n;
    scanf("%d",&n);
    printf("%d",nthfibo(n));
}
