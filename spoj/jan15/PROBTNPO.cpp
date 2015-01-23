#include<iostream>
using namespace std;
int main()
{
    int A[1000000];
    memset(A,0,size of(A))
    A[0]=0;

    x=1;p=1;
    while(x<1000000)
    {
        A[x]=p;
        x*=2;p++;
    }
    for(int i=3;i<1000000;i++)
    {
        if(A[i]==0){
            if(i&1==1)
            A[i]=A[3*i+1];
            else
            A[i]=A[i/2]+1;
        }
    }

}
