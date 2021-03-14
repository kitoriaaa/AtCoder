def bit_search(X, li):
    vec = []
    for bit in range(2**len(li)):
        bit_up = []
        cp_x = X
        for i in range(len(li)):
            if bit & (1 << i):
                cp_x = [num for num in cp_x if num%li[i] != 0]
                bit_up.append(li[i])
        if len(cp_x) == 0:
            count = 1
            for i in bit_up:
                count *= i
            vec.append(count)
    return vec


N = int(input())
X = list(map(int, input().split()))

prime = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]

print(min(bit_search(X, prime)))
