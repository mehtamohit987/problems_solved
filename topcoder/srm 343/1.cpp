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

#include <string>
#include <cstring>

using namespace std;

#define si(a) scanf("%d",&a)
#define sf(a) scanf("%f",&a)
#define sc(a) scanf("%c",&a)
#define ss(a) scanf("%s",&a)
#define f(i,n) for(i=0;i<n;i++)
#define pi(a) printf("%d",a)
#define pf(a) printf("%f",a)
#define pc(a) printf("%c",a)
#define ps(a) printf("%s",a)

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<bool> vb;
typedef vector<vector<bool> > vvb;


class nameOfClass{
public:
string nameOfFunction(int n, vector <int> A, vector <int> B, vector <int> G, vector <int> L);
};
//int n, vector <int> A, vector <int> B, vector <int> G, vector <int> L
string nameOfClass::nameOfFunction(int n, vector <int> A, vector <int> B, vector <int> G, vector <int> L) {
	string M("Solution exists");
	string N("Solution does not exist");
	bool flag=true;
	vector<vector<int> > g(n,vector<int>(n,-1));
	vector<vector<int> > l(n,vector<int>(n,-1));
	for(int i=0;i<n;i++)
	{
		if(L[i]%G[i]==0)
		{
			if(g[A[i]][B[i]]==-1||g[A[i]][B[i]]==G[i])g[A[i]][B[i]]=G[i];else return N;
			if(l[A[i]][B[i]]==-1||l[A[i]][B[i]]==L[i])l[A[i]][B[i]]=L[i];else return N;
		}
		else
			return N;
	}

	return (flag?M:N);
}

int main() {
/*<%:start-tests%>
double test0() {
	int p0 = 4;
	int t1[] = {0,1,2,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,2,3,0};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {6,6,6,6};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {12,12,12,12};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	GCDLCMEasy * obj = new GCDLCMEasy();
	clock_t start = clock();
	string my_answer = obj->possible(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p5 = "Solution exists";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
*/
	int p0 = 4;
	int t1[] = {0,1,2,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,2,3,0};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {6,6,6,6};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {12,12,12,12};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	nameOfClass * obj = new nameOfClass();

	string my_answer = obj->nameOfFunction(p0, p1, p2, p3, p4);

	delete obj;
	string p5 = "Solution exists";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;

	}
	return 0;
}
/*<%:start-tests%>
double test0() {
	int p0 = 4;
	int t1[] = {0,1,2,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,2,3,0};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {6,6,6,6};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {12,12,12,12};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	GCDLCMEasy * obj = new GCDLCMEasy();
	clock_t start = clock();
	string my_answer = obj->possible(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p5 = "Solution exists";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 5;
	int t1[] = {0,1,2,3,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,2,3,4,0};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {6,6,6,6,6};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {12,12,12,12,12};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	GCDLCMEasy * obj = new GCDLCMEasy();
	clock_t start = clock();
	string my_answer = obj->possible(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p5 = "No solution";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 2;
	int t1[] = {0,0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {123,123};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {456,789};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	GCDLCMEasy * obj = new GCDLCMEasy();
	clock_t start = clock();
	string my_answer = obj->possible(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p5 = "Solution does not exist";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 2;
	int t1[] = {0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {1234};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {5678};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	GCDLCMEasy * obj = new GCDLCMEasy();
	clock_t start = clock();
	string my_answer = obj->possible(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p5 = "Solution does not exist";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 6;
	int t1[] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1, 2, 3, 4, 5, 2, 3, 4, 5, 3, 4, 5, 4, 5, 5};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {2, 2, 3, 3, 1, 2, 5, 1, 5, 1, 7, 7, 3, 5, 7};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {30, 42, 30, 42, 210, 70, 30, 210, 70, 210, 42, 70, 105, 105, 105}
;
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	GCDLCMEasy * obj = new GCDLCMEasy();
	clock_t start = clock();
	string my_answer = obj->possible(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p5 = "Have solution";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int p0 = 500;
	int t1[] = {0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {10000};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {10000};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	GCDLCMEasy * obj = new GCDLCMEasy();
	clock_t start = clock();
	string my_answer = obj->possible(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p5 = "Have solution";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
<%:end-tests%>
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
*/
