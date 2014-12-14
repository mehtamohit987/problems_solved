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

class FixedDiceGameDiv2 {
public:
	double getExpectation(int, int);
};

double FixedDiceGameDiv2::getExpectation(int a, int b) {

    int sum=0,c=0;
    double ans;
    for(int i=1;i<=b;i++)
    for(int j=i+1;j<=a;j++)
    {
        sum+=j;
        c++;
    }
    ans=(double)(sum)/c;
    cout<<ans;
    return ans;
}

main()
{
FixedDiceGameDiv2 F;
F.getExpectation(11,13);

}
//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
