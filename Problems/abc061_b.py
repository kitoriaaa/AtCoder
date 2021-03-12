N, M = map(int, input().split())

city = [0 for _ in range(N)]
a = []
b = []
for i in range(M):
    ai, bi = map(int, input().split())
    a.append(ai)
    b.append(bi)

sorted(a)
sorted(b)


for i in range(M):
    city[a[i]-1] += 1
    city[b[i]-1] += 1


for i in city:
    print(i)

