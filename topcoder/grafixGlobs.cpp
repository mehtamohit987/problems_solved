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

class grafixGlobs {
public:
	vector <int> execute(vector <string>, int);
};

vector <int> grafixGlobs::execute(vector <string> commands, int sel) {
	int i,j,k,n=commands.size();
	char buff[2]="";
	string temp;
	int x1,x2,a,c,p;
	vector<string> V;
	cout<<"here";
	vector<int> A;
	for(i=0;i<n;i++)
	{
		istringstream s(commands[i]);
		s>>temp;
		if(temp.compare("make"))
		{
			s>>temp;
			if(temp.compare("arc"))
			{
				for(j=0;j<V.size();j++)
				{
					if(V[j].compare(""))
					V[j]="a";
					else
					V.push_back("a");
				}
			}
			else if(temp.compare("circle"))
			{
				for(j=0;j<V.size();j++)
				{
					if(V[j].compare(""))
					V[j]="c";
					else
					V.push_back("c");
				}
			}
			else if(temp.compare("polygon"))
			{
			
				for(j=0;j<V.size();j++)
				{
					if(V[j].compare(""))
					V[j]="p";
					else
					V.push_back("p");
				}
			}
		}
		else if(temp.compare("merge"))
		{
			s>>x1>>x2;
			V[x1]+=V[x2];
			V[x2]="";
			
		}
		else if(temp.compare("split"))
		{
			s>>x1;
			i=0;
			temp=V[x1];
			V[x1]="";
			for(j=0;j<temp.length();j++)
			{
				for(k=0;k<V.size();k++)
				{
					if(V[k].compare(""))
					V[k]=temp[i++];
				}
			}		
			
			if(i<temp.length())	
			{
				buff[0]=temp[j];
				for(j=i;j<temp.length();i++)
				V.push_back(string());		
			}
	
		}
		if(sel<V.size())
		{
			a=c=p=0;
			for(i=0;i<V[sel].length();i++)
			{
				if(V[sel][i]=='a')
				a++;
				else if(V[sel][i]=='c')
				c++;
				else if(V[sel][i]=='p')
				p++;
				
			}
			A.push_back(a);
			A.push_back(c);
			A.push_back(p);
		}
	cout<<"here";		
		return A;
	}	
}



double test0() {
	string t0[] = {"make polygon", "make circle", "make polygon", "merge 0 1", "merge 2 0", "split 2"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	grafixGlobs * obj = new grafixGlobs();
	clock_t start = clock();
	vector <int> my_answer = obj->execute(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t2[] = { 0,  1,  0 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<p2[0];
		for (int i=1; i<p2.size(); i++)
			cout <<", " <<p2[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"make circle", "make circle", "make arc", "merge 2 1", "delete 0",
 "split 2", "delete 0", "make polygon"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	grafixGlobs * obj = new grafixGlobs();
	clock_t start = clock();
	vector <int> my_answer = obj->execute(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t2[] = { 0,  0,  1 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<p2[0];
		for (int i=1; i<p2.size(); i++)
			cout <<", " <<p2[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"make circle", "make circle", "make arc", "merge 2 1", "delete 0",
 "split 2", "delete 0", "make polygon"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 2;
	grafixGlobs * obj = new grafixGlobs();
	clock_t start = clock();
	vector <int> my_answer = obj->execute(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	vector <int> p2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<p2[0];
		for (int i=1; i<p2.size(); i++)
			cout <<", " <<p2[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"make arc"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 999;
	grafixGlobs * obj = new grafixGlobs();
	clock_t start = clock();
	vector <int> my_answer = obj->execute(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	vector <int> p2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<p2[0];
		for (int i=1; i<p2.size(); i++)
			cout <<", " <<p2[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"make polygon", "make polygon", "make arc", "make circle",
 "make circle", "delete 3", "make polygon", "make arc",
 "make arc", "merge 1 3", "merge 1 4", "merge 2 1", "make arc",
 "make arc", "make circle", "make circle", "merge 6 5",
 "split 6", "merge 2 1"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 2;
	grafixGlobs * obj = new grafixGlobs();
	clock_t start = clock();
	vector <int> my_answer = obj->execute(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t2[] = { 2,  1,  2 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<p2[0];
		for (int i=1; i<p2.size(); i++)
			cout <<", " <<p2[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p2) {
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
