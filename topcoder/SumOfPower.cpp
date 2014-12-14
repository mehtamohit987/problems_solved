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

class SumOfPower {
public:
	int findSum(vector <int>);
};

int SumOfPower::findSum(vector <int> array) {

    int sum=0;
    int n=array.size();
   	for(int i=0;i<n;i++)
    {
    sum+=((i+1)*(n-(2*i))+(i*(i+1)))*array[i];

    }
    cout<<sum;
    return sum;


}
