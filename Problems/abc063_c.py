N = int(input())
s = [int(input()) for _ in range(N)]

s = sorted(s)
grade = sum(s)

if grade%10:
    print(grade)
else:
    for point in s:
        g = grade
        g = g-point
        if g%10:
            print(g)
            exit(0)
    print(0)

