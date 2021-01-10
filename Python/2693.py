import sys

N=int(input())

for _ in range(N):
  A=list(map(int, sys.stdin.readline().split()))
  B=sorted(A)
  print(B[-3])
  A=[]