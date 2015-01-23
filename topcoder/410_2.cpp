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

class AddElectricalWires {
public:
	set<int> g;
	vector<string> G;
	vector<int>C;
	int n;
	int colour(int s, int c)
	{
		C[s]=c;
		//cout<<"colour"<<s<<"with"<<c<<"\n";
		int ans=1;
		
		for(int i=0;i<n;i++)
			if(i!=s&&G[s][i]=='1'&&C[i]==-1)
			ans+=colour(i,c);
		//cout<<"nodes"<<ans<<"with"<<c<<"\n";
		return ans;
	}
	
	int maxNewWires(vector <string>, vector <int>);
};

int AddElectricalWires::maxNewWires(vector <string> wires, vector <int> gridConnections) {

	n=wires.size();
	int ans=0;G=wires;
	C=vector<int>(n,-1);
	
	bool f=false; int ma=0,x;
	for(int i=0;i<gridConnections.size();i++)
	{	
		g.insert(gridConnections[i]);
		x=colour(gridConnections[i],i);

		if(!f){ma=x;f=true;}
			else if(ma<x)ma=x;
	}
	for(int i=0;i<n;i++)
	if(C[i]!=-1)
		for(int j=i+1;j<n;j++)
			if(G[i][j]!='1'&&C[i]==C[j]){G[i][j]=G[j][i]='1';//cout<<"\n"<<i<<" "<<j<<"\n"
			ans++;}

//cout<<"ans"<<ans;
	int y=0;
	for(int i=0;i<n;i++)
	if(C[i]==-1)
	{	
		y++;
		for(int j=0;j<n;j++)
		if(G[i][j]=='1'){
			G[i][j]=G[j][i]='0';ans--;
		}
	}

/*	for(int i=0;i<n;i++)
	if(g.find(i)==g.end()){	f=true;
		for(int j=0;j<n;j++)if(G[i][j]=='1'){f=false;break;}

		if(f) y++;
	}
*/
//cout<<"y"<<y;
	x=(ma*(ma-1))/2;//cout<<"x"<<x;
	y=((ma+y)*(ma+y-1))/2;//cout<<"y"<<y;

	return y-x+ans;	

}


//Powered by [KawigiEdit] 2.0!