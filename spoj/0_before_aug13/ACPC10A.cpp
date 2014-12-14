#include<iostream>
#include<cstdio>
int main()
{

    int a1,a2,a3,flag;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&a3);
    while(a1!=0||a2!=0||a3!=0)
    {
        flag=0;
        if((a2-a1)==(a3-a2))
            flag=1;
        else if(float(a2/a1)==float(a3/a2))
            flag=2;
        if(flag==1)
        {
            printf("AP %d\n",2*a3-a2);
        }
        else if(flag==2)
        {
            printf("GP %d\n",a3*a3/a2);
        }
        scanf("%d",&a1);
        scanf("%d",&a2);
        scanf("%d",&a3);

    }
}
