#include <iostream>
#include <fstream>
using namespace std;
void dist(int a[],int size,int base);
void Emptyarray(int a[],int size);
void printarray(int a[],int size,ofstream &out );
void Resetarray(int a[],int size,int n);
void dist(int a[],int size,int base,ofstream &out);
void copyarray(int a[],int s[],int size);

int main()
{
    ifstream in("coindst.in");
    if(!in)
    {
        cout<<"Input File [coindst.in] Not Found"<<endl;
        in.close();
        return 1;
    }

    ofstream out("coindst.out");

    int n,k,a[10]={0};
    while(in>>n)
    {
        in>>k;
        Resetarray(a,k,n);
        if(k==0)
        {
            return 0;
        }
        dist(a,k-1,k-1,out);
        out<<endl;
    }

    return 0;

}

void printarray(int a[],int size, ofstream &out)
{

    for(int i=size; i>=0 ; i--)
    {
        out<<a[i]<<" ";
    }
    out<<endl;
}

void Emptyarray(int a[],int size)
{
    for(int i=size; i>=0 ; i--)
    {
        a[i]=0;
    }
}

void Resetarray(int a[],int size,int n)
{
    Emptyarray(a,size);
    a[size-1]=n;
}
void dist(int a[],int size,int base, ofstream &out)
{
    printarray(a,size,out);
    if(base==0)
    {
        return;
    }
    int s[10]={0};
    while(a[base]>0)
    {
        a[base]--;
        a[base-1]++;
        copyarray(a,s,size);
        dist(a,size,base-1,out);
        copyarray(s,a,size);
    }
}

void copyarray(int a[],int s[],int size)
{
    for(int i=0;i<size;i++)
    s[i]=a[i];
}
