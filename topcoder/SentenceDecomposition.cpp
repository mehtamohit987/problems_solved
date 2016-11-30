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

class SentenceDecomposition {
public:
	string S;
	vector<string> V;
	vector<int> M;

	int match(string a, string b)
	{

		if(a.length()!=b.length())return -1;

		string s1=a;sort(s1.begin(),s1.end());
string		s2=b;sort(s2.begin(),s2.end());
		
		if(s1!=s2) return -1;
	
	 	int ans=0;
		for(int k=0;k<a.length();k++)
			if(a[k]!=b[k])ans++;

		return ans;
	}
	
	int recur(int s)
	{
		int l,x,y,c=-1;
		if(M[s]!=-1)return M[s];
		
		if(s==S.length())return 0;
		if(s>S.length())return -1;
		
		for(int i=0;i<V.size();i++)
		{
			l=V[i].length();
			if(S.length()<l)continue;
			
			x=match(S.substr(s,l),V[i]);
			if(x!=-1)
			{
				
				if(c==-1){
				y=recur(s+l);
				c=(y!=-1)?y+x:-1;
				}
				else
				{
				y=recur(s+l);
				
				c=min(c,(y==-1)?c:y+x);
				
				}
			}
			
		}
		M[s]=c;
		return c;
	
	}
	int decompose(string, vector <string>);
};

int SentenceDecomposition::decompose(string sentence, vector <string> validWords) {
S=sentence;V=validWords;

	M=vector<int>(S.length(),-1);
	return recur(0);
			
}


double test0() {
	string p0 = "neotowheret";
	string t1[] = {"one", "two", "three", "there"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SentenceDecomposition * obj = new SentenceDecomposition();
	clock_t start = clock();
	int my_answer = obj->decompose(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 8;
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
	string p0 = "abba";
	string t1[] = {"ab", "ac", "ad"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SentenceDecomposition * obj = new SentenceDecomposition();
	clock_t start = clock();
	int my_answer = obj->decompose(p0, p1);
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
	string p0 = "thisismeaningless";
	string t1[] = {"this", "is", "meaningful"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SentenceDecomposition * obj = new SentenceDecomposition();
	clock_t start = clock();
	int my_answer = obj->decompose(p0, p1);
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
	string p0 = "ommwreehisymkiml";
	string t1[] = {"we", "were", "here", "my", "is", "mom", "here", "si", "milk", "where", "si"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SentenceDecomposition * obj = new SentenceDecomposition();
	clock_t start = clock();
	int my_answer = obj->decompose(p0, p1);
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
double test4() {
	string p0 = "ogodtsneeencs";
	string t1[] = {"go", "good", "do", "sentences", "tense", "scen"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SentenceDecomposition * obj = new SentenceDecomposition();
	clock_t start = clock();
	int my_answer = obj->decompose(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 8;
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
	string p0 = "sepawaterords";
	string t1[] = {"separate","words"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SentenceDecomposition * obj = new SentenceDecomposition();
	clock_t start = clock();
	int my_answer = obj->decompose(p0, p1);
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

//Powered by [KawigiEdit] 2.0!
