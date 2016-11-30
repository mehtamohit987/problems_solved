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

class ReadingBooks {
public:
	int countBooks(vector <string>);
};

int ReadingBooks::countBooks(vector <string> r) {
	string I("introduction");
	string S("story");
	string E("edification");
	int i,s,e;
	i=s=e=-1;int c=0;
	for(int j=0;j<r.size();j++)
	{
		if(r[j]==I)
		{
			if(i==-1)
			i=j;
			else
			{
				if(j==i+1)
				e=s=-1;
				
				i=j;
			}

		}
		
		else if(r[j]==S)
		{
			if(s==-1)
			s=j;
			else
			{
				if(j==s+1)
				i=e=-1;
			
				s=j;
			}
		}
				
		else if(r[j]==E)
		{
			if(e==-1)
			e=j;
			else
			{
				if(j==e+1)
				i=s=-1;
				
				e=j;
			}
		}
		

		if(i!=-1&&s!=-1&&e!=-1)	{c++;i=s=e=-1;}
	}
	

	return c;
}


double test0() {
	string t0[] = {"introduction", "story", "introduction", "edification"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ReadingBooks * obj = new ReadingBooks();
	clock_t start = clock();
	int my_answer = obj->countBooks(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 1;
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
	string t0[] = {"introduction", "story", "edification", "introduction", "story", "edification"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ReadingBooks * obj = new ReadingBooks();
	clock_t start = clock();
	int my_answer = obj->countBooks(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2;
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
	string t0[] = {"introduction", "story", "introduction", "edification", "story", "introduction"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ReadingBooks * obj = new ReadingBooks();
	clock_t start = clock();
	int my_answer = obj->countBooks(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 1;
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
	string t0[] = {"introduction", "story", "introduction", "edification", "story",
 "story", "edification", "edification", "edification", "introduction",
 "introduction", "edification", "story", "introduction", "story",
 "edification", "edification", "story", "introduction", "edification",
 "story", "story", "edification", "introduction", "story"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ReadingBooks * obj = new ReadingBooks();
	clock_t start = clock();
	int my_answer = obj->countBooks(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 5;
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
