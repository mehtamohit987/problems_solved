//Template from https://gist.github.com/tctony/2367712

#include <cstring>
#include <string.h>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>

using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz size()
#define rep(i,m) for(int i=0;i<(int)(m);i++)
#define rep2(i,n,m) for(int i=n;i<(int)(m);i++)
#define For(it,c) for(__typeof(c.begin()) it=c.begin();it!=c.end();++it)
#define mem(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define dot(a,b) ((conj(a)*(b)).X)
#define X real()
#define Y imag()
#define length(V) (hypot((V).X,(V).Y))
#define vect(a,b) ((b)-(a))
#define cross(a,b) ((conj(a)*(b)).imag())
#define normalize(v) ((v)/length(v))
#define rotate(p,about,theta) ((p-about)*exp(point(0,theta))+about)
#define pointEqu(a,b) (comp(a.X,b.X)==0 && comp(a.Y,b.Y)==0)

typedef stringstream ss;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vector<int> > vii;
typedef long long ll;
typedef long double ld;
typedef complex<double> point;
typedef pair<point, point> segment;
typedef pair<double, point> circle;
typedef vector<point> polygon;

const int oo = (int) 1e9;
const double PI = 2 * acos(0);
const double eps = 1e-9;

inline int comp(const double &a, const double &b) {
	if (fabs(a - b) < eps)
		return 0;
	return a > b ? 1 : -1;
}

int di[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dj[] = { 0, 0, 1, -1, 1, -1, -1, 1 };
int diK[] = { -2, -2, -1, 1, 2, 2, 1, -1 };
int djK[] = { -1, 1, 2, 2, 1, -1, -2, -2 };

int I, J;

inline bool val(const int &i, const int &j) {
	if (i < 0 || j < 0 || i >= I || j >= J)
		return false;
	return true;
}

int T,N;
int main(int argc, char *args[]) {
    if (argc == 2 && strcmp(args[1], "small") == 0) {
        freopen("small.in","rt",stdin);
        freopen("small.out","wt",stdout);
    }
    else if (argc == 2 && strcmp(args[1], "large") == 0) {
        freopen("large.in","rt",stdin);
        freopen("large.out","wt",stdout);
    }
    else {
	    freopen("a.txt", "rt", stdin);
    }
    string S;int i,j;
    vii A;
    cin>>T;
    rep2(nn,1,T+1) {
        printf("Case #%d: ", nn);
        cout<<endl;
        scanf("%d",&N);//cout<<N<<"\n";
        cin>>S;//cout<<S<<"\n";
        A=vii(N,vi(N));
        rep(i,N)
        {
            rep(j,N)
            {
                scanf("%d",&A[i][j]);
                //cout<<V[i][j]<<" ";

            }
                //cout<<"\n";
        }

        if(S=="up")
        {
        rep(i,N)
            {
                for(j=N-1;j>=0;j--)
                {
                    if(A[i][j]!=0&&A[i][j-1]==A[i][j])
                    {
                        A[i][j-1]=0;
                        A[i][j]=2;

                    }
                    else if(A[i][j]==0)
                    {
                        A[i][j]=A[i][j-1];
                        A[i][j-1]=0;
                    }


                }

            }


        }
        else if(S=="down")
        {

            rep(i,N)
            {
                for(j=N-1;j>=0;j--)
                {
                    if(A[i][j]!=0&&A[i][j-1]==A[i][j])
                    {
                        A[i][j-1]=0;
                        A[i][j]*=2;

                    }
                    else if(A[i][j]==0)
                    {
                        A[i][j]=A[i][j-1];
                        A[i][j-1]=0;
                    }


                }

            }






        }
        else if(S=="left")
        {
            rep(i,N)
            {
                for(j=0;j<=N;j++)
                {
                    if(A[i][j]!=0&&A[i][j+1]==A[i][j])
                    {
                        A[i][j+1]=0;
                        A[i][j]*=2;

                    }
                    else if(A[i][j]==0)
                    {
                        A[i][j]=A[i][j+1];
                        A[i][j+1]=0;
                    }


                }
            }


        }
        else if(S=="right")
        {

            rep(i,N)
            {
                for(j=N-1;j>0;)
                {

                    if(A[i][j]!=0&&A[i][j-1]==A[i][j])
                        {
                            A[i][j-1]=0;
                            A[i][j]*=2;
                            j--;
                        }


                    int c=0;

                    while(j>0&&A[i][j]==0)
                    {
                            c++;
                            j--;
                    }


                    if(j>=0)
                    {
                        bool k=false;

                        if(c>0)
                        {
                            A[i][j+c]=A[i][j];
                            A[i][j]=0;


                            if(j+c+1<N&&A[i][j+c+1]==A[i][j+c])
                            {
                                A[i][j+c+1]*=2;
                                A[i][j+c]=0;
                                k=true;
                            }

                        }


                    }

                }
            }


        }



            rep(i,N)
            {
                rep(j,N)
                {
                    //scanf("%d",&A[i][j]);
                    cout<<A[i][j]<<" ";

                }
                    cout<<"\n";
            }





    }

    return 0;
}
