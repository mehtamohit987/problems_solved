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

#include <string>
#include <cstring>

using namespace std;

#define si(a) scanf("%d",&a)
#define sf(a) scanf("%f",&a)
#define sc(a) scanf("%c",&a)
#define ss(a) scanf("%s",&a)
#define f(i,n) for(i=0;i<n;i++)
#define pi(a) printf("%d",a)
#define pf(a) printf("%f",a)
#define pc(a) printf("%c",a)
#define ps(a) printf("%s",a)

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<bool> vb;
typedef vector<vector<bool> > vvb;

class nameOfClass{
public:
	int nameOfFunction();
};

int nameOfClass::nameOfFunction() {
	
	int ans=0;
	
	return ans;
}

int main() {

	int p0 = 3;
	int t1[] = {1,2,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	nameOfClass * obj = new nameOfClass();
	
	int my_answer = obj->nameOfClass(p0, p1);
	
	delete obj;
	
	int p2 = 1;

	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;

	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;

	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
	}
	return 0;
}
