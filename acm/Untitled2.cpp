#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int minf(int a,int b)
{
    if(a<b)
        return a;
    return b;
}
int count_occurence(char grid[15][15],char tmp[15][15],int w,int w2,int N,int M)
{
    int occur=0;
    for(int i=0;i<(N-w+1);i++)
    {
        for(int j=0;j<(M-w2+1);j++)
        {
            if(tmp[0][0]==grid[i][j])
            {
                int tctr=0;
                for(int e=0;e<w;e++)
                {
                    for(int f=0;f<w2;f++)
                        {if(tmp[e][f]==grid[i+e][f+j])
                        tctr++;
                        }
                }

                if(tctr==w*w2)
                    occur++;
            }
        }
    }
  return occur;
}

int printmatrix(int i,int j,int w,int w2,char grid[15][15],int N,int M)
{
    char tgrid[15][15];
    for(int p=0;p<w;p++)
    {
        for(int q=0;q<w2;q++)
            tgrid[p][q]=grid[p+i][q+j];
    }
    if(count_occurence(grid,tgrid,w,w2,N,M)==2)
    return 1;
    return 0;
}
int main() {
int T;
scanf("%d",&T);
while(T)
   {char grid[15][15];
   int N,M;
   scanf("%d %d",&N,&M);
   int tl=minf(N,M);
   for(int r=0;r<N;r++)
    scanf("%s",grid[r]);
   int w;
   int ans=0,w2;
  for(w2=M;w2>0;w2--)
  {for(w=N;w>0;w--)
   {
       for(int i=0;i<(N-w+1);i++)
       {
           for(int j=0;j<(M-w2+1);j++)
            {
               if(printmatrix(i,j,w,w2,grid,N,M)==1)
               {
                if(ans<(w*w2))
                    ans=w*w2;
               }

            }
       }

   }
   }

   printf("%d\n",ans);
T--;
}
}
