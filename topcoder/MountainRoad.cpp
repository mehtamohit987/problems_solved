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

class MountainRoad {
public:
	double findDistance(vector <int>, vector <int>);
};

double MountainRoad::findDistance(vector <int> start, vector <int> end) {
	return sqrt(2)*(*max_element(end.begin(),end.end()) - *min_element(start.begin(),start.end())) ;
	/*double d=0;
	int prev,t1,t2;;
	int i,j,n=start.size();
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(start[i]>start[j])
		{
			t1=start[i];
			t2=end[i];
			start[i]=start[j];
			end[i]=end[j];
			start[j]=t1;
			end[j]=t2;
		}
	}
	
	prev=-1;
	for(int i=0;i<n;i++)
	{
		if(prev!=-1)
		{
			if(end[prev]>start[i])
			{
				if(end[i]>end[prev])
				{
				
											
				}				
				else
				{
				
				
				
				}
			}
			else
				{prev=i;d+=sqrt(pow(end[prev]-start[prev],2)/2.0)+sqrt(pow(end[i]-start[i],2)/2.0);	}
		}
		else
		{prev=i;d+=sqrt(pow(end[i]-start[i],2)/2.0);}
	
	}
	d+=sqrt(pow(end[prev]-start[prev],2)/2.0);
	return d;*/
}


double test0() {
	int t0[] = {1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MountainRoad * obj = new MountainRoad();
	clock_t start = clock();
	double my_answer = obj->findDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 8.485281374238571;
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
	int t0[] = {0,3,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5,9,6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MountainRoad * obj = new MountainRoad();
	clock_t start = clock();
	double my_answer = obj->findDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 12.727922061357857;
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
	int t0[] = {1,4,5,6,-10};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {101,102,101,100,99};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MountainRoad * obj = new MountainRoad();
	clock_t start = clock();
	double my_answer = obj->findDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 158.39191898578665;
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
	int t0[] = {-5,-3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {-2,-2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MountainRoad * obj = new MountainRoad();
	clock_t start = clock();
	double my_answer = obj->findDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 4.242640687119286;
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
