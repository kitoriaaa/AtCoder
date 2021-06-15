N = int(input())
a_li = [int(input()) for _ in range(N)]

now_i = 1
step = 0

for i in range(1*10**5+10):
    step += 1
    button = a_li[now_i-1]
    now_i = button
    if button == 2:
        print(step)
        exit()
print(-1)
