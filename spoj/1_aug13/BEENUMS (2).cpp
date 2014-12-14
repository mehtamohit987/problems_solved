#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long N;
    float a,b,c,D,ans;
    scanf("%lld",&N);
    while(N!=-1)
    {
        //3*x*x-3*x+1-N=0
        a=3.0;b=-3.0;c=(-1)*(N-1);

        D=sqrt(b*b-4*a*c);
        ans=((-1*b)+D)/(2.0*a);
        if(ans==float((long long)(ans)))
            printf("Y\n");
        else
            printf("N\n");

        scanf("%lld",&N);
    }

}
