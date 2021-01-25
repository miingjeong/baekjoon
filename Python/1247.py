n=[]
b=[]
c=[]
N=int(input())
for _ in range(N):
    n.append(int(input()))

B=int(input())
for _ in range(B):
    b.append(int(input()))

C=int(input())
for _ in range(C):
    c.append(int(input()))

s_n=sum(n)
s_b=sum(b)
s_c=sum(c)

if s_n>0:
    print('+')
elif s_n <0:
    print('-')
else:
    print(0)

if s_b>0:
    print('+')
elif s_b <0:
    print('-')
else:
    print(0)
    
if s_c>0:
    print('+')
elif s_c <0:
    print('-')
else:
    print(0)