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

class PaperAndPaintEasy {
public:
	long long computeArea(int, int, int, int, int, int, int, int);
};

long long PaperAndPaintEasy::computeArea(int width, int height, int xfold, int cnt, int x1, int y1, int x2, int y2) {

	vector<vector<bool> > A(height,vector<bool>(width,false));
	int i,j,k,d=(height/(cnt+1));
	cout<<d;
	for(k=0;k<=cnt;k++)
	for(i=y1;i<y2;i++)
	for(j=xfold+x1;j<x2+xfold;j++)
	{cout<<"here";
	if(k%2==0)	A[k*d+(d-i-1)][j]=true;
	else A[k*d+i][j]=true;
	}
	
	for(i=xfold-1;i>=0;i++)
	for(j=0;j<height;j++)
	A[j][i]=A[j][2*xfold-1-i];
	
	for(i=0;i<height;i++){cout<<"\n";
	for(j=0;j<width;j++)
	cout<<(A[i][j]?'*':'.');
	}
	
	return 0;
}


double test0() {
	int p0 = 5;
	int p1 = 6;
	int p2 = 2;
	int p3 = 2;
	int p4 = 1;
	int p5 = 1;
	int p6 = 3;
	int p7 = 2;
	PaperAndPaintEasy * obj = new PaperAndPaintEasy();
	clock_t start = clock();
	long long my_answer = obj->computeArea(p0, p1, p2, p3, p4, p5, p6, p7);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p8 = 21LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p8 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p8 != my_answer) {
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
	int p1 = 13;
	int p2 = 1;
	int p3 = 0;
	int p4 = 1;
	int p5 = 8;
	int p6 = 2;
	int p7 = 12;
	PaperAndPaintEasy * obj = new PaperAndPaintEasy();
	clock_t start = clock();
	long long my_answer = obj->computeArea(p0, p1, p2, p3, p4, p5, p6, p7);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p8 = 35LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p8 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p8 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 12;
	int p1 = 12;
	int p2 = 7;
	int p3 = 3;
	int p4 = 3;
	int p5 = 1;
	int p6 = 6;
	int p7 = 2;
	PaperAndPaintEasy * obj = new PaperAndPaintEasy();
	clock_t start = clock();
	long long my_answer = obj->computeArea(p0, p1, p2, p3, p4, p5, p6, p7);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p8 = 124LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p8 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p8 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 4;
	int p1 = 5;
	int p2 = 4;
	int p3 = 0;
	int p4 = 0;
	int p5 = 0;
	int p6 = 1;
	int p7 = 1;
	PaperAndPaintEasy * obj = new PaperAndPaintEasy();
	clock_t start = clock();
	long long my_answer = obj->computeArea(p0, p1, p2, p3, p4, p5, p6, p7);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p8 = 19LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p8 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p8 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 4;
	int p1 = 8;
	int p2 = 4;
	int p3 = 3;
	int p4 = 0;
	int p5 = 1;
	int p6 = 2;
	int p7 = 2;
	PaperAndPaintEasy * obj = new PaperAndPaintEasy();
	clock_t start = clock();
	long long my_answer = obj->computeArea(p0, p1, p2, p3, p4, p5, p6, p7);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p8 = 24LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p8 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p8 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int p0 = 4;
	int p1 = 8;
	int p2 = 3;
	int p3 = 0;
	int p4 = 1;
	int p5 = 1;
	int p6 = 3;
	int p7 = 2;
	PaperAndPaintEasy * obj = new PaperAndPaintEasy();
	clock_t start = clock();
	long long my_answer = obj->computeArea(p0, p1, p2, p3, p4, p5, p6, p7);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p8 = 30LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p8 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p8 != my_answer) {
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
