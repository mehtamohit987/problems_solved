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

class RestaurantManager {
public:
	int allocateTables(vector <int>, vector <int>, vector <int>, vector <int>);
};

int RestaurantManager::allocateTables(vector <int> tables, vector <int> groupSizes, vector <int> arrivals, vector <int> departures) {
	
	sort(tables.begin(),tables.end());
	int left=0;
	vector<int> till(tables.size(),0);
	for(int i=0;i<groupSizes.size();i++)
	{
		int a=0;
		while(a<tables.size()&&tables[a]<groupSizes[i])
		{	a++;
		}
		if(a<tables.size())
		{
			while(a<tables.size()&&till[a]>arrivals[i])
			{a++;}
			if(a<tables.size())
			{
				till[a]=departures[i];
			}
            else
			{
				left+=groupSizes[i];
			}
		}
		else
		{left+=groupSizes[i];}


	}
	return left;
}


double test0() {
	int t0[] = {4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {4,8,4,2,2,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {0,10,12,16,18,26};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {10,20,18,26,36,28};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	RestaurantManager * obj = new RestaurantManager();
	clock_t start = clock();
	int my_answer = obj->allocateTables(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 14;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {4,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {4,8,4,2,2,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {0,10,12,16,18,26};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {10,20,18,26,36,28};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	RestaurantManager * obj = new RestaurantManager();
	clock_t start = clock();
	int my_answer = obj->allocateTables(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 8;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {4,8};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {4,8,4,2,2,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {0,10,12,16,18,26};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {10,20,18,26,36,28};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	RestaurantManager * obj = new RestaurantManager();
	clock_t start = clock();
	int my_answer = obj->allocateTables(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {10,8,11,16};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {14,1,15,1,19,15,9,15,20,2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {4,5,7,18,21,25,29,31,46,49};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {8,37,11,36,36,46,40,42,47,50};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	RestaurantManager * obj = new RestaurantManager();
	clock_t start = clock();
	int my_answer = obj->allocateTables(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 69;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {18,15,2,6};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {7,9,16,3,10,3,2,10,16,16};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {10,15,19,20,21,22,27,35,37,43};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {13,24,22,32,32,32,35,48,41,44};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	RestaurantManager * obj = new RestaurantManager();
	clock_t start = clock();
	int my_answer = obj->allocateTables(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 10;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int t0[] = {13,9,6,1,9,8,6,2,8,20};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {20,10,11,10,1,5,16,2,9,17};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {12,14,64,78,100,121,151,155,162,164};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {19,26,159,96,155,134,169,199,169,174};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	RestaurantManager * obj = new RestaurantManager();
	clock_t start = clock();
	int my_answer = obj->allocateTables(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 17;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
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
