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

class Marketing {
public:
	int n;
	vector<vector<bool> > G;
	vector<int> colour;
	bool dfs(int v, int c);
	long long howMany(vector <string>);
};
bool Marketing::dfs(int v, int c)
{
        //cout<<"\n\nin dfs :"<<v<<"\n"<<c<<"\n";
		colour[v]=c;

		for(int i=0;i<n;i++)
		{
			if(G[v][i])
			{
                //cout<<"\n\nadjacent node :"<<i<<"\n\n";
				if(colour[i]!=-1&&colour[i]==c)
					return false;
				else if(colour[i]==-1 && !dfs(i,1-c))
						return false;
			}
		}

	return true;

}
long long Marketing::howMany(vector <string> compete)
{
	int i,v,r=0;
	n=compete.size();
	//cout<<"\n\nsize :"<<n<<"\n\n";
	G=vector<vector<bool> > (n,vector<bool>(n,false));
	colour=vector<int> (n,-1);
	for(i=0;i<n;i++)
	{
		istringstream s(compete[i]);
		while(s>>v)
			G[i][v]=G[v][i]=true;
	}

    //cout<<"\n\ngraph :"<<n<<"\n\n";

    //cout<<"\n\nresult :"<<n<<"\n\n";
	for(i=0;i<n;i++)
	{
		if(colour[i]==-1)
		{   //cout<<"\n\n starting traverse for vertex :"<<i<<"\n\n";
			if(dfs(i,0))
			r++;
			else
			return -1;
		}
		//cout<<"\n\nres :"<<r<<"\n\n";
	}
	/*for(i=0;i<n;i++)
	{

       cout<<colour[i];
    }
*/
	return (1LL<<r);
}

//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!

//<%:start-tests%>
double test0() {
	string t0[] = {"1 4","2","3","0",""};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Marketing * obj = new Marketing();
	clock_t start = clock();
	long long my_answer = obj->howMany(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 2LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"1","2","0"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Marketing * obj = new Marketing();
	clock_t start = clock();
	long long my_answer = obj->howMany(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = -1LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"1","2","3","0","0 5","1"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Marketing * obj = new Marketing();
	clock_t start = clock();
	long long my_answer = obj->howMany(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 2LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"","","","","","","","","","",
 "","","","","","","","","","",
 "","","","","","","","","",""};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Marketing * obj = new Marketing();
	clock_t start = clock();
	long long my_answer = obj->howMany(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 1073741824LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"1","2","3","0","5","6","4"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Marketing * obj = new Marketing();
	clock_t start = clock();
	long long my_answer = obj->howMany(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = -1LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
//<%:end-tests%>
int main() {
	int time;
	bool errors = false;

	time = test0();
	if (time < 0)
		errors = true;

	time = test1();
	if (time < 0)
		errors = true;

	time = test2();
	if (time < 0)
		errors = true;

	time = test3();
	if (time < 0)
		errors = true;

	time = test4();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
