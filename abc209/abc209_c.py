MOD = 10**9+7

N = int(input())
C = list(map(int, input().split()))

C = sorted(C)
ans = C[0]
for i in range(1, N):
    ans *= (C[i] - i)
    ans %= MOD

print(ans)


