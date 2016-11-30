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

class FourBlocksEasy {
public:
	int maxScore(vector <string>);
};

int FourBlocksEasy::maxScore(vector <string> grid) {
	int ans=0;
	bool f1,f2,prev=false;
	for(int j=0;j<grid[0].length();j++)
	{
		f1=f2=false;
				
		if(grid[0][j]=='.') f1=true;
		if(grid[1][j]=='.') f2=true;
		
		if(f1&&f2&&prev)
		{ans++;prev=false;}
		else
		{
		if(f1&&f2)
		prev=true;
		else prev=false;
		}

	}
	cout<<ans;
	return (ans*16)+(grid[0].length()-2*ans)*2;
	
}


double test0() {
	string t0[] = {".....1..1..",
 "..1.....1.."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	FourBlocksEasy * obj = new FourBlocksEasy();
	clock_t start = clock();
	int my_answer = obj->maxScore(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 70;
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
	string t0[] = {"....................",
 "...................."}
;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	FourBlocksEasy * obj = new FourBlocksEasy();
	clock_t start = clock();
	int my_answer = obj->maxScore(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 160;
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
	string t0[] = {".1.........11.........",
 "..1.1......11........."}
;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	FourBlocksEasy * obj = new FourBlocksEasy();
	clock_t start = clock();
	int my_answer = obj->maxScore(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 128;
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
	string t0[] = {"......1.....1...1.",
 ".................."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	FourBlocksEasy * obj = new FourBlocksEasy();
	clock_t start = clock();
	int my_answer = obj->maxScore(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 108;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
