N, M =  input().split()

S_N=N.replace("6","5")
S_M=M.replace("6","5")



B_N=N.replace("5","6")
B_M=M.replace("5","6")

print(int(S_N)+int(S_M))
print(int(B_N)+int(B_M))



