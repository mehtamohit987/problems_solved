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

class LoveCalculator {
public:
	string findBoy(string, vector <string>);
};

string LoveCalculator::findBoy(string girl, vector <string> boys) {
	int i,j,k,L,O,V,E;
	L=O=V=E=0;
	for(i=0;i<girl.length();i++)
	if(toupper(girl[i])=='L') L++;
	else if(toupper(girl[i])=='O') O++;
	else if(toupper(girl[i])=='V') V++;
	else if(toupper(girl[i])=='E') E++;
	int l,o,v,e,max,max_ind;
	max=max_ind=0;
	sort(boys.begin(),boys.end());
	for(i=0;i<boys.size();i++)
	{
		l=L;
		o=O;
		v=V;
		e=E;
		for(j=0;j<boys[i].length();j++)
		if(toupper(boys[i][j])=='L') l++;
		else if(toupper(boys[i][j])=='O') o++;
		else if(toupper(boys[i][j])=='V') v++;
		else if(toupper(boys[i][j])=='E') e++;
		
		k=((l+o)*(l+v)*(l+e)*(o+v)*(o+e)*(v+e))%100;
		if(k>max)
		{		max=k;max_ind=i;}
	}
	
cout<<boys[max_ind];
	return boys[max_ind];
}


double test0() {
	string p0 = "LOVE";
	string t1[] = {"JACOB","FRANK","DANO"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	LoveCalculator * obj = new LoveCalculator();
	clock_t start = clock();
	string my_answer = obj->findBoy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "FRANK";
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
	string p0 = "JANE";
	string t1[] = {"THOMAS","MICHAEL","INDY","LIU"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	LoveCalculator * obj = new LoveCalculator();
	clock_t start = clock();
	string my_answer = obj->findBoy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "INDY";
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
	string p0 = "LILLY";
	string t1[] = {"PIERRE"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	LoveCalculator * obj = new LoveCalculator();
	clock_t start = clock();
	string my_answer = obj->findBoy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "PIERRE";
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
	string p0 = "MERYLOV";
	string t1[] = {"JOHN","DAVE","STEVE","JOHN","DAVE"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	LoveCalculator * obj = new LoveCalculator();
	clock_t start = clock();
	string my_answer = obj->findBoy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "DAVE";
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
	string p0 = "LLOL";
	string t1[] = {"BVERON","CVERON","AVERON","DVERON"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	LoveCalculator * obj = new LoveCalculator();
	clock_t start = clock();
	string my_answer = obj->findBoy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "AVERON";
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
double test5() {
	string p0 = "VELYLEOCEVE";
	string t1[] = {"YVXHOVE","LCOKO","OGWSJVEVEDLE","WGFVSJEL","VLOLUVCBLLQVESWHEEKC"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	LoveCalculator * obj = new LoveCalculator();
	clock_t start = clock();
	string my_answer = obj->findBoy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "VLOLUVCBLLQVESWHEEKC";
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
