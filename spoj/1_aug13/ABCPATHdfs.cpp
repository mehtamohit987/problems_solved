#include<iostream>
using namespace std;
int H,W;
char C[50][50],D[50][50];
int maxmm(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}


int find_max_path(int a,int b)
{
    if(D[a][b]!=-1)
        return D[a][b];
    int i,num,x[8],path=0;
    num=0;
    if(a>0&&C[a-1][b]==C[a][b]+1)   x[num++]=1;
    if(b>0&&C[a][b-1]==C[a][b]+1)   x[num++]=2;
    if(a<H-1&&C[a+1][b]==C[a][b]+1) x[num++]=3;
    if(b<W-1&&C[a][b+1]==C[a][b]+1) x[num++]=4;
    if(a>0&&b>0&&C[a-1][b-1]==C[a][b]+1)    x[num++]=5;
    if(a<H-1&&b<W-1&&C[a+1][b+1]==C[a][b]+1)x[num++]=6;
    if(a>0&&b<W-1&&C[a-1][b+1]==C[a][b]+1)  x[num++]=7;
    if(a<H-1&&b>0&&C[a+1][b-1]==C[a][b]+1)  x[num++]=8;

    for(i=0;i<num;i++)
    {
        switch(x[i])
        {

        case 1:
                path=maxmm(path,1+find_max_path(a-1,b));
                break;
        case 2:
                path=maxmm(path,1+find_max_path(a,b-1));
                break;
        case 3:
                path=maxmm(path,1+find_max_path(a+1,b));
                break;
        case 4:
                path=maxmm(path,1+find_max_path(a,b+1));
                break;
        case 5:
                path=maxmm(path,1+find_max_path(a-1,b-1));
                break;
        case 6:
                path=maxmm(path,1+find_max_path(a+1,b+1));
                break;
        case 7:
                path=maxmm(path,1+find_max_path(a-1,b+1));
                break;
        case 8:
                path=maxmm(path,1+find_max_path(a+1,b-1));
                break;
        }
    }

    D[a][b]=path;
    return D[a][b];

}

int main()
{
    int num,i,j,k,found,ans=-1;
    int F[2500][2];
    char a[3];
    scanf("%d",&H);
    scanf("%d",&W);
    num=0;
    while(H!=0&&W!=0)
    {
        num++;
        k=-1;

        gets(a);
        for(i=0;i<H;i++)
        {
            gets(C[i]);
            for(j=0;j<W;j++)
            {
                if(C[i][j]=='A')
                {
                    k++;
                    F[k][0]=i;F[k][1]=j;
                }

                D[i][j]=-1;

            }
        }
        found=k+1;
        for(k=0;k<found;k++)
        {
            ans=maxmm(find_max_path(F[k][0],F[k][1]),ans);
        }
        printf("Case %d : %d\n",num,ans+1);

        scanf("%d",&H);
        scanf("%d",&W);
    }
}
