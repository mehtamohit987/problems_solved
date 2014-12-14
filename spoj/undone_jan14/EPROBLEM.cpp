#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
string deduce(long long n)
{
    long long aux,c;
    string S="";
    while(n>0)
    {
        c=0;
        aux=n;
        while(aux>1)
        {
            c++;
            aux=aux/2;
        }
        if(c==0)
        {
            if(S=="")
            S=S+"2(0)";
            else
            S=S+"+2(0)";
        }
        else if(c==1)
        {
            if(S=="")
            S=S+"2";
            else
            S=S+"+2";
        }
        else if(c==2)
        {
            if(S=="")
            S=S+"2(2)";
            else
            S=S+"+2(2)";
        }
        else
        {
            if(S=="")
            S=S+"2("+deduce(c)+")";
            else
            S=S+"+2("+deduce(c)+")";
        }

        n-=pow(2,c);
    }

    return S;
}

int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF)
    cout<<deduce(n)<<endl;

}
