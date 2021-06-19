S = input()

ans = 1
for i in range(0, len(S), 2):
    check_s = S[:i]
    first = check_s[:i//2]
    second = check_s[i//2:]
    if first == second and i != 0:
        ans = i

print(ans)
