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

class FactoVisors {
    int d,m;
    vector<int>D,M;
    set<long long> S;
public:
	long long gcd(long long a, int b)
	{
		if(b==0)return a;
		return gcd(b,a%b);
	}
	void check( int a)
	{
        bool f=true;
        for(int i=0;i<d;i++)
            if(a%D[i]!=0){f=false;break;}
        for(int i=0;i<m;i++)
            if(M[i]%a!=0){f=false;break;}

        if(f)S.insert(a);
	}
	int getNum(vector <int>, vector <int>);
};

int FactoVisors::getNum(vector <int> divisors, vector <int> multiples) {
	D=divisors;M=multiples;
	sort(D.begin(),D.end());
	sort(M.begin(),M.end());
	d=D.size();m=M.size();

	int a=sqrt(M[0]);
	for(int i=1;i<=a;i++)
	{
        check(i);
        for(int j=0;j<m;j++)
        check(M[j]/i);
	}
	return S.size();

}

int main(){
vector<int> D,M;
D.push_back(1);//6);
//D.push_back(9);
//M.push_back(96);
M.push_back(100);//0);

FactoVisors ob;
cout<<ob.getNum(D,M);


}



/*
	for(int i=1;i<m;i++)
		a=(long long) gcd(a,M[i]);

	for(int i=0;i<d;i++)
		a=(long long) (a*D[i])/gcd(a,D[i]);
	bool f=true;int ans=0;
	while(f)
	{

		for(int i=0;i<m;i++)
		if( M[i]%a != 0 ) f=false;

		if(f) ans++;
	}
*/
