A_li = list(map(int, input().split()))

A_li = sorted(A_li)

if A_li[2] - A_li[1] == A_li[1] - A_li[0]:
    print("Yes")
else:
    print("No")
