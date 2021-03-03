N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]

exist = False

for i in range(N-M+1):
    for j in range(N-M+1):
        is_match = True
        for l in range(M):
            for m in range(M):
                if A[i+l][j+m] != B[l][m]:
                    is_match = False
                    break
        if is_match:
            exist = True

if exist:
    print("Yes")
else:
    print("No")

