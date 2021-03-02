mod = 10**9+7

N = int(input())
A = list(map(int, input().split()))

flag = True
result = 0

li = [abs(N-(2*i+1)) for i in range(N)]
li.sort()
A.sort()

for i in range(len(li)):
    if li[i] != A[i]:
        flag = False
        break

if flag:
    pattern = int(2**(N//2))
    result = pattern%mod
    print(result)
else:
    print(0)