N = int(input())

A = [0 for i in range(N+1)]
B = [[0, []] for i in range(N+1)]
C = [0 for i in range(N+1)]

A_input = list(map(int, input().split()))
B_input = list(map(int, input().split()))
C_input = list(map(int, input().split()))
for i in range(N):
    A[A_input[i]] += 1
    B[B_input[i]][0] = B[B_input[i]][0] + 1
    B[B_input[i]][1].append(i+1) 
    C[C_input[i]] += 1


cnt = 0
for i in range(1, N+1):
    if A[i] == 0:
        continue
    if B[i][0] == 0:
        continue
    for j in B[i][1]:
        if C[j] != 0:
            cnt += A[i]*C[j]
    
print(cnt)

