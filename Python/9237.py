N=int(input())
m=0
tree=sorted(list(map(int, input().split())), reverse=True)

for i in range(N):
    if(m<tree[i]+1+i):
        m=tree[i]+1+i
print(m+1)