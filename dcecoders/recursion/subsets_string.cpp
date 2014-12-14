#include<iostream>
#include<string>
using namespace std;
string S;
char* C;
void subset(int n,int index, int length)
{
    int i,j,flag=0;
    if(index==length)
    {
        for(i=0;i<length;i++)
            printf("%c",C[i]);
        printf("\n");
    }
    for(i=index;i<n;i++)
    {
        for(j=0;j<index;j++)
        if(C[j]==S[i])
        flag=1;

        if(flag==0)
        {
            C[index]=S[i];
            subset(n,index+1,length);
        }
    }
}
void subsets_of_string()
{
    int k,n;
    n=S.length();
    C=new char[n];
    for(k=1;k<=n;k++)
        subset(n,0,k);

}
int main()
{
    S="abcd";
    subsets_of_string();
}
