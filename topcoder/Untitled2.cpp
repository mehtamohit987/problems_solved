//To replace two consonants occuring together by a single
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

string year7(string S)
{
	int i,n=S.length();

	for(i=0;i<n;)
	{
		if(S[i]!='a'&&S[i]!='e'&&S[i]!='i'&&S[i]!='o'&&S[i]!='u')
		{
			if((i+1)<n && (S[i+1]==S[i]))
			{

				S.erase(S.begin()+(i+1)); //segmentation fault here. cant know the cause
			}
			else
			{i++;}
		}
		else
		{i++;}
	}
cout<<S;
	return S;
	}


int main()
{
string k="sk n z zskrks nnchk sik zkssesi";
cout<<year7(k);

}
