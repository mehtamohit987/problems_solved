#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
//given array of wine price. after each year, sell exactly one wine bottle either from left or from right end of bottles array
int n;
vector<int> P;
vector<vector<int> > cache;
vector<int> S;
int profit(int be,int en)
{
    if(be>en) return 0;
    if(cache[be][en]!=-1) return cache[be][en];

    int year=n+be-en;
    return cache[be][en]=max(profit(be+1,en)+year*P[be],profit(be,en-1)+year*P[en]);

}

int form_solution(int be,int en)
{
    if(be>en) return 0;

    if(cache[be][en]!=-1) return cache[be][en];

    int year=n+be-en,a,b;

    a=profit(be+1,en)+year*P[be];
    b=profit(be,en-1)+year*P[en];


    if(a>=b)
     {cout<<"exec";S[n+be-en-1]=be;return a;}

    else
     {cout<<"exec";S[n+be-en-1]=en;return b;}

    //return cache[be][en]=max(a,b);
}
void print_sol()
{

        for(int i=0;i<S.size();i++)
        cout<<S[i];

}

int profit_iter(int be,int en)
{
    int prof,i,j,l;

    for(i=be;i<en;i++)
    cache[i][i]=n*P[i];


    for(l=2;l<=(be-en+1);l++) //length
    for(i=be;i<en;i++)
    {
        j=i+l-1;
        cache[i][j]=max(cache[i+1][j]+(n+i-j)*(P[i]),cache[i][j-1]+(n+i-j)*(P[j]));
    }


    return cache[be][en];
}

/*void form_sol_iter(int be,int en)
{
    int prof,i,j,l;

    for(i=be;i<en;i++)
    cache[i][i]=n*P[i];


    for(l=2;l<=(be-en+1);l++) //length
    for(i=be;i<en;i++)
    {
        j=i+l-1;
        a=cache[i+1][j]+(n+i-j)*(P[i]);
        b=cache[i][j-1]+(n+i-j)*(P[j]);
        cache[i][j]=
        if(a>=b)
    }


    return cache[be][en];
}
*/
int main()
{

    scanf("%d",&n);
    P=vector<int> (n);
    S=vector<int> (n,-1);
    cache=vector<vector<int> >(n,vector<int> (n,-1));

    for(int i=0;i<n;i++)
    scanf("%d",&P[i]);

    //cout<<profit(0,n-1);

    //fill(cache.begin(),cache.end(),-1);
    //cout<<"\n"<<profit_iter(0,n-1);

    cout<<form_solution(0,n-1)<<"\n";
    print_sol();

}
