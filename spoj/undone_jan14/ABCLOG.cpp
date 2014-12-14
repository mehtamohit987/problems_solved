#include<iostream>
int main()
{
    int a,ans;scanf("%d",&a);
    while(a)
    {
        while(a>=0)
        {
            ans=ans*2*(a%2);
            a=a/2;
        }
        scanf("%d",&a);
    }
}
