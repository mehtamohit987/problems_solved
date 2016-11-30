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
#include<cstdlib>
#include<cstdio>

using namespace std;

class BirthdayReminders {
public:
	vector <string> remind(vector <string>, vector <int>, int, vector <string>, vector <int>, int);
};

vector <string> BirthdayReminders::remind(vector <string> F, vector <int> B, int t, vector <string> O, vector <int> D, int k) {
string S;int n,r,t2;char c[200];vector<string> V;
while(k)
{
	t2=1000000000;
	for(int i=0;i<O.size();i++){
	for(int j=0;j<F.size();j++)
	{
		r=(t-B[j])%D[i];
		if(r==0){
			n=(t-B[j])/D[i];
			
			if(n>0){
			if(k<=0)break;
			k--;
			S.clear();
			sprintf(c,"%d",t);
			S+=string(c);
			S+=". ";
			S+=F[j];
			S+=" ";
			S+=O[i];
			S+=" (";
			sprintf(c,"%d",n);
			S+=string(c);
			S+=")";
			
			V.push_back(S);
			t2=min(t2,t+D[i]);
			}
			}
			else
			{
				t2=min(t2,t+D[i]-r);
			
			}
	}
	if(k<=0)break;
	}
	if(t2!=1000000000)t=t2;
}
	return V;
}


//Powered by [KawigiEdit] 2.0!

double test0() {
	string t0[] = {"John", "Jack", "Bill"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {50, 100, 150};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 500;
	string t3[] = {"birthday", "decimal birthday", "binary birthday"};
	vector <string> p3(t3, t3+sizeof(t3)/sizeof(string));
	int t4[] = {365, 1000, 512};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	int p5 = 10;
	BirthdayReminders * obj = new BirthdayReminders();
	clock_t start = clock();
	vector <string> my_answer = obj->remind(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t6[] = {"515. Bill birthday (1)", "562. John binary birthday (1)", "612. Jack binary birthday (1)", "662. Bill binary birthday (1)", "780. John birthday (2)", "830. Jack birthday (2)", "880. Bill birthday (2)", "1050. John decimal birthday (1)", "1074. John binary birthday (2)", "1100. Jack decimal birthday (1)" };
	vector <string> p6(t6, t6+sizeof(t6)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p6.size() > 0) {
		cout <<"\""<<p6[0]<<"\"";
		for (int i=1; i<p6.size(); i++)
			cout <<", \"" <<p6[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p6) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"Zero", "Two", "Three"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {0, 2, 3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 24;
	string t3[] = {"threeday", "twoday"};
	vector <string> p3(t3, t3+sizeof(t3)/sizeof(string));
	int t4[] = {3,2};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	int p5 = 10;
	BirthdayReminders * obj = new BirthdayReminders();
	clock_t start = clock();
	vector <string> my_answer = obj->remind(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t6[] = {"24. Zero threeday (8)", "24. Three threeday (7)", "24. Zero twoday (12)", "24. Two twoday (11)", "25. Three twoday (11)", "26. Two threeday (8)", "26. Zero twoday (13)", "26. Two twoday (12)", "27. Zero threeday (9)", "27. Three threeday (8)" };
	vector <string> p6(t6, t6+sizeof(t6)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p6.size() > 0) {
		cout <<"\""<<p6[0]<<"\"";
		for (int i=1; i<p6.size(); i++)
			cout <<", \"" <<p6[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p6) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"Jessica Alba", "Angelina Jolie", "Paris Hilton", "Britney Spears"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {4135, 1980, 4065, 4353};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 14091;
	string t3[] = {"Venus year", "Earth year", "Mars year", "Jupiter year", "Saturn year"};
	vector <string> p3(t3, t3+sizeof(t3)/sizeof(string));
	int t4[] = {225, 365, 687, 4332, 10760};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	int p5 = 20;
	BirthdayReminders * obj = new BirthdayReminders();
	clock_t start = clock();
	vector <string> my_answer = obj->remind(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t6[] = {"14130. Angelina Jolie Venus year (54)", "14190. Paris Hilton Venus year (45)", "14208. Britney Spears Earth year (27)", "14253. Britney Spears Venus year (44)", "14260. Jessica Alba Venus year (45)", "14285. Paris Hilton Earth year (28)", "14346. Angelina Jolie Mars year (18)", "14355. Angelina Jolie Venus year (55)", "14355. Jessica Alba Earth year (28)", "14370. Paris Hilton Mars year (15)", "14390. Angelina Jolie Earth year (34)", "14415. Paris Hilton Venus year (46)", "14440. Jessica Alba Mars year (15)", "14478. Britney Spears Venus year (45)", "14485. Jessica Alba Venus year (46)", "14573. Britney Spears Earth year (28)", "14580. Angelina Jolie Venus year (56)", "14640. Paris Hilton Venus year (47)", "14650. Paris Hilton Earth year (29)", "14658. Britney Spears Mars year (15)" };
	vector <string> p6(t6, t6+sizeof(t6)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p6.size() > 0) {
		cout <<"\""<<p6[0]<<"\"";
		for (int i=1; i<p6.size(); i++)
			cout <<", \"" <<p6[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p6) {
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
