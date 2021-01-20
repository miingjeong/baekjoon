#666을 포함하는 숫자 중에서 몇번째 숫자인가 하는 문제

n=int(input())

name=666
cnt=0

while(True):
    if '666' in str(name):
        cnt+=1
        if cnt==n:
            print(name)
            break
    name+=1