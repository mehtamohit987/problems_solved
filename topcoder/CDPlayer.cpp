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

class CDPlayer {
public:
	int isRandom(vector <string>, int);
};

int CDPlayer::isRandom(vector <string> songlist, int n) {


	string S="";
	S=accumulate(songlist.begin(), songlist.end(), S);
    //cout<<"\n"<<S<<"\n";

	int i,thresh=0;
	bool flag;

    bool initialflag=false;

	for(;thresh<n;thresh++)
	{
        //cout<<"\nthresh"<<thresh;
        flag=false;

        vector<bool> initialcheck(n,false);
        for(i=0;i<thresh;i++)
        {
            //cout<<"\nINvalidity check"<<S[i]-65<<"\n"<<initialcheck[S[i]-65]<<"\n";

            if(initialcheck[S[i]-65]==true)
            {initialflag=true; break;}

            initialcheck[S[i]-65]=true;

        }

        if(initialflag==true)
        {//cout<<"breaking for invalifdity";
        break;}


        vector<bool> check(n,false);

        for(i=thresh;i<S.length();i++)
        {
            //cout<<"\n"<<S[i]-65<<"\n"<<check[S[i]-65]<<"\n";

            if(check[S[i]-65]==true)
            {flag=true; break;}

            check[S[i]-65]=true;

            if(((i-thresh)%n)==n-1)
            {
                check.clear();
                vector<bool> temp(n,false);
                check=temp;
                temp.clear();
            }
        }

        //cout<<"\n\nflag in thresh after comp"<<flag<<"\n\n";

        if(flag==false)
        break;

	}

    if(initialflag==true||thresh==n)
    thresh=-1;

    //cout<<"\n\nres threes "<<thresh;
    return thresh;


}


double test0() {
	string t0[] = {"BBAC"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 3;
	CDPlayer * obj = new CDPlayer();
	clock_t start = clock();
	int my_answer = obj->isRandom(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1;
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
	string t0[] = {"BACAB",
 "BCA"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 3;
	CDPlayer * obj = new CDPlayer();
	clock_t start = clock();
	int my_answer = obj->isRandom(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
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
	string t0[] = {"AAACBACBACBACBACBACBACB"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 3;
	CDPlayer * obj = new CDPlayer();
	clock_t start = clock();
	int my_answer = obj->isRandom(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = -1;
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
	string t0[] = {"ABCDEABDECBAECDEDACB"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 5;
	CDPlayer * obj = new CDPlayer();
	clock_t start = clock();
	int my_answer = obj->isRandom(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
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
	string t0[] = {"ABCABCABCABCABCABCABC",
 "ABCABCABCABCABCABCABC"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 22;
	CDPlayer * obj = new CDPlayer();
	clock_t start = clock();
	int my_answer = obj->isRandom(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = -1;
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
double test5() {
	string t0[] = {"AAAAAAAAAAAAAAAA",
 "AAAAAAAAAAAAAAAA",
 "AAAAAAAAAAAAAAAA",
 "AAAAAAAAAAAAAAAA",
 "AAAAAAAAAAAAAAAA",
 "AAAAAAAAAAAAAAAA",
 "AAAAAAAAAAAAAAAA",
 "AAAAAAAAAAAAAAAA",
 "AAAAAAAAAAAAAAAA",
 "AAAAAAAAAAAAAAAA"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1;
	CDPlayer * obj = new CDPlayer();
	clock_t start = clock();
	int my_answer = obj->isRandom(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
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
double test6() {
	string t0[] = {"ADEF"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 12;
	CDPlayer * obj = new CDPlayer();
	clock_t start = clock();
	int my_answer = obj->isRandom(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
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

	time = test5();
	if (time < 0)
		errors = true;

	time = test6();
	if (time < 0)
		errors = true;

	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
