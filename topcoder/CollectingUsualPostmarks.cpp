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

class CollectingUsualPostmarks {
public:
	int numberOfPostmarks(vector <int>, vector <int>);
};

int CollectingUsualPostmarks::numberOfPostmarks(vector <int> prices, vector <int> have) {
	
	int maxi=0;
	int sum=0,i;
	int n=prices.size();
	int m=have.size();
	
	for(i=0;i<m;i++)
	sum+=(prices[have[i]]);
	
	
	sort(prices.begin(),prices.end())	;
	
	i=0;
	while(sum>0&&i<n)
	{
		if(sum>=prices[i])
		{			
		sum=sum-prices[i];
		maxi++;
		i++;}
		else
		break;
	}
	
	return maxi;
	
}


double test0() {
	int t0[] = {13,10,14,20};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3,0,2,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	CollectingUsualPostmarks * obj = new CollectingUsualPostmarks();
	clock_t start = clock();
	int my_answer = obj->numberOfPostmarks(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
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
	int t0[] = {7,5,9,7};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	vector <int> p1;
	CollectingUsualPostmarks * obj = new CollectingUsualPostmarks();
	clock_t start = clock();
	int my_answer = obj->numberOfPostmarks(p0, p1);
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
	int t0[] = {4,13,9,1,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,3,2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	CollectingUsualPostmarks * obj = new CollectingUsualPostmarks();
	clock_t start = clock();
	int my_answer = obj->numberOfPostmarks(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
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
	int t0[] = {16,32,13,2,17,10,8,8,20,17};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {7,0,4,1,6,8};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	CollectingUsualPostmarks * obj = new CollectingUsualPostmarks();
	clock_t start = clock();
	int my_answer = obj->numberOfPostmarks(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 8;
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
