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
#include<queue>

using namespace std;

class BoxesDiv2 {
public:

    int getpow(int n)
    {
        int x=1;
        while(x<n)
        {x=x*2;}

        return x;
    }

	int findSize(vector <int>);
};

int BoxesDiv2::findSize(vector <int> candyCounts) {

        int i,a,b,n=candyCounts.size();

        priority_queue<int,std::vector<int>,std::greater<int> > P;

        for(i=0;i<n;i++)
            P.push(getpow(candyCounts[i]));

        while(P.size()>1)
        {

            a=P.top();
            P.pop();
            b=P.top();
            P.pop();

            P.push(getpow(a+b));
        }

        return getpow(P.top());
}


int main()
{
    BoxesDiv2 c;
    int p[]={1,1,8};
    vector<int> p1(p,p+sizeof(p)/sizeof(int));
    cout<<c.findSize(p1);

}
