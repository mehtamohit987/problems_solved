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

class LeapAge {
public:
	int getAge(int, int);
};

int LeapAge::getAge(int year, int born) {
	int i=(born+4-(born%4)),count=0;
	for(;i<=year;i++)
	if((i%100!=0&&i%4==0)||(i%400==0))
	count++;

	return count;
}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
