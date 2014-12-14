#include<iostream>
using namespace std;
char chess[8][8];
int mark[8][8];
int c=0,n=8;
void initialize()
{
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        mark[i][j]=-1;
        chess[i][j]='-';
    }

}
void unmark(int r)
{
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(mark[i][j]==r)
            mark[i][j]=-1;
    }

    for(int j=0;j<n;j++)
        if(chess[r][j]=='q')
            chess[r][j]='-';
}
void markrow(int r)
{
    for(int j=0; j<n;j++)
        if(mark[r][j]==-1)
            mark[r][j]=r;

}
void markcol(int i,int r)
{
    for(int j=0;j<n;j++)
        if(mark[j][i]==-1)
            mark[j][i]=r;
}
void markdiags(int i,int r)
{
    int x,y;
    for(x=i,y=r;x<n&&y<n;x++,y++)
        if(mark[y][x]==-1)
            mark[y][x]=r;
    for(x=i,y=r;x>0&&y>0;x--,y--)
        if(mark[y][x]==-1)
            mark[y][x]=r;

    for(x=i,y=r;x>0&&y<n;x--,y++)
        if(mark[y][x]==-1)
            mark[y][x]=r;

    for(x=i,y=r;x<n&&y>0;x++,y--)
        if(mark[y][x]==-1)
            mark[y][x]=r;

}

void printchess()
{
    printf("\n\n\nWay number %d\n\n",c);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%c",chess[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");
}

void nqueen(int r, int n)
{
    if(r==n)
    {   c++;
        printchess();
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(mark[r][i]==-1)
        {
            chess[r][i]='q';
            markrow(r);
            markcol(r,i);
            markdiags(r,i);
            nqueen(r+1,n);
            unmark(r);
        }
    }

}
int main()
{
initialize();

nqueen(0,n);
cout<<c;
}
