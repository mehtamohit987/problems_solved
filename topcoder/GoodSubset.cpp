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

class GoodSubset {
public:
	vector<int> V;int n,P;
	int subset(int i,int p)
	{
		
		if(p==1) return 1;
		
		int cnt=0;
		
		if(i==n) return 0;
		
		if(p%V[i]==0)
		cnt+=subset(i+1,p/V[i]);
		
		cnt%=1000000007;

		cnt+=subset(i+1,p);

		cnt%=1000000007;
		
		return cnt;
	
	}
	int fact(int k)
	{
		if(k==0) return 1;
		return (k*fact(k-1)) % 1000000007;
	}
	int numberOfSubsets(int, vector <int>);
};

int GoodSubset::numberOfSubsets(int goodValue, vector <int> d) {
	V=d;
	n=V.size();
	sort(V.begin(),V.end());
	P=goodValue;
	if(P!=1)
	return subset(0,goodValue);
		
	int k=0,q;
	long long ret=0;
	for(int i=0;i<n;i++)
		if(V[i]==1)
		k++;

	for(int i=1;i<=k;i++)
	{
		//kCi
		q=fact(k)/fact(k-i)/fact(i);
		ret+=q;
		if((ret+q)<1000000007)
		ret+=q;
		else
		ret=q-(1000000007-ret);
	}
	return ret;

		
}

double test0() {
	int p0 = 10;
	int t1[] = {2,3,4,5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodSubset * obj = new GoodSubset();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsets(p0, p1);
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
double test1() {
	int p0 = 6;
	int t1[] = {2,3,4,5,6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodSubset * obj = new GoodSubset();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsets(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
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
	int p0 = 1;
	int t1[] = {1,1,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodSubset * obj = new GoodSubset();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsets(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 7;
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
	int p0 = 12;
	int t1[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodSubset * obj = new GoodSubset();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsets(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 6;
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
	int p0 = 5;
	int t1[] = {1,2,3,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GoodSubset * obj = new GoodSubset();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsets(p0, p1);
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
