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

class Embassy {
public:
	int visaApplication(vector <int>, int, int);
};

int Embassy::visaApplication(vector <int> forms, int dayLength, int openTime) {
	
	long long ans=0x7FFFFFFF,end;
	
	for(int i=-forms[0];i<=openTime-forms[0];i++)
	{
		end=i;

		for(int j=0;j<forms.size();j++)
		{
			end+=forms[j];
			
			if(end%dayLength>openTime)
			{
				end+=(dayLength-(end%dayLength));
			}
		
		}
		ans=min(end-i,ans);
	
	}
	
	
	return (int)ans;
	
	
	
}


double test0() {
	int t0[] = {4,4,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 24;
	int p2 = 8;
	Embassy * obj = new Embassy();
	clock_t start = clock();
	int my_answer = obj->visaApplication(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 12;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {4,4,4,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 24;
	int p2 = 8;
	Embassy * obj = new Embassy();
	clock_t start = clock();
	int my_answer = obj->visaApplication(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 28;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {2,2,2,2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 24;
	int p2 = 1;
	Embassy * obj = new Embassy();
	clock_t start = clock();
	int my_answer = obj->visaApplication(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 73;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {25,500,630,2500,1000,350,22,58,100,400,500,5000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 1440;
	int p2 = 360;
	Embassy * obj = new Embassy();
	clock_t start = clock();
	int my_answer = obj->visaApplication(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 16945;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
