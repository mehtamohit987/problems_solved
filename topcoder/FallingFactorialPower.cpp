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

class FallingFactorialPower {
public:
	double compute(int, int);
};

double FallingFactorialPower::compute(int n, int k) {

	
	if(k>0)
	{
		int mul = 1;
		for(int i=n;i>=n-k+1;i--)
		mul*=i;
		
		return mul;
	
	}
	else
	{
		k=-k;
		double mul = 1;
		for(int i=n+1;i<=n+k;i++)
		mul=(double)(mul/i);
		
		return mul;
	
	}
	return 0;				
}


//Powered by [KawigiEdit] 2.0!
