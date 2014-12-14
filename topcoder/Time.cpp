#include<stdlib.h>
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

class Time {
public:
	string whatTime(int);
};

string Time::whatTime(int seconds) {

    int s=seconds%60;
    seconds=seconds/60;
    int m=seconds%60;
    seconds=seconds/60;
    int h=seconds;

    string str;
    char buff[5];

    sprintf(buff,"%d",h);
    str+=string(buff);
	str+=":";

	sprintf(buff,"%d",m);
    str+=string(buff);
	str+=":";

	sprintf(buff,"%d",s);
    str+=string(buff);


    return str;

}


int main()
{
    Time T;
    cout<<T.whatTime(5436);

}
//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
