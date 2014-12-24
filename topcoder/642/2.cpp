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

Problem Statement
    
A king of a mystical land likes to wear very tall shoes. The tall shoes are sometimes an inconvenience as they make traveling through the kingdom's road network difficult.
There are N cities in the kingdom. The cities are numbered 0 through N-1. The road network in the kingdom is connected: it is possible to get from any city to any other city by taking one or more roads. Each road in the network is bidirectional and connects two different cities. You are given the description of the road network in three vector <int>s: X, Y, and height, each with the same number of elements. For each valid i, there is a road that connects cities X[i] and Y[i]. The value height[i] is the height limit for that road: The king can travel along that road if and only if the height of his shoes is height[i] or less.
The king wants to walk from city 0 to city N-1. While doing so, he wants to wear shoes that are as tall as possible. Before he goes for the walk, he can increase the height limits for some roads. The king has a budget of B dollars for the modifications. Increasing the height limit of any road by k costs k^2 dollars. The height limit of each road can only be increased at most once.
You are given the int N, the vector <int>s X, Y and height, and the long long B. Compute the maximum height of shoes the king may wear for his walk from city 0 to city N-1 after increasing the height limits appropriately.
Definition
    
Class:
TallShoes
Method:
maxHeight
Parameters:
int, vector <int>, vector <int>, vector <int>, long long
Returns:
int
Method signature:
int maxHeight(int N, vector <int> X, vector <int> Y, vector <int> height, long long B)
(be sure your method is public)
Limits
    
Time limit (s):
2.000
Memory limit (MB):
256
Stack limit (MB):
256
Constraints
-
N will be between 2 and 50, inclusive.
-
from, to, height will have between N-1 and N*(N-1)/2 elements, inclusive.
-
Each element of X, Y will be between 0 and N-1, inclusive.
-
For all i, X[i] != Y[i].
-
Each undirected edge X[i], Y[i] will appear at most once.
-
Each element of height will be between 0 and 10^6, inclusive.
-
The graph described by X and Y will be connected.
-
B will be between 0 and 10^15, inclusive.
Examples
0)

    
3
{0, 1, 0}
{1, 2, 2}
{3, 4, 2}
1
Returns: 4
In this example there are three roads: 0-1 (height limit 3), 1-2 (height limit 4), and 0-2 (height limit 2). The king has a budget of 1 dollar. The optimal way to use that budget is to increase the height limit for the 0-1 road from 3 to 4. After that change, the king can use shoes of height 4 and walk along the path 0-1-2.
1)

    
3
{0, 1, 0}
{1, 2, 2}
{3, 4, 2}
52
Returns: 9
Here we can increase the last road's height by 7 which will allow the king to wear shoes of height 9. Note that the king is not required to spend the entire budget.
2)

    
8
{0, 0, 3, 3, 4, 4, 4, 7, 7}
{1, 2, 1, 2, 3, 5, 6, 5, 6}
{1000, 1000, 1000, 1000, 1, 1000, 1000, 1000, 1000}
3
Returns: 2

3)

    
10
{0,1,2,3,4,5,6,7,8}
{1,2,3,4,5,6,7,8,9}
{0,0,0,0,0,0,0,0,0}
9876543210123
Returns: 1047565

4)

    
6
{0,0,0,0,0,1,1,1,1,2,2,2,3,3,4}
{1,2,3,4,5,2,3,4,5,3,4,5,4,5,5}
{999999,986588,976757,988569,977678,999999,967675,947856,955856,999999,975956,956687,999999,979687,999999}
0
Returns: 999999

This problem statement is the exclusive and proprietary property of TopCoder, Inc. Any unauthorized use or reproduction of this information without the prior written consent of TopCoder, Inc. is strictly prohibited. (c)2003, TopCoder, Inc. All rights reserved.


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

class TallShoes {
public:
	int maxHeight(int, vector <int>, vector <int>, vector <int>, long long);
};

int TallShoes::maxHeight(int N, vector <int> X, vector <int> Y, vector <int> height, long long B) {
vector<vector<bool> > G(N, vector<bool>(N,false));
vector<vector<int> > W(N, vector<int>(N,0) );
vector<vector<bool> > s(N, vector<bool>(B,false));
vector<vector<int> > c(N, vector<int>(B,-1) );

for(int i=0;i<N;i++)
G[X[i]][Y[i]]=true,W[X[i]][Y[i]]=H[i];

s[0][B]=true;
c[0][]
int i=0,j;
pqueue <pair<int,int> > P;

return 0;

}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!

