N, K = map(int, input().split())
vec = [list(map(int, input().split())) for _ in range(N)]

vec.sort(key=lambda x:x[0])

ruiseki = []
ruiseki.append(vec[0][1])
for i in range(1, len(vec)):
    ruiseki.append(ruiseki[i-1] + vec[i][1])

for i in range(len(ruiseki)):
    if ruiseki[i] >= K:
        print(vec[i][0])
        break