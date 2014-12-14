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

class PersistentNumber {
public:
	int getPersistence(int);
};

int PersistentNumber::getPersistence(int n) {

    int a=n,count=0,mul;
    while(a>9)
    {
        count++;
        mul=1;
        while(a>=1)
        {
            mul=mul*(a%10);
            a=a/10;
        }
        a=mul;
    }

    return count;
}
int main()
{
    PersistentNumber A;
    cout<<A.getPersistence(99);
    cout<<A.getPersistence(268);
    cout<<A.getPersistence(6);
    cout<<A.getPersistence(99);//68889789//86898

}
//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
