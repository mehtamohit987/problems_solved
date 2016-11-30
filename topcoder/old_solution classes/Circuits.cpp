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

class Circuits {
public:
    int n;
    vector<vector<int> > G;

int dfs(int v)
{   int i,res=0;


    for(i=0;i<n;i++)
    {
        if(G[v][i]!=-1)
        {

        res=max(res,dfs(i)+G[v][i]);
        }
    }

    return res;
}
	int howLong(vector <string>, vector <string>);

};


int Circuits::howLong(vector <string> connects, vector <string> costs) {

    n=connects.size();
    G=vector<vector<int> > (n,vector<int> (n,-1));
    int i,j,k,res=0;

    for(i=0;i<n;i++)
    {
    istringstream s(connects[i]);

    istringstream c(costs[i]);

        while(s>>j&& c>>k)
        {
            G[i][j]=k;
        }
    }


   for(i=0;i<n;i++)
    {
        j=dfs(i);
        if(j>res)
            res=j;
    }

cout<<res;
return res;

}

double test0() {
	string t0[] = {"1 2",
 "2",
 ""};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"5 3",
 "7",
 ""};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Circuits * obj = new Circuits();
	clock_t start = clock();
	int my_answer = obj->howLong(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 12;
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
	string t0[] = {"1 2 3 4 5","2 3 4 5","3 4 5","4 5","5",""};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"2 2 2 2 2","2 2 2 2","2 2 2","2 2","2",""};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Circuits * obj = new Circuits();
	clock_t start = clock();
	int my_answer = obj->howLong(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 10;
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
	string t0[] = {"1","2","3","","5","6","7",""};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"2","2","2","","3","3","3",""};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Circuits * obj = new Circuits();
	clock_t start = clock();
	int my_answer = obj->howLong(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 9;
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
	string t0[] = {"","2 3 5","4 5","5 6","7","7 8","8 9","10",
 "10 11 12","11","12","12",""};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"","3 2 9","2 4","6 9","3","1 2","1 2","5",
 "5 6 9","2","5","3",""};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Circuits * obj = new Circuits();
	clock_t start = clock();
	int my_answer = obj->howLong(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 22;
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
double test4() {
	string t0[] = {"","2 3","3 4 5","4 6","5 6","7","5 7",""};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"","30 50","19 6 40","12 10","35 23","8","11 20",""};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Circuits * obj = new Circuits();
	clock_t start = clock();
	int my_answer = obj->howLong(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 105;
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
