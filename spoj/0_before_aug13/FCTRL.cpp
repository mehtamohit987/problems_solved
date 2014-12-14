#include<iostream>
#include<cstdio>
using namespace std;
int main()
{

    long T,N;
    int ans,div;
    scanf("%ld",&T);
    while(T>0)
    {
        ans=0;
        div=5;
        scanf("%ld",&N);

        while((N/div)>=1)
        {
            ans+=(N/div);
            div*=5;
        }


        printf("%d\n",ans);

        T--;

    }

}
