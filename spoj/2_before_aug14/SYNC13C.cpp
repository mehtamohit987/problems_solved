#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T,c1,c2;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&c1);
        scanf("%d",&c2);
        if(c1%2==0||c2%2==0)
            printf("Suresh\n");
        else
            printf("Ramesh\n");
    }
}
