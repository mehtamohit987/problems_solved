#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long n,*a,*b;
    int x,flag;
    scanf("%ld",&n);

    while(n!=0)
    {
            a=new long[n+1];
            b=new long[n+1];
            flag=1;
            for(x=1;x<=n;x++)
            {
                scanf("%ld",a+x);
                *(b+*(a+x))=x;
            }

            for(x=1;x<=n;x++)
                if(*(b+x)!=*(a+x))
                    flag=0;

            if(flag==1)
                    printf("ambiguous\n");
            if(flag==0)
                    printf("not ambiguous\n");

            scanf("%ld",&n);
    }
}
