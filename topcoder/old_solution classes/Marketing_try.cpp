#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<cmath>
using namespace std;

bool adj[30][30],visited[30],perm_vis[30];
int n=0;

void visit(int x)
{
    int i,top;
    //bool ans=true;
    stack<int> s;
    s.push(x);

    while (s.empty() == false) {
    top = s.top();
    s.pop();

    if(perm_vis[top])
    {
        //ans=false;
        break;
    }
    if (visited[top]) continue;

    visited[top] = true;
    perm_vis[top]=true;
    for(i=0;i<n;i++)
    if(adj[top][i]==true)
    s.push(i);

    }

    //return ans;
}
/*void visit(int x)
{
    int i,top;

    stack<int> s;
    s.push(x);

    while (s.empty() == false) {
    top = s.top();
    s.pop();

    if (visited[top]) continue;

    visited[top] = true;

    for(i=0;i<n;i++)
    if(adj[top][i]==true)
    s.push(i);

    }

    return ans;
}*/
class Marketing
{
    public:
    long howMany(vector<string> compete)
    {
        int i,j,k,t;
        long res;
        n=compete.size();

        cout<<"\n\nIn howMany():\n\nSize:"<<n<<"\nPrinting argument by size : \n";

        for(i=0;i<n;i++)
        cout<<compete[i]<<"\n";

        int result=0;

        for(i=0;i<30;i++)
        {
            visited[i]=perm_vis[i]=false;
            for(j=0;j<30;j++)
                adj[i][j]=false;
        }

        for(k=0;k<n;k++)
        {
            printf("\n\n%d competes with : \n",k);
            istringstream ss(compete[k]);
            while(ss>>t)
            {
                printf("\n%d\n",t);
                if(t<n&&t>=0)
                    {adj[k][t]=true;adj[t][k]=true;}
            }
        }

        for(i=0;i<n;i++)
        if (visited[i]==false)
        {
            visit(i);
                result++;

            perm_vis[i]=true;
        }

        if(result==0)    res=-1;
        else            res=pow(2,result);
        cout<<"\n\nNo of individual graphs : \n\n"<<result;
        cout<<"\n\nPrinting result : \n";
        printf("%ld\n",res);


        return res;
    }
};




int main()
{
    Marketing M;
    int i,len;
    string s[]={"1","2","3","0","0 5","1"};
    vector<string> x(s,s+sizeof(s)/sizeof s[0]);

    len=x.size();
    cout<<"In main():\n\nSize:"<<len<<"\n";

    for(i=0;i<len;i++)
    cout<<x[i]<<"\n";


    long res=M.howMany(x);


    cout<<"\n\nBack in main():\n\nPrinting result : \n";
    cout<<res;
}
