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

class RelativePath {
public:
	string makeRelative(string, string);
};

string RelativePath::makeRelative(string A, string P) {
	int i,a,n,m;
	string ans="";
	if(P[P.length()-1]!='/')P.push_back('/');
	cout<<A<<"\n"<<P;
	n=A.length();
	m=P.length();
	for(i=0;i<n&&i<m&&A[i]==P[i];i++);
	i--;cout<<i;

	if(A[i]!='/')
		while(A[i]!='/')
		i--;
	cout<<i;
	a=i;
	cout<<a;
	i=m-1;

	while(i!=a)
	{
		if(P[i]=='/'&&(i!=0||a==0))
			ans+="../";
		i--;
	}

	for(i=a+1;i<n;i++)ans.push_back(A[i]);

	return ans;

}
int main(){
string a("/b/c"),b("/boot/d");
RelativePath ob;
cout<<ob.makeRelative(a,b);


}
