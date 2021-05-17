S = input()

ans = 0
for i in range(10000):
    flg = [False]*10
    now_i = i
    for j in range(4):
        flg[now_i%10] = True
        now_i //= 10
    
    flg2 = True
    for j in range(10):
        if S[j] == 'o' and not flg[j]:
            flg2 = False
        if S[j] == 'x' and flg[j]:
            flg2 = False
    if flg2:
        ans += 1

print(ans)

