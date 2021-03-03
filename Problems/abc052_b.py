mod = 10**9+7

N = int(input())
S = input()

x = 0

li = [0]
for i in S:
    if i == 'I':
        x += 1
    elif i == 'D':
        x -= 1
    li.append(x)

print(max(li))


