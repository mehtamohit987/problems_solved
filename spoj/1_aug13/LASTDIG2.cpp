#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int t,l;
    char a[1005];
    long long b;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%s",&a);
        scanf("%lld",&b);
        l=a[strlen(a)-1]-'0';
        if(b!=0&&b%4==0)
            b=4;
        else
            b=b%4;
        switch(b)
        {
            case 0: l==0?printf("0"):printf("1");break;
            case 1: printf("%d",l);break;
            case 2: printf("%d",(l*l)%10);break;
            case 3:printf("%d",(l*l*l)%10);break;
            case 4:printf("%d",(l*l*l*l)%10);break;
        }
        printf("\n");
        t--;
    }

}

