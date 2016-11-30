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

class Twain {
public:
	string year1(string S)
	{
	int i,n=S.length();
	
	if(n>=0&&S[0]=='x')
	S[0]='z';
	for(i=1;i<n;i++)
	{
		if(S[i]==' ')
		{
		if(S[i+1]=='x')
		{
			S[i+1]='z';
		}
		}
		
		else if(S[i]=='x')
		{
			S[i]='k';
			S.insert(S.begin()+(i+1),'s');
		}
		
	}
	return S;
	}
	string year2(string S)
	{
	S=year1(S);
	int i,n=S.length();

	for(i=0;i<n;i++)
	{
		if(S[i]=='y')
		{
			S[i]='i';
			
		}
	}
	return S;
	}
	
	string year3(string S)
	{
	S=year2(S);
	int i,n=S.length();
	for(i=0;i<n;i++)
	{
		if(S[i]=='c')
		{
			if((i+1)!=n&&(S[i+1]=='e'||S[i+1]=='i'))
			{
				S[i]='s';
			}
		}
	}
	return S;
	}
	
	string year4(string S)
	{
	S=year3(S);
	int i,j,n=S.length();
	for(i=0;i<n;i++)
	{
		if(S[i]=='c')
		{
			j=i+1;
			while(j!=n&&S[j]=='c')
			j++;
		
			if(j!=n&&S[j]=='k')
			{
			S.erase(S.begin()+i,S.begin()+j);
			}
		}
	}
	return S;
	}
	
	string year5(string S)
	{

	S=year4(S);
	int i,n=S.length();

	
	if(n>=3&&S[0]=='s'&&S[1]=='c'&&S[2]=='h')
	{
		S[0]='s';S[1]='k';
		S.erase(S.begin()+2);
	}


	for(i=0;i<n;i++)
	{
		if(S[i]==' ')
		{
			
			if((i+3)<n&&S[i+1]=='s'&&S[i+2]=='c'&&S[i+3]=='h')
			{
				S[i+1]='s';S[i+2]='k';
				S.erase(S.begin()+(i+3));
			}

		}
		
		else if(S[i]=='c')
		{
			if((i+1)!=n&&S[i+1]=='h')
			{
				if((i+2)!=n&&S[i+2]=='r')
				{
					S[i]='k';
					S.erase(S.begin()+(i+1));
					
				}
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(S[i]=='c')
		{
			if((i+1)>=n||S[i+1]!='h')
			{
				S[i]='k';
			}
		}
	}
	
	return S;
	
	}
	
	string year6(string S)
	{
	S=year5(S);

	int i,n=S.length();

	
	if(n>=2&&S[0]=='k'&&S[1]=='n')
	{
		S[0]='n';
		S.erase(S.begin()+1);
	}


	for(i=0;i<n;i++)
	{
		if(S[i]==' ')
		{
			
			if((i+2)<n&&S[i+1]=='k'&&S[i+2]=='n')
			{
				S[i+1]='n';
				S.erase(S.begin()+(i+2));
			}

		}
		
	}
		
	return S;
	}
	
	
	
	
	string year7(string S)
	{
	S=year6(S);

	int i,n=S.length();



	for(i=0;i<n;)
	{
		if(S[i]!='a'||S[i]!='e'||S[i]!='i'||S[i]!='o'||S[i]!='u')
		{
			if((i+1)<n&&S[i+1]==S[i])
			{
			
				S.erase(S.begin()+(i+1));
				
			}
			else
			{i++;}
		}
		else
		{i++;}
	}
		
	return S;
	}
	
	
	
	
	
	
	string getNewSpelling(int, string);
	
	
	
	
	
	
};

string Twain::getNewSpelling(int year, string phrase) {
string S=phrase;
	switch(year)
	{
	
		case 0:{ return S;break;}
		case 1:{ return year1(S);break;}
		case 2:{ return year2(S);break;}
		case 3:{ return year3(S);break;}
		case 4:{ return year4(S);break;}
		case 5:{ return year5(S);break;}
		case 6:{ return year6(S);break;}					
		case 7:{ return year7(S);break;}
		default: return year7(S);
	}
	
}


double test0() {
	int p0 = 1;
	string p1 = "i fixed the chrome xerox by the cyclical church";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "i fiksed the chrome zeroks by the cyclical church";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 2;
	string p1 = "i fixed the chrome xerox by the cyclical church";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "i fiksed the chrome zeroks bi the ciclical church";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 0;
	string p1 = "this is unchanged";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "this is unchanged";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 7;
	string p1 = "sch kn x xschrx cknnchc cyck xxceci";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "sk n z zskrks nchk sik zksesi";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 7;
	string p1 = "  concoction   convalescence   cyclical   cello   ";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "  konkoktion   konvalesense   siklikal   selo   ";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 7;
	string p1 = "";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 7;
	string p1 = "cck xzz aaaaa";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "k z aaaaa";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
