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

class ConnectingCars {
public:
	long long minimizeCost(vector <int>, vector <int>);
};

long long ConnectingCars::minimizeCost(vector <int> p, vector <int> l) {
    int i,j,k,y,n=p.size();
    float x;
	long long s;
	for(i=1;i<n;i++)
	{
		x=p[i];
		y=l[i];
		j=i-1;
		while(j>=0&&p[j]>x)
		{
			p[j+1]=p[j];
			l[j+1]=l[j];
			j--;
		}
		p[j+1]=x;
        l[j+1]=y;
	}

    for(i=0;i<n;i++)
	cout<<p[i]<<" "<<l[i]<<"\n";

    long long ans,p1,p2;bool f=false;
	for(k=1;k<n;k++)
	{
		//ans=min(move(p[k-1]+len)+move()+mid(k))
		s=0;
		p1=p[k-1];
		for(i=k-2;i>=0;i--)
			{s+=(p1-p[i]-l[i]);p1=p1-l[i];}
			cout<<"k="<<k<<"s="<<s<<"\n";
		p2=p[k]+l[k];
		for(i=k+1;i<n;i++)
			{s+=(p[i]-p2);p2=p2+l[i];}
			cout<<"k="<<k<<"s="<<s<<"\n";
		if(n-k==k)
		{
			x=(float)( (n-k)*p[k] + k*(p[k-1]+l[k-1]) )/(n);//FLZZZZOAAAAT chanfge
			
		
    	    if(x-floor(x)>=0.5)x=ceil(x);else x=floor(x);

			s+=(k*(x-p[k-1]-l[k-1])+(n-k)*(p[k]-x));
		}
		else
		{
			if(k<n-k)
			s+= ( k * ( p[k] - p[k-1]-l[k-1] ) );
			else
			s+= ( (n-k) * ( p[k] - p[k-1]-l[k-1] ) );
		
		}
		
		
		cout<<"k="<<k<<"s="<<s<<"\n\n\n";
		if(!f){ans=s;f=true;}
		else ans=min(s,ans);
	}

	return ans;
}


double test0() {
	int t0[] = {1, 3, 10, 20};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2, 2, 5, 3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	ConnectingCars * obj = new ConnectingCars();
	clock_t start = clock();
	long long my_answer = obj->minimizeCost(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 15LL;
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
	int t0[] = {100, 50, 1}
;
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {10, 2, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	ConnectingCars * obj = new ConnectingCars();
	clock_t start = clock();
	long long my_answer = obj->minimizeCost(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 96LL;
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
	int t0[] = {4, 10, 100, 13, 80};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5, 3, 42, 40, 9};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	ConnectingCars * obj = new ConnectingCars();
	clock_t start = clock();
	long long my_answer = obj->minimizeCost(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 66LL;
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
	int t0[] = {5606451, 63581020, 81615191, 190991272, 352848147, 413795385, 468408016, 615921162, 760622952, 791438427};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {42643329, 9909484, 58137134, 99547272, 39849232, 15146704, 144630245, 604149, 15591965, 107856540};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	ConnectingCars * obj = new ConnectingCars();
	clock_t start = clock();
	long long my_answer = obj->minimizeCost(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 1009957100LL;
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
