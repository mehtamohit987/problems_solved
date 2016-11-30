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

class MultiNumber {
public:
	string check(int);
};

string MultiNumber::check(int number) {
bool flag=false;int r;
	vector<int> mul,A;
	while(number>0)
	{
		r=number%10;
		number=number/10;
		A.push_back(r);
		mul.push_back(r*(mul.size()?mul[mul.size()-1]:1));
	}
	int i;
	for(i=0;i<mul.size();i++)
	{
	cout<<mul[i]<<"\n";
	
	if(mul[i]!=0&&(float)mul[mul.size()-1]/mul[i]==(float)mul[i])
	{flag=true; break;}
	else
	{
		for(int j=i+1;j<mul.size();j++)
		if(A[j]==0){flag=true;break;cout<<"here";}
	}	
	}
	string y("YES");
	string n("NO");
	if(flag&&i!=mul.size()-1) return y;
	 return n;


}


//Powered by [KawigiEdit] 2.0!
