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

class LightSwitchingPuzzle {
public:
	int minFlips(string);
};

int LightSwitchingPuzzle::minFlips(string s) {
	int N=s.length(),ans=0;

	for(int i=0;i<N;i++)
	{
		if(s[i]=='Y')
		{
			ans++;
			for(int j=i+i;j<N;j+=i)
			if(s[j]=='Y') s[j]='N';
		}

	}

		cout<<ans;
		return ans;
}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
