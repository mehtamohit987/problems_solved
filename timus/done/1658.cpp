#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<cmath>
#include<map>
#include<algorithm>
using namespace std;
int len[901][8101];
int dig[901][8101];
//int num[901][8101];


int main()
{
    int t,s1,s2,n,i,j,k;

   // freopen("input.txt", "r", stdin);

    scanf("%d",&t);


    for(i=1;i<=900;i++)
    {

        for(j=1;j<=8100;j++)
        {

            for(k=1;k<=9;k++)
            {

                if((i-k)<0||(j-k*k)<0)
                    break;
                else if((i-k)==0&&(j-k*k)==0)
                {

                    len[i][j]=1;
                    dig[i][j]=k;
                    //num[i][j]=k;
                }
                else if(len[i-k][j-k*k]>0)
                {

                    if(len[i][j]==0||len[i-k][j-k*k]+1<len[i][j])
                    {

                        len[i][j]=len[i-k][j-k*k]+1;
                        dig[i][j]=k;
                        //num[i][j]=k+10*(num[i-k][j-k*k]);

                    }
                    /*else if(len[i-k][j-k*k]+1==len[i][j])
                    {
                        if(k+10*(num[i-k][j-k*k])<num[i][j])
                        {

                            len[i][j]=len[i-k][j-k*k]+1;
                            dig[i][j]=k;
                            //num[i][j]=k+10*(num[i-k][j-k*k]);

                        }
                    }*/

                }

            }
        }
    }


    while(t--)
    {

        scanf("%d%d",&s1,&s2);

        if(s1>900||s2>8100)
        {printf("No solution\n"); continue;}


        if(len[s1][s2]>100||len[s1][s2]==0) {printf("No solution\n"); continue;}

//        printf("%d\n",num[s1][s2]);

        n=len[s1][s2];int m;
        for(int i=0;i<n;i++)
        {
            m=dig[s1][s2];
            cout<<m;
            s1-=m;
            s2-=(m*m);
        }
        cout<<"\n";

    }




}







/*map < pair<int,int>,int > M;
map < pair<int,int>,int > ::iterator it;
//vector<vector<int> > M;
int func(int sum, int sq_sum,int k)
{
    if(k==101) return -1;
    //int &d = M[sum][sq_sum];
    it=M.find(make_pair(sum,sq_sum));
    if(it!=M.end())return (*it).second;

    //if(d!=-2) return d;

    if(sum==0&&sq_sum==0) {M[make_pair(sum,sq_sum)]=0;return 0;}

    if(sum<=0||sq_sum<=0) return -1;

    int a=-1;

    for(int i=(sum<10?sum:9);i>0;i--)//(int i=1;i<10&&i<=sum;i++)
    {
        if(sum-i<0||sq_sum-i*i<0) continue;

        a=func(sum-i,sq_sum-i*i,k+1);
        if(a!=-1){M[make_pair(sum,sq_sum)]=i+10*a; return M[make_pair(sum,sq_sum)];}
    }
    return -1;
}

int main()
{
    int t,s1,s2,n;

    freopen("input.txt", "r", stdin);

    cin>>t;

    //M=vector<vector<int> >(10000,vector<int> (10000,-2));

    while(t--)
    {
        cin>>s1>>s2;
        n=func(s1,s2,0);

        if(n==-1)
        {cout<<"No solution\n";continue;}

        cout<<n;
        cout<<"\n";

    }
}
*/
