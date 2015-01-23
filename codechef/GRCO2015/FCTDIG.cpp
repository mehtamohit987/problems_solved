#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
float A[25005];

int main()
{
    int i,T,N,a;//t=0;

    A[0]=0;A[1]=0;
    for(i=2;i<25001;i++)//1000;i++)
    //{
        A[i]=A[i-1]+log10(i);
       // t+=( (int)ceil(A[i-1]) ) * ( (int)ceil(log10(i)) );cout<<t<<"\n";
    //}
//cout<<t;/*
    scanf("%d",&T);
    while(T--){

    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
    scanf("%d",&a);
    printf("%d ",((a==1)?1:(int)ceil(A[a])));
    }
    printf("\n");

    }//*/
}

