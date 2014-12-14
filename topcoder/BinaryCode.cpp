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

class BinaryCode {
public:
	vector <string> decode(string);
};

vector <string> BinaryCode::decode(string message) {


    vector<string> Output;
    string P,P2;
    char ch;
    bool flag1,flag2;
    flag1=flag2=false;

    if(message.length()==1)
    {
    cout<<"Entered==1";
        if(message[0]=='0')
        {
            P.push_back('0');
            P2="NONE";
        }
        else if(message[0]=='1')
        {
            P="NONE";
            P2.push_back('1');
        }
        else
        {
            P="NONE";
            P2="NONE";
        }
    }

    else if(message.length()==2)
    {
        if(message[0]=='0'&&message[1]=='0')
        {
            P="00";
            P2="NONE";
        }
        else if(message[0]=='1'&&message[1]=='1')
        {
            P="01";
            P2="10";
        }
        else if(message[0]=='2'&&message[1]=='2')
        {
            P="NONE";
            P2="11";
        }
        else
        {
            P="NONE";
            P2="NONE";
        }
    }
    else
    {
         P.push_back('0');

        ch=message[0];
        P.push_back(ch);

        for(int i=2;i<message.length();i++)
        {
        cout<<"Entered i = "<<i<<"   \n";
            P.push_back('0');
            P[i]=96+message[i-1]-P[i-1]-P[i-2];

            if(P[i]>'1'||P[i]<'0')
            {
                flag1=true;
                break;
            }

        }

        if(flag1||(message[message.length()-1]!=P[message.length()-2]+P[message.length()-1]-48))
        {
            P="NONE";
        }


        P2.push_back('1');

        ch=message[0]-1;
        P2.push_back(ch);

        for(int i=2;i<message.length();i++)
        {
            P2.push_back('0');
            P2[i]=96+message[i-1]-P2[i-1]-P2[i-2];

            if(P2[i]>'1'||P2[i]<'0')
            {
                flag2=true;
                break;
            }
        }

        if(flag2||(message[message.length()-1]!=P2[message.length()-2]+P2[message.length()-1]-48))
        {
            P2="NONE";
        }

    }

    cout<<P<<"    "<<"\n"<<P2<<"    ";
    Output.push_back(P);
    Output.push_back(P2);

    return  Output;
}
main()
{
    BinaryCode B;
    B.decode("22");
}
//<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
