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

class HappyLetterDiv2 {
public:
    char getHappyLetter(string);
};

char HappyLetterDiv2::getHappyLetter(string letters) {

    vector<int> A(26,0);
    int i,n=letters.size();
    char max=96;
    int ma=-1;

    for(i=0;i<n;i++)
    {
       A[letters[i]-97]++;

       if(A[letters[i]-97]>ma)
       {max=letters[i];ma=A[letters[i]-97];}
    }
    vector<int>::iterator it,jt;
    sort(A.begin(),A.end());

    for(it=A.begin();it<A.end();)
    {    //cout<<*it;
        if(*it==0)
        A.erase(it);
        else
        it++;
     }

    it=A.begin();
    jt=A.end()-1;
    bool b=true;

    while(jt!=it)
    {
        if(*jt>*it)
        {
            (*jt)-=(*it);
            *it=0;
            it++;
            b=true;
        }
        else
        {
            (*jt)-=(*it);
            *jt=0;
            jt--;
            b=false;
        }
    }

    if(b&&*jt!=0)
    {
       // cout<<max;
    }
    else
    {//cout<<".";
    max='.';

    }

    return max;
}


double test0() {
	string p0 = "aacaaa";
	HappyLetterDiv2 * obj = new HappyLetterDiv2();
	clock_t start = clock();
	char my_answer = obj->getHappyLetter(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	char p1 = 'a';
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
	string p0 = "dcdjx";
	HappyLetterDiv2 * obj = new HappyLetterDiv2();
	clock_t start = clock();
	char my_answer = obj->getHappyLetter(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	char p1 = '.';
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
	string p0 = "bcbbbbba";
	HappyLetterDiv2 * obj = new HappyLetterDiv2();
	clock_t start = clock();
	char my_answer = obj->getHappyLetter(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	char p1 = 'b';
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
	string p0 = "aabc";
	HappyLetterDiv2 * obj = new HappyLetterDiv2();
	clock_t start = clock();
	char my_answer = obj->getHappyLetter(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	char p1 = '.';
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
