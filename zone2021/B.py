N, D, H = map(int, input().split())

dh = []
for _ in range(N):
    tou = list(map(int, input().split()))
    dh.append(tou)


ans_li = []
for i in range(N):
    max_difd = D-dh[i][0]
    max_difh = H-dh[i][1]
    a = max_difh/max_difd
    ans = a*(0-D)+H
    ans_li.append(ans)
    

ans = max(ans_li)
if  ans < 0:
    print(0)
else:
    print(ans)