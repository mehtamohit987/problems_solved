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

class GymTraining {
public:
	int trainingTime(int, int, int, int, int);
};

int GymTraining::trainingTime(int needToTrain, int minPulse, int maxPulse, int trainChange, int restChange) {
	int m=0,t=0;
	int h=minPulse;
	if(maxPulse-minPulse>=trainChange)
	{
	while(t<needToTrain)
	{
		if(h+trainChange<=maxPulse)
		{
			h+=trainChange;
			m++;
			t++;
		}
		else
		{
			m++;
			h=(h-restChange)>=minPulse?(h-restChange):minPulse;
		}
	
	}
	}
	else
	{
		return -1;
	
	}
	return m;
	
}


//Powered by [KawigiEdit] 2.0!
