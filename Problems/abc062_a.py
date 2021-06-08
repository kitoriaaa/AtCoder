x, y = map(int, input().split())

li = [0, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1]

if li[x] == li[y]:
    print("Yes")
else:
    print("No")


