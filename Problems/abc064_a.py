r, g, b = map(int, input().split())

num = r*100+g*10+b
if num%4:
    print("NO")
else:
    print("YES")
