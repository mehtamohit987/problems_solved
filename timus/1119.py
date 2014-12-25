import sys,math

def metro(N,M):
    if N==0 and M==0 : V[N][M]=0;return V[N][M]
    if V[N][M]!=-1 : return V[N][M]

    res=sys.maxint

    if N>0:res=min(100+metro(N-1,M),res)
    if M>0:res=min(100+metro(N,M-1),res)

    if N>0 and M>0 and E[N][M] : res=min(res,(float)(100*math.sqrt(2)+metro(N-1,M-1)));

    V[N][M]=res

    return V[N][M]
x=raw_input()
X=x.split(' ')
N=int(X[0])
M=int(X[1])

K=input()
E=[[False for i in range(M+1)] for j in range(N+1)]
V=[[-1 for i in range(M+1)] for j in range(N+1)]
for i in range(0,K):
    x=raw_input();X=x.split(' ');a=int(X[0]);b=int(X[1]);E[a][b]=True

print (int)(metro(N,M)+0.5)
