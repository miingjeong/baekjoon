n=input()

if len(n)==2:
    print(int(n[0])+int(n[1]))
elif len(n)==4:
    print(int(n[:2])+int(n[2:]))
else:
    print(int(n[:2])+int(n[2]) if n[1]=='0' else int(n[0])+int(n[1:]))
