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


double test0() {
	string t0[] = {"000","000","000"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	AddElectricalWires * obj = new AddElectricalWires();
	clock_t start = clock();
	int my_answer = obj->maxNewWires(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"000","000","000"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {0,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	AddElectricalWires * obj = new AddElectricalWires();
	clock_t start = clock();
	int my_answer = obj->maxNewWires(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"01","10"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	AddElectricalWires * obj = new AddElectricalWires();
	clock_t start = clock();
	int my_answer = obj->maxNewWires(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"00000","00000","00000","00000","00000"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {0,1,2,3,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	AddElectricalWires * obj = new AddElectricalWires();
	clock_t start = clock();
	int my_answer = obj->maxNewWires(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"01000","10100","01010","00100","00000"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {2,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	AddElectricalWires * obj = new AddElectricalWires();
	clock_t start = clock();
	int my_answer = obj->maxNewWires(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

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

//Powered by [KawigiEdit] 2.0!
