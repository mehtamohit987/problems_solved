#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N,K,x,i,j,val=0,a,b;
    long long int sum=0;
    string S;
    scanf("%d",&N);
    scanf("%d",&K);


    for(i=0;i<K;i++)
        cin>>S[i];

    long long *A;
    A=new long long[N*N];
    for(i=0;i<N*N;i++)
        A[i]=0;

    for(x=0;x<=2*N+2;x+=1)
    {
        if(x%2==0)
        {
            //traverse upward the straight line i+j=2x
            for(i=x;  i>=0 ;  i--)
            {
                j=x-i;
                if(i<N&&j<N )
                    A[(N*i)+j]=++val;
            }
        }
        else
        {
            //traverse downward the straight line i+j=2x
            for(i=0;  i<=x ;  i++)
            {
                j=x-i;
                if(i<N&&j<N )
                    A[(N*i)+j]=++val;
            }
        }
    }



    a=b=0;
    sum+=A[(a*N)+b];
    for(i=0;i<K;i++)
    {
        switch(S[i])
        {
            case 'U' :  if((--a)>=0)
                        sum+=A[a*N+b];
                        else
                            b++;
                        break;
            case 'D' :  sum+=A[(++a)*N+b];
                        break;
            case 'L' :  if((--b)>=0)
                        sum+=A[a*N+b];
                        else
                            b++;
                        break;
            case 'R' :  sum+=A[a*N+(++b)];
                        break;

        }
    }

    printf("%lld",sum);
}
