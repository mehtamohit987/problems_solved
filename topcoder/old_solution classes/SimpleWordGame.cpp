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

class SimpleWordGame {
public:
	int points(vector <string>, vector <string>);
};

int SimpleWordGame::points(vector <string> player, vector <string> dictionary) {

	vector<bool> B(player.size(),false);int ans=0;
	
	for(int i=0;i<dictionary.size();i++)
	{
		for(int j=0;j<player.size();j++)
		{
			if(player[j]==dictionary[i])
			{
			if(B[j]==false)
			{ans+=pow((dictionary[i].length()),2);B[j]=true;}	
			
			break;
			}
		}
	
	}
	
	return ans;
}


double test0() {
	string t0[] = { "apple", "orange", "strawberry" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = { "strawberry", "orange", "grapefruit", "watermelon" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SimpleWordGame * obj = new SimpleWordGame();
	clock_t start = clock();
	int my_answer = obj->points(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 136;
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
	string t0[] = { "apple" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = { "strawberry", "orange", "grapefruit", "watermelon" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SimpleWordGame * obj = new SimpleWordGame();
	clock_t start = clock();
	int my_answer = obj->points(p0, p1);
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
double test2() {
	string t0[] = { "orange", "orange" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = { "strawberry", "orange", "grapefruit", "watermelon" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SimpleWordGame * obj = new SimpleWordGame();
	clock_t start = clock();
	int my_answer = obj->points(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 36;
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
	string t0[] = { "lidi", "o", "lidi", "gnbewjzb", "kten",
  "ebnelff", "gptsvqx", "rkauxq", "rkauxq", "kfkcdn"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = { "nava", "wk", "kfkcdn", "lidi", "gptsvqx",
  "ebnelff", "hgsppdezet", "ulf", "rkauxq", "wcicx"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SimpleWordGame * obj = new SimpleWordGame();
	clock_t start = clock();
	int my_answer = obj->points(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 186;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
