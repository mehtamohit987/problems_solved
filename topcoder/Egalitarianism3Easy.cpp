#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include<queue>
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

class Egalitarianism3Easy {
	int n;
	vector<vector<int> > G;
	vector<int> levNum;
public:
	void bfs(int v)
	{
		queue<pair<int,int> > Q;
		int i;
		
		Q.push(make_pair(v,0));

		levNum[0]++;
		
		pair<int,int> u;
		
		while(!Q.empty())
		{
			u=Q.front();Q.pop();
			
			for(i=0;i<n;i++)
			{	
				if(G[u.first][i])
				{
					Q.push(make_pair(i,u.second+G[u.first][i]));
					levNum[u.second+G[u.first][i]]++;
				}
			}
		}
	
	}
	int maxCities(int, vector <int>, vector <int>, vector <int>);
};


int Egalitarianism3Easy::maxCities(int N, vector <int> a, vector <int> b, vector <int> len) {

	n=N;	
	int i,j;
	G=vector<vector<int> >(n,vector<int> (n,0));
	int sum=0;
	
	for (i = 0; i < a.size(); ++i)
	{
		/* code */
		G[a[i]-1][b[i]-1]=len[i];sum+=len[i];
	}
	
	levNum=	vector<int>(n,sum);
	bfs(0);
	int max=0,nu=0;
	for(i=0;i<n;i++)	
	{
		if(max<=levNum[i])
		{	max=levNum[i]; nu=i; }
	}
	
	if(max==1&&nu!=0) max=2;
	
	return max;
	
}


double test0() {
	int p0 = 4;
	int t1[] = {1,1,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,3,4};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {1,1,1};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	Egalitarianism3Easy * obj = new Egalitarianism3Easy();
	clock_t start = clock();
	int my_answer = obj->maxCities(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 6;
	int t1[] = {1,2,3,2,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,3,4,5,6};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {2,1,3,2,3};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	Egalitarianism3Easy * obj = new Egalitarianism3Easy();
	clock_t start = clock();
	int my_answer = obj->maxCities(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 10;
	int t1[] = {1,1,1,1,1,1,1,1,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,3,4,5,6,7,8,9,10};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {1000,1000,1000,1000,1000,1000,1000,1000,1000};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	Egalitarianism3Easy * obj = new Egalitarianism3Easy();
	clock_t start = clock();
	int my_answer = obj->maxCities(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 9;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 2;
	int t1[] = {1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {3};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	Egalitarianism3Easy * obj = new Egalitarianism3Easy();
	clock_t start = clock();
	int my_answer = obj->maxCities(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 1;
	vector <int> p1;
	vector <int> p2;
	vector <int> p3;
	Egalitarianism3Easy * obj = new Egalitarianism3Easy();
	clock_t start = clock();
	int my_answer = obj->maxCities(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
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
