#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class Circuits {
public:
    int n;
    vector<vector<int> > G;

int dfs(int v)
{   int i,res=0;


    for(i=0;i<n;i++)
    {
        if(G[v][i]!=-1)
        {

        res=max(res,dfs(i)+G[v][i]);
        }
    }

    return res;
}
	int howLong(vector <string>, vector <string>);

};


int Circuits::howLong(vector <string> connects, vector <string> costs) {

    n=connects.size();
    G=vector<vector<int> > (n,vector<int> (n,-1));
    int i,j,k,res=0;

    for(i=0;i<n;i++)
    {
    istringstream s(connects[i]);

    istringstream c(costs[i]);

        while(s>>j&& c>>k)
        {
            G[i][j]=k;
        }
    }


   for(i=0;i<n;i++)
    {
        j=dfs(i);
        if(j>res)
            res=j;
    }

cout<<res;
return res;

}
int main()
{
    Circuits C;

    string conn[] = {"1 2","2",""};
	vector<string> connects(conn, conn+sizeof(conn)/sizeof(string));
    string cost[] = {"5 3","7",""};
    vector<string> costs(cost,cost+sizeof(cost)/sizeof(string));
    C.howLong(connects,costs);

}
