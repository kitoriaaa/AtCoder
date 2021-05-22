S = input()

S = S[::-1]
ans = ""
for s in S:
    c = s
    if s == '6':
        c = '9'
    elif s == '9':
        c = '6'
    ans += c
print(ans)