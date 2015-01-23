#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<cmath>
#include<map>
#include<algorithm>
#include<cstring>
using namespace std;
vector<bool> P(1000,true);
long long A[100],B[100];
int mod=pow(10,9)+9;
void sieve(int N)
{
    for(int i=2;i<=sqrt(N);i++)
        if(P[i])
            for(int j=i*i;j<=N;j+=i)
                P[j]=false;
}
void f()
{
    for(int i=100;i<1000;i++)if(P[i]){
            if((i%100)/10!=0)
            A[i%100]++;
    }
}
long long func(int N)
{
    long long * T1, *T2,*temp;
    long long r;
    T1=A;T2=B;
    if(N==3) return 143;
    for(int i=4;i<=N;i++)
    {//last dig can be 1,3,5,7
        //int ans=0;
         //cout<<"\nT received :\n";
           // for(int i=11;i<100;i++){ans+=T1[i];cout<<i<<"->"<<T1[i]<<"\n";}
          //cout<< ans<<"\n";
        //cout<<"------------\n\n"<<i<<"\n\n";
        for(int j=11;j<100;j++)
        {
            if(T1[j])
            {
          //      cout<<j<< "="<<T1[j]<<"\n";
             //   cout<<P[j*10+1]<<P[j*10+3]<<P[j*10+5]<<P[j*10+7]<<P[j*10+9]<<"\n";
                for(int k=1;k<10;k+=2)
                if(k!=5&&P[j*10+k]){

                    r=T2[(j%10)*10+k];
                    r+=T1[j];
                    if(r>=mod)
                    r=r%mod;

                    T2[(j%10)*10+k]=r;

                }
            }

        }
        temp=T1;
        T1=T2;
        T2=temp;
        memset(T2,0,100*sizeof(long long));
     //   cout<<"\nT2[73]"<<T2[73];
        //int
        // ans=0;
         //cout<<"\nT formed :\n";
         //   for(int i=11;i<100;i++){ans+=T1[i];cout<<i<<"->"<<T1[i]<<"\n";}
           // cout<< ans<<"\n-----\n";
    }
    long long ans=0;
    for(int i=11;i<100;i++){ans+=T1[i];ans%=mod;}
    return ans;
}

int main()
{
    int n;
    //freopen("input.txt", "r", stdin);
    scanf("%d",&n);
    sieve(1000);
    f();
    printf("%lld",func(n));

}
