#include<iostream>
#include<cstdio>
#include<vector>
#include<climits>
#include<map>
#include<algorithm>
using namespace std;
int N;

vector<vector<int> > A,S;

int max_rect()
{
    int l=A[0][0];
    for(int i=0;i<N;i++)//top
    for(int j=i;j<N;j++)//bottom
    {
        //maxsubarray one D (j-i+1) width

        vector<int> M (N,0);

        M[0] = S[j][0] - (i>0?S[i-1][0]:0);

        int a,m=M[0];

        for(int k=1;k<N;k++){
            a = S[j][k] - S[j][k-1] - ( i>0 ? ( S[i-1][k] - S[i-1][k-1] ) :0 ) ;
            M[k] = max( a , a + M[k-1] );
            m=max(m,M[k]);
        }


        l=max(m,l);
    }

    return l;

}

int main()
{

    freopen("input.txt", "r", stdin);


    cin>>N;

    A=vector< vector<int> > (N, vector<int> (N,0));
    S=vector< vector<int> > (N, vector<int> (N,0));
    for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
    { cin>>A[i][j]; S[i][j] = A[i][j] + (i>0?S[i-1][j]:0) + (j>0?S[i][j-1]:0) - (i>0&&j>0?S[i-1][j-1]:0); }

    cout<<max_rect();



}


/*map < pair<int,int> , pair<int,pair<int,int> >  > M;
map < pair<int,int> , pair<int,pair<int,int> >  > :: iterator it;

pair<int,pair<int,int> > maxSubRect(int a,int b)
{
    if(a==0&&b==0) {
    M[make_pair(a,b)]=make_pair(A[a][b],make_pair(a,b));
    return M[make_pair(a,b)];
    }

    it=M.find(make_pair(a,b));
    if(it!=M.end()) return it->second;

    pair<int,pair<int,int> >  P;
    int s1,s2,s3;bool m1,m2,m3;m1=m2=m3=false;
    int x1,x2,x3,y1,y2,y3;

    //1
    if(a>0){
    P=maxSubRect(a-1,b);
    s1=P.first;
    x1=P.second.first;
    y1=P.second.second;

    for(int j=y1; j<=b ; j++ )
    s1+=A[a][j];

    m1=true;

    }

    //2
    if(b>0){
    P=maxSubRect(a,b-1);
    s2=P.first;
    x2=P.second.first;
    y2=P.second.second;

    for(int i=x2; i<=a ; i++ )
    s2+=A[i][b];

    m2=true;

    }

    //3
    if(a>0&&b>0){
    P=maxSubRect(a-1,b-1);
    s3=P.first;
    x3=P.second.first;
    y3=P.second.second;

    for(int j=y3; j<=b ; j++ )
    s3+=A[a][j];

    for(int i=x3; i<=a ; i++ )
    s3+=A[i][b];

    m3=true;

    }

int p=0,r=A[a][b];
if(m1&&r<s1){p=1;r=s1;}
if(m2&&r<s2){p=2;r=s2;}
if(m3&&r<s3){p=3;r=s3;}

if(p==0){ M[make_pair(a,b)]= make_pair(r,make_pair(a,b));     return M[make_pair(a,b)]; }
if(p==1){ M[make_pair(a,b)]= make_pair(s1,make_pair(x1,y1));  return M[make_pair(a,b)]; }
if(p==2){ M[make_pair(a,b)]= make_pair(s2,make_pair(x2,y2));  return M[make_pair(a,b)];}
if(p==3){ M[make_pair(a,b)]= make_pair(s3,make_pair(x3,y3));  return M[make_pair(a,b)];}

}


   int ma=maxSubRect(N-1,N-1).first;

    for(int i=0;i<N;i++)
    {
    cout<<"\n";
    for(int j=0;j<N;j++)
    cout<<M[make_pair(i,j)].first<<"   ";

}
    cout<<ma;

*/
