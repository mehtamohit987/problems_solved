#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int A[3000],B[3000];int sz=1,szb=0;
void fact()
{
    int x,c,m,i,j,l;
    for(i=2;i<=999;i++)
    {
        memset(B,0,sizeof(B));szb=0;

        x=i;
        l=0;
        while(x){

            c=0;
            m=x%10;//szb++;
            //cout<<"\nm="<<m<<l<<c<<"\n";

            for(j=0;j<sz;j++){

                B[j+l]+=A[j]*m;
                B[j+l]+=c;
                c=B[j+l]/10;

                B[j+l]%=10;
                //cout<<B[j+l]<<"\n";
                if(j+l>=szb)szb++;//&&B[j+l]==0&&c==0)
            }
            while(c){
            B[szb++]=(c%10);
            c/=10;
            }
            //for(j=0;j<szb;j++){cout<<B[j];}
            x/=10;l++;
        }
       // cout<<"\n";
        for(j=0;j<szb;j++)A[j]=B[j];//cout<<B[j];}
        sz=szb;
       // cout<<"\n";
    }

}
int main()
{
   // printf("%d\n",2565);
    memset(A,0,sizeof(A));

    A[0]=1;
    fact();
    printf("%d\n",sz);
    for(int i=sz-1;i>=0;i--)
    printf("%d",A[i]);
}
