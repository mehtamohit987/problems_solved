#include<iostream>
#include<cstdio>
int main()
{
    int n,k,*t,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    t=new int[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
        if(t[i]%k==0)
            count++;
    }
    printf("%d",count);
}
