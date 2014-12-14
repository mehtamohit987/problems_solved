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

class BuyingCheap {
public:
	int thirdBestPrice(vector <int>);
};

int BuyingCheap::thirdBestPrice(vector <int> prices) {
int i,n=prices.size(),s=0;
sort(prices.begin(),prices.end(),less<int>());
for(i=1;i<n;i++)
{
	if(prices[i]>prices[i-1])
	s++;
	if(s==2) break;
}
if(s==2) return prices[i];
else
return -1;
}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
