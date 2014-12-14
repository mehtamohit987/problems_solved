#include<iostream>
#include<cstdio>
#include<cstdio>
#include<string>
#include<queue>

using namespace std;
int main()
{
    int i,j,num=0;
    int H,W;

    int x_ch[]={1,-1,0,0,1,-1,1,-1};
    int y_ch[]={0,0,1,-1,1,-1,-1,1};
    queue <pair<int,int> >Q;
    pair<int,int> temp1,temp2;
    scanf("%d",&H);
    scanf("%d",&W);

    while(H!=0&&W!=0)
    {
        num++;
        string C[50];
        bool vis[50][50]={false};
        char ch='A';
        ch=ch-1;

        for(i=0;i<H;i++)
        {
            cin>>C[i];
            for(j=0;j<W;j++)
            {
                if(C[i][j]=='A')
                {
                    Q.push(pair<int,int>(i,j));
                    vis[i][j]=true;
                }

            }
        }
//cout<<"\nA found : "<<Q.size()<<"\n";

        while(!Q.empty())
        {

            temp1=Q.front();
			//cout<<"\nqueue popped ("<<temp1.first<<temp1.second<<") \n";
            if(C[temp1.first][temp1.second]>ch)
            ch=C[temp1.first][temp1.second];
            Q.pop();
            for(i=0;i<8;i++)
            {
                temp2.first=temp1.first+x_ch[i];
                temp2.second=temp1.second+y_ch[i];
				if(temp2.first>=0&&temp2.first<H&&temp2.second>=0&&temp2.second<W&&vis[temp2.first][temp2.second]==false)
				{
					//cout<<"\n checking ("<<temp2.first<<temp2.second<<") \n";
                	if(C[temp2.first][temp2.second]==C[temp1.first][temp1.second]+1)
                	{
                  	  	vis[temp2.first][temp2.second]=true;
                 	   //	printf("\n currently(%d,%d) found %c\n",temp2.first,temp2.second,C[temp1.first][temp1.second]+1);
						Q.push(temp2);
               		}
				}
            }

        }

    printf("Case %d: %d\n",num,ch-64);
    scanf("%d",&H);
    scanf("%d",&W);
    }

    return 0;
}
