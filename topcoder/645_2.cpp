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

class ConnectingCars {
public:
	long long minimizeCost(vector <int>, vector <int>);
};

long long ConnectingCars::minimizeCost(vector <int> p, vector <int> l) {
    int i,j,k,y,n=p.size();
    float x;
	long long s;
	for(i=1;i<n;i++)
	{
		x=p[i];
		y=l[i];
		j=i-1;
		while(j>=0&&p[j]>x)
		{
			p[j+1]=p[j];
			l[j+1]=l[j];
			j--;
		}
		p[j+1]=x;
        l[j+1]=y;
	}

    for(i=0;i<n;i++)
	cout<<p[i]<<" "<<l[i]<<"\n";

    long long ans,p1,p2;bool f=false;
	for(k=1;k<n;k++)
	{
		//ans=min(move(p[k-1]+len)+move()+mid(k))
		s=0;
		p1=p[k-1];
		for(i=0;i<k-1;i++)
			{s+=(p1-p[i]-l[i]);p1=p1-l[i];}
			cout<<"k="<<k<<"s="<<s<<"\n";
		p2=p[k]+l[k];
		for(i=k+1;i<n;i++)
			{s+=(p[i]-p2);p2=p2+l[i];}
			cout<<"k="<<k<<"s="<<s<<"\n";
		x=(float)(k*(p[k-1]+l[k-1])+(n-k)*p[k])/(n);//FLZZZZOAAAAT chanfge

        if(x-floor(x)>=0.5)x=ceil(x);else x=floor(x);

		s+=(k*(x-p[k-1]-l[k-1])+(n-k)*(p[k]-x));

		cout<<"k="<<k<<"s="<<s<<"\n\n\n";
		if(!f){ans=s;f=true;}
		else ans=min(s,ans);
	}

	return ans;
}
int main()
{
    vector<int> p,l;


    p.push_back(3);
    l.push_back(2);

    p.push_back(20);
    l.push_back(3);


    p.push_back(10);
    l.push_back(5);


    p.push_back(1);
    l.push_back(2);

ConnectingCars C;
    cout<<"\n\n\n\nans="<<C.minimizeCost(p,l);

}
