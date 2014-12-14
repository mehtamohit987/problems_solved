#include<iostream>
#include<sstream>
#include<stack>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstdlib>


using namespace std;
class Marketing
{
    public:
    int n;
    vector <vector <bool> > G;
    vector <int> colour;
    bool dfs(int v,int c);
    long howMany(vector<string> compete);
};

long Marketing::howMany(vector<string> compete)
{

    int i,v,k=0;
    n=compete.size();

    G=vector<vector<bool> > (n,vector<bool>(n,false));

    colour=vector<int>(n,-1);

    for(i=0;i<n;i++)
    {
        istringstream s(compete[i]);
        while(s>>v)
        {   G[i][v]=true; G[v][i]=true; }
    }

    for(i=0;i<n;i++)
        if(colour[i]=-1)
        {
            if(!dfs(i,0))
            return -1;

            k++;
        }

    return 1LL<<k;
}

bool Marketing::dfs(int v, int c)
{
    colour[v]=c;

    for(int i=0;i<n;i++)
    {
        if(G[v][i]==true)
        {
            if(colour[i]==-1)
            {
                if(!dfs(i,1-c))
                    return false;
            }
            else if(colour[i]==c)
                return false;
        }
    }

    return true;
}



int main()
{
    Marketing M;
    string s[]={"1","2","3","0","0 5 98989 9 9","1"};
    vector<string> x(s,s+sizeof(s)/sizeof s[0]);

    int len=x.size();
    long res=M.howMany(x);

    cout<<"\n\nBack in main():\n\nPrinting result : \n";
    cout<<res;



}
