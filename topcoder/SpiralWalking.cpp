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

class SpiralWalking {

	int n,m;
	vector<vector<bool> > vis;

public:
	int totalPoints(vector <string>);
};

int SpiralWalking::totalPoints(vector <string> levelMap) {

	n=levelMap.size();
	m=levelMap[0].length();

	vis=vector<vector<bool> >(n,vector<bool>(m,false));

	int i=0,j=0;
	int mode=1;
	int sum=0;
	while(!vis[i][j])
	{
		vis[i][j]=true;
		//cout<<"\n coo=("<<i<<" , "<<j<<" )\n";//<<sum;
		switch(mode)
		{
			case 1: {
						if(j+1<m&&!vis[i][j+1])
						{//cout<<"\n"<<(int)(levelMap[i][j]-48);
						sum+=(levelMap[i][j]-48);j++;}
						else
						{mode++;if(i<n-1&&!vis[i+1][j]) i++;}

						break;
					}

			case 2: {
						if(i+1<n&&!vis[i+1][j])
						{//cout<<"\n"<<(int)(levelMap[i][j]-48);
						sum+=(levelMap[i][j]-48);i++;}
						else
						{mode++;if(j>0&&!vis[i][j-1])j--;}
						break;
					}

			case 3: {
						if(j-1>=0&&!vis[i][j-1])
						{//cout<<"\n"<<(int)(levelMap[i][j]-48);
						sum+=(levelMap[i][j]-48);j--;}
						else
						{mode++;if(i>0&&!vis[i-1][j])i--;}
						break;
					}

			case 4: {
						if(i-1>=0&&!vis[i-1][j])
						{//cout<<"\n"<<(int)(levelMap[i][j]-48);
						sum+=(levelMap[i][j]-48);i--;}
						else
						{mode=1;if(j<n-1&&!vis[i][j+1])j++;}
						break;
				}
		}

	//cout<<"\nsum"<<sum<<"\n\n";
	}
//cout<< "\n\n last ( "<<i<<" , "<<j <<  " ) \n";
	return sum+levelMap[i][j]-48;

}

double test0() {
	string t0[] = {"111",
 "111",
 "111"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SpiralWalking * obj = new SpiralWalking();
	clock_t start = clock();
	int my_answer = obj->totalPoints(p0);
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
double test1() {
	string t0[] = {"101",
 "110"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SpiralWalking * obj = new SpiralWalking();
	clock_t start = clock();
	int my_answer = obj->totalPoints(p0);
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
double test2() {
	string t0[] = {"00",
 "10"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SpiralWalking * obj = new SpiralWalking();
	clock_t start = clock();
	int my_answer = obj->totalPoints(p0);
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
	string t0[] = {"86850",
 "76439",
 "15863",
 "24568",
 "45679",
 "71452",
 "05483"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SpiralWalking * obj = new SpiralWalking();
	clock_t start = clock();
	int my_answer = obj->totalPoints(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 142;
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
