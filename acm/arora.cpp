#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int is_present(string s1,string s2)
{
    int l2,l1=s1.length();
    l2=s2.length();
    int fg=0;
    for(int i=0;i<(l2-l1+1);i++)
    {fg=0;
        if(s2[i]==s1[0])
        {
            for(int w=0;w<l1;w++)
            {
                if(s2[i+w]==s1[w])
                    fg++;
            }
            if(fg==l1)
                return 1;
        }
    }
    return 0;
}

string rev(string s)
{
    string ans="";
    for(int e=s.length()-1;e>=0;e--)
        ans+=s[e];
    return ans;
}
string crt_str(int num,string s2)
{
    string ans="";
    int i=0;
    while(num>0)
    {
        if(num%2)
            ans=ans+s2[i];
        num/=2;
        i++;
    }
    return ans;
}
int main() {
    int T;
    string s2;
    scanf("%d",&T);
    while(T)
    {
        cin>>s2;
        int lim,tlen;
        tlen=s2.length();
        lim=(pow(2,tlen));
        int er=0,kl=0;
        string s1;
        for(int r=2;r<tlen+1;r++)
        {
            for(int x=0;x<(tlen-r+1);x++)
            { kl++;
                s1=s2.substr(x,r);
                s1=rev(s1);
                if(is_present(s1,s2))
                    er++;
            }

        }
        if(er==kl)
            printf("YES\n");
        else
            printf("NO\n");
        T--;
    }
}
