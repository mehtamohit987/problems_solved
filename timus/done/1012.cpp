#include<iostream>
#include<cstdio>
using namespace std;
int K;
int A[1800],B[1800];
int add(int* a, int t1, int* b, int t2)
{
    int i,r=0;
    for(i=0;i<t1;i++)
    {
        a[i]+=b[i];
        a[i]+=r;

        r=a[i]/10;
        a[i]=a[i]%10;
        //cout<<a[i];
    }
    for(;i<t2;i++)
    {
        t1++;a[i]+=b[i];
        a[i]+=r;

        r=a[i]/10;
        a[i]=a[i]%10;
        //cout<<a[i];
    }

    while(r)
    {
        a[t1]=r;
        r=a[t1]/10;
        a[t1]=a[t1]%10;
        //cout<<a[t1];
        t1++;

    }
//cout<<"\nlength="<<t1<<"\n---\n";
    return t1;
}
int mul(int k,int* a,int t1)
{
    int i,r=0;
    for(i=0;i<t1;i++)
    {
        a[i]*=k;
        a[i]+=r;

        r=a[i]/10;
        a[i]=a[i]%10;
        //cout<<a[i];
    }
    while(r)
    {
        a[t1]=r;
        r=a[t1]/10;
        a[t1]=a[t1]%10;
        //cout<<a[t1];
        t1++;

    }
    //cout<<"\nlength="<<t1<<"\n---\n";

    return t1;
}

void iter(int N)
{
    int *a,*b,*temp;
    int t1,t2,t3;
    a=A;
    b=B;
    t1=t2=0;

    a[0]=1;
    t1=1;
    b[0]=K-1;
    t2=1;
    for(int i=2;i<=N;i++)
    {   temp=b;
        t3=t2;

        t1=add(a,t1,b,t2);

        t2 = mul(K-1,a,t1);//make changes in array a

        b = a;

        t1 = t3;
        a=temp;
    }


    for(int i=t2-1;i>=0;i--)
    printf("%d",b[i]);


}
int main()
{
    int N;

    scanf("%d%d",&N,&K);
   /* int *a,*b;
    int t1,t2;
    a=A;
    b=B;
    t1=t2=0;
    a[t1++]=5;
    a[t1++]=2;
    a[t1++]=9;
    a[t1++]=9;

    b[t2++]=1;
    b[t2++]=7;
    b[t2++]=4;
    b[t2++]=1;
    b[t2++]=9;
    b[t2++]=9;

    //t1=add(a,t1,b,t2);
    t1=mul(7,b,t2);
    */
    iter(N);

}
