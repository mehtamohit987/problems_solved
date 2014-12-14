#include<iostream>
using namespace std;
bool *A;
int *C,n,hq1,hq2;
void scan_input()
{
    scanf("%d",&n);
    scanf("%d",&hq1);
    scanf("%d",&hq2);
    C=new int[n+1];
    for(i=1;i<=n;i++)
    {
        C[i]=0;
        if(i!=hq1)
            scanf("%d",&C[i]);
    }
}
void build_graph()
{
    A=new bool[(n+1)*(n+1)];
    for(i=1;i<=n;i++)
        if(i!=hq1)
        {
            if(C[i]=!hq1)
            {
                A[hq1][C[i]]=true;
                A[C[i]][hq1]=true;
            }
            else
            {
                A[hq1][i]=true;
                A[i][hq1]=true;
            }
        }

}
void headquarter_shift()
{
    for(i=1;i<=n;i++)
    {
        C[i]=0;
        if(i!=hq2)
            if(A[i][hq2]==true)
                C[i]=hq2;
    }

    for(i=1;i<=n;i++)
    {
        if(C[i]!=0)
            if(A[i][hq2]==true)
                C[i]=hq2;
    }

}
void print_output()
{
    for(i=1;i<=n;i++)
    {
        if(i!=hq2)
            printf("%d",C[i]);
    }
    printf("\n");

    delete []A;
}

int main()
{
    int t,i,m;
    scanf("%d",&t);

    while(t>0)
    {
        scan_input();
        build_graph();
        headquarter_shift();
        print_output();
        t--;
    }

}
