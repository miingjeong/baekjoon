import sys

n=int(sys.stdin.readline().strip())
a=[]

for i in range(n):
    a.append(sys.stdin.readline().strip())

b=sorted(set(a), key=lambda x : (len(x), x))
print('\n'.join(b))