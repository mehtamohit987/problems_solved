#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int G,B,temp;
    scanf("%d%d",&G,&B);
    while(G!=-1&&B!=-1)
    {
        if(G>B)
        {
            temp=B;
            B=G;
            G=temp;
        }

        if(G==0)
            printf("%d\n",B);
        else if(G==B)
            printf("1\n");
        else
            printf("%d\n",(B%(G+1)==0)?(B/(G+1)):(B/(G+1))+1);

        scanf("%d%d",&G,&B);
    }

}