<%:start-tests%>
double test0() {
	int p0 = 3;
	int t1[] = {0, 1, 0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1, 2, 2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {3, 4, 2};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	long long p4 = 1LL;
	TallShoes * obj = new TallShoes();
	clock_t start = clock();
	int my_answer = obj->maxHeight(p0, p1, p2, p3, p4);
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
	int p0 = 3;
	int t1[] = {0, 1, 0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1, 2, 2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {3, 4, 2};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	long long p4 = 52LL;
	TallShoes * obj = new TallShoes();
	clock_t start = clock();
	int my_answer = obj->maxHeight(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 9;
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
	int p0 = 8;
	int t1[] = {0, 0, 3, 3, 4, 4, 4, 7, 7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1, 2, 1, 2, 3, 5, 6, 5, 6};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {1000, 1000, 1000, 1000, 1, 1000, 1000, 1000, 1000};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	long long p4 = 3LL;
	TallShoes * obj = new TallShoes();
	clock_t start = clock();
	int my_answer = obj->maxHeight(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 2;
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
	int p0 = 10;
	int t1[] = {0,1,2,3,4,5,6,7,8};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,2,3,4,5,6,7,8,9};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {0,0,0,0,0,0,0,0,0};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	long long p4 = 9876543210123LL;
	TallShoes * obj = new TallShoes();
	clock_t start = clock();
	int my_answer = obj->maxHeight(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 1047565;
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
double test4() {
	int p0 = 6;
	int t1[] = {0,0,0,0,0,1,1,1,1,2,2,2,3,3,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,2,3,4,5,2,3,4,5,3,4,5,4,5,5};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {999999,986588,976757,988569,977678,999999,967675,947856,955856,999999,975956,956687,999999,979687,999999};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	long long p4 = 0LL;
	TallShoes * obj = new TallShoes();
	clock_t start = clock();
	int my_answer = obj->maxHeight(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 999999;
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

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}







using namespace std;

class LightSwitchingPuzzle {
public:
	int minFlips(string);
};

int TallShoes::maxHeight(int N, vector <int> X, vector <int> Y, vector <int> H, long long B) {
vector<vector<bool> > G(N, vector<bool>(N,false));
vector<vector<int> > W(N, vector<int>(N,0) );
vector<vector<bool> > s(N, vector<long long>(N,false));
vector<vector<int> > c(N, vector<long long>(N,-1) );

for(int i=0;i<N;i++)
G[X[i]][Y[i]]=true,W[X[i]][Y[i]]=H[i];

s[0][B]=true;
c[0][]
int i=0,j;
pqueue <pair<int,int> > P;
P.push_back()
while(true)
{



    for(j=0;j<N;j++)
    if(G[i][j])
    {
        for(int k=0;k<=b;k++)
        {
            if(k<=)

        }

    }


}



}

double test0() {
	string p0 = "YYYYYY";
	LightSwitchingPuzzle * obj = new LightSwitchingPuzzle();
	clock_t start = clock();
	int my_answer = obj->minFlips(p0);
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
	string p0 = "YNYNYNYNY";
	LightSwitchingPuzzle * obj = new LightSwitchingPuzzle();
	clock_t start = clock();
	int my_answer = obj->minFlips(p0);
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
	string p0 = "NNNNNNNNNN";
	LightSwitchingPuzzle * obj = new LightSwitchingPuzzle();
	clock_t start = clock();
	int my_answer = obj->minFlips(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 0;
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
	string p0 = "YYYNYYYNYYYNYYNYYYYN";
	LightSwitchingPuzzle * obj = new LightSwitchingPuzzle();
	clock_t start = clock();
	int my_answer = obj->minFlips(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 4;
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
double test4() {
	string p0 = "NYNNYNNNYNNNNYNNNNNYNNNNNNYNNNNNNNY";
	LightSwitchingPuzzle * obj = new LightSwitchingPuzzle();
	clock_t start = clock();
	int my_answer = obj->minFlips(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 12;
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

	time = test4();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
