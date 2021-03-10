A, B, C = map(int, input().split())

A_mod_B = A%B
flg = False
for i in range(1, B):
    i_mod_B = i%B
    if (A_mod_B*i_mod_B)%B == C:
        flg = True

if flg:
    print("YES")
else:
    print("NO")

