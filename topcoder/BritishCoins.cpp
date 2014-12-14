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

class BritishCoins {
public:
	vector <int> coins(int);
};

vector <int> BritishCoins::coins(int pence) {
vector<int> P(3,0);
P[0]=pence/(12*20);
pence=pence%(12*20);
P[1]=pence/12;
pence=pence%12;
P[2]=pence;
return P;
}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
