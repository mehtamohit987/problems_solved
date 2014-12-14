#include<stdio.h>
int x[100][4];
bool avail[100];
int first=0;
void* my_malloc(size_t t)
{
    int r,q;
    int * res=NULL;

    r=t%4;
    q=t/4;

    if(avail[first]==true)
    {res=&x[first][0];}

    if(r==0)
    first+=

    return res;
}
void free(void* v)
{

    if(v!=NULL){




    }


}

void main()
{
    int *a;

    a=(int *)my_malloc(sizeof(int));
    cout<<*a;
    my_free(a);
}
