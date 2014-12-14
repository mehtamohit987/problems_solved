#include<iostream>
#include<cstdio>
#include<stack>
#include<algorithm>

using namespace std;

int main()
{

    int A[1005],n,i,k;

    scanf("%d",&n);
    while(n!=0)
    {
        stack<int> S;
        k=1;
        for(i=0;i<n;i++)
        scanf("%d",&A[i]);

        i=0;
        while(i<n)
        {
            if(A[i]==k)
            {
                //cout<<k<<" is added to  output list from input\n";
                k++;
                i++;
            }
            else if(!S.empty() && S.top()==k)
            {

                //cout<<k<<" is added to output list from stack\n";
                S.pop();
                k++;
            }
            else
            {
                //cout<<A[i]<<" is added to stack\n";
                S.push(A[i]);
                i++;
            }

        }

        if(S.empty())
        printf("yes\n");
        else
        {
            if(k!=(n+1))
            {
                while(!S.empty()&&S.top()==k)
                {
                    //cout<<k<<" is added to output list from stack\n";
                    S.pop();
                    k++;
                }

                if(k==n+1)
                printf("yes\n");
                else
                printf("no\n");
            }
            else
            printf("no\n");

        }
        scanf("%d",&n);
    }
}
