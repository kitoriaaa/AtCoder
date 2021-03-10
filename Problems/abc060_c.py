N, T = map(int, input().split())
t = map(int, input().split())

cnt = 0
N_1 = t.__next__()
for i in t:
    if i-N_1 >= T:
        cnt += T
    else:
        cnt += i-N_1
    N_1 = i

cnt += T
print(cnt)
