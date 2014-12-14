#include<iostream>
int main()
{
    int N,x,i;
    scanf("%d",&N);
    while(N!=-1)
    {
        i=1;
        x=1;
        while(N>=x)
        {
            if(N==x)
            {
                i=0;
                printf("Y\n");
                break;
            }
            x+=6*i;
            i++;

        }
        if(i!=0)
            printf("N\n");

     scanf("%d",&N);
    }
}
