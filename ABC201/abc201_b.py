N = int(input())
li = []
for _ in range(N):
    s, t = input().split()
    li.append([s, int(t)])


li = sorted(li, reverse=True, key=lambda x:x[1])
print(li[1][0])

