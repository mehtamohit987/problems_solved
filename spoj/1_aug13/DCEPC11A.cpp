#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int T,N,M,i,j,k;
	char c[502];
	int fpos[500];
	int lpos[500];
	bool found[500];
	bool possible;
	
	scanf("%d",&T);
	
	while(T>0)
	{
		possible=true;
		scanf("%d",&N);
		scanf("%d",&M);
      
		for(i=0;i<N;i++)
		{
            scanf("%s",&c);
			fpos[i]=lpos[i]=-1;
			found[i]=false;
			for(j=0;j<M;j++)
	        {
				if(c[j]=='*')
				{
					if(found[i]==false)
					{	found[i]=true;fpos[i]=lpos[i]=j;}
					else
						lpos[i]=j;
				}

	
				if(found[i]==true)
				{
					for(k=i-1;k>=0;k--)
						if(found[k]==true)
							break;
				
					if(fpos[i]<lpos[k])
						possible=false;
				}	
			}
		}

	if(possible==true)
		printf("YES\n");
	else
		printf("NO\n");
	  
    T--;	
	
	}
	
	return 0;
}