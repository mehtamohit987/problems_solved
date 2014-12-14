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
    long N[5],A[5][100000];

    do{
        cin>>T;
        if(T<1||T>5)
        cout<<"Total number of test cases should be a positive natural number <=5..\nPlease re-enter : ";
    }while(T<1||T>5);

    for(q=0;q<T;q++)
    {
        do{
            cin>>N[q];
            if(N[q]>100000||N[q]<1)
            cout<<"Total number elements should be a positive natural number <=100000..\nPlease re-enter : ";

        }while(N[q]>100000||N[q]<1);

        for(w=0;w<N[q];w++)
        {
                        do{
                                cin>>A[q][w];
                                if(A[q][w]>1000000||A[q][w]<1)
                                cout<<"The value of elements should be a positive natural number <=1000000..\nPlease re-enter : ";
                          }while(A[q][w]>1000000||A[q][w]<1);
        }

        flag[q]=ins_sor(A[q],N[q]);

    }

        cout<<"\nOutput :\n";
        for(q=0;q<T;q++)
    cout<<flag[q]<<"\n";

        return 0;
}
