N = int(input())

def n_of_digits(N):
    i = 0
    while N > 0:
        N //= 10
        i += 1
    return i

ans = n_of_digits(N)
for i in range(1, N):
    if i*i > N:
        break
    if N%i:
        continue
    B = N//i
    f = max(n_of_digits(B), n_of_digits(i))
    ans = f if f < ans else ans

print(ans)
    