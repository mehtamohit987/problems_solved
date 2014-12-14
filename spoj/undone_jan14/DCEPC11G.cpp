#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int T,count,Rindex,Lindex,i,j;
	bool flag=false;
	char A[100000],C[100000];
	scanf("%d",&T);gets(A);
	while(T>0)
	{
		count=-1;
		gets(A);
		for(i=strlen(A)-1;i>=0;i--)
		{
			if(A[i]!=' ')
			{
				Rindex=i;
				while(i>0)
				{
					i--;
					if(A[i]=' ')
					{
						flag=true;
						break;
					}
				}
				
				if(flag==true)
					Lindex=i+1;
				else
					Lindex=i;
					
				for(j=Lindex;j<=Rindex;j++)
					C[++count]=A[j];
					
				C[++count]=' ';
				flag=false;
			}
		}
		
		C[count]='\0';
cout<<strlen(C)<<"\n";
		puts(C);printf("\n");
		
		T--;
	}

}