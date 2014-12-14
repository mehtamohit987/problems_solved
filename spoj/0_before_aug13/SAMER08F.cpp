#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b=0;
    scanf("%d",&a);

    while(a!=0){
        while(a>0){ b+=(a*a);a--;}
        printf("%d\n",b);
        b=0;a=0;
        scanf("%d",&a);

    }

}
