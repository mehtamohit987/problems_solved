#include<iostream>
using namespace std;
int main()
{
    long long int N,K,a,b,x,i,j,curr,diff,sum=0;
    char* S,*c;
    scanf("%lld",&N);
    scanf("%lld",&K);
    S=new char[K+10];
    c=new char[3];
    gets(c);
    gets(S);
    a=b=0;
    curr=1;
    sum+=curr;
    for(i=0;i<K;i++)
    {
        diff=0;
        switch(S[i])
        {
            case 'U' :  if(a>0)
                        {
                            x=a+b;
                            if(x<N)
                            {
                                if(x%2==0)
                                    diff=2*b+1;
                                else
                                    diff=2*a;
                            }
                            else if(x==N)
                            {
                                if(x%2==0)
                                    diff=(N-a-1)+b+1;
                                else
                                    diff=(N-b-1)+a;
                            }
                            else
                            {
                                if(x%2==0)
                                    diff=2*(N-a-1)+2;
                                else
                                    diff=2*(N-b-1)+1;

                            }
                            curr=curr-diff;
                            sum+=curr;
                            a--;
                        }
                        break;
            case 'L' :  if(b>0)
                        {
                            x=a+b;
                            if(x<N)
                            {
                                if(x%2==0)
                                    diff=2*b;
                                else
                                    diff=2*a+1;
                            }
                            else if(x==N)
                            {
                                if(x%2==0)
                                    diff=(N-a-1)+b;
                                else
                                    diff=(N-b-1)+a+1;
                            }
                            else
                            {
                                if(x%2==0)
                                    diff=2*(N-a-1)+1;
                                else
                                    diff=2*(N-b-1)+2;

                            }
                            curr=curr-diff;
                            sum+=curr;
                            b--;
                        }
                        break;
            case 'D' :  if(a<N-1)
                        {
                            x=a+b;
                            if(x<N-1)
                            {
                                if(x%2==0)
                                    diff=2*a+2;
                                else
                                    diff=2*b+1;
                            }
                            else if(x==N-1)
                            {
                                if(x%2==0)
                                    diff=(N-b-1)+a+1;
                                else
                                    diff=(N-a-1)+b;
                            }
                            else
                            {
                                if(x%2==0)
                                    diff=2*(N-b-1)+1;
                                else
                                    diff=2*(N-a-1);

                            }
                            curr=curr+diff;
                            sum+=curr;
                            a++;
                        }
                        break;
            case 'R' :  if(b<N-1)
                        {
                            x=a+b;
                            if(x<N-1)
                            {
                                if(x%2==0)
                                    diff=2*a+1;
                                else
                                    diff=2*b+2;
                            }
                            else if(x==N-1)
                            {
                                if(x%2==0)
                                    diff=(N-b-1)+a;
                                else
                                    diff=(N-a-1)+b+1;
                            }
                            else
                            {
                                if(x%2==0)
                                    diff=2*(N-b-1);
                                else
                                    diff=2*(N-a-1)+1;

                            }
                           curr=curr+diff;
                           sum+=curr;
                           b++;
                        }
                        break;
        };
    }
    printf("%lld",sum);
}
