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

class KiloMan {
public:
	int hitsTaken(vector <int>, string);
};

int KiloMan::hitsTaken(vector <int> pattern, string jumps) {
int i,n=pattern.size();
int hit=0;
for(i=0;i<n;i++)
{
if((jumps[i]=='J'&& pattern[i]>2)||(jumps[i]=='S'&& pattern[i]<=2)
hit++;
}
return hit;

}

//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
