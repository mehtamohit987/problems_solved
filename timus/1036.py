import math
import sys
from sys import stdin, stdout
x=raw_input()
X=x.split(' ')
n=int(X[0])
s=int(X[1])

if (s%2) != 0:
	print (0)
	exit()

s/=2

M=[[0 for j in range(s+1)]for i in range(n+1)]

for i in xrange(0,n+1) :
	M[i][0]=1

for i in xrange(1,s+1) :
	M[0][i]=0


for i in xrange(1,n+1):
	for j in xrange(1,s+1):
		for k in xrange(0,10):
			if k<=j:
				M[i][j]=M[i-1][j-k]+M[i][j]
			else:
				break

print(M[n][s]*M[n][s]);