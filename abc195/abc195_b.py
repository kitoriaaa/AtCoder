A, B, W = map(int, input().split())

W = W*1000

mi = float('inf')
mx = -float('inf')

flg = False
for i in range(1, W+1):
    if A*i <= W and W <= B*i:
        mi = min(mi, i)
        mx = max(mx, i)
        flg = True

if flg:
    print(mi, mx)
else:
    print("UNSATISFIABLE")
