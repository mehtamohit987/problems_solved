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

class Rounder {
public:
	int round(int, int);
};

int Rounder::round(int n, int b) {
	int r,d;float f;
	r=n%b;f=r;
	d=n/b;
	cout<<f;
	if(f>=((float)b/2))
	{
		return b*(d+1);
	}
	else
		return b*d;
}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
