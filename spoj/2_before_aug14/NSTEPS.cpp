#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N,x,y;
    scanf("%d",&N);

    while(N)
    {
        scanf("%d",&x);
        scanf("%d",&y);
        if(x==y)
        {
            if(x%2)
                printf("%d\n",2*x-1);
            else
                printf("%d\n",2*x);
        }
        else if((y+2)==x)
        {
            if(x%2)
                printf("%d\n",2*x-3);
            else
                printf("%d\n",2*x-2);
        }
        else
            printf("No Number\n");
        N--;
    }


}
