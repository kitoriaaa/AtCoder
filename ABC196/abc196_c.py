def keta(N):
    cnt = 0
    while N > 0:
        N //= 10
        cnt += 1
    return cnt

N = int(input())

cnt = 0

if (N < 10):
    print(0)
    exit()

if keta(N)%2 == 0:
    # guusuukta
    k = keta(N)
    s = str(N)
    num = s[:k//2]
    num = int(num)
else:
    # kisuuketa
    num = '9'*(keta(N)//2)
    num = int(num)
    

for i in range(1, num+1):
    now = int(str(i) + str(i))
    if now <= N:
        cnt += 1

print(cnt)