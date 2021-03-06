N = int(input())
A = list(map(int, input().split()))

ans = 0
A_sum = [A[0]]
for i in range(1, N):
    A_sum.append(A_sum[i-1]+A[i])

ans = 0
for i in range(N):
    ans += A[i]*A[i]*(N-1)
    if i != N-1:
        ans += (-2*A[i]*(A_sum[-1]-A_sum[i]))
        # print(A_sum[-1-i]-A[i])

print(ans)
