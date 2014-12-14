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

class SubstitutionCode {
public:
	int getValue(string, string);
};

int SubstitutionCode::getValue(string key, string code) {

	int i,j,k,m=code.length(),n=key.length();
	int s=0;

	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	if(code[i]==key[j])
	{
		if(j==9) k=0;
		else
		k=j+1;

		s=s*10+k;
	}


	return s;
}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
