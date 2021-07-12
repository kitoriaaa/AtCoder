N, X = map(int, input().split())
A = list(map(int, input().split()))

cnt = sum(A) - N//2

if cnt <= X:
    print("Yes")
else:
    print("No")