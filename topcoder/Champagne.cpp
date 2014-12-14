#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include<queue>
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

class Champagne {
public:
	string howMuch(int, int, int);
};

string Champagne::howMuch(int height, int glass, int units) {

int n=(height*(height+1))/2;
vector<int> a(n+1,0);
int x=1,units_avail=units,level=1;

queue<int> Q;
Q.push(x);
while(!Q.empty()&&level<=h)
{
    x=Q.front();
    Q.pop();
    if(units_avail>2)
    {
        a[x]=2;
        units=units-2;
        Q.push(level+x);
        Q.push(level+x+1);
        units_avail=units/(level+1);
        level++;

    }
    else
    {
    a[x]=units;
    units=0;
    }
}


}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
