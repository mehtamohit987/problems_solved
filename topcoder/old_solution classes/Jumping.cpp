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

class Jumping {
public:
	string ableToGet(int, int, vector <int>);
};

string Jumping::ableToGet(int x, int y, vector <int> jumpLengths) {
		string M("Solution exists");
	string N("Solution does not exist");
	bool flag=true;
	vector<vector<int> > g(n,vector<int>(n,-1));
	vector<vector<int> > l(n,vector<int>(n,-1));
	for(int i=0;i<n;i++)
	{
		if(L[i]%G[i]==0)
		{
			if(g[A[i]][B[i]]==-1||g[A[i]][B[i]]==G[i])g[A[i]][B[i]]=G[i];else return N;
			if(l[A[i]][B[i]]==-1||l[A[i]][B[i]]==L[i])l[A[i]][B[i]]=L[i];else return N;
		}
		else
			return N;
	}
/*
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			if()

		}
*/
	return (flag?M:N);
}


double test0() {
	int p0 = 5;
	int p1 = 4;
	int t2[] = {2, 5};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Jumping * obj = new Jumping();
	clock_t start = clock();
	string my_answer = obj->ableToGet(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Able";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 3;
	int p1 = 4;
	int t2[] = {4};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Jumping * obj = new Jumping();
	clock_t start = clock();
	string my_answer = obj->ableToGet(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Not able";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 3;
	int p1 = 4;
	int t2[] = {6};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Jumping * obj = new Jumping();
	clock_t start = clock();
	string my_answer = obj->ableToGet(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Not able";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 0;
	int p1 = 1;
	int t2[] = {100, 100};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Jumping * obj = new Jumping();
	clock_t start = clock();
	string my_answer = obj->ableToGet(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Able";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 300;
	int p1 = 400;
	int t2[] = {500};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Jumping * obj = new Jumping();
	clock_t start = clock();
	string my_answer = obj->ableToGet(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Able";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int p0 = 11;
	int p1 = 12;
	int t2[] = {1,2,3,4,5,6,7,8,9,10};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Jumping * obj = new Jumping();
	clock_t start = clock();
	string my_answer = obj->ableToGet(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Able";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test6() {
	int p0 = 11;
	int p1 = 12;
	int t2[] = {1,2,3,4,5,6,7,8,9,100};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Jumping * obj = new Jumping();
	clock_t start = clock();
	string my_answer = obj->ableToGet(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Not able";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	time = test6();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
