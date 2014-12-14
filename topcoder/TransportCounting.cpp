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

class TransportCounting {
public:
	int countBuses(int, vector <int>, vector <int>, int);
};

int TransportCounting::countBuses(int speed, vector <int> positions, vector <int> velocities, int time) {
	int i,meet=0,n=positions.size();
for(i=0;i<n;i++)
{
if(positions[i]==0)
    {meet++;continue;}
    positions[i]+=((velocities[i]-speed)*time);
    if(positions[i]<=0)
    meet++;

}
return meet;
}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
