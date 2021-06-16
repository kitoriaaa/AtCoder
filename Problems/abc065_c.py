MOD = 10**9+7

def factorial(n):
    f = 1
    for i in range(1, n+1):
        f = f*i%MOD
    return f

N, M = map(int, input().split())

if abs(N-M) > 1:
    print(0)
    exit()

order_1 = factorial(N)
order_2 = factorial(M)

ans = ((order_1*order_2)%MOD)*2%MOD if abs(N-M) == 0 else ((order_1*order_2)%MOD)
print(ans)
