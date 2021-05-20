N = input()
n = len(N)
N = int(N)

li = [4, 7, 10, 13, 16]
cnt = 0

if n < 3:
    print(0)
    exit(0)
else:
    for i in range(len(li)):
        if n >= li[i]:
            cnt += N-(10**(li[i]-1)-1)
        else:
            break

print(cnt)
            
