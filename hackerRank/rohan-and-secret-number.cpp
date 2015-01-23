#include <cmath>
#include <cstdio>
#include<cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //freopen("input.txt","r",stdin);
    int T,n,i,j,k;
    scanf("%d",&T);
    char A[205];
    bool f;

    while(T--)
    {
        f=false;
        scanf("%s",&A);
        n=strlen(A);
        i=n-3;
        while(i>=0&&!f)
        {
          for(j=n-1;j>=i+2;j--)
          {
              for(k=j-1;k>=i+1;k--){
                  if((10*10*(A[i]-48)+10*(A[k]-48)+(A[j]-48))%8==0)
                  {f=true;break;}
              }
              if(f)break;
            }
            if(f)break;
            i--;
        }
        if(f)printf("%d\n",n-3-i);
        else
            printf("%d\n",-1);
    }

    return 0;
}
