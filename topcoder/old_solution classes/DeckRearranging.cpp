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

class DeckRearranging {
public:
	string rearrange(string, vector <int>);
};

string DeckRearranging::rearrange(string deck, vector <int> above) {
	
	int a;
	list<char> C;
	list<char>::iterator it;
	for(int i=0;i<deck.size();i++)
	{
		a=above[i];
		it=C.begin();
		for(int j=0;j<a;j++)
		it++;
		C.insert(it,deck[i]);
	
	}
	string S;
	while(!C.empty())
	{
		S.push_back(C.front());
		C.pop_front();
	}
	
	return S;
}


double test0() {
	string p0 = "BRBRR";
	int t1[] = {0, 0, 1, 0, 3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	DeckRearranging * obj = new DeckRearranging();
	clock_t start = clock();
	string my_answer = obj->rearrange(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "RRBRB";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "RRRRRR";
	int t1[] = {0,1,2,0,1,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	DeckRearranging * obj = new DeckRearranging();
	clock_t start = clock();
	string my_answer = obj->rearrange(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "RRRRRR";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "RBRRBRBB";
	int t1[] = {0,1,2,3,4,5,6,7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	DeckRearranging * obj = new DeckRearranging();
	clock_t start = clock();
	string my_answer = obj->rearrange(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "RBRRBRBB";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "RBRRBRBB";
	int t1[] = {0,0,0,0,0,0,0,0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	DeckRearranging * obj = new DeckRearranging();
	clock_t start = clock();
	string my_answer = obj->rearrange(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "BBRBRRBR";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "RBRRBRBB";
	int t1[] = {0,1,0,0,4,0,6,7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	DeckRearranging * obj = new DeckRearranging();
	clock_t start = clock();
	string my_answer = obj->rearrange(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "RRRRBBBB";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
