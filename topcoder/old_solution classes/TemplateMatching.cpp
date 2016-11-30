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
#include<string>
#include<cstring>

using namespace std;
template <typename T1, typename T2>
struct less_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return a.second < b.second;
    }
};

class TemplateMatching {
public:
	string bestMatch(string, string, string);
};

string TemplateMatching::bestMatch(string text, string prefix, string suffix) {
	
	int q,r,k,M=0,m,n=text.size(), p=prefix.size(),s=suffix.size();
	string S;
	vector<pair<int,string> > G;

	for(int i=0;i<n-1;i++)
	{

		for(int j=n-1;j>=i;j--)
		{

			q=0;
			for(k=0;k<p&&q<=j;k++)
			{
				if(text[i+q]==prefix[k])
				{//cout<<text[i+q];
				q++;}
				else q=0;
			}
		
			if(k!=p)q=0;
			//cout<<"\n";
			
			r=0;
			//+q
			for(k=s-1;k>=0&&j-r>=i;k--)
			{	
				if(text[j-r]==suffix[k])
				{//cout<<text[j-r];
				r++;}
				else r=0;
			}
			
			if(k!=-1)r=0;
			
			cout<<"\n"<<q<<" "<<r<<" "<<q+r;
			if(q<=p&&r<=s)
			{
				m=q+r;

				if(m>=M){
					S=text.substr(i,j-i+1);cout<<S<<i<<j<<"\n";
					M=m;G.push_back(pair<int,string>(M,S));				
					}
			}


		}

//		cout<<"\n"<<M<<"\n";		
		
	}
	
	cout<<"\n"<<M<<"\n";		
	cout<<G.size()<<"\n";
	sort(G.begin(), G.end(), less_second<int,string>());

	S="";
//if(M!=0)

	for(int i=0;i<G.size();i++)
//if(G[i].first==M) cout<<G[i].second<<"\n";
	if(G[i].first==M){S=G[i].second;break;}

//
return S;
	
}


double test0() {
	string p0 = "something";
	string p1 = "awesome";
	string p2 = "ingenious";
	TemplateMatching * obj = new TemplateMatching();
	clock_t start = clock();
	string my_answer = obj->bestMatch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "something";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string p0 = "havka";
	string p1 = "eto";
	string p2 = "papstvo";
	TemplateMatching * obj = new TemplateMatching();
	clock_t start = clock();
	string my_answer = obj->bestMatch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "a";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string p0 = "abracadabra";
	string p1 = "habrahabr";
	string p2 = "bracket";
	TemplateMatching * obj = new TemplateMatching();
	clock_t start = clock();
	string my_answer = obj->bestMatch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "abrac";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string p0 = "mississippi";
	string p1 = "promise";
	string p2 = "piccolo";
	TemplateMatching * obj = new TemplateMatching();
	clock_t start = clock();
	string my_answer = obj->bestMatch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "ippi";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string p0 = "a a a a a a";
	string p1 = "a a";
	string p2 = "a";
	TemplateMatching * obj = new TemplateMatching();
	clock_t start = clock();
	string my_answer = obj->bestMatch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "a a";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	string p0 = "ab";
	string p1 = "b";
	string p2 = "a";
	TemplateMatching * obj = new TemplateMatching();
	clock_t start = clock();
	string my_answer = obj->bestMatch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "b";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p3 != my_answer) {
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
