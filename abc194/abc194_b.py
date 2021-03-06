N = int(input())
# vec = [list(map(int, input().split())) for _ in range(N)]

vec_a = []
vec_b = []
plus = []
for i in range(N):
    a, b = map(int, input().split())
    vec_a.append([a, i])
    vec_b.append([b, i])
    plus.append(a+b)


vec_a = sorted(vec_a, key=lambda x:x[0])
vec_b = sorted(vec_b, key=lambda x:x[0])
plus = sorted(plus)

a = 1000000
b = 1000000
if vec_a[0][1] == vec_b[0][1]:
    if vec_a[1][0] < vec_b[1][0]:
        a = vec_a[1][0]
        b = vec_b[0][0]
    else:
        a = vec_a[0][0]
        b = vec_b[1][0]
else:
    a = vec_a[0][0]
    b = vec_b[0][0]

ans = max(a, b)
ans = min(ans, plus[0])
print(ans)
