import math
import sys
from sys import stdin, stdout

def metro(N,M):
    if N==0 and M==0 : V[N][M]=0;return V[N][M]
    if V[N][M]!=-1 : return V[N][M]

    res=sys.maxint

    if N>0:res=min(100+metro(N-1,M),res)
    if M>0:res=min(100+metro(N,M-1),res)

    if N>0 and M>0 and E[N][M] : res=min(res,(float)(100*math.sqrt(2)+metro(N-1,M-1)));

    V[N][M]=res

    return V[N][M]

def iter():
    P=[[-1 for i in range(M+1)] for j in range(N+1)]
    P[0][0]=0

    for i in range(1,N+1):        P[i][0]=P[i-1][0]+100;

    for i in range(1,M+1): P[0][i]=P[0][i-1]+100;

    for i in range(1,N+1):
        for j in range(1,M+1):
            P[i][j]=min(100+P[i-1][j],100+P[i][j-1])
            if(E[i][j]): P[i][j]=min((float)(100*math.sqrt(2)+P[i-1][j-1]),P[i][j])

    return P[N][M];




#x=raw_input()
#X=x.split(' ')
X=stdin.read().split()
N=int(X[0])
M=int(X[1])
#K=input()
K=int(X[2])

E=[[False for i in range(M+1)] for j in range(N+1)]
V=[[-1 for i in range(M+1)] for j in range(N+1)]

for i in range(0,K):
    a=int(X[2*i+3]);b=int(X[2*i+4]);E[a][b]=True
    #x=raw_input();X=x.split(' ');a=int(X[0]);b=int(X[1]);E[a][b]=True

print (int)(iter()+0.5)
#print (int) (metro(N,M)+0.5)
