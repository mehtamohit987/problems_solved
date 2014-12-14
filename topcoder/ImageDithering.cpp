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

class ImageDithering {
public:
	int count(string, vector <string>);
};

int ImageDithering::count(string dithered, vector <string> screen) {
	int cnt=0;
	for(int i=0;i<screen.size();i++)
	for(int j=0;j<screen[i].length();j++)
	for(int k=0;k<dithered.length();k++)
	if(screen[i][j]==dithered[k])
	cnt++;

	return cnt;
}
main()
{
ImageDithering I;
vector<string> S;
S.push_back("AAAAAAAA");
S.push_back("ABWBWBWA");
S.push_back("AWBWBWBA");
S.push_back("ABWBWBWA");
S.push_back("AWBWBWBA");
S.push_back("AAAAAAAA");
cout<<I.count("BW",S);
}

//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
