n = int(input())
S = [input() for _ in range(n)]

ans = ''
for i in range(26):
    code = ord('a') + i
    ch = chr(code)
    min_ch = float('inf')
    for s in S:
        min_ch = min(min_ch, s.count(ch))
    ans += ch*min_ch 

print(ans)