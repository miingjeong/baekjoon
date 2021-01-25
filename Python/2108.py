N=int(input())
a=sorted([int(input()) for _ in range(N)])


def san(a):
    return round(sum(a)/N)

def mid(a):
    if N==1: return a[0]
    else:
        return (a[N//2] if N%2!=0 else
        round((a[N//2]+a[N//2+1]/2)))

from collections import Counter 
def bi(a):
    if N==1: return a[0]
    c=Counter(a).most_common(2)
    return (c[1][0] if c[0][1]==c[1][1] else c[0][0])

def bum(a):
    return a[N-1]-a[0]


print(san(a))
print(mid(a))
print(bi(a))
print(bum(a))
