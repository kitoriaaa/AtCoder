N, M = map(int, input().split())

point = [list(map(int, input().split())) for _ in range(N)]
checkpoint = [list(map(int, input().split())) for _ in range(M)]

target = []

for pos in point:
    distance = [float('inf'), 0]
    for i in range(len(checkpoint)):
        dis = abs(pos[0]-checkpoint[i][0]) + abs(pos[1]-checkpoint[i][1])
        if dis < distance[0]:
            distance = [dis, i+1]
    print(distance[1])


