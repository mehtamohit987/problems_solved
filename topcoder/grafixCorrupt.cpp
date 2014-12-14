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

class grafixCorrupt {
public:
	int selectWord(vector <string>, string);
};

int grafixCorrupt::selectWord(vector <string> dictionary, string candidate) {

    int res=0,temp,indx=-1;
    for(int i=0;i<dictionary.size();i++)
    {
        temp=0;
        for(int j=0;j<candidate.length();j++)
            if(candidate[j]==dictionary[i][j])
            temp++;

        if(res<temp)
        {
            res=temp;
            indx=i;
        }
    }

    return indx;

}
//<%:start-tests%>
double test0() {
	string t0[] = {"cat", "cab", "lab"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string p1 = "dab";
	grafixCorrupt * obj = new grafixCorrupt();
	clock_t start = clock();
	int my_answer = obj->selectWord(p0, p1);
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
	string t0[] = {"cat", "cab", "lab"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string p1 = "lag";
	grafixCorrupt * obj = new grafixCorrupt();
	clock_t start = clock();
	int my_answer = obj->selectWord(p0, p1);
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
	string t0[] = {"cat", "cab", "lab"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string p1 = "bic";
	grafixCorrupt * obj = new grafixCorrupt();
	clock_t start = clock();
	int my_answer = obj->selectWord(p0, p1);
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
	string t0[] = {"zkv", "izs", "fed", "waa", "ttx", "bgt", "quy", "dtq", "dgo", "yrs",
 "cid", "nln", "pvz", "txt", "zun", "erd", "jen", "klh", "kxy", "emf",
 "mqt", "lza", "dzb", "ndx", "vfr", "jhs", "dkm", "elb"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string p1 = "cwd";
	grafixCorrupt * obj = new grafixCorrupt();
	clock_t start = clock();
	int my_answer = obj->selectWord(p0, p1);
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
	string t0[] = {"zhadjsg", "vzptftx", "fbaslxs", "ejejncm", "xpxkeae", "ixrrtzw",
 "ovctbzx", "sfzekhh", "lxzixjk", "jixdpik", "bkianck", "laclyin",
 "uqmdkfx", "dimswqo", "fojhetr", "grntrce", "obdtqwx", "bhojwcy",
 "zuuuvst", "mvqtoly", "aftmupx", "govuidx", "qklpret", "yptccki",
 "uxdnslh", "wudrusz", "uwxbvou", "ouytqun", "pjdexqe", "xraaqdw",
 "lxmoncl", "sjnjfgb", "qrlqgvc", "fgvoadm", "yohsrxw", "udpvrsr",
 "mklucgt"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string p1 = "vklikgf";
	grafixCorrupt * obj = new grafixCorrupt();
	clock_t start = clock();
	int my_answer = obj->selectWord(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 36;
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
//<%:end-tests%>
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
