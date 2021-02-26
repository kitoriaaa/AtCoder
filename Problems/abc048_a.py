s = input()

ans = s[0]
for i in range(len(s)):
    if s[i] == ' ':
        ans += s[i+1]
print(ans)
