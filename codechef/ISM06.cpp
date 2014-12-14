#include<iostream>
#include<iomanip>
#include<cstdio>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
#define si(a) scanf("%d",&a)
#define sf(a) scanf("%f",&a)
#define sc(a) scanf("%c",&a)
#define ss(a) scanf("%s",&a)
#define f(i,n) for(i=0;i<n;i++)
#define pi(a) printf("%d",a)
#define pf(a) printf("%f",a)
#define pc(a) printf("%c",a)
#define ps(a) printf("%s",a)

int main()
{

    int i,j,k,N,M,temp;
    //freopen("input.in","r",stdin);

    si(N);
    si(M);
    vector<vector<int> > A(N,vector<int> (N,0));
    vector<vector<int> > B(N,vector<int> (N,0));
    vector<vector<int> > C(N,vector<int> (N,0));
    f(i,N)
    f(j,N)
    si(A[i][j]);

    while(M--){

    si(k);
    f(i,N)
    f(j,N)
    B[i][j]=A[i][j];

    k/=90;
    while(k--){

    f(i,N)
    f(j,N)
    C[i][j]=B[j][i];

    f(i,N)
    f(j,N)
        B[i][j]=C[i][j];

    f(j,N/2)
    f(i,N)
    {
        temp=B[i][j];
        B[i][j]=B[i][N-j-1];
        B[i][N-j-1]=temp;
    }

    }

    f(i,N){
    f(j,N)
    {
      cout<<B[i][j]<<" ";
        }cout<<"\n";}
        cout<<"\n";
    }

}
