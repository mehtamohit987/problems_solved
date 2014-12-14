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
int arr[][2]={{1,0},{0,1},{1,1},{-1,-1},{-1,0},{0,-1},{1,-1},{-1,1}};
class BombSweeper {
public:
	double winPercentage(vector <string>);
};

double BombSweeper::winPercentage(vector <string> board) {
	int i,flag,k,j,a,b,n=board.size(),m=board[0].length(),w=0,l=0;
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{
		if(board[i][j]=='B') {l++;continue;}

		flag=0;
        for(k=0;k<8;k++)
        {
            a=(i+arr[k][0]);
            b=(j+arr[k][1]);

            if( a>=0 && a<n && b>=0 && b<m )
            {
                if(board[a][b]=='B')
                {flag++;//cout<<"\n"<<a<<" "<<b;
                }
            }
        }
        if(flag==0) w++;
	}
//cout<<w<<"\n"<<l<<"\n";
return (100*((double)w/(w+l)));
}

int main()
{
string t0[] = {".....",
 ".....",
 "..B..",
 ".....",
 "....."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BombSweeper * obj = new BombSweeper();
	double my_answer = obj->winPercentage(p0);
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;


}

//Powered by [KawigiEdit] 2.0!
