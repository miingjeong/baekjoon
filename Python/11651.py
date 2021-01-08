N=int(input())
dot_list=[]

for _ in range(N):
    dot_list.append(list(map(int, input().split())))
    
dot_list.sort(key=lambda x:(x[1], x[0]))

for [i, j] in dot_list:
    print(i, j)