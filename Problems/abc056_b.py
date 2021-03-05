W, a, b = map(int, input().split())

ar = a+W
br = b+W

if ar <= b:
    print(b-ar)
elif br < a:
    print(a-br)
else:
    print(0)


