N, M = map(int, input().split())

C=N-M
if C<0:
    print(-C)
else:
    print(N-M)