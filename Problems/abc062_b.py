H, W = map(int, input().split())
li = [input() for _ in range(H)]

print("#"*(W+2))
for i in li:
    print("#" + i + "#")
print("#"*(W+2))