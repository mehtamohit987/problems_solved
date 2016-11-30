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

class ContiguousCacheEasy {
public:
	int bytesRead(int, int, vector <int>);
};

int ContiguousCacheEasy::bytesRead(int n, int k, vector <int> addresses) {
	
	int i,l,h,s=addresses.size();
	
	l=0;h=k-1;
	
	int p=0,q=0;int x;
	
	for(i=0;i<s;i++)
	{
	cout<<l<< "  " <<h<<"\n";
		x=addresses[i];
		if(x>h)
		{
			cout<<"x>h";
			p=x-h;
			if(p<k)		
			{

			cout<<"p<k";
				q+=p;
				h+=p;
				l+=p;
			}
			else
			{
						cout<<"p>=k";
			
				q+=k;
				h=x;
				l=x-k+1;
			}
		}
		else if(x<l)
		{
			
						cout<<"x<l";
			p=l-x;cout<<"\nl=" <<l<<" h= "<<h<<" p="<<p<<"\n\n";
			
			if(p<k)
			{
						cout<<"p<k";
				q+=p;
				h-=p;
				l-=p;
			}
			else
			{
						cout<<"p>=k";
				q+=k;
				h=x+k-1;
				l=x;
			}
		}	
	cout<<q<<" \n";
	}
	
	return q;
}


double test0() {
	int p0 = 100;
	int p1 = 5;
	int t2[] = {6, 0, 3, 20, 22, 16};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ContiguousCacheEasy * obj = new ContiguousCacheEasy();
	clock_t start = clock();
	int my_answer = obj->bytesRead(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 13;
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
	int p0 = 100;
	int p1 = 1;
	int t2[] = {0, 4, 6, 6, 4, 10};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ContiguousCacheEasy * obj = new ContiguousCacheEasy();
	clock_t start = clock();
	int my_answer = obj->bytesRead(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 4;
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
	int p0 = 1000;
	int p1 = 999;
	int t2[] = {0, 4, 123, 987, 999, 500, 0};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ContiguousCacheEasy * obj = new ContiguousCacheEasy();
	clock_t start = clock();
	int my_answer = obj->bytesRead(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 2;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
