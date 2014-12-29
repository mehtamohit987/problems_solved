def val(N):
    if N<=0:
        P[N]=1
        return P[N]
    if N==1:
        P[N]=K-1
        return P[N]
    if P.has_key(N):
        return P[N]
    P[N]=(K-1)*val(N-1) + ( (K-1)*val(N-2) if N>=2 else 0 )
    return P[N]


P={}
N=input()
K=input()
print val(N)
