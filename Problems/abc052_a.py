mod = 10**9+7

A, B, C, D = map(int, input().split())

rec_a = A*B
rec_c = C*D

print(max(rec_a, rec_c))


