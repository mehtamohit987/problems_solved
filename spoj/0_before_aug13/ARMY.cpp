#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T,NG,G_max,NM,M_max,GS,MS,i,j;
    cin>>T;


    for(int t=1;t<=T;t++)
    {
        G_max=M_max=0;
        getchar();
        cin>>NG; cin>>NM;

        for(i=0; i<NG; i++)
        {
            cin>>GS;
            if(GS>G_max)
                G_max=GS;
        }

        for(j=0; j<NM;j++)
        {
            cin>>MS;
            if(MS>M_max)
                M_max=MS;
        }

        if(G_max<M_max)
            cout<<"MechaGodzilla\n";
        else if(G_max>=M_max)
            cout<<"Godzilla\n";
        else
            cout<<"uncertain";

    }
}
