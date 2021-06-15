X, A, B = map(int, input().split())

eat_time = A-B

if eat_time >= 0:
    print("delicious")
elif abs(eat_time) <= X:
    print("safe")
else:
    print("dangerous")
