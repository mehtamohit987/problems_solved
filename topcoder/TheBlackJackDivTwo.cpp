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

class TheBlackJackDivTwo {
public:
	int score(vector <string>);
};

int TheBlackJackDivTwo::score(vector <string> cards) {
	int res=0;
	for(int i=0;i<cards.size();i++)
{	if(cards[i][0]>'1'&&cards[i][0]<='9')
	res+=cards[i][0]-48;
	else if(cards[i][0]=='K'||cards[i][0]=='Q'||cards[i][0]=='J'||cards[i][0]=='T') res+=10;
	else res+=11;}
return res;
}


double test0() {
	string t0[] = {"4S", "7D"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TheBlackJackDivTwo * obj = new TheBlackJackDivTwo();
	clock_t start = clock();
	int my_answer = obj->score(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 11;
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
	string t0[] = {"KS", "TS", "QC"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TheBlackJackDivTwo * obj = new TheBlackJackDivTwo();
	clock_t start = clock();
	int my_answer = obj->score(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 30;
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
	string t0[] = {"AS", "AD", "AH", "AC"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TheBlackJackDivTwo * obj = new TheBlackJackDivTwo();
	clock_t start = clock();
	int my_answer = obj->score(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 44;
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
	string t0[] = {"3S", "KC", "AS", "7C", "TC", "9C", "4H", "4S", "2S"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TheBlackJackDivTwo * obj = new TheBlackJackDivTwo();
	clock_t start = clock();
	int my_answer = obj->score(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 60;
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
