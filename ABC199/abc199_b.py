N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A.sort()
A = A[::-1]
B.sort()

ans = B[0] - A[0]

if ans < 0:
    print(0)
else:
    print(ans+1)
