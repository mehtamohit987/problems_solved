#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int A[100005];
int main()
{
    int T,N,f,L;
    scanf("%d",&T);

    while(T--){

    scanf("%d",&N);

    for(int i=0;i<N;i++)
    scanf("%d",&A[i]);

    f=1;L=A[0];


    for(int i=1;i<N;i++)
    {
        if(A[i]!=L){

        if(f==1)L=A[i];
        else f--;

        }
        else
        f++;
    }

    f=0;
    for(int i=0;i<N;i++)
        if(A[i]==L)f++;

    if(f>(N/2))printf("%d\n",L);
    else printf("%s\n","NO");
    }
}
