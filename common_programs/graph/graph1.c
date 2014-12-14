#include<stdio.h>
/*
algorithm :

BFS(G,s)
for each vertex u in V[G]-{s}
    do color[u]=white
    d[u]=infinity
    p[u]=NIL

color[s]=gray
d[s]=0
p[s]=NIL

Q=phi(null queue)
Enqueue(Q,s)

while Q!= phi
    do
       u=Dequeue(Q)
       for each v belonging to Adj[u]
            do
              if(color[v]==GRAY)
              then
                    d[v]=d[u]+1
                    p[v]=u
                    Enqueue(Q,v)
        color[u]=black
*/
//Linked List Data Structure
struct node
{
    int val;
    node * link;
}
void main()
{
    int V;
    scanf("%d",&V);
    printf("\n");

}
