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
#include<set>
#include <cstdlib>
#include <ctime>

using namespace std;
set <int> s;
class TheLuckyNumbers {
public:

    int x,y;

	void fun(long long a)
	{
        if(a>y)return;
        int ans=0;
        if(a>=x&&a<=y) s.insert(a);
        fun(10*a+4);
        fun(10*a+7);

	}

	int count(int, int);

};


int TheLuckyNumbers::count(int a, int b) {

    x=a;y=b;
	 fun(0);
	 return s.size();
}


int main()
{
    TheLuckyNumbers obj;
    cout<<obj.count(1,1000000000);

}
