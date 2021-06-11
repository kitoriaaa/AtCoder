N = int(input())
a_li = list(map(int, input().split()))

a_li = sorted(a_li)
move = 0
for i in range(1, len(a_li)):
    move += a_li[i] - a_li[i-1]
print(move)
