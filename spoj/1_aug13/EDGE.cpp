#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,a,b,c,d,e,f;
    char C[200];
    while(gets(C))
    {
        a=300;b=420;i=0;
        printf("%d %d moveto\n",int(a),int(b));
        c=310;d=420;
        printf("%d %d lineto\n",int(c),int(d));
        while(C[i]!='\0')
        {

	        	e=c+10*(d>=b?1:-1)*(b==d?0:(C[i]=='V'?-1:1));
	        	f=d+10*(c>=a?1:-1)*(b==d?(C[i]=='V'?1:-1):0);
           a=c;b=d;c=e;d=f;

           printf("%d %d lineto\n",c,d);

           i++;

        }

        printf("stroke\nshowpage\n");

    }
}
