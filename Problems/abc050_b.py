N = int(input())
T = list(map(int, input().split()))
M = int(input())
li = [list(map(int, input().split())) for _ in range(M)]


for i in range(M):
    ti = T[li[i][0]-1]
    print(sum(T)-ti+li[i][1])
    
