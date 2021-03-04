MOD = 10**9+7

N = int(input())

power = 1
for i in range(1, N+1):
    power = power*i%MOD

print(power)
