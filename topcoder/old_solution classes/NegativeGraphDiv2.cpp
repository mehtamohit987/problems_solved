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
#include<climits>

using namespace std;

class NegativeGraphDiv2 {
public:
    int n,e;
    vector<vector<int> > G;
    vector<int> dist;
    vector<bool> S;
    int maximum(vector<int>);
    int minDistance();
    long long dijkstra(int);
	long long findMin(int, vector <int>, vector <int>, vector <int>, int);
};
int NegativeGraphDiv2::maximum(vector<int> A)
{
    int m=0,index=0;
    for(int i=0;i<e;i++)
        if(m<A[i])
        {
            m=A[i];
            index=i;
        }

    return index;
}

int NegativeGraphDiv2::minDistance()
{
   int mini = INT_MAX, min_index=0;

   for (int v = 0; v < n; v++)
     if (S[v] == false && dist[v] <= mini)
         mini = dist[v], min_index = v;

   return min_index;
}

long long NegativeGraphDiv2::dijkstra(int src)
{
     dist[src] = 0;

     int u;
     for (int c = 0; c < n-1; c++)
     {
        u = minDistance();


       for (int v = 0; v < n; v++)
         if (!S[v] && G[u][v]!=0 && dist[u] != INT_MAX && dist[u]+G[u][v] < dist[v])
            dist[v] = dist[u] + G[u][v];
        S[u] = true;
     }


     return dist[n-src-1];

}
long long NegativeGraphDiv2::findMin(int N, vector <int> s, vector <int> t, vector <int> weight, int charges) {

    n=N;

    e=s.size();

    int i,p;
    vector<int> w=weight;

    int prev_max,subvalue=0;

    long long res,res1;
    res1=res=0;
    int x=0,alt=0;
    vector<int> ED;
    vector<int>::iterator it;

    do
    {

        prev_max=-1;
        for(;x<charges;x++)
        {
            p=maximum(w);
            if(p==prev_max)
                break;
            w[p]=(-1)*w[p];
            prev_max=p;
            ED.push_back(p);
        }

        if(x!=charges)
        {
            if(s[p]==t[p])
            {
                subvalue=(charges+1-x)*w[p];
                break;
            }
        }


        do
        {

            G=vector<vector<int> > (n,vector<int> (n,0));
            dist=vector<int> (n,INT_MAX);
            S=vector<bool> (n,false);

            for(i=0;i<e;i++)
            {
                if(G[s[i]-1][t[i]-1]==0)
                    G[s[i]-1][t[i]-1]=w[i];

                else if(G[s[i]-1][t[i]-1]>w[i])
                    G[s[i]-1][t[i]-1]=w[i];

            }


            if(alt==0)
            {
                res+=dijkstra(0);
                res1=0;
                alt++;
            }
            else
            {
                res1=dijkstra(n-1);
                alt--;
            }



            for(it=ED.begin();it<ED.end();it++)
            {
                if( dist[t[*it]-1] - dist[s[*it]-1] == w[*it] )
                {
                    w[*it]=w[*it]*(-1);

                    ED.erase(it);
                }

            }


            G.clear();dist.clear();S.clear();

            if(alt==0&&(res1+res<res))
                res+=res1;
            else if(alt==0)
                break;

        }while(!ED.empty());


    }while(alt==0||(x<charges&&w.size()>1));



    return res+subvalue;
}


double test0() {
	int p0 = 3;
	int t1[] = {1,1,2,2,3,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,3,1,3,1,2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {1,5,1,10,1,1};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int p4 = 1;
	NegativeGraphDiv2 * obj = new NegativeGraphDiv2();
	clock_t start = clock();
	long long my_answer = obj->findMin(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = -9LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 1;
	int t1[] = {1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {100};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int p4 = 1000;
	NegativeGraphDiv2 * obj = new NegativeGraphDiv2();
	clock_t start = clock();
	long long my_answer = obj->findMin(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = -100000LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 2;
	int t1[] = {1,1,2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,2,1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {6,1,4};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int p4 = 2;
	NegativeGraphDiv2 * obj = new NegativeGraphDiv2();
	clock_t start = clock();
	long long my_answer = obj->findMin(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = -9LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 2;
	int t1[] = {1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {98765};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int p4 = 100;
	NegativeGraphDiv2 * obj = new NegativeGraphDiv2();
	clock_t start = clock();
	long long my_answer = obj->findMin(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = -98765LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

int main() {
	int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	time = test3();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}


//Powered by [KawigiEdit] 2.0!
