N, X = map(int, input().split())

V = []
P = []

for _ in range(N):
    v, p = map(int, input().split())
    V.append(v)
    P.append(p)


limit = X*100
now = 0
for i in range(N):
    now += V[i]*P[i]
    if now > limit:
        print(i+1)
        exit()
print(-1)



