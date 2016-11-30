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

class TallShoes {
public:
	int maxHeight(int, vector <int>, vector <int>, vector <int>, long long);
};

int TallShoes::maxHeight(int N, vector <int> X, vector <int> Y, vector <int> height, long long B) {
vector<vector<bool> > G(N, vector<bool>(N,false));
vector<vector<int> > W(N, vector<int>(N,0) );
vector<vector<bool> > s(N, vector<bool>(B,false));
vector<vector<int> > c(N, vector<int>(B,-1) );

for(int i=0;i<N;i++)
G[X[i]][Y[i]]=true,W[X[i]][Y[i]]=H[i];

s[0][B]=true;
c[0][]
int i=0,j;
pqueue <pair<int,int> > P;

return 0;

}


double test0() {
	int p0 = 3;
	int t1[] = {0, 1, 0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1, 2, 2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {3, 4, 2};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	long long p4 = 1LL;
	TallShoes * obj = new TallShoes();
	clock_t start = clock();
	int my_answer = obj->maxHeight(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
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
	int t1[] = {0, 1, 0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1, 2, 2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {3, 4, 2};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	long long p4 = 52LL;
	TallShoes * obj = new TallShoes();
	clock_t start = clock();
	int my_answer = obj->maxHeight(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 9;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 8;
	int t1[] = {0, 0, 3, 3, 4, 4, 4, 7, 7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1, 2, 1, 2, 3, 5, 6, 5, 6};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {1000, 1000, 1000, 1000, 1, 1000, 1000, 1000, 1000};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	long long p4 = 3LL;
	TallShoes * obj = new TallShoes();
	clock_t start = clock();
	int my_answer = obj->maxHeight(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 10;
	int t1[] = {0,1,2,3,4,5,6,7,8};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,2,3,4,5,6,7,8,9};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {0,0,0,0,0,0,0,0,0};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	long long p4 = 9876543210123LL;
	TallShoes * obj = new TallShoes();
	clock_t start = clock();
	int my_answer = obj->maxHeight(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 1047565;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 6;
	int t1[] = {0,0,0,0,0,1,1,1,1,2,2,2,3,3,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,2,3,4,5,2,3,4,5,3,4,5,4,5,5};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {999999,986588,976757,988569,977678,999999,967675,947856,955856,999999,975956,956687,999999,979687,999999};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	long long p4 = 0LL;
	TallShoes * obj = new TallShoes();
	clock_t start = clock();
	int my_answer = obj->maxHeight(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 999999;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
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
