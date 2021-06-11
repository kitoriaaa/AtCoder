N = int(input())
a_li = list(map(int, input().split()))

a_li = sorted(a_li)
rate_li = [0 for _ in range(9)]

for i in a_li:
    if 1 <= i and i <= 399:
        rate_li[0] += 1
    elif 400 <= i and i <= 799:
        rate_li[1] += 1
    elif 800 <= i and i <= 1199:
        rate_li[2] += 1
    elif 1200 <= i and i <= 1599:
        rate_li[3] += 1
    elif 1600 <= i and i <= 1999:
        rate_li[4] += 1
    elif 2000 <= i and i <= 2399:
        rate_li[5] += 1
    elif 2400 <= i and i <= 2799:
        rate_li[6] += 1
    elif 2800 <= i and i <= 3199:
        rate_li[7] += 1
    elif 3200 <= i:
        rate_li[8] += 1

ans = 0
max_ans = 0
min_ans = 0
for i in range(len(rate_li)-1):
    if rate_li[i] > 0:
        ans += 1
if rate_li[8] > 0:
    max_ans = ans + rate_li[8]
    if ans > 0:
        min_ans = ans
    else:
        min_ans = 1
else:
    min_ans = ans
    max_ans = ans
print(min_ans, max_ans)
    


