#include<iostream>
using namespace std;
char C;int m=0;
void indian_connection(int G,int K,int N)
{
    if(G==1)
    {
        C='M';
        indian_connection(G+1,K,N);
    }
    if(G<N||(G==N&&m<K))
    {
        m++;
        indian_connection(G+1,K,N);
        C=(C=='M')?'F':'M';
        m++;
        indian_connection(G+1,K,N);
    }

}


int main()
{
    int T,N;
    long long K;
    cin>>N>>K;
    indian_connection(1,K,N);
    cout<<C;

}
