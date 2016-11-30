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

class BubbleSortWithReversals {
public:
    vector<int> B,V;
    int k,n;
    int find_max()
    {
        int maxi=-1;
        int ma=-1;

        for(int i=0;i<n;i++)
        {
            if(maxi<V[i])
            {
                maxi=V[i];
                ma=i;
            }
        }
        return ma;
    }
    void modify()
    {

        V=vector<int>(n,1);
        int i,j;
        for(i=0;i<n;i++)
        {
            j=i+1;
            while(B[j]<=B[j-1]&&j<n)
            {
                j++;
            }
            V[i]=j-i;
        }
        int m=-1;

    for(int i=0;i<n;i++)
    {
        cout<<V[i];
    }

        while(k>0)
        {
            m=find_max();
            if(V[m]==-1) break;
            reverse(B.begin()+m,B.begin()+m+V[m]);
            for(i=m;i<m+V[m];i++)
            V[i]=1;

            k--;
        }
    }
 void printarr()
 {
 cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<B[i]<<" ";
    }
    cout<<"\n";
 }
int bubblesort()
{
int temp,x=0;
    for(int i=0;i<n;i++)
    {for(int j=0;j<n-i-1;j++)
    {
        if(B[j]>B[j+1])
        {
            temp=B[j];
            B[j]=B[j+1];
            B[j+1]=temp;
            x++;
        }

    }
    cout<<"\n"<<x<<"\n";
    printarr();
    cout<<"\n";
    }


return x;
}
	int getMinSwaps(vector <int>, int);
};


int BubbleSortWithReversals::getMinSwaps(vector <int> A, int K) {

    B=A;k=K,n=A.size();
    cout<<k<<"\n"<<n<<"\n\n";
    printarr();


    modify();
    cout<<"\n\n";
    printarr();
    int swapa=bubblesort();
    return swapa;

}

double test0() {
	int t0[] = {6,8,8,7,7};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 1;
	BubbleSortWithReversals * obj = new BubbleSortWithReversals();
	clock_t start = clock();
	int my_answer = obj->getMinSwaps(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {7,2,2,13,5,5,2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 2;
	BubbleSortWithReversals * obj = new BubbleSortWithReversals();
	clock_t start = clock();
	int my_answer = obj->getMinSwaps(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {12,5,1,10,12,6,6,10,6,8};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 2;
	BubbleSortWithReversals * obj = new BubbleSortWithReversals();
	clock_t start = clock();
	int my_answer = obj->getMinSwaps(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 12;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {2,3,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 2;
	BubbleSortWithReversals * obj = new BubbleSortWithReversals();
	clock_t start = clock();
	int my_answer = obj->getMinSwaps(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {482,619,619,601,660,660,691,691,77,77,96,77};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 9;
	BubbleSortWithReversals * obj = new BubbleSortWithReversals();
	clock_t start = clock();
	int my_answer = obj->getMinSwaps(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 22;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
