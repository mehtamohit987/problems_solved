#include <stdio.h>
#include <stdlib.h>


typedef int number;

struct node 
{
	number value;
	struct node *next;
} *top;

typedef struct node node;

void push(number v, short *f);
number pop(short *f);
number showtop(short *f);

node * new_node(number v, short *f)
{
	node *ele = (node *)malloc(sizeof(node));
	if(ele)
	{
		*f=1;
		ele->value = v;
		ele->next=top;
		return ele;
	};
	
	return NULL;
}
 

int pow(int v1, int v2)
{
	if(v2==1) return v1;
	return v1*pow(v1,v2-1);
}

int isoperator(char s)
{
	if(s=='+'||s=='-'||s=='*'||s=='/'||s=='^')
	return 1;
	return 0;
}; 

int operate(int v1, int v2, char s)
{
	switch(s)
	{
		case '+': return v1+v2;
		case '-': return v1-v2;
		case '*': return v1*v2;
		case '/': return v1/v2;
		case '^': return pow(v1,v2);
	}
	return 0;
}

int main()
{
	top=NULL;
	short f=0;		/*Flag to return process status*/
	number v1,v2;
	int v;
	char *s = (char *)malloc(sizeof(char)*30);
	gets(s);		/*Input Expression*/
		
	while(*s!='\0')	/*Runs character by character till null character*/ 
	{
		v=*s;
		
		if(isoperator(v)) 	/*Checks if character is an operator*/
		{
			v1=pop(&f);		/*Pops first two characters from stack*/ 									
			if(f)	v2=pop(&f);						
			push(operate(v1,v2,v),&f); 	/*Evaluates operation and */				
		}								/*pushes result into stack*/
		else
		{
			push(v-'0',&f);				/*Pushes equivalent integer */
		}								/*onto stack*/
		
		s++;
	};
	printf("= %d", pop(&f));				
	return 0;
    getch();
}
	
	
void push(number v, short *f)
{
	node * ele = new_node(v,f);
	if(f) top=ele;
}

number pop(short *f)
{
	if(!top)
	{
		*f=0;
		return 0;
	}
	
	node * ele = top;
	top=top->next;
	number v = ele->value;
	free(ele);
	*f=1;
	return v;
}

number showtop(short *f)
{
	if(top)
	{
		*f=1;
		return top->value;
	}
	*f=0;
	return 0;
}
