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

class PotentialGeometricSequence {
public:
	int numberOfSubsequences(vector <int>);
};

int PotentialGeometricSequence::numberOfSubsequences(vector <int> d) {
	
	int i,j,diff,n=d.size(),s,cnt=0;
	bool flag;
	for(s=1;s<=n;s++)
	for(i=0;i<=n-s;i++)
	{
		flag=true;
		diff=0;
		for(j=i+1;j<i+s;j++)
		{
			if(j==i+1)
				diff=d[j]-d[j-1];
			else if(d[j]-d[j-1]!=diff)
				{flag=false;break;}	
		}
		if(flag) cnt++;
	
	}
	return cnt;
}


double test0() {
	int t0[] = {0,1,2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	PotentialGeometricSequence * obj = new PotentialGeometricSequence();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsequences(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 6;
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
	int t0[] = {1,2,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	PotentialGeometricSequence * obj = new PotentialGeometricSequence();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsequences(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 5;
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
	int t0[] = {3,2,1,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	PotentialGeometricSequence * obj = new PotentialGeometricSequence();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsequences(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 10;
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
	int t0[] = {1,2,4,8,16};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	PotentialGeometricSequence * obj = new PotentialGeometricSequence();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsequences(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 9;
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
	int t0[] = {1,3,5,5,5,5,64,4,23,2,3,4,5,4,3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	PotentialGeometricSequence * obj = new PotentialGeometricSequence();
	clock_t start = clock();
	int my_answer = obj->numberOfSubsequences(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 37;
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
