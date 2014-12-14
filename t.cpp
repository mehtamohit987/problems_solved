#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{

    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{int i,j,n=6,count;
int x[]={2,3,5,7,14,105};
vector<int> A(x,x+sizeof(x)/sizeof(x[0]));
   sort(A.begin(),A.end());

    for(i=0;i<n-1;i++)
    {
    cout<<"\n";
    for(j=0;j<n;j++)
    {
cout<<A[j]<<" ";
    }

        count=0;

        for(j=i+1;j<n;j++)
        {
            if(A[j]%A[i]==0)
            {cout<<"ener";
            A[j]/=A[i];}
        }

    }

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    bool flag=true;
    for(i=0,j=0;i<n,j<n;)
    {
        if(A[i]==1)i++;
        if(B[j]==1)j++;

        if(i>0&&A[i]==A[i-1])i++;
        if(j>0&&B[i]==B[j-1])j++;


        if(A[i]!=B[j]){ flag=false; break;}

        i++;j++;
    }
    string S;
    if(flag==false) S="Not equal";
    else S="Equal";

 cout<<S;
 /*
cout<<"\n";
pair<set<int>::iterator,bool> c;


    set<int> S;
    for(i=0;i<n;)
    {



        c=S.insert(A[i]);
        if(c.second==false)
            A.erase(A.begin()+i);*/
        /*else
            i++;*/


    }
    for(j=0;j<n;j++)
    {
cout<<A[j]<<" ";
    }

    cout<<S.size();
*/
}



/*
vector<int> A1;

for(it=S.begin(),it!=S.end();it++)
{
A1.push_back(*it);
cout<<*it;


}


while(!S.empty())
{



}*/
