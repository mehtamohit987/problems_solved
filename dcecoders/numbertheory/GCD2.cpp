#include<iostream>
#include<cstdio>
#include<cstring>
int hcf(int a,int b)
{
    if(b==0)
        return a;
    if((a%b)==0)
        return b;
    else
        return hcf(b,a%b);
}
using namespace std;
int main()
{
    int t,a,n,i,ans;
    char b[251];
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&a);
        scanf("%s",&b);
        n=strlen(b);
        i=0;
        ans=0;
        if(a!=0)
        {
            while(i<n)
            {
                ans=ans*10+int(b[i])-48;

                ans=ans%a;
                i++;
            }

            ans=hcf(a,ans);

            printf("%d\n",ans);

        }
        else
        {
            puts(b);
        }
        t--;
    }
}
