x = int(input())

n = x // 11
rem = x % 11
n *= 2
if rem > 6:
    n += 2
elif rem == 0:
    pass 
else:
    n += 1

print(n)
