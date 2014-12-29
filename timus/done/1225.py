def Flags(i):
    if i<=0 : F[i]=0; return F[i]
    if i==1 : F[i]=2; return F[i]

    if F.has_key(i) : return F[i]
    F[i]= Flags(i-1)+Flags(i-2); return F[i]
F={}
N=input()
print Flags(N)
