#include<iostream>
using namespace std;
int minimum(int a,int b,int c)
{
    if((a<=b) && (a<=c))
            return a;
        else if((a>=b) && (b<=c))
            return b;
        else
            return c;

}
int maximum(int a,int b,int c)
{
    if((a>=b) && (a>=c))
            return a;
        else if((a<=b) && (b>= c))
            return b;
        else
            return c;

}
int main()
{
    long long N,i,j,m,x,a,b,c,ind,count,prod;
    scanf("%lld",&N);
    while(N!=0)
    {
        ind=x=m=count=a=b=c=0;
        long long *A=new long long[N*3];
        //Deciding cube length
        for(i=0;i<N;i++)
        {
            for(j=0;j<3;j++)
                scanf("%lld",&A[i*3+j]);

            x=minimum(A[3*i],A[3*i+1],A[3*i+2]);
            if(i==0)
                m=x;
            else if(m>x)
            {
                ind=i;
                m=x;
            }
        }
        //Totaling the no of cubes that can be made
        for(i=0;i<N;i++)
        {
            prod=1;
            for(j=0;j<3;j++)
                prod=(A[i*3+j]/m)*prod;
            count+=prod;
        }
        printf("%lld\n",count);
        scanf("%lld",&N);
    }
}
