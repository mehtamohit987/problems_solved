#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define si(a) scanf("%d",&a)
#define sf(a) scanf("%f",&a)
#define sc(a) scanf("%c",&a)
#define ss(a) scanf("%s",&a)
#define f(i,n) for(i=0;i<n;i++)
#define pi(a) printf("%d",a)
#define pf(a) printf("%f",a)
#define pc(a) printf("%c",a)
#define ps(a) printf("%s",a)
char A[3][3];
bool win(int t){

if(A[0][0]==t&&A[0][1]==t&&A[0][2]==t) return true;
if(A[1][0]==t&&A[1][1]==t&&A[1][2]==t) return true;
if(A[2][0]==t&&A[2][1]==t&&A[2][2]==t) return true;
if(A[0][0]==t&&A[1][0]==t&&A[2][0]==t) return true;
if(A[0][1]==t&&A[1][1]==t&&A[2][1]==t) return true;
if(A[0][2]==t&&A[1][2]==t&&A[2][2]==t) return true;
return false;
}
int main()
{

    int T,i,cx,co;
    string s;
    freopen("in.txt","rt",stdin);
    si(T);

    while(T--)
    {

        cx=0;co=0;
        for(i=0;i<3;i++)
        { cin>>s; A[i][0]=s[0];A[i][1]=s[1];A[i][2]=s[2];if(s[0]=='X')cx++;if(s[0]=='O')co++;if(s[1]=='X')cx++;if(s[1]=='O')co++;if(s[2]=='X')cx++;if(s[2]=='O')co++;}

        if(co>cx||cx>co+1||(win('X')&&cx<=co)||(win('O')&&cx>co))
		cout<<"no\n";
		else
        cout<<"yes\n";

        if(T!=0) cin>>s;
    }


}
