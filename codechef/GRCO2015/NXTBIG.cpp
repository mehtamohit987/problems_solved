#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

//char
int A[100005];

int main()
{
    int T,n,i,t,j;//ans;
    bool f;
//freopen("input.txt","r",stdin);
    scanf("%d",&T);
    while(T--){
    f=false;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&A[i]);}//a);A[i]=a+48;}
    //A[n]='\0';
    //printf("%s\n",A);
    //ans=A[0];
    for(i=0;i<n;i++)printf("%d",A[i]);
    //ans=ans*10+A[i];//

    //printf("%d\n",ans);
    printf("\n");

    for(i=n-2;i>=0;i--)
    if(A[i]<A[i+1]){f=true;break;}
    //cout<<"i:"<<i;
    if(!f){
        printf("%s\n","NO NXTBIG");
        continue;
    }

    for(j=n-1;j>i&&A[j]<=A[i];j--);
    //cout<<"j:"<<j<<"\n";
    t=A[j];
    A[j]=A[i];
    A[i]=t;

    //ans=A[0];
    for(j=0;j<=i;j++)cout<<A[j];
    //ans=ans*10+A[j];//

    for(j=n-1;j>i;j--)cout<<A[j];
    //ans=ans*10+A[j];//

   //printf("%d\n",ans);
printf("\n");

/*
    if(next_permutation(A,A+n)){
    printf("%s\n",A);
    }else
    {printf("%s\n","NO NXTBIG");}
*/

    }
}
