def gcd(a, b):
    mod=a%b
    while mod>0:
        a=b
        b=mod
        mod=a%b
    return b
    

    
    
T=int(input())

for _ in range(T):
    a, b=map(int, input().split())
    print(a*b//gcd(a, b))