#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int T,N,A,B,i;
    char C[4];
    scanf("%d",&T);
    while(T!=0)
    {
    		A=B=0;
				scanf("%d",&N);
        for(i=0;i<N;i++)
        {
        		scanf("%s",&C);
        		if(strcmp(C,"lxh")==0)
        			A++;
        		if(strcmp(C,"hhb")==0)
        			B++;			
        }   
        
        if(A%2==0&&B%2==0)
        	printf("hhb\n");
        else if(A%2==1&&B%2==1)
        	printf("lxh\n");
        else if(A%2==0&&B%2==1)
        	printf("hhb\n");
        else if(A%2==1&&B%2==0)
        	printf("lxh\n");
        	
        T--;
    }
}
