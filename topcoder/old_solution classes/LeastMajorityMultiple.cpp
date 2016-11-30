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

class LeastMajorityMultiple {
public:
	int leastMajorityMultiple(int, int, int, int, int);
};
int gcd(int a,int b)
{	

	if(b==0)return a;
	
	return gcd(b,a%b);	
}
int lcm(int a,int b)
{
	return a*b/gcd(a,b);
}
int LeastMajorityMultiple::leastMajorityMultiple(int a, int b, int c, int d, int e) {
	vector<int> A;

	A.push_back(a);
	A.push_back(b);
	A.push_back(c);
	A.push_back(d);
	A.push_back(e);
	sort(A.begin(),A.end());

	int l,m=A[4]*A[3]*A[2];
	
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			l=lcm(A[i],A[j]);//cout<<l<<"\n";
			for(int k=j+1;k<5;k++)
			{
				m=min(m,lcm(l,A[k]));
				//cout<<m<<"\n";
			}
		}
		
	}
	
	return m;
}


double test0() {
	int p0 = 1;
	int p1 = 2;
	int p2 = 3;
	int p3 = 4;
	int p4 = 5;
	LeastMajorityMultiple * obj = new LeastMajorityMultiple();
	clock_t start = clock();
	int my_answer = obj->leastMajorityMultiple(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 30;
	int p1 = 42;
	int p2 = 70;
	int p3 = 35;
	int p4 = 90;
	LeastMajorityMultiple * obj = new LeastMajorityMultiple();
	clock_t start = clock();
	int my_answer = obj->leastMajorityMultiple(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 210;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 30;
	int p1 = 45;
	int p2 = 23;
	int p3 = 26;
	int p4 = 56;
	LeastMajorityMultiple * obj = new LeastMajorityMultiple();
	clock_t start = clock();
	int my_answer = obj->leastMajorityMultiple(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 1170;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 3;
	int p1 = 14;
	int p2 = 15;
	int p3 = 92;
	int p4 = 65;
	LeastMajorityMultiple * obj = new LeastMajorityMultiple();
	clock_t start = clock();
	int my_answer = obj->leastMajorityMultiple(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 195;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
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
