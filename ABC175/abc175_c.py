X, K, D = map(int, input().split())
X = abs(X)
q = X//D
r = X%D
ans = 0
if q >= K:
    print(X - D*K)
    exit()

rem = K - q
if rem%2 == 0:
    ans = r
else:
    ans = D - r

print(ans)
