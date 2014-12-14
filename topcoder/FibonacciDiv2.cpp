#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
class FibonacciDiv2
{
public:
int find(int N)
{
    int i,res=0;
    vector<int> A;

    A.push_back(0);
    A.push_back(1);


    i=1;
    while(A[i]<N)
    {
        A.push_back(A[i]+A[i-1]);
        i++;
    }


    if((N-A[i-1])>(A[i]-N))
        res=A[i]-N;
    else
        res=N-A[i-1];

    return res;
}
};
int main()
{

FibonacciDiv2 F;
cout<<F.find(15);
cout<<F.find(19);
cout<<F.find(1000000);
}
