#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
void postfix(char*,char*);
bool isoperand(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^'||c=='('||c==')')
        return false;
    else
        return true;
}

int prcd(char a,char b)
{
    if(a=='(')
        return false;

    if(b=='('&&a!=')')
        return false;

    if(b==')'&&a!='(')
        return true;

    switch(a)
    {
        case '+' :  if(b=='+')  return true;
                    if(b=='-')  return true;
                    if(b=='*')  return false;
                    if(b=='/')  return false;
                    if(b=='^')  return false;
                    break;

        case '-' :  if(b=='+')  return true;
                    if(b=='-')  return true;
                    if(b=='*')  return false;
                    if(b=='/')  return false;
                    if(b=='^')  return false;
                    break;

        case '*' :  if(b=='+')  return true;
                    if(b=='-')  return true;
                    if(b=='*')  return true;
                    if(b=='/')  return true;
                    if(b=='^')  return false;
                    break;

        case '/' :  if(b=='+')  return true;
                    if(b=='-')  return true;
                    if(b=='*')  return true;
                    if(b=='/')  return true;
                    if(b=='^')  return false;
                    break;

        case '^' :  if(b=='+')  return true;
                    if(b=='-')  return true;
                    if(b=='*')  return true;
                    if(b=='/')  return true;
                    if(b=='^')  return false;
                    break;
    }

}

int main()
{
    char infix[405],post[405];
    int t,pos=0;
    scanf("%d",&t);
    gets(infix);
    while(t--)
    {
        gets(infix);

        postfix(infix,post);
        printf("%s\n",post);
    }

}

void postfix(char infix[], char post[])
{
    int position;
    int outpos=0;
    char symb;
    stack<char> S;

    for(position=0;(symb=infix[position])!=0;position++)
    {
        if(isoperand(symb))
            post[outpos++]=symb;
        else
        {
            while(!S.empty()&&prcd(S.top(),symb))
            {
                post[outpos++]=S.top();
                S.pop();
            }
            if(S.empty()||(symb!=')'))
                S.push(symb);
            else
                S.pop();

        }

    }
    while(!S.empty())
    {
        post[outpos++]=S.top();
        S.pop();
    }

    post[outpos]='\0';

    return;
}

