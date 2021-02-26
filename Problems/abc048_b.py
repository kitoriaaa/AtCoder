a, b, x = map(int, input().split())

max_v = b // x
low_v = a // x
ans = max_v - low_v
if a%x == 0:
    ans += 1

print(ans)