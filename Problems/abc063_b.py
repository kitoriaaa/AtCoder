S = input()

flg = True
for i in range(len(S)):
    for j in range(i+1, len(S)):
        if S[i] == S[j]:
            flg = False
            break
    if not flg:
        break
if flg:
    print("yes")
else:
    print("no")
