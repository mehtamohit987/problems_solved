#include<iostream>
using namespace std;
int ins_sor(long *a,long n)
{
    int i,j,flag=0,temp;
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>0&&a[j]<a[j-1])
        {
                temp=a[j];
                    a[j]=a[j-1];
                a[j-1]=temp;
                j=j-1;
                    flag++;
           }
    }

        return flag;
}
int main()
{
    int T,flag[5],q,w;
    long N,A[200000];

    do{
        cin>>T;
    }while(T<1||T>5);

    for(q=0;q<T;q++)
    {
        do{
            cin>>N;
        }while(N>100000||N<1);

        for(w=0;w<N;w++)
        {
                        do{
                                cin>>A[w];
                          }while(A[w]>1000000||A[w]<1);
        }

        flag[q]=ins_sor(A[q],N[q]);

    }

        return 0;
}
