MOD = 10**9+7

N = int(input())

li = [0 for i in range(N+1)]

cnt = 0
for i in range(1, N+1):
    j = 2
    n = i
    while True:
        if n%j == 0:
            n /= j
            li[j] += 1
        else:
            j += 1
        if j > n:
            break

prime_itr = (filter(lambda x:x != 0, li))

cnt = 1
for i in prime_itr:
    cnt *= (i+1)

print(cnt%MOD)


