#include<iostream>
#include<cstdio>
using namespace std;
int main()
{   int t,a;
    long b;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&a);
        scanf("%ld",&b);
        a=a%10;
        if(b!=0&&b%4==0)
            b=4;
        else
            b=b%4;
        switch(b)
        {
            case 0: printf("1");break;
            case 1: printf("%d",a);break;
            case 2: printf("%d",(a*a)%10);break;
            case 3:printf("%d",(a*a*a)%10);break;
            case 4:printf("%d",(a*a*a*a)%10);break;
        }
        printf("\n");
        t--;
    }

}

