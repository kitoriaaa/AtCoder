bels = list(map(int, input().split()))

bels = sorted(bels)
print(sum(bels[:2]))