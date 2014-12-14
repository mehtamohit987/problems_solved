#include <vector>
#include <list>
#include<cstring>
#include<string>
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

class GroupedWordChecker {
public:
	int howMany(vector <string>);
};

int GroupedWordChecker::howMany(vector <string> words) {

int ans=0;

	for(int i=0;i<words.size();i++)
	{

		vector<bool> vis(50,false);
		bool flag=false;

		for(int j=0;j<words[i].length();j++)
		{
			vis[j]=true;
			string S;
			int cnt=0;
			for(int k=i+1;k<=words[i].length();k++)
			{
				if(!vis[k]&&words[i][k]==words[i][j])
				{
					if(cnt>0&&words[i].substr(j+1,k-1)!=S)
					{
						flag=true; break;
					}
					else if(cnt==0)
					S=words[i].substr(j+1,k-1);

					vis[j]=true;
					cnt++;
				}


			}

			if(flag)
			break;
		}

		if(!flag) ans++;

	}

return ans;
}
double test0() {
	string t0[] = {"ccazzzzbb", "code", "aabbbccb", "topcoder"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	GroupedWordChecker * obj = new GroupedWordChecker();
	clock_t start = clock();
	int my_answer = obj->howMany(p0);
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
double test1() {
	string t0[] = {"ab", "aa", "aca", "ba", "bb"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	GroupedWordChecker * obj = new GroupedWordChecker();
	clock_t start = clock();
	int my_answer = obj->howMany(p0);
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
double test2() {
	string t0[] = {"happy", "new", "year"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	GroupedWordChecker * obj = new GroupedWordChecker();
	clock_t start = clock();
	int my_answer = obj->howMany(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 3;
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
	string t0[] = {"yzyzy", "zyzyz"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	GroupedWordChecker * obj = new GroupedWordChecker();
	clock_t start = clock();
	int my_answer = obj->howMany(p0);
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
double test4() {
	string t0[] = {"z"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	GroupedWordChecker * obj = new GroupedWordChecker();
	clock_t start = clock();
	int my_answer = obj->howMany(p0);
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
