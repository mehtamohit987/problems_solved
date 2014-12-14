#include<iostream>
using namespace std;
int main()
{
    int T,n,i,x,y,rem;
    scanf("%d",&T);
    while(T>0)
    {
        scanf("%d",&n);
        i=1;
        while(n>(i*(i+1)/2))
            i++;
        --i;
        rem=n-(i*(i+1)/2);
        if(i%2==0)
        {
            x=i+2-rem;
            y=rem;
        }
        else
        {
            y=i+2-rem;
            x=rem;
        }

        printf("TERM %d IS %d/%d\n",n,x,y);

        T--;
    }

}
