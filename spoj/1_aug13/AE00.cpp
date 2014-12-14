#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);

    for(i=1;(n/i)-(i-1)>0;i++)
        count=count+(n/i)-(i-1);
    printf("%d",count);

}
