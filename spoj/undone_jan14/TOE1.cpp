#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    int N,i,j,no_X,no_O,win_X,win_O;
    no_X=no_O=win_X=win_O=0;
    char S[10];

    char A[3][3];
    scanf("%d",&N);

    while(N--)
    {

        for(i=0;i<3;i++)
        {
            gets(S);
            for(j=0;j<3;j++)
            {
                A[i][j]=S[j];
                if(A[i][j]=='X')
                    no_X++;
                else if(A[i][j]=='O')
                    no_O++;
            }
        }


        for(i=0;i<3;i++)
        {
            if(A[i][0]==A[i][1]&&A[i][1]==A[i][2]&&A[i][0]!='.')
            {
                if(A[i][0]=='O')
                win_O++;
                else if(A[i][0]=='X')
                win_X++;
            }
            if(A[0][i]==A[1][i]&&A[1][i]==A[2][i]&&A[0][i]!='.')
            {
                if(A[0][i]=='O')
                win_O++;
                else if(A[0][i]=='X')
                win_X++;
            }
        }

        if(A[0][0]==A[1][1]&&A[1][1]==A[2][2]&&A[0][0]!='.')
        {
            if(A[0][0]=='O')
                win_O++;
            if(A[0][0]=='X')
                win_X++;
        }

        if(A[0][2]==A[1][1]&&A[1][1]==A[2][0]&&A[0][2]!='.')
        {
            if(A[0][2]=='O')
                win_O++;
            if(A[0][2]=='X')
                win_X++;
        }


        if(win_X==win_O==0)
        {
            if(no_X==no_O||no_X==no_O+1)
                printf("yes\n");
            else    printf("no\n");
        }

        if(win_X==1&&win_O==0)
        {
            if(no_X==no_O+1)
                printf("yes\n");
            else    printf("no\n");
        }


        if(win_X==0&&win_O==1)
        {
            if(no_X==no_O)
                printf("yes\n");
            else    printf("no\n");
        }

        if(win_X==0&&win_O==1)
        {
            if(no_X==no_O)
                printf("yes\n");
            else    printf("no\n");
        }

        if(win_X==2)
        {
            if(no_X==no_O+1)
                printf("yes\n");
            else    printf("no\n");
        }

        if(N!=0)
        getchar();


    }

}
