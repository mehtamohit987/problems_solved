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

class ExerciseMachine {
public:
	int getPercentages(string);
};

int ExerciseMachine::getPercentages(string time) {


    int h=(int)(time[0]-48)*10+(int)(time[1]-48);
    int m=(int)(time[3]-48)*10+(int)(time[4]-48);
    int s=(int)(time[6]-48)*10+(int)(time[7]-48);


    int n=0,S=h*3600+m*60+s;
    float Z;

    for(int x=1;x<100;x++)
    {
        Z=(x*S)*0.01;

        if((Z-floor(Z))==0)
            n++;

    }

    return n;

}

//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
int main()
{

    ExerciseMachine M;
    string S;
    while(1)
    { cin>>S;
    cout<<M.getPercentages(S);}
}
