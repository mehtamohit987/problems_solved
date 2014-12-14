#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{

    int col,n,c,i,wl1,wl2;
    bool alt;
    string a;

    scanf("%d",&col);

    while(col!=0)
    {
        wl1=2*col-1;
        wl2=1;


        cin>>a;

        n=a.length();

        c=0;

        while(c<col)
        {
            alt=false;

            for(i=c;i<n;(alt?(i+=wl1):(i+=wl2)))
            {
                printf("%c",a[i]);
                alt=!alt;
            }

            c++;
            wl1-=2;
            wl2+=2;
        }

        printf("\n");
        scanf("%d",&col);

    }


}
