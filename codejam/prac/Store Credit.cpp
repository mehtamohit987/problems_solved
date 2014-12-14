/*

    Mohit Mehta
    @zapper123

*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<map>
#include<cstring>
#include<string>

using namespace std;
int N,C,I,i,j,cnt=0,flag;
vector<int> P,E;
pair<int,int> finding(int a, int b)
{
    int x,y;
    for(int i=0;i<E.size();i++)
    {
        if(E[i]==a)x=i;
        else if(E[i]==b)y=i;
    }
return make_pair(x,y);
}
int main()
{
	freopen("B-small-attempt0.in", "r", stdin);
	freopen("result.txt", "w", stdout);
	scanf("%d",&N);
	while(N--)
	{
    P.clear();
    cnt++;flag=0;
	scanf("%d",&C);
	scanf("%d",&I);

	for(i=0;i<I;i++)
    {scanf("%d",&j);P.push_back(j);}
    E=P;
	sort(P.begin(),P.end());

	i=0;j=P.size()-1;
	while(i<j)
	{
		if(P[i]+P[j]==C){ flag=1; break; }
		else if(P[i]+P[j]<C)i++;
		else j--;
	}
pair<int,int> k=finding(P[i],P[j]);
	if(flag) printf("Case #%d: %d %d\n", cnt,k.first+1,k.second+1);

	}
}
