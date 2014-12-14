#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int t,key;
    long long i,len;
    string S;

    scanf("%d",&t);

    while(t)
    {
        scanf("%d",&key);
        getchar();
        getline(cin,S,'\n');
        len=S.length();

        if(key>=0&&key<=25)
        for(i=0;i<len;i++)
        {
            if(S.at(i)=='.')
                S.at(i)=' ';
            else if(isupper(S.at(i)))
                S.at(i)=(key+S.at(i)-65)%26+65;
            else
                S.at(i)=(key+S.at(i)-97)%26+97;
        }
        if(key>=26&&key<=51)
        for(i=0;i<len;i++)
        {
            if(S.at(i)=='.')
                S.at(i)=' ';
            else if(isupper(S.at(i)))
                S.at(i)=(key+S.at(i)-65)%26+97;
            else
                S.at(i)=(key+S.at(i)-97)%26+65;
        }

        cout<<S<<"\n";
        t--;
    }


}

